void MultipleViewListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB15F9 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&MultipleViewListViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9194/*"MultipleView1"*/);
    byte_4CB15F9 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v1, (System_String_o *)StringLiteral_9194/*"MultipleView1"*/, 3, 0, 0);
  MultipleViewListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)MultipleViewListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6B9AC(p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        MultipleViewListViewManager__ModifyList(this, 1, v10),
        MultipleViewListViewManager__SetMode_33666064(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C6BC60(sort, method);
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
  __int64 v9; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *MasterData_object; // x0
  UserServantMaster_o *v14; // x23
  Il2CppObject *v15; // x24
  int64_t v16; // x24
  int v17; // w20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  MultipleViewListViewManager_c *v20; // x0
  __int64 v21; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v23; // x1
  struct ListViewSort_o **p_sort; // x21
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v26; // x2
  UILabel_o *v27; // x25
  System_String_o *v28; // x26
  Il2CppObject *v29; // x27
  Il2CppObject *v30; // x0
  int v31; // w8
  unsigned int v32; // w25
  int64_t v33; // x26
  __int64 v34; // x8
  UserServantEntity_o **v35; // x26
  __int64 v36; // t1
  __int128 v37; // q0
  int64_t v38; // x27
  System_Int64_array *v39; // x22
  UserServantEntity_o *v40; // x29
  __int64 v41; // x19
  MultipleViewListViewItem_o *v42; // x26
  const MethodInfo *v43; // x5
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  UILabel_o *v54; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v57; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v59; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_object__o *v61; // x22
  Il2CppObject *v62; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v63; // x21
  System_Predicate_object__o *v64; // x22
  Il2CppObject *object; // [xsp+8h] [xbp-E8h]
  System_String_o *v66; // [xsp+10h] [xbp-E0h]
  struct ListViewSort_o **v67; // [xsp+18h] [xbp-D8h]
  System_Int64_array *usrSvtIds; // [xsp+20h] [xbp-D0h]
  __int64 v69; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+50h] [xbp-A0h] BYREF
  int v72; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4CB15E3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    sub_1C6BA08(&MultipleViewListViewManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__);
    sub_1C6BA08(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__);
    sub_1C6BA08(&MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_11567/*"SERVANT_ALL_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_12006/*"SERVANT_TAKE"*/);
    sub_1C6BA08(&StringLiteral_12483/*"SUM_INFO"*/);
    byte_4CB15E3 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  v7 = sub_1C6BC54(MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_76;
  *(_QWORD *)(v7 + 16) = latestSelectedUsrSvtId;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  *(_QWORD *)(v7 + 24) = SelfUserGame;
  v69 = v7 + 24;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)SelfUserGame, v11, v12);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v14 = (UserServantMaster_o *)MasterData_object;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  object = (Il2CppObject *)v7;
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_76;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v15,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v14 )
    goto LABEL_76;
  usrSvtIds = selectedUserSvtIds;
  Instance = (int64_t)UserServantMaster__getOrganizationList(v14, 0);
  if ( !*(_QWORD *)v69 )
    goto LABEL_76;
  v16 = Instance;
  v17 = *(_DWORD *)(*(_QWORD *)v69 + 160LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12006/*"SERVANT_TAKE"*/, 0);
  v20 = MultipleViewListViewManager_TypeInfo;
  v21 = StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v20 = MultipleViewListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v20->static_fields->servantSortInfo;
  v23 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v23, v18, v19);
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
  v67 = &this->fields.sort;
  if ( (Instance & 1) != 0 )
  {
    v27 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUM_INFO"*/, 0);
    if ( !v16 )
      goto LABEL_76;
    v28 = (System_String_o *)Instance;
    LODWORD(v71.fields.currentCryptoKey) = *(_QWORD *)(v16 + 24);
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
    v72 = v17;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
    Instance = (int64_t)System_String__Format_64008100(v28, v29, v30, 0);
    if ( !v27 )
      goto LABEL_76;
    UILabel__set_text(v27, (System_String_o *)Instance, 0);
  }
  else if ( !v16 )
  {
    goto LABEL_76;
  }
  v31 = *(_DWORD *)(v16 + 24);
  v66 = (System_String_o *)v21;
  if ( v31 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v31 )
        goto LABEL_77;
      v33 = v16 + 8LL * (int)v32;
      v36 = *(_QWORD *)(v33 + 32);
      v35 = (UserServantEntity_o **)(v33 + 32);
      v34 = v36;
      if ( !v36 )
        break;
      v37 = *(_OWORD *)(v34 + 32);
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)(v34 + 16);
      *(_OWORD *)&v71.fields.fakeValue = v37;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v70 = v71;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v70, 0);
      if ( v32 >= *(_DWORD *)(v16 + 24) )
LABEL_77:
        sub_1C6BC68(Instance);
      if ( !*(_QWORD *)v69 )
        break;
      v38 = Instance;
      v39 = svtIdList;
      v40 = *v35;
      v41 = *(_QWORD *)(*(_QWORD *)v69 + 120LL);
      v42 = (MultipleViewListViewItem_o *)sub_1C6BC54(MultipleViewListViewItem_TypeInfo);
      MultipleViewListViewItem___ctor(v42, v32, v40, v39, v38 == v41, v43);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      v46 = *(_QWORD *)(Instance + 16);
      v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v46 )
        break;
      v48 = *(int *)(Instance + 24);
      if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v42,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = v46 + 8 * v48;
        *(_DWORD *)(Instance + 24) = v48 + 1;
        *(_QWORD *)(v49 + 32) = v42;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v49 + 32), (int32_t)v42, v44, v45);
      }
      v31 = *(_DWORD *)(v16 + 24);
      if ( (int)++v32 >= v31 )
        goto LABEL_44;
    }
LABEL_76:
    sub_1C6BC60(Instance, v9);
  }
LABEL_44:
  MultipleViewListViewManager__ModifyItem_33662140(this, usrSvtIds, v26);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v16 + 24) )
    v51 = (System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v51 = v66;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v54 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get(v51, 0);
    if ( !v54 )
      goto LABEL_76;
    UILabel__set_text(v54, (System_String_o *)Instance, 0);
  }
  if ( !*v67 )
    goto LABEL_76;
  iconScaleKind = (*v67)->fields.iconScaleKind;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v52, v53);
LABEL_62:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  MultipleViewListViewManager__SetFilterButtonImage(this, v57);
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
      v59 = this->fields.scrollBar;
      if ( !v59 )
        goto LABEL_76;
      if ( v59->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v61 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v61,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__,
          0);
        if ( !itemList )
          goto LABEL_76;
        v62 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v61,
                (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v62 )
          goto LABEL_74;
        v63 = this->fields.itemList;
        v64 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v64,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__,
          0);
        if ( !v63 )
          goto LABEL_76;
        v62 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v63,
                (System_Predicate_T__o *)v64,
                (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v62 )
LABEL_74:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v62[1].klass), 0);
      }
    }
  }
}


void MultipleViewListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MultipleViewListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CB15DF & 1) == 0 )
  {
    sub_1C6BA08(&MultipleViewListViewManager_TypeInfo);
    byte_4CB15DF = 1;
  }
  v2 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v2 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C6BC60(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void MultipleViewListViewManager__DestroyList(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(0, v3);
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
  __int64 v9; // x1

  if ( (byte_4CB15ED & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_MultipleViewListViewManager_EndCloseSelectFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB15ED = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    MultipleViewListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void MultipleViewListViewManager__EndSelectSortKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CB15F0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB15F0 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CB15F3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    byte_4CB15F3 = 1;
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
                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C6BC60(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4CB15E4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    byte_4CB15E4 = 1;
  }
  result = (MultipleViewListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MultipleViewListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C6BC60(0, method);
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
  int64_t v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4CB15F5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB15F5 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != MultipleViewListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 170) )
      {
        if ( *(_BYTE *)(itemList + 166) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C6BC60(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C6B9AC((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v36, v35, v33, v34);
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
  int64_t v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
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

  if ( (byte_4CB15F4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB15F4 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != MultipleViewListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 169) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C6BC60(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C6B9AC((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void MultipleViewListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  MultipleViewListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CB15E0 & 1) == 0 )
  {
    sub_1C6BA08(&MultipleViewListViewManager_TypeInfo);
    byte_4CB15E0 = 1;
  }
  v2 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo);
    v2 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C6BC60(0, v1);
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void MultipleViewListViewManager__ModifyItem(
        MultipleViewListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  int64_t v9; // x0
  __int64 v10; // x1
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x21
  _OWORD *monitor; // x8
  __int128 v14; // q0
  int64_t v15; // x0
  Il2CppObject v16; // q0
  int64_t v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  _OWORD *v20; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *klass; // x22
  __int64 v26; // x1
  Il2CppClass *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4CB15E5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB15E5 = 1;
  }
  memset(&v32, 0, sizeof(v32));
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
      v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v32,
               (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v32.fields._current
          && (naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment,
              v32.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (MultipleViewListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MultipleViewListViewItem_TypeInfo )
            current = v32.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1C6BC60(v9, v10);
            monitor = current[7].monitor;
            if ( !monitor )
              sub_1C6BC60(v9, v10);
            v14 = monitor[2];
            *(_OWORD *)&v31.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v31.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v31;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v30, 0);
            v16 = Entity[2];
            v17 = v15;
            *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v29.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v29, 0);
            if ( v17 == v9 )
            {
              current[7].monitor = Entity;
              sub_1C6B9AC((CGThumbnailListItem_o *)&current[7].monitor, (int32_t)Entity, v18, v19);
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
          sub_1C6BC60(v9, v10);
LABEL_27:
        v20 = current[7].monitor;
        if ( !v20 )
          sub_1C6BC60(v9, v10);
        v21 = v20[2];
        *(_OWORD *)&v31.fields.currentCryptoKey = v20[1];
        *(_OWORD *)&v31.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v31;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v28, 0);
        if ( !SelfUserGame )
          sub_1C6BC60(v22, v23);
        MultipleViewListViewItem__ModifyItem(
          (MultipleViewListViewItem_o *)current,
          v22 == SelfUserGame->fields.favoriteUserSvtId,
          v24);
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v27 = current[7].klass;
          if ( !v27 )
            sub_1C6BC60(0, v26);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v27->_1.image + 49))(
            v27,
            current,
            *((_QWORD *)v27->_1.image + 50));
        }
      }
    }
LABEL_44:
    sub_1C6BC60(Master_object, v5);
  }
}


void MultipleViewListViewManager__ModifyItem_33662140(
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
  int64_t v14; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  unsigned __int64 v17; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  _BOOL4 v21; // w21
  Il2CppObject *current; // x24
  Il2CppObject *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  MultipleViewListViewItem_c *v28; // x8
  __int64 naturalAligment; // x9
  Il2CppClass *v30; // x10
  int32_t v31; // w1
  CGThumbnailListItem_o *v32; // x22
  System_Predicate_long__o *v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w23
  UserServantEntity_o *klass; // x0
  __int64 SvtId; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x4
  __int64 v42; // x0
  __int64 v43; // x1
  UnityEngine_Object_o *interopData; // x23
  _BOOL8 v45; // x0
  CGThumbnailListItem_c *v46; // x1
  void *v47; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB15E6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_FindIndex_long___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Predicate_long__TypeInfo);
    sub_1C6BA08(&Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__);
    sub_1C6BA08(&Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__);
    sub_1C6BA08(&MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo);
    sub_1C6BA08(&MultipleViewListViewManager___c_TypeInfo);
    byte_4CB15E6 = 1;
  }
  memset(&v49, 0, sizeof(v49));
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
      _9__31_0 = (System_Predicate_long__o *)sub_1C6BC54(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(_9__31_0, v7, Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__, 0);
      static_fields = MultipleViewListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = _9__31_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v9, v10);
    }
    Index_long = System_Array__FindIndex_long_(
                   usrSvtIds,
                   (System_Predicate_T__o *)_9__31_0,
                   (const MethodInfo_3241DC8 *)Method_System_Array_FindIndex_long___);
    v12 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !usrSvtIds )
      goto LABEL_54;
    max_length = usrSvtIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v16 = Master_object;
      v17 = 0;
      do
      {
        if ( v17 >= (unsigned int)max_length )
          sub_1C6BC68(Master_object);
        v14 = usrSvtIds->m_Items[v17];
        if ( v14 >= 1 )
        {
          if ( !v16 )
            goto LABEL_54;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                          v16,
                                                                          v14,
                                                                          (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
          v14 = (unsigned int)Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              (int32_t)Master_object,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size] = (int)Master_object;
          }
        }
        LODWORD(max_length) = usrSvtIds->max_length;
      }
      while ( (__int64)++v17 < (int)max_length );
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( !Master_object )
LABEL_54:
      sub_1C6BC60(Master_object, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v21 = Index_long >> 31;
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v49.fields._current;
      v23 = (Il2CppObject *)sub_1C6BC54(MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo);
      System_Object___ctor(v23, 0);
      if ( !v23 )
        sub_1C6BC60(v24, v25);
      if ( current )
      {
        v28 = MultipleViewListViewItem_TypeInfo;
        naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
        if ( current->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == MultipleViewListViewItem_TypeInfo )
            v30 = (Il2CppClass *)current;
          else
            v30 = 0;
        }
        else
        {
          v30 = 0;
        }
        v23[1].klass = v30;
        v32 = (CGThumbnailListItem_o *)&v23[1];
        if ( current->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == v28 )
            v31 = (int)current;
          else
            v31 = 0;
        }
        else
        {
          v31 = 0;
        }
      }
      else
      {
        v31 = 0;
        v23[1].klass = 0;
        v32 = (CGThumbnailListItem_o *)&v23[1];
      }
      sub_1C6B9AC(v32, v31, v26, v27);
      v33 = (System_Predicate_long__o *)sub_1C6BC54(System_Predicate_long__TypeInfo);
      System_Predicate_long____ctor(
        v33,
        v23,
        Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__,
        0);
      v34 = System_Array__FindIndex_long_(
              usrSvtIds,
              (System_Predicate_T__o *)v33,
              (const MethodInfo_3241DC8 *)Method_System_Array_FindIndex_long___);
      if ( !v32->klass )
        sub_1C6BC60(v34, v35);
      v36 = v34;
      klass = (UserServantEntity_o *)v32->klass->_1.klass;
      if ( !klass )
        sub_1C6BC60(0, v35);
      SvtId = UserServantEntity__getSvtId(klass, 0);
      if ( !v12 )
        sub_1C6BC60(SvtId, (unsigned int)SvtId);
      v39 = System_Collections_Generic_List_int___Contains(
              v12,
              SvtId,
              (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v32->klass )
        sub_1C6BC60(v39, v40);
      MultipleViewListViewItem__ModifyItem_33673324((MultipleViewListViewItem_o *)v32->klass, v36, v39, v21, v41);
      if ( !v32->klass )
        sub_1C6BC60(v42, v43);
      interopData = (UnityEngine_Object_o *)v32->klass->_1.interopData;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v45 = UnityEngine_Object__op_Inequality(interopData, 0, 0);
      if ( v45 )
      {
        v46 = v32->klass;
        if ( !v32->klass )
          sub_1C6BC60(v45, 0);
        v47 = v46->_1.interopData;
        if ( !v47 )
          sub_1C6BC60(0, v46);
        (*(void (__fastcall **)(void *))(*(_QWORD *)v47 + 392LL))(v47);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void MultipleViewListViewManager__ModifyList(
        MultipleViewListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v6; // x1
  int v7; // w8
  int64_t v8; // x20
  unsigned int v9; // w25
  bool v10; // w21
  __int64 v11; // x8
  __int128 v12; // q0
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v14; // x23
  int32_t v15; // w24
  MultipleViewListViewItem_o *v16; // x22
  __int64 naturalAligment; // x10
  __int64 v18; // x8
  __int128 v19; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  const MethodInfo *v23; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+60h] [xbp-80h]

  if ( (byte_4CB15F6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB15F6 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_31;
  v7 = *(_DWORD *)(Master_object + 24);
  v8 = Master_object;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v10 = isIconSizeChange;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C6BC68(Master_object);
      v11 = *(_QWORD *)(v8 + 8LL * (int)v9 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v26, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v14 = Master_object;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= itemList->fields._size )
          goto LABEL_29;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   itemList,
                                   v15,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v16 = (MultipleViewListViewItem_o *)Master_object;
        naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)naturalAligment
          || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * naturalAligment - 8) != MultipleViewListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v18 = *(_QWORD *)(Master_object + 120);
        if ( v18 )
        {
          v19 = *(_OWORD *)(v18 + 32);
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
          *(_OWORD *)&v27.fields.fakeValue = v19;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v25 = v27;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v25, 0);
          if ( Master_object == v14 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v15;
        if ( !itemList )
          goto LABEL_31;
      }
      userSvtEntity = v16->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v27;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v24, 0);
      MultipleViewListViewManager__ModifyLockItem(this, v16, v22, 1, v10, v23);
LABEL_29:
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_31:
    sub_1C6BC60(Master_object, v6);
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
  if ( (byte_4CB15F8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (MultipleViewListViewManager_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB15F8 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (MultipleViewListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v22, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (MultipleViewListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v15;
      this = (MultipleViewListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                &v21,
                                                0);
      if ( v16 == this )
      {
        multipleViewItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_1C6B9AC((CGThumbnailListItem_o *)&multipleViewItem->fields.userSvtEntity, (int32_t)v13, v17, v18);
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
    sub_1C6BC60(this, multipleViewItem);
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
  __int64 v10; // x1

  if ( (byte_4CB15EC & 1) == 0 )
  {
    sub_1C6BA08(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_MultipleViewListViewManager_EndSelectFilterKind__);
    sub_1C6BA08(&Method_MultipleViewListViewManager_OnClickFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB15EC = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MultipleViewListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_MultipleViewListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C6BC60(v9, v10);
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
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v6, v7);
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
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CB15F1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MultipleViewListViewManager_OnClickSortAscendingOrder__);
    byte_4CB15F1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MultipleViewListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_MultipleViewListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C6BC60(v5, v6);
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
  __int64 v10; // x1

  if ( (byte_4CB15EF & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_MultipleViewListViewManager_EndSelectSortKind__);
    sub_1C6BA08(&Method_MultipleViewListViewManager_OnClickSortKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB15EF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_MultipleViewListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_MultipleViewListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_MultipleViewListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C6BC60(v9, v10);
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

  if ( (byte_4CB15EB & 1) == 0 )
  {
    sub_1C6BA08(&Method_MultipleViewListViewManager_OnLongPushListView__);
    byte_4CB15EB = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
      if ( !callbackFunc )
        return;
      v9 = Method_MultipleViewListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C6BA20(Method_MultipleViewListViewManager_OnLongPushListView__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
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
    sub_1C6BC60(scrollView, obj);
  }
}


void MultipleViewListViewManager__OnMoveEnd(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CB15EA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB15EA = 1;
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C6BC60(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB15E8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__);
    sub_1C6BA08(&Method_MultipleViewListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB15E8 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v12, v13);
      MultipleViewListViewObject__Init_33682780((MultipleViewListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewListViewManager__RequestListObject_33681752(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB15E9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__);
    sub_1C6BA08(&Method_MultipleViewListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB15E9 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      MultipleViewListViewObject__Init_33682864((MultipleViewListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
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

  if ( (byte_4CB15EE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17502/*"btn_filter_on"*/);
    sub_1C6BA08(&StringLiteral_17501/*"btn_filter"*/);
    byte_4CB15EE = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C6BC60(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17501/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17502/*"btn_filter_on"*/;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  MultipleViewListViewManager__SetMode_33666064(this, mode, v6);
}


void MultipleViewListViewManager__SetMode_33666064(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2

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
    sub_1C6BC60(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    MultipleViewListViewManager__RequestListObject_33681752(this, mode + 1, v7);
}


void MultipleViewListViewManager__SetMode_33681700(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  MultipleViewListViewManager__SetMode_33666064(this, mode, v6);
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
  if ( (byte_4CB15E7 & 1) == 0 )
  {
    this = (MultipleViewListViewManager_o *)sub_1C6BA08(&MultipleViewListViewObject_TypeInfo);
    byte_4CB15E7 = 1;
  }
  if ( !obj
    || (naturalAligment = MultipleViewListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MultipleViewListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MultipleViewListViewObject__Init_33681628((MultipleViewListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void MultipleViewListViewManager__SetSortButtonImage(MultipleViewListViewManager_o *this, const MethodInfo *method)
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4CB15F2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17538/*"btn_sort_up"*/);
    sub_1C6BA08(&StringLiteral_17636/*"btn_txt_up"*/);
    sub_1C6BA08(&StringLiteral_17587/*"btn_txt_new"*/);
    sub_1C6BA08(&StringLiteral_17577/*"btn_txt_down"*/);
    sub_1C6BA08(&StringLiteral_17594/*"btn_txt_old"*/);
    sub_1C6BA08(&StringLiteral_17535/*"btn_sort_down"*/);
    byte_4CB15F2 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17594/*"btn_txt_old"*/ : &StringLiteral_17587/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17636/*"btn_txt_up"*/ : &StringLiteral_17577/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C6BC60(sort, v4);
  }
}


void MultipleViewListViewManager__UpdateDisplayState(
        MultipleViewListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  __int64 v7; // x1
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB15F7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    byte_4CB15F7 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_13;
      naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
      if ( v10.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (MultipleViewListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1C6BFFC(v10.fields._current);
LABEL_13:
        sub_1C6BC60(current, v7);
      }
      *((_BYTE *)&v10.fields._current->klass + (unsigned __int64)&qword_A8 + 4) = v6;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4CB15DB & 1) == 0 )
  {
    sub_1C6BA08(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    byte_4CB15DB = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1C6BFFC(v7);
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

  if ( (byte_4CB15DD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB15DD = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1C6BFFC(v7);
  MultipleViewListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MultipleViewListViewObject__o *MultipleViewListViewManager__get_ClippingObjectList(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CB15E2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB15E2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C6BC60(0, v10);
      Item = (ListViewItem_o *)MultipleViewListViewObject__GetItem(
                                 (MultipleViewListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C6BC60(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_44066648((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C6BC60(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C6BC60(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C6BC60(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v3;
}


System_Collections_Generic_List_MultipleViewListViewObject__o *MultipleViewListViewManager__get_ObjectList(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB15E1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB15E1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CB15DC & 1) == 0 )
  {
    sub_1C6BA08(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    byte_4CB15DC = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1C6BFFC(v7);
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

  if ( (byte_4CB15DE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB15DE = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C6BFFC(v7);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9AE00;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9ADA8;
}


System_IAsyncResult_o *MultipleViewListViewManager_CallbackFunc__BeginInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CB15FA & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&MultipleViewListViewManager_ResultKind_TypeInfo);
    byte_4CB15FA = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(MultipleViewListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void MultipleViewListViewManager_CallbackFunc__EndInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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

  if ( (byte_4CB15FB & 1) == 0 )
  {
    sub_1C6BA08(&MultipleViewListViewManager___c_TypeInfo);
    byte_4CB15FB = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(MultipleViewListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MultipleViewListViewManager___c_TypeInfo->static_fields->__9 = (struct MultipleViewListViewManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)MultipleViewListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  ListViewItem_o *v3; // x20
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  MultipleViewListViewManager___c__DisplayClass27_0_o *v9; // x0
  ListViewItem_o *v10; // x1
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4CB15FC & 1) == 0 )
  {
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB15FC = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)MultipleViewListViewItem_TypeInfo;
  naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MultipleViewListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != MultipleViewListViewItem_TypeInfo )
  {
    v9 = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1C6BFFC(v3);
    return MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(v9, v10, v11);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1C6BC60(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v12, 0) == v4->fields.latestSelectedUsrSvtId;
}


bool MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
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

  v3 = item;
  v4 = this;
  if ( (byte_4CB15FD & 1) == 0 )
  {
    sub_1C6BA08(&MultipleViewListViewItem_TypeInfo);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB15FD = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  item = (ListViewItem_o *)MultipleViewListViewItem_TypeInfo;
  naturalAligment = MultipleViewListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (MultipleViewListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] == MultipleViewListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v14;
      this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                                      &v13,
                                                                      0);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (MultipleViewListViewManager___c__DisplayClass27_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1C6BC60(this, item);
  }
  v10 = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1C6BFFC(v3);
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
  if ( (byte_4CB15FE & 1) == 0 )
  {
    this = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB15FE = 1;
  }
  servantItem = v4->fields.servantItem;
  if ( !servantItem || (userSvtEntity = servantItem->fields.userSvtEntity) == 0 )
    sub_1C6BC60(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v9, 0) == id;
}