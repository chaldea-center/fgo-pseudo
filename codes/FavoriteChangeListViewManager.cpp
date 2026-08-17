void FavoriteChangeListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B4C7 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&StringLiteral_6930/*"FavoriteChange1"*/);
    byte_596B4C7 = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_6930/*"FavoriteChange1"*/, 3, 0, 0);
  FavoriteChangeListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FavoriteChangeListViewManager_TypeInfo->static_fields,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        FavoriteChangeListViewManager__ModifyList(this, 1, v14),
        FavoriteChangeListViewManager__SetMode_39794032(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_2213CDC(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void FavoriteChangeListViewManager__CreateList(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo_47A29F8 *v7; // x0
  __int64 v8; // x2
  Il2CppObject *v9; // x22
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_T__o *v11; // x22
  int32_t svtKeep; // w21
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  FavoriteChangeListViewManager_c *v20; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v22; // x1
  struct ListViewSort_o **p_sort; // x28
  __int64 v24; // x2
  UnityEngine_Object_o *infoDataLabel; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *v28; // x23
  System_String_o *v29; // x24
  Il2CppObject *v30; // x25
  Il2CppObject *v31; // x0
  __int64 favoriteUserSvtId; // x26
  System_Collections_Generic_List_object__o *v33; // x23
  System_Collections_Generic_List_object__o *v34; // x24
  System_String_o *v35; // x2
  FavoriteChangeListViewManager_o *v36; // x28
  int monitor; // w8
  unsigned int v38; // w29
  __int64 v39; // x25
  __int128 v40; // q1
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  void *v50; // x8
  unsigned int v51; // w23
  System_Collections_Generic_IEnumerable_T__c **v52; // x24
  System_Collections_Generic_IEnumerable_T__c *v53; // x8
  UserServantEntity_o **v54; // x24
  System_Collections_Generic_IEnumerable_T__c *v55; // t1
  Il2CppType byval_arg; // q1
  int64_t v57; // x25
  UserServantEntity_o *v58; // x26
  System_Int64_array *v59; // x27
  UserGameEntity_o *v60; // x19
  int64_t v61; // x20
  FavoriteChangeListViewItem_o *v62; // x24
  const MethodInfo *v63; // x5
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v75; // x20
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  UILabel_o *v82; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v85; // x1
  struct ListViewSort_o **v86; // [xsp+0h] [xbp-F0h]
  __int64 v87; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+50h] [xbp-A0h] BYREF
  int32_t v91; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_596B4B2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&FavoriteChangeListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91670816);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    sub_2213A60(&StringLiteral_12076/*"SERVANT_ALL_EMPTY"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_2213A60(&StringLiteral_12522/*"SERVANT_TAKE"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596B4B2 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isCanNotLongPush = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v7);
  if ( !Instance )
    goto LABEL_80;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v8);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v8);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_80;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v9,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !MasterData_object )
    goto LABEL_80;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0);
  if ( !SelfUserGame )
    goto LABEL_80;
  v11 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v10);
  LocalizationManager__Get((System_String_o *)StringLiteral_12522/*"SERVANT_TAKE"*/, 0);
  v20 = FavoriteChangeListViewManager_TypeInfo;
  v87 = StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !*(&FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v13, v14);
    v20 = FavoriteChangeListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v20->static_fields->servantSortInfo;
  v22 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v22, v14, v15, v16, v17, v18, v19);
  Instance = (int64_t)this->fields.sort;
  if ( !Instance )
    goto LABEL_80;
  ListViewSort__Load((ListViewSort_o *)Instance, 0);
  if ( !*p_sort )
    goto LABEL_80;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v24);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
  {
    v28 = this->fields.infoDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
    if ( !v11 )
      goto LABEL_80;
    v29 = (System_String_o *)Instance;
    LODWORD(v90.fields.currentCryptoKey) = v11[1].monitor;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v90);
    v91 = svtKeep;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v91);
    Instance = (int64_t)System_String__Format_75697880(v29, v30, v31, 0);
    if ( !v28 )
      goto LABEL_80;
    UILabel__set_text(v28, (System_String_o *)Instance, 0);
  }
  v86 = &this->fields.sort;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v33,
    v11,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91670816);
  v34 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v36 = this;
  if ( favoriteUserSvtId >= 1 )
  {
    if ( !v11 )
      goto LABEL_80;
    monitor = (int)v11[1].monitor;
    if ( monitor >= 1 )
    {
      v38 = 0;
      while ( v38 < monitor )
      {
        v39 = *((_QWORD *)&v11[2].klass + (int)v38);
        if ( !v39 )
          goto LABEL_80;
        v40 = *(_OWORD *)(v39 + 32);
        *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)(v39 + 16);
        *(_OWORD *)&v90.fields.fakeValue = v40;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v35);
        v89 = v90;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v89, 0);
        if ( Instance == favoriteUserSvtId )
        {
          if ( !v34 )
            goto LABEL_80;
          items = v34->fields._items;
          v47 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v34->fields._version;
          if ( !items )
            goto LABEL_80;
          size = v34->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v39,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v34->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v39;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), v39, v35, v41, v42, v43, v44, v45);
          }
          if ( !v33 )
            goto LABEL_80;
          Instance = System_Collections_Generic_List_object___Remove(
                       v33,
                       (Il2CppObject *)v39,
                       (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        monitor = (int)v11[1].monitor;
        if ( (int)++v38 >= monitor )
          goto LABEL_45;
      }
LABEL_81:
      sub_2213CE4(Instance);
    }
LABEL_45:
    if ( !v34 )
      goto LABEL_80;
    System_Collections_Generic_List_object___AddRange(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    Instance = (int64_t)System_Collections_Generic_List_object___ToArray(
                          v34,
                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    v11 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  }
  if ( !v11 )
    goto LABEL_80;
  v50 = v11[1].monitor;
  if ( (int)v50 >= 1 )
  {
    v51 = 0;
    while ( v51 < (unsigned int)v50 )
    {
      v52 = &v11->klass + (int)v51;
      v55 = v52[4];
      v54 = (UserServantEntity_o **)(v52 + 4);
      v53 = v55;
      if ( !v55 )
        goto LABEL_80;
      byval_arg = v53->_1.byval_arg;
      *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v53->_1.name;
      *(Il2CppType *)&v90.fields.fakeValue = byval_arg;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v35);
      v88 = v90;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v88, 0);
      if ( v51 >= LODWORD(v11[1].monitor) )
        break;
      v57 = Instance;
      v58 = *v54;
      v59 = svtIdList;
      v60 = SelfUserGame;
      v61 = SelfUserGame->fields.favoriteUserSvtId;
      v62 = (FavoriteChangeListViewItem_o *)sub_2213CCC(FavoriteChangeListViewItem_TypeInfo);
      FavoriteChangeListViewItem___ctor(v62, v51, v58, v59, v57 == v61, v63);
      Instance = (int64_t)v36->fields.itemList;
      if ( !Instance )
        goto LABEL_80;
      v70 = *(_QWORD *)(Instance + 16);
      v71 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v70 )
        goto LABEL_80;
      v72 = *(int *)(Instance + 24);
      this = v36;
      SelfUserGame = v60;
      if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v62,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = v70 + 8 * v72;
        *(_DWORD *)(Instance + 24) = v72 + 1;
        *(_QWORD *)(v73 + 32) = v62;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 32), (int32_t)v62, v64, v65, v66, v67, v68, v69);
      }
      v50 = v11[1].monitor;
      if ( (int)++v51 >= (int)v50 )
        goto LABEL_61;
    }
    goto LABEL_81;
  }
LABEL_61:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v50 )
    v75 = (System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v75 = (System_String_o *)v87;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v35);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v82 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v76);
    Instance = (int64_t)LocalizationManager__Get(v75, 0);
    if ( v82 )
    {
      UILabel__set_text(v82, (System_String_o *)Instance, 0);
      goto LABEL_71;
    }
LABEL_80:
    sub_2213CDC(Instance, v5);
  }
LABEL_71:
  if ( !*v86 )
    goto LABEL_80;
  iconScaleKind = (*v86)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_78;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_78;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_78:
    this->fields.seed = normalSizeSeed;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  FavoriteChangeListViewManager__SetFilterButtonImage(this, v85);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void FavoriteChangeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FavoriteChangeListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596B4AE & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_TypeInfo);
    byte_596B4AE = 1;
  }
  v3 = FavoriteChangeListViewManager_TypeInfo;
  if ( !*(&FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v1, v2);
    v3 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void FavoriteChangeListViewManager__DestroyList(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
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

  if ( (byte_596B4BB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B4BB = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    FavoriteChangeListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void FavoriteChangeListViewManager__EndSelectSortKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596B4BE & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B4BE = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t FavoriteChangeListViewManager__GetAmountSortValue(
        FavoriteChangeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 v9; // x2
  __int64 naturalAligment; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  void *monitor; // x23
  intptr_t m_CachedPtr; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_596B4C1 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (FavoriteChangeListViewManager_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B4C1 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (FavoriteChangeListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (FavoriteChangeListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v8,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (FavoriteChangeListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewItem_TypeInfo )
        break;
      dragParentObject = this->fields.dragParentObject;
      if ( !dragParentObject )
        break;
      monitor = dragParentObject[3].monitor;
      m_CachedPtr = dragParentObject[3].fields.m_CachedPtr;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId, v9);
      *(_QWORD *)&v15.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v15.fields.fakeValue = m_CachedPtr;
      ++v8;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&svtId);
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

  if ( (byte_596B4B3 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596B4B3 = 1;
  }
  result = (FavoriteChangeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FavoriteChangeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool FavoriteChangeListViewManager__GetSwapChoiceList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596B4C3 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B4C3 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 170) )
      {
        if ( *(_BYTE *)(Item + 166) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool FavoriteChangeListViewManager__GetSwapLockList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  int64_t v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x10
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  int v37; // w21
  System_Int64_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Int64_array *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-80h]

  if ( (byte_596B4C2 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B4C2 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_36;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_36;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_36;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_36;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 169) )
      {
        if ( *(_BYTE *)(Item + 165) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v22;
          *(_OWORD *)&v55.fields.fakeValue = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v54 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v54, 0);
          if ( !v8 )
            goto LABEL_36;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_36;
          v27 = v8->fields._size;
          v10 = Item;
          if ( (unsigned int)v27 >= LODWORD(items->max_length) )
          {
            v35 = v26[4];
            v36 = v8;
LABEL_28:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v10,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v35 + 192) + 112LL));
            continue;
          }
          v28 = &items->obj.klass + v27;
          v8->fields._size = v27 + 1;
        }
        else
        {
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_OWORD *)(v21 + 32);
          v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v55.fields.currentCryptoKey = v29;
          *(_OWORD *)&v55.fields.fakeValue = v30;
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
          v53 = v55;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v53, 0);
          if ( !v7 )
            goto LABEL_36;
          v32 = v7->fields._items;
          v33 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v32 )
            goto LABEL_36;
          v34 = v7->fields._size;
          v10 = Item;
          if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
          {
            v35 = v33[4];
            v36 = v7;
            goto LABEL_28;
          }
          v28 = &v32->obj.klass + v34;
          v7->fields._size = v34 + 1;
        }
        v28[4] = (Il2CppClass *)v10;
      }
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_36:
    sub_2213CDC(Item, v10);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v45 = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void FavoriteChangeListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FavoriteChangeListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596B4AF & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_TypeInfo);
    byte_596B4AF = 1;
  }
  v3 = FavoriteChangeListViewManager_TypeInfo;
  if ( !*(&FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v1, v2);
    v3 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void FavoriteChangeListViewManager__ModifyItem(
        FavoriteChangeListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  int64_t v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x21
  _OWORD *monitor; // x8
  __int128 v16; // q0
  __int128 v17; // q1
  int v18; // w8
  int64_t v19; // x0
  Il2CppObject v20; // q1
  int64_t v21; // x23
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  _OWORD *v27; // x8
  __int128 v28; // q0
  __int128 v29; // q1
  int v30; // w8
  int64_t v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *klass; // x22
  __int64 v37; // x1
  Il2CppClass *v38; // x0
  __int64 v39; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-B0h] BYREF
  __int64 v44; // [xsp+80h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v45; // [xsp+88h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_596B4B4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B4B4 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v46, 0, sizeof(v46));
  if ( itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_43;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v46.fields._current = (Il2CppObject *)v43.fields.fakeValue;
      *(_OWORD *)&v46.fields._list = *(_OWORD *)&v43.fields.currentCryptoKey;
      v44 = 0;
      v45 = &v46;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v46,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v10 & 1) == 0 )
        {
          v39 = v44;
          System_Collections_Generic_List_Enumerator_object___Dispose(
            v45,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( v39 )
            sub_2213CD4(v39);
          return;
        }
        if ( v46.fields._current
          && (naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment,
              v46.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (FavoriteChangeListViewItem_c *)v46.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
            current = v46.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_2213CDC(v10, v11);
            monitor = current[7].monitor;
            if ( !monitor )
              sub_2213CDC(v10, v11);
            v16 = monitor[1];
            v17 = monitor[2];
            v18 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v43.fields.currentCryptoKey = v16;
            *(_OWORD *)&v43.fields.fakeValue = v17;
            if ( !v18 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
            v42 = v43;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v42, 0);
            v20 = Entity[2];
            v21 = v19;
            *(Il2CppObject *)&v41.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v41.fields.fakeValue = v20;
            v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v41, 0);
            if ( v21 == v10 )
            {
              current[7].monitor = Entity;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&current[7].monitor,
                (int32_t)Entity,
                v12,
                v22,
                v23,
                v24,
                v25,
                v26);
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
          sub_2213CDC(v10, v11);
LABEL_26:
        v27 = current[7].monitor;
        if ( !v27 )
          sub_2213CDC(v10, v11);
        v28 = v27[1];
        v29 = v27[2];
        v30 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v43.fields.currentCryptoKey = v28;
        *(_OWORD *)&v43.fields.fakeValue = v29;
        if ( !v30 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
        v40 = v43;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v40, 0);
        if ( !SelfUserGame )
          sub_2213CDC(v31, v32);
        FavoriteChangeListViewItem__ModifyItem(
          (FavoriteChangeListViewItem_o *)current,
          v31 == SelfUserGame->fields.favoriteUserSvtId,
          v33);
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v38 = current[7].klass;
          if ( !v38 )
            sub_2213CDC(0, v37);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v38->_1.image + 49))(
            v38,
            current,
            *((_QWORD *)v38->_1.image + 50));
        }
      }
    }
LABEL_43:
    sub_2213CDC(Instance, v6);
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
  int64_t v9; // x21
  unsigned int v10; // w28
  __int64 v11; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  int v14; // w8
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v16; // x23
  int32_t v17; // w24
  FavoriteChangeListViewItem_o *v18; // x22
  __int64 naturalAligment; // x10
  __int64 v20; // x8
  __int128 v21; // q0
  __int128 v22; // q1
  int v23; // w8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v25; // q0
  __int128 v26; // q1
  int v27; // w8
  int64_t v28; // x0
  const MethodInfo *v29; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+60h] [xbp-80h]

  if ( (byte_596B4C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B4C4 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
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
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_2213CE4(Instance);
      v11 = *(_QWORD *)(v9 + 8LL * (int)v10 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 16);
      v13 = *(_OWORD *)(v11 + 32);
      v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v33.fields.currentCryptoKey = v12;
      *(_OWORD *)&v33.fields.fakeValue = v13;
      if ( !v14 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
      v32 = v33;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v32, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v16 = Instance;
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= itemList->fields._size )
          goto LABEL_28;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              itemList,
                              v17,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_30;
        v18 = (FavoriteChangeListViewItem_o *)Instance;
        naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
          || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != FavoriteChangeListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        v20 = *(_QWORD *)(Instance + 120);
        if ( v20 )
        {
          v21 = *(_OWORD *)(v20 + 16);
          v22 = *(_OWORD *)(v20 + 32);
          v23 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v33.fields.currentCryptoKey = v21;
          *(_OWORD *)&v33.fields.fakeValue = v22;
          if ( !v23 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
          v31 = v33;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0);
          if ( Instance == v16 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v17;
        if ( !itemList )
          goto LABEL_30;
      }
      userSvtEntity = v18->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v27 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v33.fields.currentCryptoKey = v25;
      *(_OWORD *)&v33.fields.fakeValue = v26;
      if ( !v27 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
      v30 = v33;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v30, 0);
      FavoriteChangeListViewManager__ModifyLockItem(this, v18, v28, 1, isIconSizeChange, v29);
LABEL_28:
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_30:
    sub_2213CDC(Instance, v6);
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
  FavoriteChangeListViewManager_o *v12; // x23
  __int128 v13; // q1
  int64_t v14; // x0
  __int128 v15; // q0
  FavoriteChangeListViewManager_o *v16; // x25
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_596B4C6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (FavoriteChangeListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B4C6 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (FavoriteChangeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !favoriteItem )
        goto LABEL_26;
      userSvtEntity = favoriteItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = this;
      v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v13;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, favoriteItem, usrSvtId);
      v25 = v26;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v25, 0);
      v15 = *(_OWORD *)&v12->fields.dropObjectList;
      v16 = (FavoriteChangeListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v24.fields.currentCryptoKey = v12->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v24.fields.fakeValue = v15;
      this = (FavoriteChangeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                  &v24,
                                                  0);
      if ( v16 == this )
      {
        favoriteItem->fields.userSvtEntity = (struct UserServantEntity_o *)v12;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&favoriteItem->fields.userSvtEntity,
          (int32_t)v12,
          (System_String_o *)usrSvtId,
          v17,
          v18,
          v19,
          v20,
          v21);
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
    FavoriteChangeListViewItem__ModifyChoiceItem(favoriteItem, v22);
  }
  viewObject = (UnityEngine_Object_o *)favoriteItem->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, favoriteItem, usrSvtId);
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
    sub_2213CDC(this, favoriteItem);
  }
}


void FavoriteChangeListViewManager__OnClickFavoriteDecide(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_596B4BA & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_FavoriteChangeListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B4BA = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_596B4BF & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__);
    byte_596B4BF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596B4BD & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_FavoriteChangeListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B4BD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_FavoriteChangeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 Index; // x2

  if ( (byte_596B4B9 & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeListViewManager_OnLongPushListView__);
    byte_596B4B9 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      v13 = Method_FavoriteChangeListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_2213A78(Method_FavoriteChangeListViewManager_OnLongPushListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      if ( obj )
      {
        Index = (unsigned int)ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          2,
          Index,
          callbackFunc->fields.method);
        return;
      }
    }
    sub_2213CDC(scrollView, obj);
  }
}


void FavoriteChangeListViewManager__OnMoveEnd(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596B4B8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B4B8 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B4B6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_2213A60(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B4B6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v7 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                      this,
                                                      *(const MethodInfo **)&mode);
  if ( !v7 )
    sub_2213CDC(0, v8);
  size = v7->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      v7,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      FavoriteChangeListViewObject__Init_39809324((FavoriteChangeListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewManager__RequestListObject_39808320(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596B4B7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__);
    sub_2213A60(&Method_FavoriteChangeListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596B4B7 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v5 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                      this,
                                                      *(const MethodInfo **)&mode);
  if ( !v5 )
    sub_2213CDC(0, v6);
  size = v5->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      v5,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      FavoriteChangeListViewObject__Init_39809408((FavoriteChangeListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


void FavoriteChangeListViewManager__SetFilterButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_596B4BC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596B4BC = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_2213CDC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18254/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18255/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void FavoriteChangeListViewManager__SetMode(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        FavoriteChangeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_39794032(this, mode, v10);
}


void FavoriteChangeListViewManager__SetMode_39794032(
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
    sub_2213CDC(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    FavoriteChangeListViewManager__RequestListObject_39808320(this, mode + 1, v7);
}


void FavoriteChangeListViewManager__SetMode_39808268(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  FavoriteChangeListViewManager__SetMode_39794032(this, mode, v10);
}


void FavoriteChangeListViewManager__SetObjectItem(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596B4B5 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewObject_TypeInfo);
    byte_596B4B5 = 1;
  }
  if ( obj
    && (naturalAligment = FavoriteChangeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FavoriteChangeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  FavoriteChangeListViewObject__Init_39808196((FavoriteChangeListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void FavoriteChangeListViewManager__SetSortButtonImage(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v10; // x8
  int32_t sortKind; // w9
  System_String_o **v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x9
  System_String_o **v15; // x10
  System_String_o **v16; // x8
  System_String_o **v17; // x8

  if ( (byte_596B4C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596B4C0 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_34;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v10 = this->fields.sort;
    if ( v10 )
    {
      sortKind = v10->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v12 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18352/*"btn_txt_old"*/ : &StringLiteral_18344/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              v15 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
LABEL_30:
              if ( v13->fields.isAscendingOrder )
                v17 = v14;
              else
                v17 = v15;
              UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
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
          v16 = (System_String_o **)(v10->fields.isAscendingOrder ? &StringLiteral_18395/*"btn_txt_up"*/ : &StringLiteral_18334/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0);
          v13 = this->fields.sort;
          if ( v13 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v14 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
              v15 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(sort, v5);
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
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B4C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&FavoriteChangeListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_596B4C5 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v12, 0, sizeof(v12));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !v12.fields._current )
        goto LABEL_13;
      naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
      if ( v12.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (FavoriteChangeListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_221405C(v12.fields._current, FavoriteChangeListViewItem_TypeInfo, v8, v9);
LABEL_13:
        sub_2213CDC(current, v7);
      }
      *((_BYTE *)&v12.fields._current->klass + (unsigned __int64)&qword_A8 + 4) = v6;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void FavoriteChangeListViewManager__add_callbackFunc(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewManager_o *v11; // x0
  FavoriteChangeListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B4AA & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_596B4AA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v6->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewManager_o *)sub_221405C(v6, FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7, v8);
  FavoriteChangeListViewManager__remove_callbackFunc(v11, v12, v13);
}


void FavoriteChangeListViewManager__add_callbackFunc2(
        FavoriteChangeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B4AC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B4AC = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  FavoriteChangeListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *FavoriteChangeListViewManager__get_ClippingObjectList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596B4B1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B4B1 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      v14 = (ListViewItem_o *)FavoriteChangeListViewObject__GetItem(
                                (FavoriteChangeListViewObject_o *)Component_object,
                                v12);
      if ( !v14 )
        sub_2213CDC(0, 0);
      if ( v14->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, v14, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(v14, v14);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v3;
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *FavoriteChangeListViewManager__get_ObjectList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B4B0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B4B0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v3;
}


void FavoriteChangeListViewManager__remove_callbackFunc(
        FavoriteChangeListViewManager_o *this,
        FavoriteChangeListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B4AB & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    byte_596B4AB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FavoriteChangeListViewManager_CallbackFunc_c *)v6->klass != FavoriteChangeListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewManager_o *)sub_221405C(v6, FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7, v8);
  FavoriteChangeListViewManager__add_callbackFunc2(v11, v12, v13);
}


void FavoriteChangeListViewManager__remove_callbackFunc2(
        FavoriteChangeListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596B4AD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596B4AD = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  FavoriteChangeListViewManager__DeleteContinueData(v11);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2001DCC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001D74;
}


System_IAsyncResult_o *FavoriteChangeListViewManager_CallbackFunc__BeginInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_596B4C8 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_ResultKind_TypeInfo);
    byte_596B4C8 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(FavoriteChangeListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void FavoriteChangeListViewManager_CallbackFunc__EndInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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