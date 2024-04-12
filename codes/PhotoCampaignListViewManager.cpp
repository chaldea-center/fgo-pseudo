void __fastcall PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF7AA & 1) == 0 )
  {
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&PhotoCampaignListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_10720/*"PhotoCampaign1"*/);
    byte_42AF7AA = 1;
  }
  v1 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v1, (System_String_o *)StringLiteral_10720/*"PhotoCampaign1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)PhotoCampaignListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52920(
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
        PhotoCampaignListViewManager__SetMode_24204676(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (PhotoCampaignListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (PhotoCampaignListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL )
  {
LABEL_13:
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall PhotoCampaignListViewManager__CreateList(
        PhotoCampaignListViewManager_o *this,
        int64_t latestSelectedUsrSvtId,
        int64_t selectedUserSvtIds,
        const MethodInfo *method)
{
  __int64 v7; // x19
  int64_t UserId; // x0
  __int64 v9; // x1
  System_Int32_array **SelfUserGame; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v18; // x23
  UserDeckMaster_o *v19; // x24
  int64_t v20; // x24
  int v21; // w21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  PhotoCampaignListViewManager_c *v28; // x0
  __int64 v29; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v31; // x1
  struct ListViewSort_o **p_sort; // x19
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v34; // x2
  UILabel_o *v35; // x25
  System_String_o *v36; // x26
  Il2CppObject *v37; // x27
  Il2CppObject *v38; // x0
  int v39; // w8
  unsigned int v40; // w25
  int64_t v41; // x21
  __int64 v42; // x8
  UserServantEntity_o **v43; // x21
  __int64 v44; // t1
  __int128 v45; // q0
  int64_t v46; // x27
  System_Int64_array *v47; // x20
  UserServantEntity_o *v48; // x21
  __int64 v49; // x22
  PhotoCampaignListViewItem_o *v50; // x26
  const MethodInfo *v51; // x5
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UILabel_o *v60; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v63; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v65; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v67; // x22
  peRenderTexture_ChangeLayerObject_o *v68; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v69; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v70; // x22
  __int64 v71; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-D8h]
  System_String_o *v73; // [xsp+10h] [xbp-D0h]
  struct ListViewSort_o **v74; // [xsp+18h] [xbp-C8h]
  int64_t usrSvtId; // [xsp+20h] [xbp-C0h]
  __int64 v76; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+50h] [xbp-90h] BYREF
  int v79; // [xsp+7Ch] [xbp-64h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_42AF795 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    sub_B52984(&PhotoCampaignListViewManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_ListViewItem___ctor__);
    sub_B52984(&System_Predicate_ListViewItem__TypeInfo);
    sub_B52984(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__);
    sub_B52984(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__);
    sub_B52984(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_B52984(&StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B52984(&StringLiteral_11741/*"SERVANT_ALL_EMPTY"*/);
    sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B52984(&StringLiteral_12143/*"SERVANT_TAKE"*/);
    sub_B52984(&StringLiteral_12558/*"SUM_INFO"*/);
    byte_42AF795 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  v7 = sub_B52A54(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  PhotoCampaignListViewManager___c__DisplayClass24_0___ctor(
    (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_78;
  *(_QWORD *)(v7 + 16) = latestSelectedUsrSvtId;
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  *(_QWORD *)(v7 + 24) = SelfUserGame;
  v76 = v7 + 24;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), SelfUserGame, v11, v12, v13, v14, v15, v16);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v18 = (UserServantMaster_o *)Master_WarQuestSelectionMaster;
  v19 = (UserDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v19 )
    goto LABEL_78;
  UserDeckMaster__getPartyList(v19, &svtIdList, &equipIdList, UserId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v18 )
    goto LABEL_78;
  UserId = (int64_t)UserServantMaster__getOrganizationList(v18, 0LL);
  if ( !*(_QWORD *)v76 )
    goto LABEL_78;
  object = (Il2CppObject *)v7;
  v20 = UserId;
  v21 = *(_DWORD *)(*(_QWORD *)v76 + 144LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SERVANT_TAKE"*/, 0LL);
  v28 = PhotoCampaignListViewManager_TypeInfo;
  v29 = StringLiteral_11775/*"SERVANT_EQUIP_EMPTY"*/;
  if ( (BYTE3(PhotoCampaignListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v28 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v28->static_fields->servantSortInfo;
  v31 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v31,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  v74 = &this->fields.sort;
  if ( (UserId & 1) != 0 )
  {
    v35 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUM_INFO"*/, 0LL);
    if ( !v20 )
      goto LABEL_78;
    v36 = (System_String_o *)UserId;
    LODWORD(v78.fields.currentCryptoKey) = *(_QWORD *)(v20 + 24);
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
    v79 = v21;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    UserId = (int64_t)System_String__Format_44563852(v36, v37, v38, 0LL);
    if ( !v35 )
      goto LABEL_78;
    UILabel__set_text(v35, (System_String_o *)UserId, 0LL);
  }
  else if ( !v20 )
  {
    goto LABEL_78;
  }
  v39 = *(_DWORD *)(v20 + 24);
  v73 = (System_String_o *)v29;
  if ( v39 >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= v39 )
        goto LABEL_79;
      v41 = v20 + 8LL * (int)v40;
      v44 = *(_QWORD *)(v41 + 32);
      v43 = (UserServantEntity_o **)(v41 + 32);
      v42 = v44;
      if ( !v44 )
        break;
      v45 = *(_OWORD *)(v42 + 32);
      *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v42 + 16);
      *(_OWORD *)&v78.fields.fakeValue = v45;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v77 = v78;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v77, 0LL);
      if ( v40 >= *(_DWORD *)(v20 + 24) )
      {
LABEL_79:
        v71 = sub_B52A88(UserId);
        sub_B52A28(v71, 0LL);
      }
      if ( !*(_QWORD *)v76 )
        break;
      v46 = UserId;
      v47 = svtIdList;
      v48 = *v43;
      v49 = *(_QWORD *)(*(_QWORD *)v76 + 112LL);
      v50 = (PhotoCampaignListViewItem_o *)sub_B52A54(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v50, v40, v48, v47, v46 == v49, v51);
      UserId = (int64_t)this->fields.itemList;
      if ( !UserId )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v39 = *(_DWORD *)(v20 + 24);
      if ( (int)++v40 >= v39 )
        goto LABEL_43;
    }
LABEL_78:
    sub_B52A5C(UserId, v9);
  }
LABEL_43:
  PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(this, usrSvtId, v34);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v20 + 24) )
    v53 = (System_String_o *)StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v53 = v73;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UserId = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (UserId & 1) != 0 )
  {
    v60 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    UserId = (int64_t)LocalizationManager__Get(v53, 0LL);
    if ( !v60 )
      goto LABEL_78;
    UILabel__set_text(v60, (System_String_o *)UserId, 0LL);
  }
  if ( !*v74 )
    goto LABEL_78;
  iconScaleKind = (*v74)->fields.iconScaleKind;
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v63);
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
      v65 = this->fields.scrollBar;
      if ( !v65 )
        goto LABEL_78;
      if ( v65->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v67,
          object,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_ListViewItem___ctor__);
        if ( !itemList )
          goto LABEL_78;
        v68 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)itemList,
                (System_Predicate_T__o *)v67,
                (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v68 )
          goto LABEL_76;
        v69 = this->fields.itemList;
        v70 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v70,
          object,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_ListViewItem___ctor__);
        if ( !v69 )
          goto LABEL_78;
        v68 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v69,
                (System_Predicate_T__o *)v70,
                (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v68 )
LABEL_76:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v68->fields.gameObject), 0LL);
      }
    }
  }
}


void __fastcall PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42AF791 & 1) == 0 )
  {
    sub_B52984(&PhotoCampaignListViewManager_TypeInfo);
    byte_42AF791 = 1;
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
    sub_B52A5C(0LL, v1);
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
    sub_B52A5C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall PhotoCampaignListViewManager__EndCloseSelectFilterKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PhotoCampaignListViewManager__EndSelectFilterKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42AF79E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF79E = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B52A5C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AF7A1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF7A1 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PhotoCampaignListViewManager__GetAmountSortValue(
        PhotoCampaignListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11

  v4 = this;
  if ( (byte_42AF7A4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (PhotoCampaignListViewManager_o *)sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF7A4 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (PhotoCampaignListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        break;
      }
      ++v8;
      if ( (PhotoCampaignListViewItem_c *)v9->klass->_2.typeHierarchy[*(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2
                                                                      + 1)
                                                                    - 1] != PhotoCampaignListViewItem_TypeInfo )
        v9 = 0LL;
      if ( v9[1].fields.selectNum == svtId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_17:
    sub_B52A5C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


PhotoCampaignListViewItem_o *__fastcall PhotoCampaignListViewManager__GetItem(
        PhotoCampaignListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42AF796 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF796 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (PhotoCampaignListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == PhotoCampaignListViewItem_TypeInfo )
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
    sub_B52A5C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PhotoCampaignListViewManager__GetSwapChoiceList(
        PhotoCampaignListViewManager_o *this,
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
  const MethodInfo_2FE1DCC *v23; // x2
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

  if ( (byte_42AF7A6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF7A6 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (PhotoCampaignListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != PhotoCampaignListViewItem_TypeInfo )
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_B52920((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v34;
    sub_B52920((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


bool __fastcall PhotoCampaignListViewManager__GetSwapLockList(
        PhotoCampaignListViewManager_o *this,
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
  const MethodInfo_2FE1DCC *v23; // x2
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

  if ( (byte_42AF7A5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF7A5 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = itemList->fields._items->m_Items[v18];
      if ( !v19 )
        break;
      v20 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (PhotoCampaignListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != PhotoCampaignListViewItem_TypeInfo )
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v50, 0LL);
          if ( !v7 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v49, 0LL);
          if ( !v6 )
            break;
          v23 = (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__;
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
    sub_B52A5C(v8, v9);
  }
LABEL_28:
  if ( !v6 || !v7 )
    goto LABEL_33;
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)unlockList, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_B52920((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v34;
    sub_B52920((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
    return 1;
  }
}


void __fastcall PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42AF792 & 1) == 0 )
  {
    sub_B52984(&PhotoCampaignListViewManager_TypeInfo);
    byte_42AF792 = 1;
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
    sub_B52A5C(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall PhotoCampaignListViewManager__ModifyItem(
        PhotoCampaignListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
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
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *monitor; // x22
  __int64 v30; // x1
  void *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+80h] [xbp-70h] BYREF

  if ( (byte_42AF797 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF797 = 1;
  }
  memset(&v36, 0, sizeof(v36));
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
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_48;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 Master_WarQuestSelectionMaster,
                 usrSvtId,
                 (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.itemList;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v36.fields.current = (Il2CppObject *)v35.fields.fakeValue;
      *(_OWORD *)&v36.fields.list = *(_OWORD *)&v35.fields.currentCryptoKey;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v36,
               (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v36,
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v36.fields.current
          && (v11 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1),
              *(&v36.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
        {
          if ( (PhotoCampaignListViewItem_c *)v36.fields.current->klass->_2.typeHierarchy[v11 - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = v36.fields.current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_17:
            if ( !current )
              sub_B52A5C(v9, v10);
            klass = current[7].klass;
            if ( !klass )
              sub_B52A5C(v9, v10);
            byval_arg = klass->_1.byval_arg;
            *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v35.fields.fakeValue = byval_arg;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v34 = v35;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v34, 0LL);
            v16 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
            v17 = v15;
            *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v33.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v33, 0LL);
            if ( v17 == v9 )
            {
              current[7].klass = (Il2CppClass *)Entity;
              sub_B52920(
                (BattleServantConfConponent_o *)&current[7],
                (System_Int32_array **)Entity,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
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
          sub_B52A5C(v9, v10);
LABEL_29:
        v24 = current[7].klass;
        if ( !v24 )
          sub_B52A5C(v9, v10);
        v25 = v24->_1.byval_arg;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v24->_1.name;
        *(Il2CppType *)&v35.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v32 = v35;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v32, 0LL);
        if ( !SelfUserGame )
          sub_B52A5C(v26, v27);
        PhotoCampaignListViewItem__ModifyItem(
          (PhotoCampaignListViewItem_o *)current,
          v26 == SelfUserGame->fields.favoriteUserSvtId,
          v28);
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v31 = current[6].monitor;
          if ( !v31 )
            sub_B52A5C(0LL, v30);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v31 + 392LL))(
            v31,
            current,
            *(_QWORD *)(*(_QWORD *)v31 + 400LL));
        }
      }
    }
LABEL_48:
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  }
}


void __fastcall PhotoCampaignListViewManager__ModifyList(
        PhotoCampaignListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Master_WarQuestSelectionMaster; // x0
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
  PhotoCampaignListViewItem_o *v16; // x22
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

  if ( (byte_42AF7A7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF7A7 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  Master_WarQuestSelectionMaster = (int64_t)UserServantMaster__getOrganizationList(
                                              (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  v7 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
  v8 = Master_WarQuestSelectionMaster;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v10 = isIconSizeChange;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v24 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v24, 0LL);
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
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v27, 0LL);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      v14 = Master_WarQuestSelectionMaster;
      v15 = 0LL;
      while ( 1 )
      {
        if ( (__int64)v15 >= itemList->fields._size )
          goto LABEL_35;
        if ( v15 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v16 = (PhotoCampaignListViewItem_o *)itemList->fields._items->m_Items[v15];
        if ( !v16 )
          goto LABEL_37;
        v17 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (PhotoCampaignListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != PhotoCampaignListViewItem_TypeInfo )
        {
          goto LABEL_37;
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
          Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                             &v26,
                                             0LL);
          if ( Master_WarQuestSelectionMaster == v14 )
            break;
        }
        itemList = this->fields.itemList;
        ++v15;
        if ( !itemList )
          goto LABEL_37;
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
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v25, 0LL);
      PhotoCampaignListViewManager__ModifyLockItem(this, v16, v22, 1, v10, v23);
LABEL_35:
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_37:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  PhotoCampaignListViewManager_o *v13; // x23
  int64_t v14; // x0
  __int128 v15; // q0
  PhotoCampaignListViewManager_o *v16; // x25
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_42AF7A9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF7A9 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_28;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_28;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v26 = v27;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v26, 0LL);
      v15 = *(_OWORD *)&v13->fields.indicator;
      v16 = (PhotoCampaignListViewManager_o *)v14;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v13->fields.m_CachedPtr;
      *(_OWORD *)&v25.fields.fakeValue = v15;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                 &v25,
                                                 0LL);
      if ( v16 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_B52920(
          (BattleServantConfConponent_o *)&photoCampaignItem->fields.userSvtEntity,
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
    if ( !photoCampaignItem )
      goto LABEL_28;
  }
  else
  {
    if ( !photoCampaignItem )
      goto LABEL_28;
    PhotoCampaignListViewItem__ModifyLockItem(photoCampaignItem, (const MethodInfo *)photoCampaignItem);
    PhotoCampaignListViewItem__ModifyChoiceItem(photoCampaignItem, v23);
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
    sub_B52A5C(this, photoCampaignItem);
  }
}


void __fastcall PhotoCampaignListViewManager__OnClickFilterKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42AF79D & 1) == 0 )
  {
    sub_B52984(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__);
    sub_B52984(&Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF79D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_B52A5C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 8, sort, v8, -1, 0LL);
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
  sub_B52920(
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
      sub_B52A5C(v10, v11);
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

  if ( (byte_42AF7A2 & 1) == 0 )
  {
    sub_B52984(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    byte_42AF7A2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B52A5C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall PhotoCampaignListViewManager__OnClickSortKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42AF7A0 & 1) == 0 )
  {
    sub_B52984(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_PhotoCampaignListViewManager_EndSelectSortKind__);
    sub_B52984(&Method_PhotoCampaignListViewManager_OnClickSortKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF7A0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B52A54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_B52A5C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0LL);
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

  if ( (byte_42AF79C & 1) == 0 )
  {
    sub_B52984(&Method_PhotoCampaignListViewManager_OnLongPushListView__);
    byte_42AF79C = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      v13 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 75) & 2) != 0 )
        v13 = (_QWORD *)sub_B5298C(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_B52968(v13, v13[3]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        PhotoCampaignListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
        return;
      }
    }
    sub_B52A5C(scrollView, obj);
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

  if ( (byte_42AF79B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF79B = 1;
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
          sub_B52A5C(0LL, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42AF79A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__);
    sub_B52984(&Method_PhotoCampaignListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42AF79A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      PhotoCampaignListViewObject__Init(
        (PhotoCampaignListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
  }
}


void __fastcall PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(
        PhotoCampaignListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  PhotoCampaignListViewItem_o *current; // x20
  __int64 v9; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  UnityEngine_Object_o *viewObject; // x21
  __int64 v15; // x1
  struct ListViewObject_o *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_42AF798 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF798 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v19.fields.current = (Il2CppObject *)v18.fields.fakeValue;
    *(_OWORD *)&v19.fields.list = *(_OWORD *)&v18.fields.currentCryptoKey;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v19,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = (PhotoCampaignListViewItem_o *)v19.fields.current;
      if ( !v19.fields.current
        || (v9 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
        || (PhotoCampaignListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v9 - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        sub_B52A5C(v6, v7);
      }
      klass = v19.fields.current[7].klass;
      if ( !klass )
        sub_B52A5C(v6, v7);
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v18.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v17 = v18;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v17, 0LL) == usrSvtId )
        v13 = 0;
      else
        v13 = -1;
      PhotoCampaignListViewItem__ModifyItem_24209628(current, v13, v12);
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v16 = current->fields.viewObject;
        if ( !v16 )
          sub_B52A5C(0LL, v15);
        ((void (__fastcall *)(struct ListViewObject_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))v16->klass->vtable._5_SetItem.method)(
          v16,
          current,
          v16->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_42AF79F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17111/*"btn_filter_on"*/);
    sub_B52984(&StringLiteral_17110/*"btn_filter"*/);
    byte_42AF79F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B52A5C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17110/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17111/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PhotoCampaignListViewManager__SetMode_24204676(this, mode, v10);
}


void __fastcall PhotoCampaignListViewManager__SetMode_24204676(
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
    sub_B52A5C(scrollView, v5);
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
  if ( (byte_42AF799 & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_B52984(&PhotoCampaignListViewObject_TypeInfo);
    byte_42AF799 = 1;
  }
  if ( !obj
    || (v6 = *(&PhotoCampaignListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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

  if ( (byte_42AF7A3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17139/*"btn_sort_up"*/);
    sub_B52984(&StringLiteral_17223/*"btn_txt_up"*/);
    sub_B52984(&StringLiteral_17179/*"btn_txt_new"*/);
    sub_B52984(&StringLiteral_17169/*"btn_txt_down"*/);
    sub_B52984(&StringLiteral_17186/*"btn_txt_old"*/);
    sub_B52984(&StringLiteral_17136/*"btn_sort_down"*/);
    byte_42AF7A3 = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17186/*"btn_txt_old"*/ : &StringLiteral_17179/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v11->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
              v14 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
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
          v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17223/*"btn_txt_up"*/ : &StringLiteral_17169/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
          v16 = this->fields.sort;
          if ( v16 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              isAscendingOrder = v16->fields.isAscendingOrder;
              v13 = (System_String_o **)&StringLiteral_17139/*"btn_sort_up"*/;
              v14 = (System_String_o **)&StringLiteral_17136/*"btn_sort_down"*/;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_36:
    sub_B52A5C(sort, v4);
  }
}


void __fastcall PhotoCampaignListViewManager__UpdateDisplayState(
        PhotoCampaignListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  Il2CppObject *current; // x0
  __int64 v8; // x9
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AF7A8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AF7A8 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v10.fields.current;
      if ( !v10.fields.current )
        goto LABEL_13;
      v8 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (PhotoCampaignListViewItem_c *)v10.fields.current->klass->_2.typeHierarchy[v8 - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_B52D50(v10.fields.current);
LABEL_13:
        sub_B52A5C(current, v9);
      }
      BYTE4(v10.fields.current[10].klass) = v6;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_42AF78F & 1) == 0 )
  {
    sub_B52984(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_42AF78F = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_B52D50(v7);
  PhotoCampaignListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *__fastcall PhotoCampaignListViewManager__get_ClippingObjectList(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  PhotoCampaignListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42AF794 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF794 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (PhotoCampaignListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)current,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v3;
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *__fastcall PhotoCampaignListViewManager__get_ObjectList(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_42AF793 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF793 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v3;
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

  if ( (byte_42AF790 & 1) == 0 )
  {
    sub_B52984(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_42AF790 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B52D50(v7);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall PhotoCampaignListViewManager_CallbackFunc__BeginInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_42AD436 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&PhotoCampaignListViewManager_ResultKind_TypeInfo);
    byte_42AD436 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(PhotoCampaignListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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
  __int64 v5; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_42AD434 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AD434 = 1;
  }
  if ( !v3 )
LABEL_12:
    sub_B52A5C(this, item);
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  v5 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[v5 - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_B52D50(v3);
    goto LABEL_12;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_12;
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v10.fields.fakeValue = byval_arg;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v9, 0LL) == v4->fields.latestSelectedUsrSvtId;
}


bool __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___CreateList_b__1(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  PhotoCampaignListViewManager_CallbackFunc_o *v10; // x0
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_42AD435 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_B52984(&PhotoCampaignListViewItem_TypeInfo);
    byte_42AD435 = 1;
  }
  if ( !v3 )
    goto LABEL_12;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  v5 = *(&PhotoCampaignListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v3->klass->_2.bitflags2 + 1) >= (unsigned int)v5
    && (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[v5 - 1] == PhotoCampaignListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v15.fields.fakeValue = byval_arg;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v14 = v15;
      this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                                       &v14,
                                                                       0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_12:
    sub_B52A5C(this, item);
  }
  v10 = (PhotoCampaignListViewManager_CallbackFunc_o *)sub_B52D50(v3);
  PhotoCampaignListViewManager_CallbackFunc__Invoke(v10, v11, v12, v13);
  return result;
}