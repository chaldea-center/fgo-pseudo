void __fastcall PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19

  if ( (byte_4A56BED & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10614/*"PhotoCampaign1"*/);
    byte_4A56BED = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_10614/*"PhotoCampaign1"*/, 3, 0, 0LL);
  PhotoCampaignListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1B88554(PhotoCampaignListViewManager_TypeInfo->static_fields, v1);
}


void __fastcall PhotoCampaignListViewManager___ctor(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PhotoCampaignListViewManager__ChangeIconScale(
        PhotoCampaignListViewManager_o *this,
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
    *((_DWORD *)p_seed + 75) = v5;
    sub_1B88554(p_seed, smallSizeSeed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        PhotoCampaignListViewManager__ModifyList(this, 1, v8),
        PhotoCampaignListViewManager__SetMode_31559208(this, 2, v9),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1B8880C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall PhotoCampaignListViewManager__CreateList(
        PhotoCampaignListViewManager_o *this,
        int64_t latestSelectedUsrSvtId,
        int64_t selectedUserSvtIds,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x19
  __int64 UserId; // x0
  __int64 v9; // x1
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *Master_object; // x0
  UserServantMaster_o *v12; // x23
  Il2CppObject *v13; // x24
  __int64 v14; // x24
  int v15; // w20
  PhotoCampaignListViewManager_c *v16; // x0
  __int64 v17; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v19; // x1
  struct ListViewSort_o **p_sort; // x21
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v22; // x2
  UILabel_o *v23; // x25
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_String_o *v27; // x26
  Il2CppObject *v28; // x27
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  int v33; // w8
  unsigned int v34; // w25
  __int64 v35; // x26
  __int64 v36; // x8
  UserServantEntity_o **v37; // x26
  __int64 v38; // t1
  __int128 v39; // q0
  __int64 v40; // x27
  System_Int64_array *v41; // x22
  UserServantEntity_o *v42; // x29
  __int64 v43; // x19
  PhotoCampaignListViewItem_o *v44; // x26
  const MethodInfo *v45; // x5
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v51; // x21
  UILabel_o *v52; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v55; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v57; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_object__o *v59; // x22
  Il2CppObject *v60; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v61; // x21
  System_Predicate_object__o *v62; // x22
  System_String_o *v63; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v64; // [xsp+10h] [xbp-E0h]
  struct ListViewSort_o **v65; // [xsp+18h] [xbp-D8h]
  int64_t usrSvtId; // [xsp+20h] [xbp-D0h]
  void **p_monitor; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+50h] [xbp-A0h] BYREF
  int v70; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4A56BD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewManager_TypeInfo);
    sub_1B885B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__);
    sub_1B885B0(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__);
    sub_1B885B0(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11535/*"SERVANT_ALL_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11949/*"SERVANT_TAKE"*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A56BD8 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  v7 = (Il2CppObject *)sub_1B887FC(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_72;
  v7[1].klass = (Il2CppClass *)latestSelectedUsrSvtId;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v7[1].monitor = SelfUserGame;
  p_monitor = &v7[1].monitor;
  sub_1B88554(&v7[1].monitor, SelfUserGame);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v12 = (UserServantMaster_o *)Master_object;
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v13 )
    goto LABEL_72;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v13, &svtIdList, &equipIdList, UserId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v12 )
    goto LABEL_72;
  usrSvtId = selectedUserSvtIds;
  UserId = (__int64)UserServantMaster__getOrganizationList(v12, 0LL);
  if ( !*p_monitor )
    goto LABEL_72;
  v14 = UserId;
  v15 = *((_DWORD *)*p_monitor + 38);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_TAKE"*/, 0LL);
  v16 = PhotoCampaignListViewManager_TypeInfo;
  v17 = StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v16 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v16->static_fields->servantSortInfo;
  v19 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1B88554(&this->fields.sort, v19);
  UserId = (__int64)this->fields.sort;
  if ( !UserId )
    goto LABEL_72;
  ListViewSort__Load((ListViewSort_o *)UserId, 0LL);
  if ( !*p_sort )
    goto LABEL_72;
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UserId = UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL);
  v65 = &this->fields.sort;
  if ( (UserId & 1) != 0 )
  {
    v23 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
    if ( !v14 )
      goto LABEL_72;
    v27 = (System_String_o *)UserId;
    LODWORD(v69.fields.currentCryptoKey) = *(_QWORD *)(v14 + 24);
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v24, v25, v26);
    v70 = v15;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v29, v30, v31);
    UserId = (__int64)System_String__Format_61721404(v27, v28, v32, 0LL);
    if ( !v23 )
      goto LABEL_72;
    UILabel__set_text(v23, (System_String_o *)UserId, 0LL);
  }
  else if ( !v14 )
  {
    goto LABEL_72;
  }
  v33 = *(_DWORD *)(v14 + 24);
  v63 = (System_String_o *)v17;
  v64 = v7;
  if ( v33 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= v33 )
        goto LABEL_73;
      v35 = v14 + 8LL * (int)v34;
      v38 = *(_QWORD *)(v35 + 32);
      v37 = (UserServantEntity_o **)(v35 + 32);
      v36 = v38;
      if ( !v38 )
        break;
      v39 = *(_OWORD *)(v36 + 32);
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v36 + 16);
      *(_OWORD *)&v69.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v68 = v69;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v68, 0LL);
      if ( v34 >= *(_DWORD *)(v14 + 24) )
LABEL_73:
        sub_1B88814(UserId, v9);
      if ( !*p_monitor )
        break;
      v40 = UserId;
      v41 = svtIdList;
      v42 = *v37;
      v43 = *((_QWORD *)*p_monitor + 14);
      v44 = (PhotoCampaignListViewItem_o *)sub_1B887FC(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v44, v34, v42, v41, v40 == v43, v45);
      UserId = (__int64)this->fields.itemList;
      if ( !UserId )
        break;
      v46 = *(_QWORD *)(UserId + 16);
      v47 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(UserId + 28);
      if ( !v46 )
        break;
      v48 = *(int *)(UserId + 24);
      if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)UserId,
          (Il2CppObject *)v44,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = v46 + 8 * v48;
        *(_DWORD *)(UserId + 24) = v48 + 1;
        *(_QWORD *)(v49 + 32) = v44;
        UserId = sub_1B88554(v49 + 32, v44);
      }
      v33 = *(_DWORD *)(v14 + 24);
      if ( (int)++v34 >= v33 )
        goto LABEL_40;
    }
LABEL_72:
    sub_1B8880C(UserId, v9);
  }
LABEL_40:
  PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(this, usrSvtId, v22);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v14 + 24) )
    v51 = (System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v51 = v63;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UserId = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (UserId & 1) != 0 )
  {
    v52 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (__int64)LocalizationManager__Get(v51, 0LL);
    if ( !v52 )
      goto LABEL_72;
    UILabel__set_text(v52, (System_String_o *)UserId, 0LL);
  }
  if ( !*v65 )
    goto LABEL_72;
  iconScaleKind = (*v65)->fields.iconScaleKind;
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
  sub_1B88554(&this->fields.seed, normalSizeSeed);
LABEL_58:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v55);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    UserId = (__int64)this->fields.scrollBar;
    if ( !UserId )
      goto LABEL_72;
    UserId = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_72;
    UserId = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)UserId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      v57 = this->fields.scrollBar;
      if ( !v57 )
        goto LABEL_72;
      if ( v57->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v59 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v59,
          v64,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__,
          0LL);
        if ( !itemList )
          goto LABEL_72;
        v60 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v59,
                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v60 )
          goto LABEL_70;
        v61 = this->fields.itemList;
        v62 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v62,
          v64,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__,
          0LL);
        if ( !v61 )
          goto LABEL_72;
        v60 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v61,
                (System_Predicate_T__o *)v62,
                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v60 )
LABEL_70:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v60[1].klass), 0LL);
      }
    }
  }
}


void __fastcall PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A56BD4 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_TypeInfo);
    byte_4A56BD4 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1B8880C(0LL, v1);
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
    sub_1B8880C(0LL, v3);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A56BE1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56BE1 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A56BE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56BE4 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PhotoCampaignListViewManager__GetAmountSortValue(
        PhotoCampaignListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v11; // x8

  if ( (byte_4A56BE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BE7 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      klass = itemList->klass;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PhotoCampaignListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( (PhotoCampaignListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
        v11 = itemList;
      else
        v11 = 0LL;
      if ( LODWORD(v11[3].monitor) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


PhotoCampaignListViewItem_o *__fastcall PhotoCampaignListViewManager__GetItem(
        PhotoCampaignListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PhotoCampaignListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56BD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BD9 = 1;
  }
  result = (PhotoCampaignListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PhotoCampaignListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (PhotoCampaignListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
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


System_String_o *__fastcall PhotoCampaignListViewManager__GetScaleButtonSpriteName(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PhotoCampaignListViewManager__GetSwapChoiceList(
        PhotoCampaignListViewManager_o *this,
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
  __int64 methodPtr_low; // x10
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
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]

  if ( (byte_4A56BE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BE9 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 112);
      if ( v14 && *(_BYTE *)(itemList + 162) )
      {
        if ( *(_BYTE *)(itemList + 158) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= v21->max_length )
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
    sub_1B8880C(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554(choiceList, 0LL);
    v29 = unchoiceList;
    v28 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v27;
    sub_1B88554(choiceList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v28;
    v29 = unchoiceList;
  }
  sub_1B88554(v29, v28);
  return v26 > 0;
}


bool __fastcall PhotoCampaignListViewManager__GetSwapLockList(
        PhotoCampaignListViewManager_o *this,
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
  __int64 methodPtr_low; // x10
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
  System_Int64_array *v27; // x0
  System_Int64_array *v28; // x1
  System_Int64_array **v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]

  if ( (byte_4A56BE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BE8 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v14 = *(_QWORD *)(itemList + 112);
      if ( v14 && *(_BYTE *)(itemList + 161) )
      {
        if ( *(_BYTE *)(itemList + 157) )
        {
          v15 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v24 = v17[4];
            v25 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v25,
              v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v24 + 192) + 112LL));
            goto LABEL_28;
          }
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v20 = *(_OWORD *)(v14 + 32);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
          *(_OWORD *)&v33.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v33;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
          if ( !v7 )
            goto LABEL_37;
          v21 = v7->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v21 )
            goto LABEL_37;
          v23 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v23 >= v21->max_length )
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
    sub_1B8880C(itemList, v9);
  v26 = v8->fields._size + v7->fields._size;
  if ( v26 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554(lockList, 0LL);
    v29 = unlockList;
    v28 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v27 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v27;
    sub_1B88554(lockList, v27);
    v28 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v28;
    v29 = unlockList;
  }
  sub_1B88554(v29, v28);
  return v26 > 0;
}


void __fastcall PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A56BD5 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_TypeInfo);
    byte_4A56BD5 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall PhotoCampaignListViewManager__ModifyItem(
        PhotoCampaignListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 methodPtr_low; // x11
  PhotoCampaignListViewItem_o *current; // x21
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

  if ( (byte_4A56BDA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BDA = 1;
  }
  memset(&v30, 0, sizeof(v30));
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v30.fields._list = *(_OWORD *)&v29.fields.currentCryptoKey;
      v30.fields._current = (Il2CppObject *)v29.fields.fakeValue;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v30,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v30,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v30.fields._current
          && (methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v30.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (PhotoCampaignListViewItem_c *)v30.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = (PhotoCampaignListViewItem_o *)v30.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1B8880C(v9, v10);
            userSvtEntity = current->fields.userSvtEntity;
            if ( !userSvtEntity )
              sub_1B8880C(v9, v10);
            v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v29.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v28 = v29;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v28, 0LL);
            v16 = Entity[2];
            v17 = v15;
            *(Il2CppObject *)&v27.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v27.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v27, 0LL);
            if ( v17 == v9 )
            {
              current->fields.userSvtEntity = (struct UserServantEntity_o *)Entity;
              v9 = sub_1B88554(&current->fields.userSvtEntity, Entity);
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
          sub_1B8880C(v9, v10);
LABEL_27:
        v18 = current->fields.userSvtEntity;
        if ( !v18 )
          sub_1B8880C(v9, v10);
        v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v29;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
        if ( !SelfUserGame )
          sub_1B8880C(v20, v21);
        PhotoCampaignListViewItem__ModifyItem(current, v20 == SelfUserGame->fields.favoriteUserSvtId, v22);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v25 = current->fields.viewObject;
          if ( !v25 )
            sub_1B8880C(0LL, v24);
          ((void (__fastcall *)(struct ListViewObject_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))v25->klass->vtable._5_SetItem.method)(
            v25,
            current,
            v25->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_44:
    sub_1B8880C(Master_object, v5);
  }
}


void __fastcall PhotoCampaignListViewManager__ModifyList(
        PhotoCampaignListViewManager_o *this,
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
  PhotoCampaignListViewItem_o *v16; // x22
  __int64 methodPtr_low; // x10
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

  if ( (byte_4A56BEA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BEA = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
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
        sub_1B88814(Master_object, v6);
      v11 = *(_QWORD *)(v8 + 8LL * (int)v9 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
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
                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v16 = (PhotoCampaignListViewItem_o *)Master_object;
        methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)methodPtr_low
          || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v18 = *(_QWORD *)(Master_object + 112);
        if ( v18 )
        {
          v19 = *(_OWORD *)(v18 + 32);
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
          *(_OWORD *)&v27.fields.fakeValue = v19;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v25 = v27;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
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
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v24, 0LL);
      PhotoCampaignListViewManager__ModifyLockItem(this, v16, v22, 1, v10, v23);
LABEL_29:
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_31:
    sub_1B8880C(Master_object, v6);
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
  __int128 v15; // q1
  PhotoCampaignListViewManager_o *v16; // x25
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4A56BEC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56BEC = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_26;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v21.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v20 = v21;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (PhotoCampaignListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v19.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v19.fields.fakeValue = v15;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                 &v19,
                                                 0LL);
      if ( v16 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        this = (PhotoCampaignListViewManager_o *)sub_1B88554(&photoCampaignItem->fields.userSvtEntity, v13);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !photoCampaignItem )
      goto LABEL_26;
  }
  else
  {
    if ( !photoCampaignItem )
      goto LABEL_26;
    PhotoCampaignListViewItem__ModifyLockItem(photoCampaignItem, (const MethodInfo *)photoCampaignItem);
    PhotoCampaignListViewItem__ModifyChoiceItem(photoCampaignItem, v17);
  }
  viewObject = (UnityEngine_Object_o *)photoCampaignItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (PhotoCampaignListViewManager_o *)photoCampaignItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(PhotoCampaignListViewManager_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        photoCampaignItem,
        this->klass->vtable._6_GetFocusItemIndex.methodPtr);
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
LABEL_26:
    sub_1B8880C(this, photoCampaignItem);
  }
}


void __fastcall PhotoCampaignListViewManager__OnClickFilterKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A56BE0 & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56BE0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
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
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1B88554(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v5, v6);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
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

  if ( (byte_4A56BE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    byte_4A56BE5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A56BE3 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_PhotoCampaignListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_PhotoCampaignListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56BE3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v7 )
      sub_1B8880C(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0LL);
  }
}


void __fastcall PhotoCampaignListViewManager__OnLongPushListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int Index; // w0

  if ( (byte_4A56BDF & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoCampaignListViewManager_OnLongPushListView__);
    byte_4A56BDF = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_1B88554(&this->fields.callbackFunc, 0LL);
      if ( !callbackFunc )
        return;
      v7 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
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
    sub_1B8880C(scrollView, obj);
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

  if ( (byte_4A56BDE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56BDE = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A56BDD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__);
    sub_1B885B0(&Method_PhotoCampaignListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56BDD = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      PhotoCampaignListViewObject__Init_31574068((PhotoCampaignListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
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
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  UnityEngine_Object_o *viewObject; // x21
  __int64 v15; // x1
  struct ListViewObject_o *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4A56BDB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BDB = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v19.fields._list = *(_OWORD *)&v18.fields.currentCryptoKey;
    v19.fields._current = (Il2CppObject *)v18.fields.fakeValue;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v19,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = (PhotoCampaignListViewItem_o *)v19.fields._current;
      if ( !v19.fields._current
        || (methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v19.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (PhotoCampaignListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        sub_1B8880C(v6, v7);
      }
      klass = v19.fields._current[7].klass;
      if ( !klass )
        sub_1B8880C(v6, v7);
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v18.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = v18;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL) == usrSvtId )
        v13 = 0;
      else
        v13 = -1;
      PhotoCampaignListViewItem__ModifyItem_31565700(current, v13, v12);
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v16 = current->fields.viewObject;
        if ( !v16 )
          sub_1B8880C(0LL, v15);
        ((void (__fastcall *)(struct ListViewObject_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))v16->klass->vtable._5_SetItem.method)(
          v16,
          current,
          v16->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4A56BE2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A56BE2 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall PhotoCampaignListViewManager__SetMode(
        PhotoCampaignListViewManager_o *this,
        int32_t mode,
        PhotoCampaignListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  PhotoCampaignListViewManager__SetMode_31559208(this, mode, v6);
}


void __fastcall PhotoCampaignListViewManager__SetMode_31559208(
        PhotoCampaignListViewManager_o *this,
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
    sub_1B8880C(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0LL);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    PhotoCampaignListViewManager__RequestListObject(this, mode + 1, v7);
}


void __fastcall PhotoCampaignListViewManager__SetObjectItem(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A56BDC & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_1B885B0(&PhotoCampaignListViewObject_TypeInfo);
    byte_4A56BDC = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PhotoCampaignListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PhotoCampaignListViewObject__Init_31573492((PhotoCampaignListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  System_String_o **v12; // x9
  System_String_o **v13; // x10
  System_String_o **v14; // x8
  System_String_o **v15; // x8

  if ( (byte_4A56BE6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A56BE6 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_34;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
LABEL_30:
              if ( v11->fields.isAscendingOrder )
                v15 = v12;
              else
                v15 = v13;
              UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B8880C(sort, v4);
  }
}


void __fastcall PhotoCampaignListViewManager__UpdateDisplayState(
        PhotoCampaignListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  __int64 v7; // x1
  Il2CppObject *current; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A56BEB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BEB = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_13;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v10.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (PhotoCampaignListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1B88ACC(v10.fields._current);
LABEL_13:
        sub_1B8880C(current, v7);
      }
      BYTE4(v10.fields._current[10].klass) = v6;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4A56BD2 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4A56BD2 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_1B88ACC(v7);
  PhotoCampaignListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *__fastcall PhotoCampaignListViewManager__get_ClippingObjectList(
        PhotoCampaignListViewManager_o *this,
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A56BD7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56BD7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(
                                 (PhotoCampaignListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1B8880C(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1B88554(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v3;
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *__fastcall PhotoCampaignListViewManager__get_ObjectList(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_4A56BD6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56BD6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1B88554(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A56BD3 & 1) == 0 )
  {
    sub_1B885B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4A56BD3 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B88ACC(v7);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8088;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8030;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A56BEE & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&PhotoCampaignListViewManager_ResultKind_TypeInfo);
    byte_4A56BEE = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             PhotoCampaignListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PhotoCampaignListViewManager_CallbackFunc__Invoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v9; // x0
  ListViewItem_o *v10; // x1
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4A56BEF & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BEF = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    v9 = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1B88ACC(v3);
    return PhotoCampaignListViewManager___c__DisplayClass24_0___CreateList_b__1(v9, v10, v11);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1B8880C(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL) == v4->fields.latestSelectedUsrSvtId;
}


bool __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___CreateList_b__1(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  PhotoCampaignListViewObject_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4A56BF0 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1B885B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4A56BF0 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
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
      this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                                       &v13,
                                                                       0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1B8880C(this, item);
  }
  v10 = (PhotoCampaignListViewObject_o *)sub_1B88ACC(v3);
  PhotoCampaignListViewObject__add_callbackFunc(v10, v11, v12);
  return result;
}