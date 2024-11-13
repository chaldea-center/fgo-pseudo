void __fastcall MultipleViewListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *v8; // x19

  if ( (byte_4B1187F & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&MultipleViewListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9302/*"MultipleView1"*/, v6, v7);
    byte_4B1187F = 1;
  }
  v8 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v8, (System_String_o *)StringLiteral_9302/*"MultipleView1"*/, 3, 0, 0LL);
  MultipleViewListViewManager_TypeInfo->static_fields->servantSortInfo = v8;
  sub_1BCA784(MultipleViewListViewManager_TypeInfo->static_fields, v8);
}


void __fastcall MultipleViewListViewManager___ctor(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MultipleViewListViewManager__ChangeIconScale(
        MultipleViewListViewManager_o *this,
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
        MultipleViewListViewManager__ModifyList(this, 1, v8),
        MultipleViewListViewManager__SetMode_31836508(this, 2, v9),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1BCAA3C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall MultipleViewListViewManager__CreateList(
        MultipleViewListViewManager_o *this,
        int64_t latestSelectedUsrSvtId,
        System_Int64_array *selectedUserSvtIds,
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  Il2CppObject *v47; // x19
  __int64 Instance; // x0
  __int64 v49; // x1
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *MasterData_object; // x0
  UserServantMaster_o *v52; // x23
  __int64 v53; // x1
  Il2CppObject *v54; // x24
  __int64 v55; // x24
  int v56; // w20
  __int64 v57; // x1
  MultipleViewListViewManager_c *v58; // x0
  __int64 v59; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v61; // x1
  struct ListViewSort_o **p_sort; // x21
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v64; // x2
  UILabel_o *v65; // x25
  System_String_o *v66; // x26
  Il2CppObject *v67; // x27
  Il2CppObject *v68; // x0
  int v69; // w8
  unsigned int v70; // w25
  __int64 v71; // x26
  __int64 v72; // x8
  UserServantEntity_o **v73; // x26
  __int64 v74; // t1
  __int128 v75; // q0
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x27
  System_Int64_array *v79; // x22
  UserServantEntity_o *v80; // x29
  __int64 v81; // x19
  MultipleViewListViewItem_o *v82; // x26
  const MethodInfo *v83; // x5
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  __int64 v88; // x1
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v90; // x21
  UILabel_o *v91; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v94; // x1
  __int64 v95; // x1
  UnityEngine_Object_o *scrollBar; // x21
  __int64 v97; // x2
  __int64 v98; // x3
  struct UIScrollBar_o *v99; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_object__o *v101; // x22
  Il2CppObject *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  struct System_Collections_Generic_List_ListViewItem__o *v106; // x21
  System_Predicate_object__o *v107; // x22
  Il2CppObject *object; // [xsp+8h] [xbp-E8h]
  System_String_o *v109; // [xsp+10h] [xbp-E0h]
  struct ListViewSort_o **v110; // [xsp+18h] [xbp-D8h]
  System_Int64_array *usrSvtIds; // [xsp+20h] [xbp-D0h]
  void **p_monitor; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+50h] [xbp-A0h] BYREF
  int v115; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B11869 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, latestSelectedUsrSvtId, selectedUserSvtIds);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Find__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&MultipleViewListViewManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Predicate_ListViewItem__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__, v31, v32);
    sub_1BCA7E0(&Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__, v33, v34);
    sub_1BCA7E0(&MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_11673/*"SERVANT_ALL_EMPTY"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_12087/*"SERVANT_TAKE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12532/*"SUM_INFO"*/, v45, v46);
    byte_4B11869 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  v47 = (Il2CppObject *)sub_1BCAA2C(
                          MultipleViewListViewManager___c__DisplayClass27_0_TypeInfo,
                          latestSelectedUsrSvtId,
                          selectedUserSvtIds,
                          method);
  System_Object___ctor(v47, 0LL);
  if ( !v47 )
    goto LABEL_72;
  v47[1].klass = (Il2CppClass *)latestSelectedUsrSvtId;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v47[1].monitor = SelfUserGame;
  p_monitor = &v47[1].monitor;
  sub_1BCA784(&v47[1].monitor, SelfUserGame);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v52 = (UserServantMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  v54 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v53);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v54 )
    goto LABEL_72;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v54, &svtIdList, &equipIdList, Instance, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v52 )
    goto LABEL_72;
  usrSvtIds = selectedUserSvtIds;
  object = v47;
  Instance = (__int64)UserServantMaster__getOrganizationList(v52, 0LL);
  if ( !*p_monitor )
    goto LABEL_72;
  v55 = Instance;
  v56 = *((_DWORD *)*p_monitor + 38);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
  LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SERVANT_TAKE"*/, 0LL);
  v58 = MultipleViewListViewManager_TypeInfo;
  v59 = StringLiteral_11713/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo, v57);
    v58 = MultipleViewListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v58->static_fields->servantSortInfo;
  v61 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1BCA784(&this->fields.sort, v61);
  Instance = (__int64)this->fields.sort;
  if ( !Instance )
    goto LABEL_72;
  ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
  if ( !*p_sort )
    goto LABEL_72;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  Instance = UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL);
  v110 = &this->fields.sort;
  if ( (Instance & 1) != 0 )
  {
    v65 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUM_INFO"*/, 0LL);
    if ( !v55 )
      goto LABEL_72;
    v66 = (System_String_o *)Instance;
    LODWORD(v114.fields.currentCryptoKey) = *(_QWORD *)(v55 + 24);
    v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
    v115 = v56;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
    Instance = (__int64)System_String__Format_62415592(v66, v67, v68, 0LL);
    if ( !v65 )
      goto LABEL_72;
    UILabel__set_text(v65, (System_String_o *)Instance, 0LL);
  }
  else if ( !v55 )
  {
    goto LABEL_72;
  }
  v69 = *(_DWORD *)(v55 + 24);
  v109 = (System_String_o *)v59;
  if ( v69 >= 1 )
  {
    v70 = 0;
    while ( 1 )
    {
      if ( v70 >= v69 )
        goto LABEL_73;
      v71 = v55 + 8LL * (int)v70;
      v74 = *(_QWORD *)(v71 + 32);
      v73 = (UserServantEntity_o **)(v71 + 32);
      v72 = v74;
      if ( !v74 )
        break;
      v75 = *(_OWORD *)(v72 + 32);
      *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)(v72 + 16);
      *(_OWORD *)&v114.fields.fakeValue = v75;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v49);
      v113 = v114;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v113, 0LL);
      if ( v70 >= *(_DWORD *)(v55 + 24) )
LABEL_73:
        sub_1BCAA44(Instance, v49);
      if ( !*p_monitor )
        break;
      v78 = Instance;
      v79 = svtIdList;
      v80 = *v73;
      v81 = *((_QWORD *)*p_monitor + 14);
      v82 = (MultipleViewListViewItem_o *)sub_1BCAA2C(MultipleViewListViewItem_TypeInfo, v49, v76, v77);
      MultipleViewListViewItem___ctor(v82, v70, v80, v79, v78 == v81, v83);
      Instance = (__int64)this->fields.itemList;
      if ( !Instance )
        break;
      v84 = *(_QWORD *)(Instance + 16);
      v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v84 )
        break;
      v86 = *(int *)(Instance + 24);
      if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v82,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = v84 + 8 * v86;
        *(_DWORD *)(Instance + 24) = v86 + 1;
        *(_QWORD *)(v87 + 32) = v82;
        Instance = sub_1BCA784(v87 + 32, v82);
      }
      v69 = *(_DWORD *)(v55 + 24);
      if ( (int)++v70 >= v69 )
        goto LABEL_40;
    }
LABEL_72:
    sub_1BCAA3C(Instance, v49);
  }
LABEL_40:
  MultipleViewListViewManager__ModifyItem_31834448(this, usrSvtIds, v64);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v55 + 24) )
    v90 = (System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v90 = v109;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v88);
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v91 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
    Instance = (__int64)LocalizationManager__Get(v90, 0LL);
    if ( !v91 )
      goto LABEL_72;
    UILabel__set_text(v91, (System_String_o *)Instance, 0LL);
  }
  if ( !*v110 )
    goto LABEL_72;
  iconScaleKind = (*v110)->fields.iconScaleKind;
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
      goto LABEL_58;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1BCA784(&this->fields.seed, normalSizeSeed);
LABEL_58:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  MultipleViewListViewManager__SetFilterButtonImage(this, v94);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Instance = (__int64)this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_72;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_72;
    Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v99 = this->fields.scrollBar;
      if ( !v99 )
        goto LABEL_72;
      if ( v99->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v101 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v49, v97, v98);
        System_Predicate_object____ctor(
          v101,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__0__,
          0LL);
        if ( !itemList )
          goto LABEL_72;
        v102 = System_Collections_Generic_List_object___Find(
                 (System_Collections_Generic_List_object__o *)itemList,
                 (System_Predicate_T__o *)v101,
                 (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v102 )
          goto LABEL_70;
        v106 = this->fields.itemList;
        v107 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ListViewItem__TypeInfo, v103, v104, v105);
        System_Predicate_object____ctor(
          v107,
          object,
          Method_MultipleViewListViewManager___c__DisplayClass27_0__CreateList_b__1__,
          0LL);
        if ( !v106 )
          goto LABEL_72;
        v102 = System_Collections_Generic_List_object___Find(
                 (System_Collections_Generic_List_object__o *)v106,
                 (System_Predicate_T__o *)v107,
                 (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v102 )
LABEL_70:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v102[1].klass), 0LL);
      }
    }
  }
}


void __fastcall MultipleViewListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MultipleViewListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B11865 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_TypeInfo, v1, v2);
    byte_4B11865 = 1;
  }
  v3 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo, v1);
    v3 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall MultipleViewListViewManager__DestroyList(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
}


void __fastcall MultipleViewListViewManager__EndCloseSelectFilterKind(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__EndSelectFilterKind(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B11873 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B11873 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    MultipleViewListViewManager__SetFilterButtonImage(this, v9);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MultipleViewListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__EndSelectSortKind(
        MultipleViewListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B11876 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B11876 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall MultipleViewListViewManager__GetAmountSortValue(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B11879 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v7, v8);
    byte_4B11879 = 1;
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
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MultipleViewListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
      {
        break;
      }
      ++v11;
      if ( (MultipleViewListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
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
MultipleViewListViewItem_o *__fastcall MultipleViewListViewManager__GetItem(
        MultipleViewListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  MultipleViewListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1186A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v5, v6);
    byte_4B1186A = 1;
  }
  result = (MultipleViewListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MultipleViewListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MultipleViewListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
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


System_String_o *__fastcall MultipleViewListViewManager__GetScaleButtonSpriteName(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall MultipleViewListViewManager__GetSwapChoiceList(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B1187B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, choiceList, unchoiceList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B1187B = 1;
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
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != MultipleViewListViewItem_TypeInfo )
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


bool __fastcall MultipleViewListViewManager__GetSwapLockList(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B1187A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, lockList, unlockList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v17, v18);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B1187A = 1;
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
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != MultipleViewListViewItem_TypeInfo )
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


void __fastcall MultipleViewListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MultipleViewListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B11866 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_TypeInfo, v1, v2);
    byte_4B11866 = 1;
  }
  v3 = MultipleViewListViewManager_TypeInfo;
  if ( !MultipleViewListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MultipleViewListViewManager_TypeInfo, v1);
    v3 = MultipleViewListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall MultipleViewListViewManager__ModifyItem(
        MultipleViewListViewManager_o *this,
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x11
  MultipleViewListViewItem_o *current; // x21
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

  if ( (byte_4B1186B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, usrSvtId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    byte_4B1186B = 1;
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
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v48,
        (System_Collections_Generic_List_object__o *)Master_object,
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
          && (methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v49.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (MultipleViewListViewItem_c *)v49.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
            current = (MultipleViewListViewItem_o *)v49.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_16:
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
            goto LABEL_27;
          }
        }
        else
        {
          current = 0LL;
          if ( Entity )
            goto LABEL_16;
        }
        if ( !current )
          sub_1BCAA3C(v27, v28);
LABEL_27:
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
        MultipleViewListViewItem__ModifyItem(current, v38 == SelfUserGame->fields.favoriteUserSvtId, v40);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v44 = current->fields.viewObject;
          if ( !v44 )
            sub_1BCAA3C(0LL, v43);
          ((void (__fastcall *)(struct ListViewObject_o *, MultipleViewListViewItem_o *, Il2CppMethodPointer))v44->klass->vtable._5_SetItem.method)(
            v44,
            current,
            v44->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_44:
    sub_1BCAA3C(Master_object, v23);
  }
}


void __fastcall MultipleViewListViewManager__ModifyItem_31834448(
        MultipleViewListViewManager_o *this,
        System_Int64_array *usrSvtIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  MultipleViewListViewManager___c_c *v42; // x0
  System_Predicate_long__o *_9__31_0; // x20
  Il2CppObject *v44; // x22
  struct MultipleViewListViewManager___c_StaticFields *static_fields; // x0
  unsigned int Index_long; // w22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_int__o *v50; // x20
  __int64 v51; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int64_t v53; // x1
  __int64 v54; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x23
  unsigned __int64 v56; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  _BOOL4 v60; // w21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  Il2CppObject *current; // x24
  Il2CppObject *v65; // x23
  __int64 v66; // x0
  __int64 v67; // x1
  MultipleViewListViewItem_c *v68; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v70; // x10
  Il2CppObject *v71; // x1
  MultipleViewListViewItem_o **v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Predicate_long__o *v76; // x24
  __int64 v77; // x0
  __int64 v78; // x1
  int32_t v79; // w23
  UserServantEntity_o *userSvtEntity; // x0
  __int64 SvtId; // x0
  _BOOL8 v82; // x0
  __int64 v83; // x1
  const MethodInfo *v84; // x4
  __int64 v85; // x0
  __int64 v86; // x1
  UnityEngine_Object_o *viewObject; // x23
  _BOOL8 v88; // x0
  MultipleViewListViewItem_o *v89; // x1
  struct ListViewObject_o *v90; // x0
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1186C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_long___, usrSvtIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v26, v27);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Predicate_long__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__, v34, v35);
    sub_1BCA7E0(&Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__, v36, v37);
    sub_1BCA7E0(&MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo, v38, v39);
    sub_1BCA7E0(&MultipleViewListViewManager___c_TypeInfo, v40, v41);
    byte_4B1186C = 1;
  }
  memset(&v92, 0, sizeof(v92));
  if ( this->fields.itemList )
  {
    v42 = MultipleViewListViewManager___c_TypeInfo;
    if ( !MultipleViewListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MultipleViewListViewManager___c_TypeInfo, usrSvtIds);
      v42 = MultipleViewListViewManager___c_TypeInfo;
    }
    _9__31_0 = v42->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42, usrSvtIds);
        v42 = MultipleViewListViewManager___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__31_0 = (System_Predicate_long__o *)sub_1BCAA2C(System_Predicate_long__TypeInfo, usrSvtIds, method, v3);
      System_Predicate_long____ctor(_9__31_0, v44, Method_MultipleViewListViewManager___c__ModifyItem_b__31_0__, 0LL);
      static_fields = MultipleViewListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = _9__31_0;
      sub_1BCA784(&static_fields->__9__31_0, _9__31_0);
    }
    Index_long = System_Array__FindIndex_long_(
                   usrSvtIds,
                   (System_Predicate_T__o *)_9__31_0,
                   (const MethodInfo_300D5EC *)Method_System_Array_FindIndex_long___);
    v50 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v47,
                                                      v48,
                                                      v49);
    System_Collections_Generic_List_int____ctor(
      v50,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !usrSvtIds )
      goto LABEL_54;
    v54 = *(_QWORD *)&usrSvtIds->max_length;
    if ( (int)v54 >= 1 )
    {
      v55 = Master_object;
      v56 = 0LL;
      do
      {
        if ( v56 >= (unsigned int)v54 )
          sub_1BCAA44(Master_object, v53);
        v53 = usrSvtIds->m_Items[v56];
        if ( v53 >= 1 )
        {
          if ( !v55 )
            goto LABEL_54;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                          v55,
                                                                          v53,
                                                                          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !Master_object )
            goto LABEL_54;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtId(
                                                                          (UserServantEntity_o *)Master_object,
                                                                          0LL);
          if ( !v50 )
            goto LABEL_54;
          items = v50->fields._items;
          v58 = Method_System_Collections_Generic_List_int__Add__;
          ++v50->fields._version;
          if ( !items )
            goto LABEL_54;
          size = v50->fields._size;
          v53 = (unsigned int)Master_object;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v50,
              (int32_t)Master_object,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v50->fields._size = size + 1;
            items->m_Items[size + 1] = (int)Master_object;
          }
        }
        LODWORD(v54) = usrSvtIds->max_length;
      }
      while ( (__int64)++v56 < (int)v54 );
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( !Master_object )
LABEL_54:
      sub_1BCAA3C(Master_object, v53);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v91,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v60 = Index_long >> 31;
    v92 = v91;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v92,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v92.fields._current;
      v65 = (Il2CppObject *)sub_1BCAA2C(MultipleViewListViewManager___c__DisplayClass31_0_TypeInfo, v61, v62, v63);
      System_Object___ctor(v65, 0LL);
      if ( !v65 )
        sub_1BCAA3C(v66, v67);
      if ( current )
      {
        v68 = MultipleViewListViewItem_TypeInfo;
        methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
            v70 = (Il2CppClass *)current;
          else
            v70 = 0LL;
        }
        else
        {
          v70 = 0LL;
        }
        v65[1].klass = v70;
        v72 = (MultipleViewListViewItem_o **)&v65[1];
        if ( LOBYTE(current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (MultipleViewListViewItem_c *)current->klass->_2.typeHierarchy[methodPtr_low - 1] == v68 )
            v71 = current;
          else
            v71 = 0LL;
        }
        else
        {
          v71 = 0LL;
        }
      }
      else
      {
        v71 = 0LL;
        v65[1].klass = 0LL;
        v72 = (MultipleViewListViewItem_o **)&v65[1];
      }
      sub_1BCA784(v72, v71);
      v76 = (System_Predicate_long__o *)sub_1BCAA2C(System_Predicate_long__TypeInfo, v73, v74, v75);
      System_Predicate_long____ctor(
        v76,
        v65,
        Method_MultipleViewListViewManager___c__DisplayClass31_0__ModifyItem_b__1__,
        0LL);
      v77 = System_Array__FindIndex_long_(
              usrSvtIds,
              (System_Predicate_T__o *)v76,
              (const MethodInfo_300D5EC *)Method_System_Array_FindIndex_long___);
      if ( !*v72 )
        sub_1BCAA3C(v77, v78);
      v79 = v77;
      userSvtEntity = (*v72)->fields.userSvtEntity;
      if ( !userSvtEntity )
        sub_1BCAA3C(0LL, v78);
      SvtId = UserServantEntity__getSvtId(userSvtEntity, 0LL);
      if ( !v50 )
        sub_1BCAA3C(SvtId, (unsigned int)SvtId);
      v82 = System_Collections_Generic_List_int___Contains(
              v50,
              SvtId,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !*v72 )
        sub_1BCAA3C(v82, v83);
      MultipleViewListViewItem__ModifyItem_31824548(*v72, v79, v82, v60, v84);
      if ( !*v72 )
        sub_1BCAA3C(v85, v86);
      viewObject = (UnityEngine_Object_o *)(*v72)->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
      v88 = UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
      if ( v88 )
      {
        v89 = *v72;
        if ( !*v72 )
          sub_1BCAA3C(v88, 0LL);
        v90 = v89->fields.viewObject;
        if ( !v90 )
          sub_1BCAA3C(0LL, v89);
        ((void (__fastcall *)(struct ListViewObject_o *))v90->klass->vtable._5_SetItem.method)(v90);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v92,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__ModifyList(
        MultipleViewListViewManager_o *this,
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
  __int64 v15; // x1
  int64_t Master_object; // x0
  __int64 v17; // x1
  int v18; // w8
  int64_t v19; // x20
  unsigned int v20; // w25
  bool v21; // w21
  __int64 v22; // x8
  __int128 v23; // q0
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v25; // x23
  int32_t v26; // w24
  MultipleViewListViewItem_o *v27; // x22
  __int64 methodPtr_low; // x10
  __int64 v29; // x8
  __int128 v30; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v32; // q0
  int64_t v33; // x0
  const MethodInfo *v34; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+60h] [xbp-80h]

  if ( (byte_4B1187C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v9, v10);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    byte_4B1187C = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_31;
  v18 = *(_DWORD *)(Master_object + 24);
  v19 = Master_object;
  if ( v18 >= 1 )
  {
    v20 = 0;
    v21 = isIconSizeChange;
    while ( 1 )
    {
      if ( v20 >= v18 )
        sub_1BCAA44(Master_object, v17);
      v22 = *(_QWORD *)(v19 + 8LL * (int)v20 + 32);
      if ( !v22 )
        break;
      v23 = *(_OWORD *)(v22 + 32);
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
      *(_OWORD *)&v38.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
      v37 = v38;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v37, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v25 = Master_object;
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= itemList->fields._size )
          goto LABEL_29;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   itemList,
                                   v26,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v27 = (MultipleViewListViewItem_o *)Master_object;
        methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)methodPtr_low
          || *(MultipleViewListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) != MultipleViewListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v29 = *(_QWORD *)(Master_object + 112);
        if ( v29 )
        {
          v30 = *(_OWORD *)(v29 + 32);
          *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
          *(_OWORD *)&v38.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
          v36 = v38;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v36, 0LL);
          if ( Master_object == v25 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v26;
        if ( !itemList )
          goto LABEL_31;
      }
      userSvtEntity = v27->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v32 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v38.fields.fakeValue = v32;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
      v35 = v38;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL);
      MultipleViewListViewManager__ModifyLockItem(this, v27, v33, 1, v21, v34);
LABEL_29:
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v20 >= v18 )
        return;
    }
LABEL_31:
    sub_1BCAA3C(Master_object, v17);
  }
}


void __fastcall MultipleViewListViewManager__ModifyLockItem(
        MultipleViewListViewManager_o *this,
        MultipleViewListViewItem_o *multipleViewItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v10; // x20
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
  MultipleViewListViewManager_o *v21; // x23
  int64_t v22; // x0
  __int128 v23; // q1
  MultipleViewListViewManager_o *v24; // x25
  const MethodInfo *v25; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4B1187E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, multipleViewItem, usrSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    this = (MultipleViewListViewManager_o *)sub_1BCA7E0(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v17,
                                              v18);
    byte_4B1187E = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (MultipleViewListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (MultipleViewListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              usrSvtId,
                                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !multipleViewItem )
        goto LABEL_26;
      userSvtEntity = multipleViewItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v21 = this;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, multipleViewItem);
      v28 = v29;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v28, 0LL);
      v23 = *(_OWORD *)&v21->fields.dropObjectList;
      v24 = (MultipleViewListViewManager_o *)v22;
      *(UnityEngine_MonoBehaviour_Fields *)&v27.fields.currentCryptoKey = v21->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v27.fields.fakeValue = v23;
      this = (MultipleViewListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                &v27,
                                                0LL);
      if ( v24 == this )
      {
        multipleViewItem->fields.userSvtEntity = (struct UserServantEntity_o *)v21;
        this = (MultipleViewListViewManager_o *)sub_1BCA784(&multipleViewItem->fields.userSvtEntity, v21);
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
    MultipleViewListViewItem__ModifyChoiceItem(multipleViewItem, v25);
  }
  viewObject = (UnityEngine_Object_o *)multipleViewItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, multipleViewItem);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(MultipleViewListViewManager_o *, MultipleViewListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        multipleViewItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (MultipleViewListViewManager_o *)multipleViewItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)multipleViewItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(this, multipleViewItem);
  }
}


void __fastcall MultipleViewListViewManager__OnClickFilterKind(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B11872 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MultipleViewListViewManager_EndSelectFilterKind__, v4, v5);
    sub_1BCA7E0(&Method_MultipleViewListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11872 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_MultipleViewListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewListViewManager_OnClickFilterKind__);
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
      Method_MultipleViewListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantFilterSelectMenu(v14, 9, sort, v18, -1, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnClickListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall MultipleViewListViewManager__OnClickSelectListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x20
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
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MultipleViewListViewManager__OnClickSortAscendingOrder(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B11877 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B11877 = 1;
  }
  if ( this->fields.isInput )
  {
    v4 = Method_MultipleViewListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewListViewManager_OnClickSortAscendingOrder__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BCAA3C(v6, v7);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnClickSortKind(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B11875 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MultipleViewListViewManager_EndSelectSortKind__, v4, v5);
    sub_1BCA7E0(&Method_MultipleViewListViewManager_OnClickSortKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11875 = 1;
  }
  if ( this->fields.isInput )
  {
    v10 = Method_MultipleViewListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewListViewManager_OnClickSortKind__);
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
      Method_MultipleViewListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v14 )
      sub_1BCAA3C(v19, v20);
    CommonUI__OpenServantSortSelectMenu(v14, 3, sort, 0, v18, 0LL);
  }
}


void __fastcall MultipleViewListViewManager__OnLongPushListView(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct MultipleViewListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int Index; // w0

  if ( (byte_4B11871 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MultipleViewListViewManager_OnLongPushListView__, obj, method);
    byte_4B11871 = 1;
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
      v7 = Method_MultipleViewListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_MultipleViewListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCA7F8(Method_MultipleViewListViewManager_OnLongPushListView__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      if ( obj )
      {
        Index = ListViewObject__get_Index(obj, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          1LL,
          Index,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
    }
    sub_1BCAA3C(scrollView, obj);
  }
}


void __fastcall MultipleViewListViewManager__OnMoveEnd(MultipleViewListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B11870 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11870 = 1;
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
void __fastcall MultipleViewListViewManager__RequestListObject(
        MultipleViewListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
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

  if ( (byte_4B1186E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_MultipleViewListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B1186E = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
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
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      MultipleViewListViewObject__Init_31837744((MultipleViewListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager__RequestListObject_31836716(
        MultipleViewListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
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

  if ( (byte_4B1186F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_MultipleViewListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B1186F = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)MultipleViewListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
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
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MultipleViewListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_MultipleViewListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      MultipleViewListViewObject__Init_31837828((MultipleViewListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MultipleViewListViewObject__Dispose__);
  }
}


void __fastcall MultipleViewListViewManager__SetCanLongPushFlag(
        MultipleViewListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void __fastcall MultipleViewListViewManager__SetFilterButtonImage(
        MultipleViewListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v8; // x8

  if ( (byte_4B11874 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17688/*"btn_filter_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17687/*"btn_filter"*/, v4, v5);
    byte_4B11874 = 1;
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


void __fastcall MultipleViewListViewManager__SetMode(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        MultipleViewListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  MultipleViewListViewManager__SetMode_31836508(this, mode, v6);
}


void __fastcall MultipleViewListViewManager__SetMode_31836508(
        MultipleViewListViewManager_o *this,
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
    MultipleViewListViewManager__RequestListObject_31836716(this, mode + 1, v7);
}


void __fastcall MultipleViewListViewManager__SetMode_31836664(
        MultipleViewListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BCA784(&this->fields.callbackFunc2, callback);
  MultipleViewListViewManager__SetMode_31836508(this, mode, v6);
}


void __fastcall MultipleViewListViewManager__SetObjectItem(
        MultipleViewListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B1186D & 1) == 0 )
  {
    this = (MultipleViewListViewManager_o *)sub_1BCA7E0(&MultipleViewListViewObject_TypeInfo, obj, item);
    byte_4B1186D = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MultipleViewListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MultipleViewListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  MultipleViewListViewObject__Init_31836436((MultipleViewListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall MultipleViewListViewManager__SetSortButtonImage(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B11878 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17718/*"btn_sort_up"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17806/*"btn_txt_up"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17761/*"btn_txt_new"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17751/*"btn_txt_down"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17768/*"btn_txt_old"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17715/*"btn_sort_down"*/, v14, v15);
    byte_4B11878 = 1;
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
void __fastcall MultipleViewListViewManager__UpdateDisplayState(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B1187D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, v11, v12);
    byte_4B1187D = 1;
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
      methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (MultipleViewListViewItem_c *)v18.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
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


void __fastcall MultipleViewListViewManager__add_callbackFunc(
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

  if ( (byte_4B11861 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11861 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1BCACFC(v7);
  MultipleViewListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall MultipleViewListViewManager__add_callbackFunc2(
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

  if ( (byte_4B11863 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11863 = 1;
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
  v10 = (MultipleViewListViewManager_o *)sub_1BCACFC(v7);
  MultipleViewListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MultipleViewListViewObject__o *__fastcall MultipleViewListViewManager__get_ClippingObjectList(
        MultipleViewListViewManager_o *this,
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
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B11868 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11868 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)MultipleViewListViewObject__GetItem(
                                 (MultipleViewListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v33 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v33 )
        {
          if ( !v21 )
            sub_1BCAA3C(v33, v34);
          items = v21->fields._items;
          v36 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
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
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
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
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v21;
}


System_Collections_Generic_List_MultipleViewListViewObject__o *__fastcall MultipleViewListViewManager__get_ObjectList(
        MultipleViewListViewManager_o *this,
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

  if ( (byte_4B11867 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B11867 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MultipleViewListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MultipleViewListViewObject___ctor__);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MultipleViewListViewObject___);
      v29 = Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v31 = Method_System_Collections_Generic_List_MultipleViewListViewObject__Add__;
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
  return (System_Collections_Generic_List_MultipleViewListViewObject__o *)v21;
}


void __fastcall MultipleViewListViewManager__remove_callbackFunc(
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

  if ( (byte_4B11862 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B11862 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MultipleViewListViewManager_CallbackFunc_c *)v7->klass != MultipleViewListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MultipleViewListViewManager_o *)sub_1BCACFC(v7);
  MultipleViewListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall MultipleViewListViewManager__remove_callbackFunc2(
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

  if ( (byte_4B11864 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11864 = 1;
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
  MultipleViewListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MultipleViewListViewManager_CallbackFunc___ctor(
        MultipleViewListViewManager_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A062E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06288;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MultipleViewListViewManager_CallbackFunc__BeginInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4B11880 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&MultipleViewListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B11880 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(MultipleViewListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall MultipleViewListViewManager_CallbackFunc__EndInvoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MultipleViewListViewManager_CallbackFunc__Invoke(
        MultipleViewListViewManager_CallbackFunc_o *this,
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


void __fastcall MultipleViewListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11881 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewManager___c_TypeInfo, v1, v2);
    byte_4B11881 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MultipleViewListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MultipleViewListViewManager___c_TypeInfo->static_fields->__9 = (struct MultipleViewListViewManager___c_o *)v4;
  sub_1BCA784(MultipleViewListViewManager___c_TypeInfo->static_fields, v4);
}


void __fastcall MultipleViewListViewManager___c___ctor(
        MultipleViewListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c___ModifyItem_b__31_0(
        MultipleViewListViewManager___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id < 1;
}


void __fastcall MultipleViewListViewManager___c__DisplayClass27_0___ctor(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__0(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  MultipleViewListViewManager___c__DisplayClass27_0_o *v11; // x0
  ListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4B11882 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, item, method);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1BCA7E0(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    v5,
                                                                    v6);
    byte_4B11882 = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)MultipleViewListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (MultipleViewListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != MultipleViewListViewItem_TypeInfo )
  {
    v11 = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1BCACFC(v3);
    return MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(v11, v12, v13);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1BCAA3C(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v15.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      MultipleViewListViewItem_TypeInfo);
  v14 = v15;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v14, 0LL) == v4->fields.latestSelectedUsrSvtId;
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass27_0___CreateList_b__1(
        MultipleViewListViewManager___c__DisplayClass27_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  MultipleViewListViewManager___c__DisplayClass27_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  MultipleViewListViewManager___c__DisplayClass31_0_o *v12; // x0
  int64_t v13; // x1
  const MethodInfo *v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4B11883 & 1) == 0 )
  {
    sub_1BCA7E0(&MultipleViewListViewItem_TypeInfo, item, method);
    this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)sub_1BCA7E0(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    v5,
                                                                    v6);
    byte_4B11883 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  item = (ListViewItem_o *)MultipleViewListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(MultipleViewListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (MultipleViewListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == MultipleViewListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v16.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          MultipleViewListViewItem_TypeInfo);
      v15 = v16;
      this = (MultipleViewListViewManager___c__DisplayClass27_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                                      &v15,
                                                                      0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (MultipleViewListViewManager___c__DisplayClass27_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1BCAA3C(this, item);
  }
  v12 = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1BCACFC(v3);
  return MultipleViewListViewManager___c__DisplayClass31_0___ModifyItem_b__1(v12, v13, v14);
}


void __fastcall MultipleViewListViewManager___c__DisplayClass31_0___ctor(
        MultipleViewListViewManager___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MultipleViewListViewManager___c__DisplayClass31_0___ModifyItem_b__1(
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
  if ( (byte_4B11884 & 1) == 0 )
  {
    this = (MultipleViewListViewManager___c__DisplayClass31_0_o *)sub_1BCA7E0(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    id,
                                                                    method);
    byte_4B11884 = 1;
  }
  servantItem = v4->fields.servantItem;
  if ( !servantItem || (userSvtEntity = servantItem->fields.userSvtEntity) == 0LL )
    sub_1BCAA3C(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, id);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL) == id;
}