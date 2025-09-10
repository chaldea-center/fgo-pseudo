void FavoriteChangeListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19

  if ( (byte_4C22279 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewManager_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&StringLiteral_6640/*"FavoriteChange1"*/);
    byte_4C22279 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v1, (System_String_o *)StringLiteral_6640/*"FavoriteChange1"*/, 3, 0, 0);
  FavoriteChangeListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C2D434(FavoriteChangeListViewManager_TypeInfo->static_fields);
}


void FavoriteChangeListViewManager___ctor(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void FavoriteChangeListViewManager__ChangeIconScale(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v5; // w8
  struct ListViewItemSeed_o **p_seed; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  scaleType = this->fields.scaleType;
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
    this->fields.seed = smallSizeSeed;
    p_seed = &this->fields.seed;
    *((_DWORD *)p_seed + 77) = v5;
    sub_1C2D434(p_seed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        FavoriteChangeListViewManager__ModifyList(this, 1, v8),
        FavoriteChangeListViewManager__SetMode_32901224(this, 2, v9),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C2D6EC(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void FavoriteChangeListViewManager__CreateList(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x28
  __int64 Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x0
  UserServantMaster_o *v7; // x21
  Il2CppObject *v8; // x22
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  int32_t svtKeep; // w26
  FavoriteChangeListViewManager_c *v11; // x0
  struct ListViewSort_o **p_sort; // x27
  UnityEngine_Object_o *infoDataLabel; // x23
  UILabel_o *v14; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_String_o *v18; // x24
  Il2CppObject *v19; // x25
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  __int64 favoriteUserSvtId; // x26
  System_Collections_Generic_List_object__o *v25; // x23
  System_Collections_Generic_List_object__o *v26; // x24
  __int64 v27; // x2
  int monitor; // w8
  unsigned int v29; // w21
  __int64 v30; // x25
  __int128 v31; // q0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  void *v36; // x8
  int32_t v37; // w23
  System_Collections_Generic_IEnumerable_T__c **v38; // x24
  System_Collections_Generic_IEnumerable_T__c *v39; // x8
  UserServantEntity_o **v40; // x24
  System_Collections_Generic_IEnumerable_T__c *v41; // t1
  Il2CppType byval_arg; // q0
  __int64 v43; // x25
  UserServantEntity_o *v44; // x26
  System_Int64_array *v45; // x27
  UserGameEntity_o *v46; // x20
  int64_t v47; // x28
  FavoriteChangeListViewItem_o *v48; // x24
  const MethodInfo *v49; // x5
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v55; // x20
  UILabel_o *v56; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v59; // x1
  struct ListViewSort_o **v60; // [xsp+0h] [xbp-F0h]
  __int64 v61; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-A0h] BYREF
  int32_t v65; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C22264 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&FavoriteChangeListViewManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11601/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C2D490(&StringLiteral_11561/*"SERVANT_ALL_EMPTY"*/);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C2D490(&StringLiteral_12000/*"SERVANT_TAKE"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C22264 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v7 = (UserServantMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
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
  Instance = (__int64)UserServantMaster__getOrganizationList(v7, 0);
  if ( !SelfUserGame )
    goto LABEL_81;
  v9 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_TAKE"*/, 0);
  v11 = FavoriteChangeListViewManager_TypeInfo;
  v61 = StringLiteral_11601/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v11 = FavoriteChangeListViewManager_TypeInfo;
  }
  this->fields.sort = v11->static_fields->servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C2D434(&this->fields.sort);
  Instance = (__int64)this->fields.sort;
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
    v14 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
    if ( !v9 )
      goto LABEL_81;
    v18 = (System_String_o *)Instance;
    LODWORD(v64.fields.currentCryptoKey) = v9[1].monitor;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v15, v16, v17);
    v65 = svtKeep;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v20, v21, v22);
    Instance = (__int64)System_String__Format_63499156(v18, v19, v23, 0);
    if ( !v14 )
      goto LABEL_81;
    UILabel__set_text(v14, (System_String_o *)Instance, 0);
  }
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v25,
    v9,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( favoriteUserSvtId >= 1 )
  {
    if ( !v9 )
      goto LABEL_81;
    monitor = (int)v9[1].monitor;
    if ( monitor >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= monitor )
LABEL_82:
          sub_1C2D6F4(Instance, v5, v27);
        v30 = *((_QWORD *)&v9[2].klass + (int)v29);
        if ( !v30 )
          break;
        v31 = *(_OWORD *)(v30 + 32);
        *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
        *(_OWORD *)&v64.fields.fakeValue = v31;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v63 = v64;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v63, 0);
        if ( Instance == favoriteUserSvtId )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v30,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v30;
            Instance = sub_1C2D434(v35 + 4);
          }
          if ( !v25 )
            break;
          Instance = System_Collections_Generic_List_object___Remove(
                       v25,
                       (Il2CppObject *)v30,
                       (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        monitor = (int)v9[1].monitor;
        if ( (int)++v29 >= monitor )
          goto LABEL_45;
      }
LABEL_81:
      sub_1C2D6EC(Instance, v5);
    }
LABEL_45:
    if ( !v26 )
      goto LABEL_81;
    System_Collections_Generic_List_object___AddRange(
      v26,
      (System_Collections_Generic_IEnumerable_T__o *)v25,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v26,
                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    v9 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
    p_sort = &this->fields.sort;
  }
  if ( !v9 )
    goto LABEL_81;
  v36 = v9[1].monitor;
  if ( (int)v36 >= 1 )
  {
    v60 = p_sort;
    v37 = 0;
    do
    {
      if ( v37 >= (unsigned int)v36 )
        goto LABEL_82;
      v38 = &v9->klass + v37;
      v41 = v38[4];
      v40 = (UserServantEntity_o **)(v38 + 4);
      v39 = v41;
      if ( !v41 )
        goto LABEL_81;
      byval_arg = v39->_1.byval_arg;
      *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v39->_1.name;
      *(Il2CppType *)&v64.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v62 = v64;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v62, 0);
      if ( (unsigned int)v37 >= LODWORD(v9[1].monitor) )
        goto LABEL_82;
      v43 = Instance;
      v44 = *v40;
      v45 = svtIdList;
      v46 = SelfUserGame;
      v47 = SelfUserGame->fields.favoriteUserSvtId;
      v48 = (FavoriteChangeListViewItem_o *)sub_1C2D6DC(FavoriteChangeListViewItem_TypeInfo);
      FavoriteChangeListViewItem___ctor(v48, v37, v44, v45, v43 == v47, v49);
      Instance = (__int64)this->fields.itemList;
      if ( !Instance )
        goto LABEL_81;
      v50 = *(_QWORD *)(Instance + 16);
      v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v50 )
        goto LABEL_81;
      v52 = *(int *)(Instance + 24);
      SelfUserGame = v46;
      if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v48,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = v50 + 8 * v52;
        *(_DWORD *)(Instance + 24) = v52 + 1;
        *(_QWORD *)(v53 + 32) = v48;
        Instance = sub_1C2D434(v53 + 32);
      }
      v36 = v9[1].monitor;
      ++v37;
    }
    while ( v37 < (int)v36 );
    p_sort = v60;
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v36 )
    v55 = (System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v55 = (System_String_o *)v61;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v56 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager__Get(v55, 0);
    if ( !v56 )
      goto LABEL_81;
    UILabel__set_text(v56, (System_String_o *)Instance, 0);
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
    sub_1C2D434(&this->fields.seed);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  FavoriteChangeListViewManager__SetFilterButtonImage(this, v59);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void FavoriteChangeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C22260 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewManager_TypeInfo);
    byte_4C22260 = 1;
  }
  v2 = FavoriteChangeListViewManager_TypeInfo;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v2 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C2D6EC(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void FavoriteChangeListViewManager__DestroyList(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C2226D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2226D = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    FavoriteChangeListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C2D6EC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void FavoriteChangeListViewManager__EndSelectSortKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C22270 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22270 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C22273 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C22273 = 1;
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
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4C22265 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C22265 = 1;
  }
  result = (FavoriteChangeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FavoriteChangeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(0, method);
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
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array **v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]

  if ( (byte_4C22275 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22275 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 120);
      if ( v14 && *(_BYTE *)(itemList + 170) )
      {
        if ( *(_BYTE *)(itemList + 166) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v29 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *choiceList = 0;
    sub_1C2D434(choiceList);
    v27 = unchoiceList;
    *unchoiceList = 0;
  }
  else
  {
    *choiceList = System_Collections_Generic_List_long___ToArray(
                    v7,
                    (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D434(choiceList);
    *unchoiceList = System_Collections_Generic_List_long___ToArray(
                      v8,
                      (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v27 = unchoiceList;
  }
  sub_1C2D434(v27);
  return v26 > 0;
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
  int64_t itemList; // x0
  int v11; // w25
  int32_t v12; // w24
  __int64 naturalAligment; // x10
  __int64 v14; // x8
  __int128 v15; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_long__o *v25; // x0
  int v26; // w21
  System_Int64_array **v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]

  if ( (byte_4C22274 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22274 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v11 = *(_DWORD *)(itemList + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v12,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 120);
      if ( v14 && *(_BYTE *)(itemList + 169) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v31.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v29 = v31;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            v24 = v22[4];
            v25 = v7;
            goto LABEL_27;
          }
          v19 = &v21->obj.klass + v23;
          v7->fields._size = v23 + 1;
        }
        v19[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v11 == ++v12 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *lockList = 0;
    sub_1C2D434(lockList);
    v27 = unlockList;
    *unlockList = 0;
  }
  else
  {
    *lockList = System_Collections_Generic_List_long___ToArray(
                  v7,
                  (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D434(lockList);
    *unlockList = System_Collections_Generic_List_long___ToArray(
                    v8,
                    (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v27 = unlockList;
  }
  sub_1C2D434(v27);
  return v26 > 0;
}


void FavoriteChangeListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  FavoriteChangeListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C22261 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewManager_TypeInfo);
    byte_4C22261 = 1;
  }
  v2 = FavoriteChangeListViewManager_TypeInfo;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo);
    v2 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C2D6EC(0, v1);
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
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 naturalAligment; // x11
  FavoriteChangeListViewItem_o *current; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v14; // q0
  int64_t v15; // x0
  Il2CppObject v16; // q0
  int64_t v17; // x23
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q0
  int64_t v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v24; // x1
  struct ListViewObject_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4C22266 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22266 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_43;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v30.fields._list = *(_OWORD *)&v29.fields.currentCryptoKey;
      v30.fields._current = (Il2CppObject *)v29.fields.fakeValue;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v30,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v30,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v30.fields._current
          && (naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment,
              v30.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (FavoriteChangeListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
            current = (FavoriteChangeListViewItem_o *)v30.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1C2D6EC(v9, v10);
            userSvtEntity = current->fields.userSvtEntity;
            if ( !userSvtEntity )
              sub_1C2D6EC(v9, v10);
            v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v29.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v28 = v29;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v28, 0);
            v16 = Entity[2];
            v17 = v15;
            *(Il2CppObject *)&v27.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v27.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v27, 0);
            if ( v17 == v9 )
            {
              current->fields.userSvtEntity = (struct UserServantEntity_o *)Entity;
              v9 = sub_1C2D434(&current->fields.userSvtEntity);
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
          sub_1C2D6EC(v9, v10);
LABEL_26:
        v18 = current->fields.userSvtEntity;
        if ( !v18 )
          sub_1C2D6EC(v9, v10);
        v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v29;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
        if ( !SelfUserGame )
          sub_1C2D6EC(v20, v21);
        FavoriteChangeListViewItem__ModifyItem(current, v20 == SelfUserGame->fields.favoriteUserSvtId, v22);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
        {
          v25 = current->fields.viewObject;
          if ( !v25 )
            sub_1C2D6EC(0, v24);
          ((void (__fastcall *)(struct ListViewObject_o *, FavoriteChangeListViewItem_o *, const MethodInfo *))v25->klass->vtable._5_SetItem.methodPtr)(
            v25,
            current,
            v25->klass->vtable._5_SetItem.method);
        }
      }
    }
LABEL_43:
    sub_1C2D6EC(Instance, v5);
  }
}


void FavoriteChangeListViewManager__ModifyList(
        FavoriteChangeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int v8; // w8
  int64_t v9; // x20
  unsigned int v10; // w25
  bool v11; // w21
  __int64 v12; // x8
  __int128 v13; // q0
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v15; // x23
  int32_t v16; // w24
  FavoriteChangeListViewItem_o *v17; // x22
  __int64 naturalAligment; // x10
  __int64 v19; // x8
  __int128 v20; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  const MethodInfo *v24; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+60h] [xbp-80h]

  if ( (byte_4C22276 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22276 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_30;
  v8 = *(_DWORD *)(Instance + 24);
  v9 = Instance;
  if ( v8 >= 1 )
  {
    v10 = 0;
    v11 = isIconSizeChange;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1C2D6F4(Instance, v6, v7);
      v12 = *(_QWORD *)(v9 + 8LL * (int)v10 + 32);
      if ( !v12 )
        break;
      v13 = *(_OWORD *)(v12 + 32);
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v28.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v28;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v27, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v15 = Instance;
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= itemList->fields._size )
          goto LABEL_28;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              itemList,
                              v16,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_30;
        v17 = (FavoriteChangeListViewItem_o *)Instance;
        naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
          || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        v19 = *(_QWORD *)(Instance + 120);
        if ( v19 )
        {
          v20 = *(_OWORD *)(v19 + 32);
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
          *(_OWORD *)&v28.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v28;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
          if ( Instance == v15 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v16;
        if ( !itemList )
          goto LABEL_30;
      }
      userSvtEntity = v17->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v25 = v28;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v25, 0);
      FavoriteChangeListViewManager__ModifyLockItem(this, v17, v23, 1, v11, v24);
LABEL_28:
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_30:
    sub_1C2D6EC(Instance, v6);
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
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4C22278 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (FavoriteChangeListViewManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22278 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (FavoriteChangeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !favoriteItem )
        goto LABEL_26;
      userSvtEntity = favoriteItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v21.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v20 = v21;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v20, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (FavoriteChangeListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v19.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v19.fields.fakeValue = v15;
      this = (FavoriteChangeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                  &v19,
                                                  0);
      if ( v16 == this )
      {
        favoriteItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        this = (FavoriteChangeListViewManager_o *)sub_1C2D434(&favoriteItem->fields.userSvtEntity);
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
    FavoriteChangeListViewItem__ModifyChoiceItem(favoriteItem, v17);
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
    sub_1C2D6EC(this, favoriteItem);
  }
}


void FavoriteChangeListViewManager__OnClickFavoriteDecide(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C2D434(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C2226C & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FavoriteChangeListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_FavoriteChangeListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2226C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FavoriteChangeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  v5 = sub_1C2D434(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C22271 & 1) == 0 )
  {
    sub_1C2D490(&Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__);
    byte_4C22271 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C2226F & 1) == 0 )
  {
    sub_1C2D490(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FavoriteChangeListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_FavoriteChangeListViewManager_OnClickSortKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2226F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_FavoriteChangeListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int Index; // w0

  if ( (byte_4C2226B & 1) == 0 )
  {
    sub_1C2D490(&Method_FavoriteChangeListViewManager_OnLongPushListView__);
    byte_4C2226B = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_1C2D434(&this->fields.callbackFunc);
      if ( !callbackFunc )
        return;
      v7 = Method_FavoriteChangeListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C2D4A8(Method_FavoriteChangeListViewManager_OnLongPushListView__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
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
    sub_1C2D6EC(scrollView, obj);
  }
}


void FavoriteChangeListViewManager__OnMoveEnd(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C2226A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2226A = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434(&this->fields.callbackFunc2);
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

  if ( (byte_4C22268 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_1C2D490(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C22268 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v7 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                      this,
                                                      *(const MethodInfo **)&mode);
  if ( !v7 )
    sub_1C2D6EC(0, v8);
  size = v7->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v7,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      FavoriteChangeListViewObject__Init_32902460((FavoriteChangeListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewManager__RequestListObject_32901432(
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

  if ( (byte_4C22269 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_1C2D490(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C22269 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v5 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                      this,
                                                      *(const MethodInfo **)&mode);
  if ( !v5 )
    sub_1C2D6EC(0, v6);
  size = v5->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      v5,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      FavoriteChangeListViewObject__Init_32902544((FavoriteChangeListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


void FavoriteChangeListViewManager__SetFilterButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4C2226E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C2226E = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C2D6EC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17480/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17481/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void FavoriteChangeListViewManager__SetMode(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        FavoriteChangeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_32901224(this, mode, v6);
}


void FavoriteChangeListViewManager__SetMode_32901224(
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
    sub_1C2D6EC(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    FavoriteChangeListViewManager__RequestListObject_32901432(this, mode + 1, v7);
}


void FavoriteChangeListViewManager__SetMode_32901380(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434(&this->fields.callbackFunc2);
  FavoriteChangeListViewManager__SetMode_32901224(this, mode, v6);
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
  if ( (byte_4C22267 & 1) == 0 )
  {
    this = (FavoriteChangeListViewManager_o *)sub_1C2D490(&FavoriteChangeListViewObject_TypeInfo);
    byte_4C22267 = 1;
  }
  if ( !obj
    || (naturalAligment = FavoriteChangeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (FavoriteChangeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FavoriteChangeListViewObject__Init_32901152((FavoriteChangeListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4C22272 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C22272 = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17573/*"btn_txt_old"*/ : &StringLiteral_17566/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17615/*"btn_txt_up"*/ : &StringLiteral_17556/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17517/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17514/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C2D6EC(sort, v4);
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

  if ( (byte_4C22277 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C22277 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_13;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( v10.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FavoriteChangeListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1C2D9AC(v10.fields._current);
LABEL_13:
        sub_1C2D6EC(current, v7);
      }
      *((_BYTE *)&v10.fields._current->klass + (unsigned __int64)&qword_A8 + 4) = v6;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C2225C & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_4C2225C = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C2225E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2225E = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1C2D9AC(v7);
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C22263 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22263 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      v12 = (ListViewItem_o *)FavoriteChangeListViewObject__GetItem(
                                (FavoriteChangeListViewObject_o *)Component_object,
                                v10);
      if ( !v12 )
        sub_1C2D6EC(0, v13);
      if ( v12->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, v12, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C2D6EC(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(v12, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(v12, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C2D434(v19 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C22262 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22262 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C2D434(v14 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C2225D & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_4C2225D = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1C2D9AC(v7);
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

  if ( (byte_4C2225F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2225F = 1;
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
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C2D9AC(v7);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6A6F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6A69C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *FavoriteChangeListViewManager_CallbackFunc__BeginInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C2227A & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&FavoriteChangeListViewManager_ResultKind_TypeInfo);
    byte_4C2227A = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             FavoriteChangeListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void FavoriteChangeListViewManager_CallbackFunc__EndInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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