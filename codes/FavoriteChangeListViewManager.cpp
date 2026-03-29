void FavoriteChangeListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B7AA & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_TypeInfo);
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&StringLiteral_6676/*"FavoriteChange1"*/);
    byte_4D2B7AA = 1;
  }
  v1 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v1, (System_String_o *)StringLiteral_6676/*"FavoriteChange1"*/, 3, 0, 0);
  FavoriteChangeListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)FavoriteChangeListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FavoriteChangeListViewManager___ctor(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void FavoriteChangeListViewManager__ChangeIconScale(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v11; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

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
    this->fields.seed = smallSizeSeed;
    p_seed = &this->fields.seed;
    *((_DWORD *)p_seed + 77) = v11;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        FavoriteChangeListViewManager__ModifyList(this, 1, v14),
        FavoriteChangeListViewManager__SetMode_33601088(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C93D2C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void FavoriteChangeListViewManager__CreateList(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x28
  int64_t Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  UserServantMaster_o *v7; // x21
  Il2CppObject *v8; // x22
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  int32_t svtKeep; // w26
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  FavoriteChangeListViewManager_c *v17; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v19; // x1
  struct ListViewSort_o **p_sort; // x27
  UnityEngine_Object_o *infoDataLabel; // x23
  UILabel_o *v22; // x23
  System_String_o *v23; // x24
  Il2CppObject *v24; // x25
  Il2CppObject *v25; // x0
  __int64 favoriteUserSvtId; // x26
  System_Collections_Generic_List_object__o *v27; // x23
  System_Collections_Generic_List_object__o *v28; // x24
  int monitor; // w8
  unsigned int v30; // w21
  __int64 v31; // x25
  __int128 v32; // q0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  void *v43; // x8
  int32_t v44; // w23
  System_Collections_Generic_IEnumerable_T__c **v45; // x24
  System_Collections_Generic_IEnumerable_T__c *v46; // x8
  UserServantEntity_o **v47; // x24
  System_Collections_Generic_IEnumerable_T__c *v48; // t1
  Il2CppType byval_arg; // q0
  int64_t v50; // x25
  UserServantEntity_o *v51; // x26
  System_Int64_array *v52; // x27
  UserGameEntity_o *v53; // x20
  int64_t v54; // x28
  FavoriteChangeListViewItem_o *v55; // x24
  const MethodInfo *v56; // x5
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UILabel_o *v75; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v78; // x1
  struct ListViewSort_o **v79; // [xsp+0h] [xbp-F0h]
  __int64 v80; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+50h] [xbp-A0h] BYREF
  int32_t v84; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4D2B795 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&FavoriteChangeListViewManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___79025344);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_11655/*"SERVANT_ALL_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_12094/*"SERVANT_TAKE"*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2B795 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v7 = (UserServantMaster_o *)MasterData_object;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_81;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v8,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !v7 )
    goto LABEL_81;
  Instance = (int64_t)UserServantMaster__getOrganizationList(v7, 0);
  if ( !SelfUserGame )
    goto LABEL_81;
  v9 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SERVANT_TAKE"*/, 0);
  v17 = FavoriteChangeListViewManager_TypeInfo;
  v80 = StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v17 = FavoriteChangeListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v17->static_fields->servantSortInfo;
  v19 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v19, v11, v12, v13, v14, v15, v16);
  Instance = (int64_t)this->fields.sort;
  if ( !Instance )
    goto LABEL_81;
  ListViewSort__Load((ListViewSort_o *)Instance, 0);
  if ( !*p_sort )
    goto LABEL_81;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
  {
    v22 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUM_INFO"*/, 0);
    if ( !v9 )
      goto LABEL_81;
    v23 = (System_String_o *)Instance;
    LODWORD(v83.fields.currentCryptoKey) = v9[1].monitor;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
    v84 = svtKeep;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
    Instance = (int64_t)System_String__Format_64467032(v23, v24, v25, 0);
    if ( !v22 )
      goto LABEL_81;
    UILabel__set_text(v22, (System_String_o *)Instance, 0);
  }
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v27 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v27,
    v9,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___79025344);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( favoriteUserSvtId >= 1 )
  {
    if ( !v9 )
      goto LABEL_81;
    monitor = (int)v9[1].monitor;
    if ( monitor >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= monitor )
LABEL_82:
          sub_1C93D34(Instance);
        v31 = *((_QWORD *)&v9[2].klass + (int)v30);
        if ( !v31 )
          break;
        v32 = *(_OWORD *)(v31 + 32);
        *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v31 + 16);
        *(_OWORD *)&v83.fields.fakeValue = v32;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v82 = v83;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v82, 0);
        if ( Instance == favoriteUserSvtId )
        {
          if ( !v28 )
            break;
          items = v28->fields._items;
          v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v28->fields._version;
          if ( !items )
            break;
          size = v28->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)v31,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v31;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 4), v31, v33, v34, v35, v36, v37, v38);
          }
          if ( !v27 )
            break;
          Instance = System_Collections_Generic_List_object___Remove(
                       v27,
                       (Il2CppObject *)v31,
                       (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        monitor = (int)v9[1].monitor;
        if ( (int)++v30 >= monitor )
          goto LABEL_45;
      }
LABEL_81:
      sub_1C93D2C(Instance, v5);
    }
LABEL_45:
    if ( !v28 )
      goto LABEL_81;
    System_Collections_Generic_List_object___AddRange(
      v28,
      (System_Collections_Generic_IEnumerable_T__o *)v27,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    Instance = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v28,
                          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    v9 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
    p_sort = &this->fields.sort;
  }
  if ( !v9 )
    goto LABEL_81;
  v43 = v9[1].monitor;
  if ( (int)v43 >= 1 )
  {
    v79 = p_sort;
    v44 = 0;
    do
    {
      if ( v44 >= (unsigned int)v43 )
        goto LABEL_82;
      v45 = &v9->klass + v44;
      v48 = v45[4];
      v47 = (UserServantEntity_o **)(v45 + 4);
      v46 = v48;
      if ( !v48 )
        goto LABEL_81;
      byval_arg = v46->_1.byval_arg;
      *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v46->_1.name;
      *(Il2CppType *)&v83.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v81 = v83;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v81, 0);
      if ( (unsigned int)v44 >= LODWORD(v9[1].monitor) )
        goto LABEL_82;
      v50 = Instance;
      v51 = *v47;
      v52 = svtIdList;
      v53 = SelfUserGame;
      v54 = SelfUserGame->fields.favoriteUserSvtId;
      v55 = (FavoriteChangeListViewItem_o *)sub_1C93D20(FavoriteChangeListViewItem_TypeInfo);
      FavoriteChangeListViewItem___ctor(v55, v44, v51, v52, v50 == v54, v56);
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_81;
      v63 = *(_QWORD *)(Instance + 16);
      v64 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v63 )
        goto LABEL_81;
      v65 = *(int *)(Instance + 24);
      SelfUserGame = v53;
      if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v55,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = v63 + 8 * v65;
        *(_DWORD *)(Instance + 24) = v65 + 1;
        *(_QWORD *)(v66 + 32) = v55;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)v55, v57, v58, v59, v60, v61, v62);
      }
      v43 = v9[1].monitor;
      ++v44;
    }
    while ( v44 < (int)v43 );
    p_sort = v79;
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v43 )
    v68 = (System_String_o *)StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v68 = (System_String_o *)v80;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v75 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get(v68, 0);
    if ( !v75 )
      goto LABEL_81;
    UILabel__set_text(v75, (System_String_o *)Instance, 0);
  }
  if ( !*p_sort )
    goto LABEL_81;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_79;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_79;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_79:
    this->fields.seed = normalSizeSeed;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  FavoriteChangeListViewManager__SetFilterButtonImage(this, v78);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void FavoriteChangeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D2B791 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_TypeInfo);
    byte_4D2B791 = 1;
  }
  v2 = FavoriteChangeListViewManager_TypeInfo;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v2 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C93D2C(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void FavoriteChangeListViewManager__DestroyList(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, v3);
  ListViewSort__Save(sort, 0);
}


void FavoriteChangeListViewManager__EndCloseSelectFilterKind(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void FavoriteChangeListViewManager__EndSelectFilterKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2B79E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B79E = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    FavoriteChangeListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C93D2C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void FavoriteChangeListViewManager__EndSelectSortKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2B7A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B7A1 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t FavoriteChangeListViewManager__GetAmountSortValue(
        FavoriteChangeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4D2B7A4 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B7A4 = 1;
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
                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FavoriteChangeListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewItem_TypeInfo )
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
    sub_1C93D2C(itemList, *(_QWORD *)&svtId);
  }
  return 0;
}


FavoriteChangeListViewItem_o *FavoriteChangeListViewManager__GetItem(
        FavoriteChangeListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FavoriteChangeListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D2B796 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D2B796 = 1;
  }
  result = (FavoriteChangeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FavoriteChangeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (FavoriteChangeListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewItem_TypeInfo )
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


System_String_o *FavoriteChangeListViewManager__GetScaleButtonSpriteName(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool FavoriteChangeListViewManager__GetSwapChoiceList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D2B7A6 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2B7A6 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 170) )
      {
        if ( *(_BYTE *)(itemList + 166) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C93D2C(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *choiceList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unchoiceList;
    v47 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unchoiceList = v40;
    v48 = unchoiceList;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


bool FavoriteChangeListViewManager__GetSwapLockList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  int64_t v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  __int128 v26; // q0
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_long__o *v31; // x0
  int v32; // w21
  System_Int64_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4D2B7A5 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2B7A5 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 169) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v51, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v30 = v23[4];
            v31 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v31,
              v9,
              *(const MethodInfo_38619D0 **)(*(_QWORD *)(v30 + 192) + 112LL));
            goto LABEL_28;
          }
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v26 = *(_OWORD *)(v20 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v20 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
          if ( !v7 )
            goto LABEL_37;
          v27 = v7->fields._items;
          v28 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v27 )
            goto LABEL_37;
          v29 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            v30 = v28[4];
            v31 = v7;
            goto LABEL_27;
          }
          v25 = &v27->obj.klass + v29;
          v7->fields._size = v29 + 1;
        }
        v25[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C93D2C(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *lockList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unlockList;
    v47 = 0;
    *unlockList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unlockList = v40;
    v48 = unlockList;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


void FavoriteChangeListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D2B792 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_TypeInfo);
    byte_4D2B792 = 1;
  }
  v2 = FavoriteChangeListViewManager_TypeInfo;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v2 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C93D2C(0, v1);
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void FavoriteChangeListViewManager__ModifyItem(
        FavoriteChangeListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  _OWORD *v24; // x8
  __int128 v25; // q0
  int64_t v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *klass; // x22
  __int64 v30; // x1
  Il2CppClass *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4D2B797 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B797 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_43;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v36 = *(System_Collections_Generic_List_Enumerator_object__o *)&v35.fields.currentCryptoKey;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v36,
               (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v36,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v36.fields._current
          && (naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment,
              v36.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (FavoriteChangeListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
            current = v36.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1C93D2C(v9, v10);
            monitor = current[7].monitor;
            if ( !monitor )
              sub_1C93D2C(v9, v10);
            v14 = monitor[2];
            *(_OWORD *)&v35.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v35.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v34 = v35;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v34, 0);
            v16 = Entity[2];
            v17 = v15;
            *(Il2CppObject *)&v33.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v33.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v33, 0);
            if ( v17 == v9 )
            {
              current[7].monitor = Entity;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&current[7].monitor,
                (int32_t)Entity,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
            }
            goto LABEL_26;
          }
        }
        else
        {
          current = 0;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_1C93D2C(v9, v10);
LABEL_26:
        v24 = current[7].monitor;
        if ( !v24 )
          sub_1C93D2C(v9, v10);
        v25 = v24[2];
        *(_OWORD *)&v35.fields.currentCryptoKey = v24[1];
        *(_OWORD *)&v35.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v35;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v32, 0);
        if ( !SelfUserGame )
          sub_1C93D2C(v26, v27);
        FavoriteChangeListViewItem__ModifyItem(
          (FavoriteChangeListViewItem_o *)current,
          v26 == SelfUserGame->fields.favoriteUserSvtId,
          v28);
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v31 = current[7].klass;
          if ( !v31 )
            sub_1C93D2C(0, v30);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v31->_1.image + 49))(
            v31,
            current,
            *((_QWORD *)v31->_1.image + 50));
        }
      }
    }
LABEL_43:
    sub_1C93D2C(Instance, v5);
  }
}


void FavoriteChangeListViewManager__ModifyList(
        FavoriteChangeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
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
  FavoriteChangeListViewItem_o *v16; // x22
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

  if ( (byte_4D2B7A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B7A7 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_30;
  v7 = *(_DWORD *)(Instance + 24);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v10 = isIconSizeChange;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C93D34(Instance);
      v11 = *(_QWORD *)(v8 + 8LL * (int)v9 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v26, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v14 = Instance;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= itemList->fields._size )
          goto LABEL_28;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              itemList,
                              v15,
                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_30;
        v16 = (FavoriteChangeListViewItem_o *)Instance;
        naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
          || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        v18 = *(_QWORD *)(Instance + 120);
        if ( v18 )
        {
          v19 = *(_OWORD *)(v18 + 32);
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
          *(_OWORD *)&v27.fields.fakeValue = v19;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v25 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v25, 0);
          if ( Instance == v14 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v15;
        if ( !itemList )
          goto LABEL_30;
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
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v24, 0);
      FavoriteChangeListViewManager__ModifyLockItem(this, v16, v22, 1, v10, v23);
LABEL_28:
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_30:
    sub_1C93D2C(Instance, v6);
  }
}


void FavoriteChangeListViewManager__ModifyLockItem(
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
  __int128 v15; // q1
  FavoriteChangeListViewManager_o *v16; // x25
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4D2B7A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (FavoriteChangeListViewManager_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B7A9 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (FavoriteChangeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !favoriteItem )
        goto LABEL_26;
      userSvtEntity = favoriteItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v26, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (FavoriteChangeListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v25.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v25.fields.fakeValue = v15;
      this = (FavoriteChangeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                  &v25,
                                                  0);
      if ( v16 == this )
      {
        favoriteItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&favoriteItem->fields.userSvtEntity,
          (int32_t)v13,
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
      goto LABEL_26;
  }
  else
  {
    if ( !favoriteItem )
      goto LABEL_26;
    FavoriteChangeListViewItem__ModifyLockItem(favoriteItem, (const MethodInfo *)favoriteItem);
    FavoriteChangeListViewItem__ModifyChoiceItem(favoriteItem, v23);
  }
  viewObject = (UnityEngine_Object_o *)favoriteItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    this = (FavoriteChangeListViewManager_o *)favoriteItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(FavoriteChangeListViewManager_o *, FavoriteChangeListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
        this,
        favoriteItem,
        this->klass->vtable._5_SetSortButtonImage.method);
      if ( !isIconSizeChange )
        return;
      this = (FavoriteChangeListViewManager_o *)favoriteItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)favoriteItem, v10->fields.seed, 0);
        return;
      }
    }
LABEL_26:
    sub_1C93D2C(this, favoriteItem);
  }
}


void FavoriteChangeListViewManager__OnClickFavoriteDecide(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C93D2C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void FavoriteChangeListViewManager__OnClickFilterKind(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D2B79D & 1) == 0 )
  {
    sub_1C93AD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_EndSelectFilterKind__);
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_OnClickFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B79D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C93D2C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 8, sort, v8, -1, 0);
  }
}


void FavoriteChangeListViewManager__OnClickListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void FavoriteChangeListViewManager__OnClickSelectListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C93D2C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      3,
      Index,
      callbackFunc->fields.method);
  }
}


void FavoriteChangeListViewManager__OnClickSortAscendingOrder(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D2B7A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__);
    byte_4D2B7A2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C93D2C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void FavoriteChangeListViewManager__OnClickSortKind(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D2B7A0 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_EndSelectSortKind__);
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_OnClickSortKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B7A0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C93D2C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0);
  }
}


void FavoriteChangeListViewManager__OnLongPushListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  unsigned int Index; // w0

  if ( (byte_4D2B79C & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_OnLongPushListView__);
    byte_4D2B79C = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      v13 = Method_FavoriteChangeListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeListViewManager_OnLongPushListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          2,
          Index,
          callbackFunc->fields.method);
        return;
      }
    }
    sub_1C93D2C(scrollView, obj);
  }
}


void FavoriteChangeListViewManager__OnMoveEnd(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D2B79B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B79B = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewManager__RequestListObject(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2B799 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2B799 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v7 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                      this,
                                                      *(const MethodInfo **)&mode);
  if ( !v7 )
    sub_1C93D2C(0, v8);
  size = v7->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v7,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v12, v13);
      FavoriteChangeListViewObject__Init_33615888((FavoriteChangeListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewManager__RequestListObject_33614860(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2B79A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_1C93AD4(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2B79A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v5 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                      this,
                                                      *(const MethodInfo **)&mode);
  if ( !v5 )
    sub_1C93D2C(0, v6);
  size = v5->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      v5,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      FavoriteChangeListViewObject__Init_33615972((FavoriteChangeListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


void FavoriteChangeListViewManager__SetFilterButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4D2B79F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17618/*"btn_filter_on"*/);
    sub_1C93AD4(&StringLiteral_17617/*"btn_filter"*/);
    byte_4D2B79F = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C93D2C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17617/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17618/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void FavoriteChangeListViewManager__SetMode(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        FavoriteChangeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_33601088(this, mode, v10);
}


void FavoriteChangeListViewManager__SetMode_33601088(
        FavoriteChangeListViewManager_o *this,
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
    sub_1C93D2C(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    FavoriteChangeListViewManager__RequestListObject_33614860(this, mode + 1, v7);
}


void FavoriteChangeListViewManager__SetMode_33614808(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_33601088(this, mode, v10);
}


void FavoriteChangeListViewManager__SetObjectItem(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D2B798 & 1) == 0 )
  {
    this = (FavoriteChangeListViewManager_o *)sub_1C93AD4(&FavoriteChangeListViewObject_TypeInfo);
    byte_4D2B798 = 1;
  }
  if ( !obj
    || (naturalAligment = FavoriteChangeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (FavoriteChangeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FavoriteChangeListViewObject__Init_33614736((FavoriteChangeListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void FavoriteChangeListViewManager__SetSortButtonImage(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4D2B7A3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17654/*"btn_sort_up"*/);
    sub_1C93AD4(&StringLiteral_17756/*"btn_txt_up"*/);
    sub_1C93AD4(&StringLiteral_17707/*"btn_txt_new"*/);
    sub_1C93AD4(&StringLiteral_17697/*"btn_txt_down"*/);
    sub_1C93AD4(&StringLiteral_17714/*"btn_txt_old"*/);
    sub_1C93AD4(&StringLiteral_17651/*"btn_sort_down"*/);
    byte_4D2B7A3 = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17714/*"btn_txt_old"*/ : &StringLiteral_17707/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17756/*"btn_txt_up"*/ : &StringLiteral_17697/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17654/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17651/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C93D2C(sort, v4);
  }
}


void FavoriteChangeListViewManager__UpdateDisplayState(
        FavoriteChangeListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  __int64 v7; // x1
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B7A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4D2B7A8 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_13;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( v10.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FavoriteChangeListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1C940C8(v10.fields._current);
LABEL_13:
        sub_1C93D2C(current, v7);
      }
      *((_BYTE *)&v10.fields._current->klass + (unsigned __int64)&qword_A8 + 4) = v6;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void FavoriteChangeListViewManager__add_callbackFunc(
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

  if ( (byte_4D2B78D & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_4D2B78D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v7->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1C940C8(v7);
  FavoriteChangeListViewManager__remove_callbackFunc(v10, v11, v12);
}


void FavoriteChangeListViewManager__add_callbackFunc2(
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

  if ( (byte_4D2B78F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2B78F = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1C940C8(v7);
  FavoriteChangeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *FavoriteChangeListViewManager__get_ClippingObjectList(
        FavoriteChangeListViewManager_o *this,
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
  ListViewItem_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2B794 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B794 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C93D2C(0, v10);
      v12 = (ListViewItem_o *)FavoriteChangeListViewObject__GetItem(
                                (FavoriteChangeListViewObject_o *)Component_object,
                                v10);
      if ( !v12 )
        sub_1C93D2C(0, v13);
      if ( v12->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44503492((ListViewManager_o *)this, v12, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C93D2C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C93D2C(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C93D2C(v12, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(v12, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v3;
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *FavoriteChangeListViewManager__get_ObjectList(
        FavoriteChangeListViewManager_o *this,
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B793 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B793 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C93D2C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v3;
}


void FavoriteChangeListViewManager__remove_callbackFunc(
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

  if ( (byte_4D2B78E & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_4D2B78E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v7->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1C940C8(v7);
  FavoriteChangeListViewManager__add_callbackFunc2(v10, v11, v12);
}


void FavoriteChangeListViewManager__remove_callbackFunc2(
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

  if ( (byte_4D2B790 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2B790 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C940C8(v7);
  FavoriteChangeListViewManager__DeleteContinueData(v10);
}


void FavoriteChangeListViewManager__setCanLongPushFlag(
        FavoriteChangeListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void FavoriteChangeListViewManager_CallbackFunc___ctor(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC0EB4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0E5C;
}


System_IAsyncResult_o *FavoriteChangeListViewManager_CallbackFunc__BeginInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4D2B7AB & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&FavoriteChangeListViewManager_ResultKind_TypeInfo);
    byte_4D2B7AB = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(FavoriteChangeListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return sub_1C93A88(this, v10, callback, object);
}


void FavoriteChangeListViewManager_CallbackFunc__EndInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void FavoriteChangeListViewManager_CallbackFunc__Invoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
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