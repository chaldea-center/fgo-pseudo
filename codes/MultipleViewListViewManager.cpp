void MultipleViewListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E325 & 1) == 0 )
  {
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&MultipleViewListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_9197/*"MultipleView1"*/);
    byte_4C3E325 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v1, (System_String_o *)StringLiteral_9197/*"MultipleView1"*/, 3, 0, 0);
  MultipleViewListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MultipleViewListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MultipleViewListViewManager___ctor(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MultipleViewListViewManager__ChangeIconScale(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v7; // w8
  CGThumbnailListItem_o *p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    smallSizeSeed = this->fields.smallSizeSeed;
    v7 = 2;
    goto LABEL_7;
  }
  if ( scaleType == 2 )
  {
    smallSizeSeed = this->fields.extremelySmallSizeSeed;
    v7 = 3;
    goto LABEL_7;
  }
  if ( scaleType == 3 )
  {
    smallSizeSeed = this->fields.normalSizeSeed;
    v7 = 1;
LABEL_7:
    this->fields.seed = smallSizeSeed;
    p_seed = (CGThumbnailListItem_o *)&this->fields.seed;
    p_seed[2].fields.index = v7;
    sub_1C36FFC(p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        MultipleViewListViewManager__ModifyList(this, 1, v10),
        MultipleViewListViewManager__SetMode_33453316(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C372B4(sort);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void MultipleViewListViewManager__CreateList(
        MultipleViewListViewManager_o *this,
        int64_t latestSelectedUsrSvtId,
        System_Int64_array *selectedUserSvtIds,
        const MethodInfo *method)
{
  __int64 v7; // x19
  int64_t Instance; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *MasterData_object; // x0
  UserServantMaster_o *v13; // x23
  Il2CppObject *v14; // x24
  int64_t v15; // x24
  int v16; // w20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  MultipleViewListViewManager_c *v19; // x0
  __int64 v20; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v22; // x1
  struct ListViewSort_o **p_sort; // x21
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v25; // x2
  UILabel_o *v26; // x25
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  System_String_o *v33; // x26
  Il2CppObject *v34; // x27
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x0
  int v42; // w8
  unsigned int v43; // w25
  int64_t v44; // x26
  __int64 v45; // x8
  UserServantEntity_o **v46; // x26
  __int64 v47; // t1
  __int128 v48; // q0
  int64_t v49; // x27
  System_Int64_array *v50; // x22
  UserServantEntity_o *v51; // x29
  __int64 v52; // x19
  MultipleViewListViewItem_o *v53; // x26
  const MethodInfo *v54; // x5
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  UILabel_o *v65; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v68; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v70; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_object__o *v72; // x22
  Il2CppObject *v73; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v74; // x21
  System_Predicate_object__o *v75; // x22
  Il2CppObject *object; // [xsp+8h] [xbp-E8h]
  System_String_o *v77; // [xsp+10h] [xbp-E0h]
  struct ListViewSort_o **v78; // [xsp+18h] [xbp-D8h]
  System_Int64_array *usrSvtIds; // [xsp+20h] [xbp-D0h]
  __int64 v80; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+50h] [xbp-A0h] BYREF
  int v83; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C3E30F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    sub_1C37058(&MultipleViewListViewManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__);
    sub_1C37058(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__);
    sub_1C37058(&MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo);
    sub_1C37058(&StringLiteral_11608/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C37058(&StringLiteral_11568/*"SERVANT_ALL_EMPTY"*/);
    sub_1C37058(&StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C37058(&StringLiteral_12007/*"SERVANT_TAKE"*/);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C3E30F = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  v7 = sub_1C372A4(MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_76;
  *(_QWORD *)(v7 + 16) = latestSelectedUsrSvtId;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  *(_QWORD *)(v7 + 24) = SelfUserGame;
  v80 = v7 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)SelfUserGame, v10, v11);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v13 = (UserServantMaster_o *)MasterData_object;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  object = (Il2CppObject *)v7;
  v14 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_76;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v14,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v13 )
    goto LABEL_76;
  usrSvtIds = selectedUserSvtIds;
  Instance = (int64_t)UserServantMaster__getOrganizationList(v13, 0);
  if ( !*(_QWORD *)v80 )
    goto LABEL_76;
  v15 = Instance;
  v16 = *(_DWORD *)(*(_QWORD *)v80 + 160LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12007/*"SERVANT_TAKE"*/, 0);
  v19 = MultipleViewListViewManager_TypeInfo;
  v20 = StringLiteral_11608/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v19 = MultipleViewListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v19->static_fields->servantSortInfo;
  v22 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v22, v17, v18);
  Instance = (int64_t)this->fields.sort;
  if ( !Instance )
    goto LABEL_76;
  ListViewSort__Load((ListViewSort_o *)Instance, 0);
  if ( !*p_sort )
    goto LABEL_76;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0);
  v78 = &this->fields.sort;
  if ( (Instance & 1) != 0 )
  {
    v26 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUM_INFO"*/, 0);
    if ( !v15 )
      goto LABEL_76;
    v33 = (System_String_o *)Instance;
    LODWORD(v82.fields.currentCryptoKey) = *(_QWORD *)(v15 + 24);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v27, v28, v29, v30, v31, v32);
    v83 = v16;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v35, v36, v37, v38, v39, v40);
    Instance = (int64_t)System_String__Format_63602948(v33, v34, v41, 0);
    if ( !v26 )
      goto LABEL_76;
    UILabel__set_text(v26, (System_String_o *)Instance, 0);
  }
  else if ( !v15 )
  {
    goto LABEL_76;
  }
  v42 = *(_DWORD *)(v15 + 24);
  v77 = (System_String_o *)v20;
  if ( v42 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= v42 )
        goto LABEL_77;
      v44 = v15 + 8LL * (int)v43;
      v47 = *(_QWORD *)(v44 + 32);
      v46 = (UserServantEntity_o **)(v44 + 32);
      v45 = v47;
      if ( !v47 )
        break;
      v48 = *(_OWORD *)(v45 + 32);
      *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
      *(_OWORD *)&v82.fields.fakeValue = v48;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v81 = v82;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v81, 0);
      if ( v43 >= *(_DWORD *)(v15 + 24) )
LABEL_77:
        sub_1C372BC(Instance);
      if ( !*(_QWORD *)v80 )
        break;
      v49 = Instance;
      v50 = svtIdList;
      v51 = *v46;
      v52 = *(_QWORD *)(*(_QWORD *)v80 + 120LL);
      v53 = (MultipleViewListViewItem_o *)sub_1C372A4(MultipleViewListViewItem_TypeInfo);
      MultipleViewListViewItem___ctor(v53, v43, v51, v50, v49 == v52, v54);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      v57 = *(_QWORD *)(Instance + 16);
      v58 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v57 )
        break;
      v59 = *(int *)(Instance + 24);
      if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v53,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = v57 + 8 * v59;
        *(_DWORD *)(Instance + 24) = v59 + 1;
        *(_QWORD *)(v60 + 32) = v53;
        sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 32), (int32_t)v53, v55, v56);
      }
      v42 = *(_DWORD *)(v15 + 24);
      if ( (int)++v43 >= v42 )
        goto LABEL_44;
    }
LABEL_76:
    sub_1C372B4(Instance);
  }
LABEL_44:
  MultipleViewListViewManager__ModifyItem_33449392(this, usrSvtIds, v25);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v15 + 24) )
    v62 = (System_String_o *)StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v62 = v77;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v65 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get(v62, 0);
    if ( !v65 )
      goto LABEL_76;
    UILabel__set_text(v65, (System_String_o *)Instance, 0);
  }
  if ( !*v78 )
    goto LABEL_76;
  iconScaleKind = (*v78)->fields.iconScaleKind;
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
      goto LABEL_62;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v63, v64);
LABEL_62:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  MultipleViewListViewManager__SetFilterButtonImage(this, v68);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Instance = (int64_t)this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_76;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_76;
    Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
    if ( (Instance & 1) != 0 )
    {
      v70 = this->fields.scrollBar;
      if ( !v70 )
        goto LABEL_76;
      if ( v70->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v72 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v72,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__,
          0);
        if ( !itemList )
          goto LABEL_76;
        v73 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v72,
                (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v73 )
          goto LABEL_74;
        v74 = this->fields.itemList;
        v75 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v75,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__,
          0);
        if ( !v74 )
          goto LABEL_76;
        v73 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v74,
                (System_Predicate_T__o *)v75,
                (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v73 )
LABEL_74:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v73[1].klass), 0);
      }
    }
  }
}


void MultipleViewListViewManager__DeleteContinueData(const MethodInfo *method)
{
  MultipleViewListViewManager_c *v1; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C3E30B & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_TypeInfo);
    byte_4C3E30B = 1;
  }
  v1 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v1 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v1->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C372B4(0);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void MultipleViewListViewManager__DestroyList(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  ListViewSort__Save(sort, 0);
}


void MultipleViewListViewManager__EndCloseSelectFilterKind(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void MultipleViewListViewManager__EndSelectFilterKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C3E319 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MultipleViewListViewManager_EndCloseSelectFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E319 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    MultipleViewListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C372B4(v8);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void MultipleViewListViewManager__EndSelectSortKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E31C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E31C = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


int64_t MultipleViewListViewManager__GetAmountSortValue(
        MultipleViewListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4C3E31F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    byte_4C3E31F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MultipleViewListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(itemList[3].fields._items) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C372B4(itemList);
  }
  return 0;
}


MultipleViewListViewItem_o *MultipleViewListViewManager__GetItem(
        MultipleViewListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MultipleViewListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C3E310 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    byte_4C3E310 = 1;
  }
  result = (MultipleViewListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MultipleViewListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MultipleViewListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_String_o *MultipleViewListViewManager__GetScaleButtonSpriteName(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool MultipleViewListViewManager__GetSwapChoiceList(
        MultipleViewListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C3E321 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E321 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != MultipleViewListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 170) )
      {
        if ( *(_BYTE *)(itemList + 166) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C372B4(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)choiceList, 0, v9, v10);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


bool MultipleViewListViewManager__GetSwapLockList(
        MultipleViewListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int64_t itemList; // x0
  int v12; // w25
  int32_t v13; // w24
  __int64 naturalAligment; // x10
  __int64 v15; // x8
  __int128 v16; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C3E320 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E320 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v12 = *(_DWORD *)(itemList + 24);
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v13,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != MultipleViewListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(itemList + 120);
      if ( v15 && *(_BYTE *)(itemList + 169) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v16 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v18 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v20 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v18[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v20,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v20 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v20;
      }
LABEL_28:
      if ( v12 == ++v13 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C372B4(itemList);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)lockList, 0, v9, v10);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_378CB10 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void MultipleViewListViewManager__InitLoad(const MethodInfo *method)
{
  MultipleViewListViewManager_c *v1; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C3E30C & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_TypeInfo);
    byte_4C3E30C = 1;
  }
  v1 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v1 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v1->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C372B4(0);
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void MultipleViewListViewManager__ModifyItem(
        MultipleViewListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  int64_t v8; // x0
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x21
  _OWORD *monitor; // x8
  __int128 v12; // q0
  int64_t v13; // x0
  Il2CppObject v14; // q0
  int64_t v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  _OWORD *v18; // x8
  __int128 v19; // q0
  int64_t v20; // x0
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *klass; // x22
  Il2CppClass *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4C3E311 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E311 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields.currentCryptoKey;
      v28.fields._current = (Il2CppObject *)v27.fields.fakeValue;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v28,
               (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v8 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v28,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v28.fields._current
          && (naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment,
              v28.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (MultipleViewListViewItem_c *)v28.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MultipleViewListViewItem_TypeInfo )
            current = v28.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1C372B4(v8);
            monitor = current[7].monitor;
            if ( !monitor )
              sub_1C372B4(v8);
            v12 = monitor[2];
            *(_OWORD *)&v27.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v27.fields.fakeValue = v12;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v27;
            v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v26, 0);
            v14 = Entity[2];
            v15 = v13;
            *(Il2CppObject *)&v25.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v25.fields.fakeValue = v14;
            v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v25, 0);
            if ( v15 == v8 )
            {
              current[7].monitor = Entity;
              sub_1C36FFC((CGThumbnailListItem_o *)&current[7].monitor, (int32_t)Entity, v16, v17);
            }
            goto LABEL_27;
          }
        }
        else
        {
          current = 0;
          if ( Entity )
            goto LABEL_16;
        }
        if ( !current )
          sub_1C372B4(v8);
LABEL_27:
        v18 = current[7].monitor;
        if ( !v18 )
          sub_1C372B4(v8);
        v19 = v18[2];
        *(_OWORD *)&v27.fields.currentCryptoKey = v18[1];
        *(_OWORD *)&v27.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v27;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v24, 0);
        if ( !SelfUserGame )
          sub_1C372B4(v20);
        MultipleViewListViewItem__ModifyItem(
          (MultipleViewListViewItem_o *)current,
          v20 == SelfUserGame->fields.favoriteUserSvtId,
          v21);
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v23 = current[7].klass;
          if ( !v23 )
            sub_1C372B4(0);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v23->_1.image + 49))(
            v23,
            current,
            *((_QWORD *)v23->_1.image + 50));
        }
      }
    }
LABEL_44:
    sub_1C372B4(Master_object);
  }
}


void MultipleViewListViewManager__ModifyItem_33449392(
        MultipleViewListViewManager_o *this,
        System_Int64_array *usrSvtIds,
        const MethodInfo *method)
{
  MultipleViewListViewManager___c_c *v5; // x0
  System_Predicate_long__o *_9__31_0; // x20
  Il2CppObject *v7; // x22
  struct MultipleViewListViewManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  unsigned int Index_long; // w22
  System_Collections_Generic_List_int__o *v12; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  unsigned __int64 v16; // x24
  int64_t v17; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  _BOOL4 v21; // w21
  Il2CppObject *current; // x24
  Il2CppObject *v23; // x23
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  MultipleViewListViewItem_c *v27; // x8
  __int64 naturalAligment; // x9
  Il2CppClass *v29; // x10
  int32_t v30; // w1
  CGThumbnailListItem_o *v31; // x22
  System_Predicate_long__o *v32; // x24
  __int64 v33; // x0
  int32_t v34; // w23
  UserServantEntity_o *klass; // x0
  __int64 SvtId; // x0
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x4
  __int64 v39; // x0
  UnityEngine_Object_o *interopData; // x23
  _BOOL8 v41; // x0
  void *v42; // x0
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3E312 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_FindIndex_long___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_long__TypeInfo);
    sub_1C37058(&Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__);
    sub_1C37058(&Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__);
    sub_1C37058(&MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo);
    sub_1C37058(&MultipleViewListViewManager___c_TypeInfo);
    byte_4C3E312 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( this->fields.itemList )
  {
    v5 = MultipleViewListViewManager___c_TypeInfo;
    if ( !MultipleViewListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MultipleViewListViewManager___c_TypeInfo);
      v5 = MultipleViewListViewManager___c_TypeInfo;
    }
    _9__31_0 = v5->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = MultipleViewListViewManager___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__31_0 = (System_Predicate_long__o *)sub_1C372A4(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(_9__31_0, v7, Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__, 0);
      static_fields = MultipleViewListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = _9__31_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v9, v10);
    }
    Index_long = System_Array__FindIndex_long_(
                   usrSvtIds,
                   (System_Predicate_T__o *)_9__31_0,
                   (const MethodInfo_31ED924 *)Method_System_Array_FindIndex_long___);
    v12 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !usrSvtIds )
      goto LABEL_54;
    max_length = usrSvtIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v15 = Master_object;
      v16 = 0;
      do
      {
        if ( v16 >= (unsigned int)max_length )
          sub_1C372BC(Master_object);
        v17 = usrSvtIds->m_Items[v16];
        if ( v17 >= 1 )
        {
          if ( !v15 )
            goto LABEL_54;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                          v15,
                                                                          v17,
                                                                          (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Master_object )
            goto LABEL_54;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                          (UserServantEntity_o *)Master_object,
                                                                          0);
          if ( !v12 )
            goto LABEL_54;
          items = v12->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_54;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              (int32_t)Master_object,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size] = (int)Master_object;
          }
        }
        LODWORD(max_length) = usrSvtIds->max_length;
      }
      while ( (__int64)++v16 < (int)max_length );
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( !Master_object )
LABEL_54:
      sub_1C372B4(Master_object);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v21 = Index_long >> 31;
    v44 = v43;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v44.fields._current;
      v23 = (Il2CppObject *)sub_1C372A4(MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor(v23, 0);
      if ( !v23 )
        sub_1C372B4(v24);
      if ( current )
      {
        v27 = MultipleViewListViewItem_TypeInfo;
        naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
        if ( current->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == MultipleViewListViewItem_TypeInfo )
            v29 = (Il2CppClass *)current;
          else
            v29 = 0;
        }
        else
        {
          v29 = 0;
        }
        v23[1].klass = v29;
        v31 = (CGThumbnailListItem_o *)&v23[1];
        if ( current->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == v27 )
            v30 = (int)current;
          else
            v30 = 0;
        }
        else
        {
          v30 = 0;
        }
      }
      else
      {
        v30 = 0;
        v23[1].klass = 0;
        v31 = (CGThumbnailListItem_o *)&v23[1];
      }
      sub_1C36FFC(v31, v30, v25, v26);
      v32 = (System_Predicate_long__o *)sub_1C372A4(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v32,
        v23,
        Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__,
        0);
      v33 = System_Array__FindIndex_long_(
              usrSvtIds,
              (System_Predicate_T__o *)v32,
              (const MethodInfo_31ED924 *)Method_System_Array_FindIndex_long___);
      if ( !v31->klass )
        sub_1C372B4(v33);
      v34 = v33;
      klass = (UserServantEntity_o *)v31->klass->_1.klass;
      if ( !klass )
        sub_1C372B4(0);
      SvtId = UserServantEntity__getSvtId(klass, 0);
      if ( !v12 )
        sub_1C372B4(SvtId);
      v37 = System_Collections_Generic_List_int___Contains(
              v12,
              SvtId,
              (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v31->klass )
        sub_1C372B4(v37);
      MultipleViewListViewItem__ModifyItem_33460576((MultipleViewListViewItem_o *)v31->klass, v34, v37, v21, v38);
      if ( !v31->klass )
        sub_1C372B4(v39);
      interopData = (UnityEngine_Object_o *)v31->klass->_1.interopData;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v41 = UnityEngine_Object__op_Inequality(interopData, 0, 0);
      if ( v41 )
      {
        if ( !v31->klass )
          sub_1C372B4(v41);
        v42 = v31->klass->_1.interopData;
        if ( !v42 )
          sub_1C372B4(0);
        (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 392LL))(v42);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void MultipleViewListViewManager__ModifyList(
        MultipleViewListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  int v6; // w8
  int64_t v7; // x20
  unsigned int v8; // w25
  bool v9; // w21
  __int64 v10; // x8
  __int128 v11; // q0
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v13; // x23
  int32_t v14; // w24
  MultipleViewListViewItem_o *v15; // x22
  __int64 naturalAligment; // x10
  __int64 v17; // x8
  __int128 v18; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v20; // q0
  int64_t v21; // x0
  const MethodInfo *v22; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+60h] [xbp-80h]

  if ( (byte_4C3E322 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E322 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_31;
  v6 = *(_DWORD *)(Master_object + 24);
  v7 = Master_object;
  if ( v6 >= 1 )
  {
    v8 = 0;
    v9 = isIconSizeChange;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1C372BC(Master_object);
      v10 = *(_QWORD *)(v7 + 8LL * (int)v8 + 32);
      if ( !v10 )
        break;
      v11 = *(_OWORD *)(v10 + 32);
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
      *(_OWORD *)&v26.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v25 = v26;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v25, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v13 = Master_object;
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= itemList->fields._size )
          goto LABEL_29;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   itemList,
                                   v14,
                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v15 = (MultipleViewListViewItem_o *)Master_object;
        naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)naturalAligment
          || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * naturalAligment - 8) != MultipleViewListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v17 = *(_QWORD *)(Master_object + 120);
        if ( v17 )
        {
          v18 = *(_OWORD *)(v17 + 32);
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
          *(_OWORD *)&v26.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v24 = v26;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v24, 0);
          if ( Master_object == v13 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v14;
        if ( !itemList )
          goto LABEL_31;
      }
      userSvtEntity = v15->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v26;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v23, 0);
      MultipleViewListViewManager__ModifyLockItem(this, v15, v21, 1, v9, v22);
LABEL_29:
      v6 = *(_DWORD *)(v7 + 24);
      if ( (int)++v8 >= v6 )
        return;
    }
LABEL_31:
    sub_1C372B4(Master_object);
  }
}


void MultipleViewListViewManager__ModifyLockItem(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewItem_o *multipleViewItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v10; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  MultipleViewListViewManager_o *v13; // x23
  int64_t v14; // x0
  __int128 v15; // q1
  MultipleViewListViewManager_o *v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4C3E324 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (MultipleViewListViewManager_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E324 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (MultipleViewListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !multipleViewItem )
        goto LABEL_26;
      userSvtEntity = multipleViewItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v23.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v22 = v23;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v22, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (MultipleViewListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v15;
      this = (MultipleViewListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                &v21,
                                                0);
      if ( v16 == this )
      {
        multipleViewItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_1C36FFC((CGThumbnailListItem_o *)&multipleViewItem->fields.userSvtEntity, (int32_t)v13, v17, v18);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !multipleViewItem )
      goto LABEL_26;
  }
  else
  {
    if ( !multipleViewItem )
      goto LABEL_26;
    MultipleViewListViewItem__ModifyLockItem(multipleViewItem, (const MethodInfo *)multipleViewItem);
    MultipleViewListViewItem__ModifyChoiceItem(multipleViewItem, v19);
  }
  viewObject = (UnityEngine_Object_o *)multipleViewItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(MultipleViewListViewManager_o *, MultipleViewListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
        this,
        multipleViewItem,
        this->klass->vtable._5_SetSortButtonImage.method);
      if ( !isIconSizeChange )
        return;
      this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)multipleViewItem, v10->fields.seed, 0);
        return;
      }
    }
LABEL_26:
    sub_1C372B4(this);
  }
}


void MultipleViewListViewManager__OnClickFilterKind(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_4C3E318 & 1) == 0 )
  {
    sub_1C37058(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_MultipleViewListViewManager_EndSelectFilterKind__);
    sub_1C37058(&Method_MultipleViewListViewManager_OnClickFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E318 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MultipleViewListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C372B4(v9);
    CommonUI__OpenServantFilterSelectMenu(v7, 9, sort, v8, -1, 0);
  }
}


void MultipleViewListViewManager__OnClickListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void MultipleViewListViewManager__OnClickSelectListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C372B4(v6);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void MultipleViewListViewManager__OnClickSortAscendingOrder(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C3E31D & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewListViewManager_OnClickSortAscendingOrder__);
    byte_4C3E31D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MultipleViewListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C372B4(v5);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void MultipleViewListViewManager__OnClickSortKind(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_4C3E31B & 1) == 0 )
  {
    sub_1C37058(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_MultipleViewListViewManager_EndSelectSortKind__);
    sub_1C37058(&Method_MultipleViewListViewManager_OnClickSortKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E31B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MultipleViewListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MultipleViewListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C372B4(v9);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0);
  }
}


void MultipleViewListViewManager__OnLongPushListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  unsigned int Index; // w0

  if ( (byte_4C3E317 & 1) == 0 )
  {
    sub_1C37058(&Method_MultipleViewListViewManager_OnLongPushListView__);
    byte_4C3E317 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
      if ( !callbackFunc )
        return;
      v9 = Method_MultipleViewListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C37070(Method_MultipleViewListViewManager_OnLongPushListView__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          1,
          Index,
          callbackFunc->fields.method);
        return;
      }
    }
    sub_1C372B4(scrollView);
  }
}


void MultipleViewListViewManager__OnMoveEnd(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C3E316 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E316 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1C372B4(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewListViewManager__RequestListObject(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E314 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__);
    sub_1C37058(&Method_MultipleViewListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E314 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v11);
      MultipleViewListViewObject__Init_33470032((MultipleViewListViewObject_o *)current, mode, v10, delay, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewListViewManager__RequestListObject_33469004(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E315 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__);
    sub_1C37058(&Method_MultipleViewListViewManager_OnMoveEnd__);
    sub_1C37058(&StringLiteral_9942/*"OnMoveEnd"*/);
    byte_4C3E315 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C372B4(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C372B4(v9);
      MultipleViewListViewObject__Init_33470116((MultipleViewListViewObject_o *)current, mode, v8, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


void MultipleViewListViewManager__SetCanLongPushFlag(
        MultipleViewListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void MultipleViewListViewManager__SetFilterButtonImage(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C3E31A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17487/*"btn_filter_on"*/);
    sub_1C37058(&StringLiteral_17486/*"btn_filter"*/);
    byte_4C3E31A = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C372B4(sort);
  }
  v5 = (System_String_o **)&StringLiteral_17486/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17487/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void MultipleViewListViewManager__SetMode(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        MultipleViewListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  MultipleViewListViewManager__SetMode_33453316(this, mode, v6);
}


void MultipleViewListViewManager__SetMode_33453316(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v6; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0) )
  {
LABEL_9:
    sub_1C372B4(scrollView);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    MultipleViewListViewManager__RequestListObject_33469004(this, mode + 1, v6);
}


void MultipleViewListViewManager__SetMode_33468952(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MultipleViewListViewManager__SetMode_33453316(this, mode, v6);
}


void MultipleViewListViewManager__SetObjectItem(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C3E313 & 1) == 0 )
  {
    this = (MultipleViewListViewManager_o *)sub_1C37058(&MultipleViewListViewObject_TypeInfo);
    byte_4C3E313 = 1;
  }
  if ( !obj
    || (naturalAligment = MultipleViewListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MultipleViewListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MultipleViewListViewObject__Init_33468880((MultipleViewListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void MultipleViewListViewManager__SetSortButtonImage(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x8
  struct ListViewSort_o *v10; // x8
  System_String_o **v11; // x9
  System_String_o **v12; // x10
  System_String_o **v13; // x8
  System_String_o **v14; // x8

  if ( (byte_4C3E31E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17523/*"btn_sort_up"*/);
    sub_1C37058(&StringLiteral_17621/*"btn_txt_up"*/);
    sub_1C37058(&StringLiteral_17572/*"btn_txt_new"*/);
    sub_1C37058(&StringLiteral_17562/*"btn_txt_down"*/);
    sub_1C37058(&StringLiteral_17579/*"btn_txt_old"*/);
    sub_1C37058(&StringLiteral_17520/*"btn_sort_down"*/);
    byte_4C3E31E = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_34;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( v7 )
    {
      sortKind = v7->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v9 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17579/*"btn_txt_old"*/ : &StringLiteral_17572/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v9, 0);
          v10 = this->fields.sort;
          if ( v10 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v11 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
              v12 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
LABEL_30:
              if ( v10->fields.isAscendingOrder )
                v14 = v11;
              else
                v14 = v12;
              UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
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
          v13 = (System_String_o **)(v7->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_up"*/ : &StringLiteral_17562/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
          v10 = this->fields.sort;
          if ( v10 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v11 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
              v12 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C372B4(sort);
  }
}


void MultipleViewListViewManager__UpdateDisplayState(
        MultipleViewListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3E323 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    byte_4C3E323 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !v9.fields._current )
        goto LABEL_13;
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( v9.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MultipleViewListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1C37574(v9.fields._current);
LABEL_13:
        sub_1C372B4(current);
      }
      *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)&qword_A8 + 4) = v6;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void MultipleViewListViewManager__add_callbackFunc(
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

  if ( (byte_4C3E307 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    byte_4C3E307 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1C37574(v7);
  MultipleViewListViewManager__remove_callbackFunc(v10, v11, v12);
}


void MultipleViewListViewManager__add_callbackFunc2(
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

  if ( (byte_4C3E309 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E309 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1C37574(v7);
  MultipleViewListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MultipleViewListViewObject__o *MultipleViewListViewManager__get_ClippingObjectList(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3E30E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E30E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)MultipleViewListViewObject__GetItem((MultipleViewListViewObject_o *)Component_object, v8);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C372B4(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v3;
}


System_Collections_Generic_List_MultipleViewListViewObject__o *MultipleViewListViewManager__get_ObjectList(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3E30D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E30D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v3;
}


void MultipleViewListViewManager__remove_callbackFunc(
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

  if ( (byte_4C3E308 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    byte_4C3E308 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1C37574(v7);
  MultipleViewListViewManager__add_callbackFunc2(v10, v11, v12);
}


void MultipleViewListViewManager__remove_callbackFunc2(
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

  if ( (byte_4C3E30A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E30A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C37574(v7);
  MultipleViewListViewManager__DeleteContinueData(v10);
}


void MultipleViewListViewManager_CallbackFunc___ctor(
        MultipleViewListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A74E30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A74DD8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *MultipleViewListViewManager_CallbackFunc__BeginInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C3E326 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&MultipleViewListViewManager_ResultKind_TypeInfo);
    byte_4C3E326 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             MultipleViewListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v18, callback, object);
}


void MultipleViewListViewManager_CallbackFunc__EndInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void MultipleViewListViewManager_CallbackFunc__Invoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void MultipleViewListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E327 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewManager___c_TypeInfo);
    byte_4C3E327 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MultipleViewListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MultipleViewListViewManager___c_TypeInfo->static_fields->__9 = (struct MultipleViewListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MultipleViewListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MultipleViewListViewManager___c___ctor(MultipleViewListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MultipleViewListViewManager___c___ModifyItem_b__31_0(
        MultipleViewListViewManager___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id < 1;
}


void MultipleViewListViewManager___c__DisplayClass27_0___ctor(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__0(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  MultipleViewListViewManager___c__DisplayClass27_0_o *v9; // x0
  ListViewItem_o *v10; // x1
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4C3E328 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E328 = 1;
  }
  if ( !item )
    goto LABEL_10;
  naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MultipleViewListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewItem_TypeInfo )
  {
    v9 = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1C37574(item);
    return MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(v9, v10, v11);
  }
  klass = item[1].klass;
  if ( !klass )
LABEL_10:
    sub_1C372B4(this);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v12, 0) == v4->fields.latestSelectedUsrSvtId;
}


bool MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  MultipleViewListViewManager___c__DisplayClass31_0_o *v10; // x0
  int64_t v11; // x1
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4C3E329 & 1) == 0 )
  {
    sub_1C37058(&MultipleViewListViewItem_TypeInfo);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E329 = 1;
  }
  if ( !item )
    goto LABEL_11;
  naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (MultipleViewListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == MultipleViewListViewItem_TypeInfo )
  {
    klass = item[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v14;
      this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                                      &v13,
                                                                      0);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (MultipleViewListViewManager___c__DisplayClass27_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1C372B4(this);
  }
  v10 = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1C37574(item);
  return MultipleViewListViewManager___c__DisplayClass31_0___ModifyItem_b__1(v10, v11, v12);
}


void MultipleViewListViewManager___c__DisplayClass31_0___ctor(
        MultipleViewListViewManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MultipleViewListViewManager___c__DisplayClass31_0___ModifyItem_b__1(
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
  if ( (byte_4C3E32A & 1) == 0 )
  {
    this = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3E32A = 1;
  }
  servantItem = v4->fields.servantItem;
  if ( !servantItem || (userSvtEntity = servantItem->fields.userSvtEntity) == 0 )
    sub_1C372B4(this);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v9, 0) == id;
}