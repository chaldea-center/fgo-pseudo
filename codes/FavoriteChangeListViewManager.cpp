void __fastcall FavoriteChangeListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *v8; // x19

  if ( (byte_4B115DF & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6730/*"FavoriteChange1"*/, v6, v7);
    byte_4B115DF = 1;
  }
  v8 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v8, (System_String_o *)StringLiteral_6730/*"FavoriteChange1"*/, 3, 0, 0LL);
  FavoriteChangeListViewManager_TypeInfo->static_fields->servantSortInfo = v8;
  sub_1BCA784(FavoriteChangeListViewManager_TypeInfo->static_fields, v8);
}


void __fastcall FavoriteChangeListViewManager___ctor(FavoriteChangeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall FavoriteChangeListViewManager__ChangeIconScale(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
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
    sub_1BCA784(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        FavoriteChangeListViewManager__ModifyList(this, 1, v8),
        FavoriteChangeListViewManager__SetMode_31612004(this, 2, v9),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1BCAA3C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall FavoriteChangeListViewManager__CreateList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  UserGameEntity_o *SelfUserGame; // x28
  __int64 Instance; // x0
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x0
  UserServantMaster_o *v52; // x21
  __int64 v53; // x1
  Il2CppObject *v54; // x22
  System_Collections_Generic_IEnumerable_T__o *v55; // x22
  int svtKeep; // w26
  __int64 v57; // x1
  FavoriteChangeListViewManager_c *v58; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v60; // x1
  struct ListViewSort_o **p_sort; // x27
  UnityEngine_Object_o *infoDataLabel; // x23
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  UILabel_o *v66; // x23
  System_String_o *v67; // x24
  Il2CppObject *v68; // x25
  Il2CppObject *v69; // x0
  __int64 favoriteUserSvtId; // x26
  System_Collections_Generic_List_object__o *v71; // x23
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_object__o *v75; // x24
  int monitor; // w8
  unsigned int v77; // w21
  __int64 v78; // x25
  __int128 v79; // q0
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  void *v84; // x8
  int32_t v85; // w23
  System_Collections_Generic_IEnumerable_T__c **v86; // x24
  System_Collections_Generic_IEnumerable_T__c *v87; // x8
  UserServantEntity_o **v88; // x24
  System_Collections_Generic_IEnumerable_T__c *v89; // t1
  Il2CppType byval_arg; // q0
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x25
  UserServantEntity_o *v94; // x26
  System_Int64_array *v95; // x27
  UserGameEntity_o *v96; // x20
  int64_t v97; // x28
  FavoriteChangeListViewItem_o *v98; // x24
  const MethodInfo *v99; // x5
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v105; // x20
  UILabel_o *v106; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v109; // x1
  struct ListViewSort_o **v110; // [xsp+0h] [xbp-F0h]
  __int64 v111; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+50h] [xbp-A0h] BYREF
  int v115; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B115CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, v6, v7);
    sub_1BCA7E0(&FavoriteChangeListViewManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v32, v33);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11673/*"SERVANT_ALL_EMPTY"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12087/*"SERVANT_TAKE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v46, v47);
    byte_4B115CA = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v52 = (UserServantMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v53);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v54 )
    goto LABEL_77;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v54, &svtIdList, &equipIdList, Instance, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v52 )
    goto LABEL_77;
  Instance = (__int64)UserServantMaster__getOrganizationList(v52, 0LL);
  if ( !SelfUserGame )
    goto LABEL_77;
  v55 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
  LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SERVANT_TAKE"*/, 0LL);
  v58 = FavoriteChangeListViewManager_TypeInfo;
  v111 = StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v57);
    v58 = FavoriteChangeListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v58->static_fields->servantSortInfo;
  v60 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1BCA784(&this->fields.sort, v60);
  Instance = (__int64)this->fields.sort;
  if ( !Instance )
    goto LABEL_77;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  if ( !*p_sort )
    goto LABEL_77;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v66 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
    if ( !v55 )
      goto LABEL_77;
    v67 = (System_String_o *)Instance;
    LODWORD(v114.fields.currentCryptoKey) = v55[1].monitor;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
    v115 = svtKeep;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
    Instance = (__int64)System_String__Format_62415592(v67, v68, v69, 0LL);
    if ( !v66 )
      goto LABEL_77;
    UILabel__set_text(v66, (System_String_o *)Instance, 0LL);
  }
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v71 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v63,
                                                       v64,
                                                       v65);
  System_Collections_Generic_List_object____ctor_56235344(
    v71,
    v55,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
  v75 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v72,
                                                       v73,
                                                       v74);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( favoriteUserSvtId >= 1 )
  {
    if ( !v55 )
      goto LABEL_77;
    monitor = (int)v55[1].monitor;
    if ( monitor >= 1 )
    {
      v77 = 0;
      while ( 1 )
      {
        if ( v77 >= monitor )
LABEL_78:
          sub_1BCAA44(Instance, v50);
        v78 = *((_QWORD *)&v55[2].klass + (int)v77);
        if ( !v78 )
          break;
        v79 = *(_OWORD *)(v78 + 32);
        *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)(v78 + 16);
        *(_OWORD *)&v114.fields.fakeValue = v79;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50);
        v113 = v114;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v113, 0LL);
        if ( Instance == favoriteUserSvtId )
        {
          if ( !v75 )
            break;
          items = v75->fields._items;
          v81 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v75->fields._version;
          if ( !items )
            break;
          size = v75->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v75,
              (Il2CppObject *)v78,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
          }
          else
          {
            v83 = &items->obj.klass + size;
            v75->fields._size = size + 1;
            v83[4] = (Il2CppClass *)v78;
            Instance = sub_1BCA784(v83 + 4, v78);
          }
          if ( !v71 )
            break;
          Instance = System_Collections_Generic_List_object___Remove(
                       v71,
                       (Il2CppObject *)v78,
                       (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
        }
        monitor = (int)v55[1].monitor;
        if ( (int)++v77 >= monitor )
          goto LABEL_41;
      }
LABEL_77:
      sub_1BCAA3C(Instance, v50);
    }
LABEL_41:
    if ( !v75 )
      goto LABEL_77;
    System_Collections_Generic_List_object___AddRange(
      v75,
      (System_Collections_Generic_IEnumerable_T__o *)v71,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v75,
                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    v55 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
    p_sort = &this->fields.sort;
  }
  if ( !v55 )
    goto LABEL_77;
  v84 = v55[1].monitor;
  if ( (int)v84 >= 1 )
  {
    v110 = p_sort;
    v85 = 0;
    do
    {
      if ( v85 >= (unsigned int)v84 )
        goto LABEL_78;
      v86 = &v55->klass + v85;
      v89 = v86[4];
      v88 = (UserServantEntity_o **)(v86 + 4);
      v87 = v89;
      if ( !v89 )
        goto LABEL_77;
      byval_arg = v87->_1.byval_arg;
      *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&v87->_1.name;
      *(Il2CppType *)&v114.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50);
      v112 = v114;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v112, 0LL);
      if ( (unsigned int)v85 >= LODWORD(v55[1].monitor) )
        goto LABEL_78;
      v93 = Instance;
      v94 = *v88;
      v95 = svtIdList;
      v96 = SelfUserGame;
      v97 = SelfUserGame->fields.favoriteUserSvtId;
      v98 = (FavoriteChangeListViewItem_o *)sub_1BCAA2C(FavoriteChangeListViewItem_TypeInfo, v50, v91, v92);
      FavoriteChangeListViewItem___ctor(v98, v85, v94, v95, v93 == v97, v99);
      Instance = (__int64)this->fields.itemList;
      if ( !Instance )
        goto LABEL_77;
      v100 = *(_QWORD *)(Instance + 16);
      v101 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v100 )
        goto LABEL_77;
      v102 = *(int *)(Instance + 24);
      SelfUserGame = v96;
      if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v98,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
      }
      else
      {
        v103 = v100 + 8 * v102;
        *(_DWORD *)(Instance + 24) = v102 + 1;
        *(_QWORD *)(v103 + 32) = v98;
        Instance = sub_1BCA784(v103 + 32, v98);
      }
      v84 = v55[1].monitor;
      ++v85;
    }
    while ( v85 < (int)v84 );
    p_sort = v110;
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v84 )
    v105 = (System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v105 = (System_String_o *)v111;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v106 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
    Instance = (__int64)LocalizationManager__Get(v105, 0LL);
    if ( !v106 )
      goto LABEL_77;
    UILabel__set_text(v106, (System_String_o *)Instance, 0LL);
  }
  if ( !*p_sort )
    goto LABEL_77;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
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
    sub_1BCA784(&this->fields.seed, normalSizeSeed);
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  FavoriteChangeListViewManager__SetFilterButtonImage(this, v109);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall FavoriteChangeListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FavoriteChangeListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B115C6 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_TypeInfo, v1, v2);
    byte_4B115C6 = 1;
  }
  v3 = FavoriteChangeListViewManager_TypeInfo;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v1);
    v3 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BCAA3C(0LL, v1);
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
    sub_1BCAA3C(0LL, v3);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B115D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B115D3 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    FavoriteChangeListViewManager__SetFilterButtonImage(this, v9);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__EndSelectSortKind(
        FavoriteChangeListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B115D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B115D6 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall FavoriteChangeListViewManager__GetAmountSortValue(
        FavoriteChangeListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v11; // w22
  int64_t v12; // x21
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v15; // x8

  if ( (byte_4B115D9 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7, v8);
    byte_4B115D9 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      klass = itemList->klass;
      methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FavoriteChangeListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        break;
      }
      ++v11;
      if ( (FavoriteChangeListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == FavoriteChangeListViewItem_TypeInfo )
        v15 = itemList;
      else
        v15 = 0LL;
      if ( LODWORD(v15[3].monitor) == svtId )
        ++v12;
      if ( size == v11 )
        return v12;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1BCAA3C(itemList, *(_QWORD *)&svtId);
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
  __int64 v6; // x2
  FavoriteChangeListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B115CB & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B115CB = 1;
  }
  result = (FavoriteChangeListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (FavoriteChangeListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (FavoriteChangeListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != FavoriteChangeListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall FavoriteChangeListViewManager__GetScaleButtonSpriteName(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall FavoriteChangeListViewManager__GetSwapChoiceList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t itemList; // x0
  int v30; // w25
  int32_t v31; // w24
  __int64 methodPtr_low; // x10
  __int64 v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int128 v39; // q0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_long__o *v44; // x0
  int v45; // w21
  System_Int64_array *v46; // x0
  System_Int64_array *v47; // x1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4B115DB & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B115DB = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v30 = *(_DWORD *)(itemList + 24);
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v31,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v33 = *(_QWORD *)(itemList + 112);
      if ( v33 && *(_BYTE *)(itemList + 162) )
      {
        if ( *(_BYTE *)(itemList + 158) )
        {
          v34 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v43 = v36[4];
            v44 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v44,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v43 + 192) + 112LL));
            goto LABEL_28;
          }
          v38 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v39 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v40 = v23->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v40 )
            goto LABEL_37;
          v42 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v42 >= v40->max_length )
          {
            v43 = v41[4];
            v44 = v23;
            goto LABEL_27;
          }
          v38 = &v40->obj.klass + v42;
          v23->fields._size = v42 + 1;
        }
        v38[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v30 == ++v31 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v45 = v27->fields._size + v23->fields._size;
  if ( v45 < 1 )
  {
    *choiceList = 0LL;
    sub_1BCA784(choiceList, 0LL);
    v48 = unchoiceList;
    v47 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v46 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v46;
    sub_1BCA784(choiceList, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    v48 = unchoiceList;
  }
  sub_1BCA784(v48, v47);
  return v45 > 0;
}


bool __fastcall FavoriteChangeListViewManager__GetSwapLockList(
        FavoriteChangeListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x22
  int64_t v28; // x1
  int64_t itemList; // x0
  int v30; // w25
  int32_t v31; // w24
  __int64 methodPtr_low; // x10
  __int64 v33; // x8
  __int128 v34; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int128 v39; // q0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_long__o *v44; // x0
  int v45; // w21
  System_Int64_array *v46; // x0
  System_Int64_array *v47; // x1
  System_Int64_array **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]

  if ( (byte_4B115DA & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B115DA = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v30 = *(_DWORD *)(itemList + 24);
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v31,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != FavoriteChangeListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v33 = *(_QWORD *)(itemList + 112);
      if ( v33 && *(_BYTE *)(itemList + 161) )
      {
        if ( *(_BYTE *)(itemList + 157) )
        {
          v34 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v51 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
          if ( !v27 )
            goto LABEL_37;
          items = v27->fields._items;
          v36 = Method_System_Collections_Generic_List_long__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v27->fields._size;
          v28 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v43 = v36[4];
            v44 = v27;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v44,
              v28,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v43 + 192) + 112LL));
            goto LABEL_28;
          }
          v38 = &items->obj.klass + size;
          v27->fields._size = size + 1;
        }
        else
        {
          v39 = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v52.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v50 = v52;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
          if ( !v23 )
            goto LABEL_37;
          v40 = v23->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v40 )
            goto LABEL_37;
          v42 = v23->fields._size;
          v28 = itemList;
          if ( (unsigned int)v42 >= v40->max_length )
          {
            v43 = v41[4];
            v44 = v23;
            goto LABEL_27;
          }
          v38 = &v40->obj.klass + v42;
          v23->fields._size = v42 + 1;
        }
        v38[4] = (Il2CppClass *)v28;
      }
LABEL_28:
      if ( v30 == ++v31 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v23 || !v27 )
LABEL_37:
    sub_1BCAA3C(itemList, v28);
  v45 = v27->fields._size + v23->fields._size;
  if ( v45 < 1 )
  {
    *lockList = 0LL;
    sub_1BCA784(lockList, 0LL);
    v48 = unlockList;
    v47 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v46 = System_Collections_Generic_List_long___ToArray(
            v23,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v46;
    sub_1BCA784(lockList, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    v48 = unlockList;
  }
  sub_1BCA784(v48, v47);
  return v45 > 0;
}


void __fastcall FavoriteChangeListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FavoriteChangeListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B115C7 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_TypeInfo, v1, v2);
    byte_4B115C7 = 1;
  }
  v3 = FavoriteChangeListViewManager_TypeInfo;
  if ( !FavoriteChangeListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FavoriteChangeListViewManager_TypeInfo, v1);
    v3 = FavoriteChangeListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall FavoriteChangeListViewManager__ModifyItem(
        FavoriteChangeListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x11
  FavoriteChangeListViewItem_o *current; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v32; // q0
  int64_t v33; // x0
  Il2CppObject v34; // q0
  int64_t v35; // x23
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q0
  int64_t v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  UnityEngine_Object_o *viewObject; // x22
  __int64 v43; // x1
  struct ListViewObject_o *v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4B115CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12);
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B115CC = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( this->fields.itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( usrSvtId < 1 )
    {
      Entity = 0LL;
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_43;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 usrSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Instance = (DataManager_o *)this->fields.itemList;
    if ( Instance )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v48,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v49.fields._list = *(_OWORD *)&v48.fields.currentCryptoKey;
      v49.fields._current = (Il2CppObject *)v48.fields.fakeValue;
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v49,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v27 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v49,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v49.fields._current
          && (methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v49.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (FavoriteChangeListViewItem_c *)v49.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == FavoriteChangeListViewItem_TypeInfo )
            current = (FavoriteChangeListViewItem_o *)v49.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_15:
            if ( !current )
              sub_1BCAA3C(v27, v28);
            userSvtEntity = current->fields.userSvtEntity;
            if ( !userSvtEntity )
              sub_1BCAA3C(v27, v28);
            v32 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v48.fields.fakeValue = v32;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
            v47 = v48;
            v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v47, 0LL);
            v34 = Entity[2];
            v35 = v33;
            *(Il2CppObject *)&v46.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v46.fields.fakeValue = v34;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
            if ( v35 == v27 )
            {
              current->fields.userSvtEntity = (struct UserServantEntity_o *)Entity;
              v27 = sub_1BCA784(&current->fields.userSvtEntity, Entity);
            }
            goto LABEL_26;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_15;
        }
        if ( !current )
          sub_1BCAA3C(v27, v28);
LABEL_26:
        v36 = current->fields.userSvtEntity;
        if ( !v36 )
          sub_1BCAA3C(v27, v28);
        v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
        v45 = v48;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL);
        if ( !SelfUserGame )
          sub_1BCAA3C(v38, v39);
        FavoriteChangeListViewItem__ModifyItem(current, v38 == SelfUserGame->fields.favoriteUserSvtId, v40);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v44 = current->fields.viewObject;
          if ( !v44 )
            sub_1BCAA3C(0LL, v43);
          ((void (__fastcall *)(struct ListViewObject_o *, FavoriteChangeListViewItem_o *, Il2CppMethodPointer))v44->klass->vtable._5_SetItem.method)(
            v44,
            current,
            v44->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_43:
    sub_1BCAA3C(Instance, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__ModifyList(
        FavoriteChangeListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t Instance; // x0
  __int64 v16; // x1
  int v17; // w8
  int64_t v18; // x20
  unsigned int v19; // w25
  bool v20; // w21
  __int64 v21; // x8
  __int128 v22; // q0
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v24; // x23
  int32_t v25; // w24
  FavoriteChangeListViewItem_o *v26; // x22
  __int64 methodPtr_low; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v31; // q0
  int64_t v32; // x0
  const MethodInfo *v33; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+60h] [xbp-80h]

  if ( (byte_4B115DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, isIconSizeChange, method);
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B115DC = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  v17 = *(_DWORD *)(Instance + 24);
  v18 = Instance;
  if ( v17 >= 1 )
  {
    v19 = 0;
    v20 = isIconSizeChange;
    while ( 1 )
    {
      if ( v19 >= v17 )
        sub_1BCAA44(Instance, v16);
      v21 = *(_QWORD *)(v18 + 8LL * (int)v19 + 32);
      if ( !v21 )
        break;
      v22 = *(_OWORD *)(v21 + 32);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v21 + 16);
      *(_OWORD *)&v37.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
      v36 = v37;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v36, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v24 = Instance;
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= itemList->fields._size )
          goto LABEL_28;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              itemList,
                              v25,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Instance )
          goto LABEL_30;
        v26 = (FavoriteChangeListViewItem_o *)Instance;
        methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
          || *(FavoriteChangeListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != FavoriteChangeListViewItem_TypeInfo )
        {
          goto LABEL_30;
        }
        v28 = *(_QWORD *)(Instance + 112);
        if ( v28 )
        {
          v29 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v37.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
          v35 = v37;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL);
          if ( Instance == v24 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v25;
        if ( !itemList )
          goto LABEL_30;
      }
      userSvtEntity = v26->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
      v34 = v37;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
      FavoriteChangeListViewManager__ModifyLockItem(this, v26, v32, 1, v20, v33);
LABEL_28:
      v17 = *(_DWORD *)(v18 + 24);
      if ( (int)++v19 >= v17 )
        return;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v16);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v20; // q1
  FavoriteChangeListViewManager_o *v21; // x23
  int64_t v22; // x0
  __int128 v23; // q1
  FavoriteChangeListViewManager_o *v24; // x25
  const MethodInfo *v25; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4B115DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, favoriteItem, usrSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    this = (FavoriteChangeListViewManager_o *)sub_1BCA7E0(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v17,
                                                v18);
    byte_4B115DE = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (FavoriteChangeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (FavoriteChangeListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !favoriteItem )
        goto LABEL_26;
      userSvtEntity = favoriteItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v21 = this;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, favoriteItem);
      v28 = v29;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v28, 0LL);
      v23 = *(_OWORD *)&v21->fields.dropObjectList;
      v24 = (FavoriteChangeListViewManager_o *)v22;
      *(UnityEngine_MonoBehaviour_Fields *)&v27.fields.currentCryptoKey = v21->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v27.fields.fakeValue = v23;
      this = (FavoriteChangeListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                  &v27,
                                                  0LL);
      if ( v24 == this )
      {
        favoriteItem->fields.userSvtEntity = (struct UserServantEntity_o *)v21;
        this = (FavoriteChangeListViewManager_o *)sub_1BCA784(&favoriteItem->fields.userSvtEntity, v21);
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
    FavoriteChangeListViewItem__ModifyChoiceItem(favoriteItem, v25);
  }
  viewObject = (UnityEngine_Object_o *)favoriteItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, favoriteItem);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (FavoriteChangeListViewManager_o *)favoriteItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(FavoriteChangeListViewManager_o *, FavoriteChangeListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        favoriteItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (FavoriteChangeListViewManager_o *)favoriteItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)favoriteItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(this, favoriteItem);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickFavoriteDecide(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickFilterKind(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B115D2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B115D2 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_FavoriteChangeListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeListViewManager_OnClickFilterKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu(v14, 8, sort, v18, -1, 0LL);
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
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1BCA784(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BCAA3C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      3LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickSortAscendingOrder(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B115D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B115D7 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnClickSortKind(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_4B115D5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_OnClickSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B115D5 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_FavoriteChangeListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeListViewManager_OnClickSortKind__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v14 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_FavoriteChangeListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 3, sort, 0, v18, 0LL);
  }
}


void __fastcall FavoriteChangeListViewManager__OnLongPushListView(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct FavoriteChangeListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int Index; // w0

  if ( (byte_4B115D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_OnLongPushListView__, obj, method);
    byte_4B115D1 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_1BCA784(&this->fields.callbackFunc, 0LL);
      if ( !callbackFunc )
        return;
      v7 = Method_FavoriteChangeListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_FavoriteChangeListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeListViewManager_OnLongPushListView__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          2LL,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
    }
    sub_1BCAA3C(scrollView, obj);
  }
}


void __fastcall FavoriteChangeListViewManager__OnMoveEnd(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B115D0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B115D0 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784(&this->fields.callbackFunc2, 0LL);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B115CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_OnMoveEnd__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B115CE = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v21 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                       this,
                                                       *(const MethodInfo **)&mode);
  if ( !v21 )
    sub_1BCAA3C(0LL, v22);
  size = v21->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      v21,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      FavoriteChangeListViewObject__Init_31626832((FavoriteChangeListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__RequestListObject_31625804(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B115CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_FavoriteChangeListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B115CF = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v19 = (System_Collections_Generic_List_object__o *)FavoriteChangeListViewManager__get_ObjectList(
                                                       this,
                                                       *(const MethodInfo **)&mode);
  if ( !v19 )
    sub_1BCAA3C(0LL, v20);
  size = v19->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      v19,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_FavoriteChangeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      FavoriteChangeListViewObject__Init_31626916((FavoriteChangeListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FavoriteChangeListViewObject__Dispose__);
  }
}


void __fastcall FavoriteChangeListViewManager__SetFilterButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B115D4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B115D4 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BCAA3C(sort, method);
  }
  v8 = (System_String_o **)&StringLiteral_17687/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v8 = (System_String_o **)&StringLiteral_17688/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v8, 0LL);
}


void __fastcall FavoriteChangeListViewManager__SetMode(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        FavoriteChangeListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  FavoriteChangeListViewManager__SetMode_31612004(this, mode, v6);
}


void __fastcall FavoriteChangeListViewManager__SetMode_31612004(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v7; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_9;
  if ( UnityEngine_Behaviour__get_enabled(scrollView, 0LL) )
    goto LABEL_6;
  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL),
        (scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    FavoriteChangeListViewManager__RequestListObject_31625804(this, mode + 1, v7);
}


void __fastcall FavoriteChangeListViewManager__SetMode_31625752(
        FavoriteChangeListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  FavoriteChangeListViewManager__SetMode_31612004(this, mode, v6);
}


void __fastcall FavoriteChangeListViewManager__SetObjectItem(
        FavoriteChangeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B115CD & 1) == 0 )
  {
    this = (FavoriteChangeListViewManager_o *)sub_1BCA7E0(&FavoriteChangeListViewObject_TypeInfo, obj, item);
    byte_4B115CD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(FavoriteChangeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (FavoriteChangeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != FavoriteChangeListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  FavoriteChangeListViewObject__Init_31625680((FavoriteChangeListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall FavoriteChangeListViewManager__SetSortButtonImage(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v17; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v19; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v21; // x8
  int32_t sortKind; // w9
  System_String_o **v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x9
  System_String_o **v26; // x10
  System_String_o **v27; // x8
  System_String_o **v28; // x8

  if ( (byte_4B115D8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B115D8 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v19 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v19 )
      goto LABEL_34;
    UILabel__set_text(v19, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v21 = this->fields.sort;
    if ( v21 )
    {
      sortKind = v21->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
        if ( sort )
        {
          v23 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17768/*"btn_txt_old"*/ : &StringLiteral_17761/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              v26 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
LABEL_30:
              if ( v24->fields.isAscendingOrder )
                v28 = v25;
              else
                v28 = v26;
              UISprite__set_spriteName((UISprite_o *)sort, *v28, 0LL);
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
          v27 = (System_String_o **)(v21->fields.isAscendingOrder ? &StringLiteral_17806/*"btn_txt_up"*/ : &StringLiteral_17751/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v27, 0LL);
          v24 = this->fields.sort;
          if ( v24 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v25 = (System_String_o **)&StringLiteral_17718/*"btn_sort_up"*/;
              v26 = (System_String_o **)&StringLiteral_17715/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(sort, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewManager__UpdateDisplayState(
        FavoriteChangeListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v14; // w19
  __int64 v15; // x1
  Il2CppObject *current; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B115DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&FavoriteChangeListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v11, v12);
    byte_4B115DD = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v18.fields._current;
      if ( !v18.fields._current )
        goto LABEL_13;
      methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (FavoriteChangeListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != FavoriteChangeListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1BCACFC(v18.fields._current);
LABEL_13:
        sub_1BCAA3C(current, v15);
      }
      BYTE4(v18.fields._current[10].klass) = v14;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4B115C2 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B115C2 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B115C4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B115C4 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1BCACFC(v7);
  FavoriteChangeListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ClippingObjectList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B115C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B115C9 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      v31 = (ListViewItem_o *)FavoriteChangeListViewObject__GetItem(
                                (FavoriteChangeListViewObject_o *)Component_object,
                                v29);
      if ( !v31 )
        sub_1BCAA3C(0LL, v32);
      if ( v31->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, v31, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v33, v34);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(v31, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(v31, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v30;
        sub_1BCA784(v38 + 4, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v21;
}


System_Collections_Generic_List_FavoriteChangeListViewObject__o *__fastcall FavoriteChangeListViewManager__get_ObjectList(
        FavoriteChangeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B115C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B115C8 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_FavoriteChangeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FavoriteChangeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_FavoriteChangeListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1BCA784(v33 + 4, v29);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_FavoriteChangeListViewObject__o *)v21;
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

  if ( (byte_4B115C3 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B115C3 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (FavoriteChangeListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B115C5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B115C5 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BCACFC(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A05BEC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05B94;
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
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B115E0 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&FavoriteChangeListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B115E0 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(FavoriteChangeListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall FavoriteChangeListViewManager_CallbackFunc__EndInvoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall FavoriteChangeListViewManager_CallbackFunc__Invoke(
        FavoriteChangeListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}