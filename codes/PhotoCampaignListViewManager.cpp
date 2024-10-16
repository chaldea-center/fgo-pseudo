void __fastcall PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB17F9 & 1) == 0 )
  {
    sub_1BAB41C(&ListViewSort_TypeInfo, v1);
    sub_1BAB41C(&PhotoCampaignListViewManager_TypeInfo, v2);
    sub_1BAB41C(&StringLiteral_10619/*"PhotoCampaign1"*/, v3);
    byte_4AB17F9 = 1;
  }
  v4 = (ListViewSort_o *)sub_1BAB668(ListViewSort_TypeInfo);
  ListViewSort___ctor_41136084(v4, (System_String_o *)StringLiteral_10619/*"PhotoCampaign1"*/, 3, 0, 0LL);
  PhotoCampaignListViewManager_TypeInfo->static_fields->servantSortInfo = v4;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)PhotoCampaignListViewManager_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
}


void __fastcall PhotoCampaignListViewManager___ctor(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PhotoCampaignListViewManager__ChangeIconScale(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v7; // w8
  ServantStatusBattleListViewItem_o *p_seed; // x0
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
    p_seed = (ServantStatusBattleListViewItem_o *)&this->fields.seed;
    p_seed[1].fields.dispLimitCount.fields.hiddenValue = v7;
    sub_1BAB3C0(p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        PhotoCampaignListViewManager__ModifyList(this, 1, v10),
        PhotoCampaignListViewManager__SetMode_31964416(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1BAB678(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
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
  __int64 v27; // x19
  int64_t UserId; // x0
  __int64 v29; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *Master_object; // x0
  UserServantMaster_o *v34; // x23
  Il2CppObject *v35; // x24
  int64_t v36; // x24
  int v37; // w20
  int32_t v38; // w2
  int32_t v39; // w3
  PhotoCampaignListViewManager_c *v40; // x0
  __int64 v41; // x22
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v43; // x1
  struct ListViewSort_o **p_sort; // x21
  UnityEngine_Object_o *infoDataLabel; // x25
  const MethodInfo *v46; // x2
  UILabel_o *v47; // x25
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_String_o *v51; // x26
  Il2CppObject *v52; // x27
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  int v57; // w8
  unsigned int v58; // w25
  int64_t v59; // x26
  __int64 v60; // x8
  UserServantEntity_o **v61; // x26
  __int64 v62; // t1
  __int128 v63; // q0
  int64_t v64; // x27
  System_Int64_array *v65; // x22
  UserServantEntity_o *v66; // x29
  __int64 v67; // x19
  PhotoCampaignListViewItem_o *v68; // x26
  const MethodInfo *v69; // x5
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v77; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  UILabel_o *v80; // x22
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v83; // x1
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v85; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_Predicate_object__o *v87; // x22
  Il2CppObject *v88; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v89; // x21
  System_Predicate_object__o *v90; // x22
  System_String_o *v91; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v92; // [xsp+10h] [xbp-E0h]
  struct ListViewSort_o **v93; // [xsp+18h] [xbp-D8h]
  int64_t usrSvtId; // [xsp+20h] [xbp-D0h]
  __int64 v95; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+50h] [xbp-A0h] BYREF
  int v98; // [xsp+7Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4AB17E4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserDeckMaster___, latestSelectedUsrSvtId);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1BAB41C(&DataManager_TypeInfo, v8);
    sub_1BAB41C(&int_TypeInfo, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Find__, v11);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v12);
    sub_1BAB41C(&NetworkManager_TypeInfo, v13);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v14);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v16);
    sub_1BAB41C(&PhotoCampaignListViewManager_TypeInfo, v17);
    sub_1BAB41C(&System_Predicate_ListViewItem__TypeInfo, v18);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__, v19);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__, v20);
    sub_1BAB41C(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo, v21);
    sub_1BAB41C(&StringLiteral_11584/*"SERVANT_EQUIP_EMPTY"*/, v22);
    sub_1BAB41C(&StringLiteral_11544/*"SERVANT_ALL_EMPTY"*/, v23);
    sub_1BAB41C(&StringLiteral_11781/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v24);
    sub_1BAB41C(&StringLiteral_11958/*"SERVANT_TAKE"*/, v25);
    sub_1BAB41C(&StringLiteral_12403/*"SUM_INFO"*/, v26);
    byte_4AB17E4 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  v27 = sub_1BAB668(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_72;
  *(_QWORD *)(v27 + 16) = latestSelectedUsrSvtId;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  *(_QWORD *)(v27 + 24) = SelfUserGame;
  v95 = v27 + 24;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)SelfUserGame, v31, v32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantMaster___);
  this->fields.isCanNotLongPush = 0;
  v34 = (UserServantMaster_o *)Master_object;
  v35 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v35 )
    goto LABEL_72;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v35, &svtIdList, &equipIdList, UserId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v34 )
    goto LABEL_72;
  usrSvtId = selectedUserSvtIds;
  UserId = (int64_t)UserServantMaster__getOrganizationList(v34, 0LL);
  if ( !*(_QWORD *)v95 )
    goto LABEL_72;
  v36 = UserId;
  v37 = *(_DWORD *)(*(_QWORD *)v95 + 152LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_11958/*"SERVANT_TAKE"*/, 0LL);
  v40 = PhotoCampaignListViewManager_TypeInfo;
  v41 = StringLiteral_11584/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v40 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v40->static_fields->servantSortInfo;
  v43 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v43, v38, v39);
  UserId = (int64_t)this->fields.sort;
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
  v93 = &this->fields.sort;
  if ( (UserId & 1) != 0 )
  {
    v47 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12403/*"SUM_INFO"*/, 0LL);
    if ( !v36 )
      goto LABEL_72;
    v51 = (System_String_o *)UserId;
    LODWORD(v97.fields.currentCryptoKey) = *(_QWORD *)(v36 + 24);
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v48, v49, v50);
    v98 = v37;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v53, v54, v55);
    UserId = (int64_t)System_String__Format_62062500(v51, v52, v56, 0LL);
    if ( !v47 )
      goto LABEL_72;
    UILabel__set_text(v47, (System_String_o *)UserId, 0LL);
  }
  else if ( !v36 )
  {
    goto LABEL_72;
  }
  v57 = *(_DWORD *)(v36 + 24);
  v91 = (System_String_o *)v41;
  v92 = (Il2CppObject *)v27;
  if ( v57 >= 1 )
  {
    v58 = 0;
    while ( 1 )
    {
      if ( v58 >= v57 )
        goto LABEL_73;
      v59 = v36 + 8LL * (int)v58;
      v62 = *(_QWORD *)(v59 + 32);
      v61 = (UserServantEntity_o **)(v59 + 32);
      v60 = v62;
      if ( !v62 )
        break;
      v63 = *(_OWORD *)(v60 + 32);
      *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)(v60 + 16);
      *(_OWORD *)&v97.fields.fakeValue = v63;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v96 = v97;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v96, 0LL);
      if ( v58 >= *(_DWORD *)(v36 + 24) )
LABEL_73:
        sub_1BAB680(UserId, v29);
      if ( !*(_QWORD *)v95 )
        break;
      v64 = UserId;
      v65 = svtIdList;
      v66 = *v61;
      v67 = *(_QWORD *)(*(_QWORD *)v95 + 112LL);
      v68 = (PhotoCampaignListViewItem_o *)sub_1BAB668(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v68, v58, v66, v65, v64 == v67, v69);
      UserId = (int64_t)this->fields.itemList;
      if ( !UserId )
        break;
      v72 = *(_QWORD *)(UserId + 16);
      v73 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(UserId + 28);
      if ( !v72 )
        break;
      v74 = *(int *)(UserId + 24);
      if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)UserId,
          (Il2CppObject *)v68,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = v72 + 8 * v74;
        *(_DWORD *)(UserId + 24) = v74 + 1;
        *(_QWORD *)(v75 + 32) = v68;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v68, v70, v71);
      }
      v57 = *(_DWORD *)(v36 + 24);
      if ( (int)++v58 >= v57 )
        goto LABEL_40;
    }
LABEL_72:
    sub_1BAB678(UserId, v29);
  }
LABEL_40:
  PhotoCampaignListViewManager__SelectedUsrSvtModifyItem(this, usrSvtId, v46);
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( *(_QWORD *)(v36 + 24) )
    v77 = (System_String_o *)StringLiteral_11781/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v77 = v91;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UserId = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (UserId & 1) != 0 )
  {
    v80 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    UserId = (int64_t)LocalizationManager__Get(v77, 0LL);
    if ( !v80 )
      goto LABEL_72;
    UILabel__set_text(v80, (System_String_o *)UserId, 0LL);
  }
  if ( !*v93 )
    goto LABEL_72;
  iconScaleKind = (*v93)->fields.iconScaleKind;
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v78, v79);
LABEL_58:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v83);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    UserId = (int64_t)this->fields.scrollBar;
    if ( !UserId )
      goto LABEL_72;
    UserId = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_72;
    UserId = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)UserId, 0LL);
    if ( (UserId & 1) != 0 )
    {
      v85 = this->fields.scrollBar;
      if ( !v85 )
        goto LABEL_72;
      if ( v85->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v87 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v87,
          v92,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__0__,
          0LL);
        if ( !itemList )
          goto LABEL_72;
        v88 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v87,
                (const MethodInfo_354DF24 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v88 )
          goto LABEL_70;
        v89 = this->fields.itemList;
        v90 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v90,
          v92,
          Method_PhotoCampaignListViewManager___c__DisplayClass24_0__CreateList_b__1__,
          0LL);
        if ( !v89 )
          goto LABEL_72;
        v88 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v89,
                (System_Predicate_T__o *)v90,
                (const MethodInfo_354DF24 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v88 )
LABEL_70:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v88[1].klass), 0LL);
      }
    }
  }
}


void __fastcall PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AB17E0 & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_TypeInfo, v1);
    byte_4AB17E0 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BAB678(0LL, v1);
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
    sub_1BAB678(0LL, v3);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4AB17ED & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB17ED = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BAB678(v10, v11);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4AB17F0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AB17F0 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PhotoCampaignListViewManager__GetAmountSortValue(
        PhotoCampaignListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  System_Collections_Generic_List_object__c *klass; // x9
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__o *v13; // x8

  if ( (byte_4AB17F3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v6);
    byte_4AB17F3 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v9,
                                                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      klass = itemList->klass;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PhotoCampaignListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( (PhotoCampaignListViewItem_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
        v13 = itemList;
      else
        v13 = 0LL;
      if ( LODWORD(v13[3].monitor) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_1BAB678(itemList, *(_QWORD *)&svtId);
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
  PhotoCampaignListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4AB17E5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_4AB17E5 = 1;
  }
  result = (PhotoCampaignListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PhotoCampaignListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BAB678(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall PhotoCampaignListViewManager__GetSwapChoiceList(
        PhotoCampaignListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
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
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4AB17F5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v14);
    byte_4AB17F5 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 162) )
      {
        if ( *(_BYTE *)(itemList + 158) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_35358F0 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BAB678(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *choiceList = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)choiceList, 0, v18, v19);
    v44 = unchoiceList;
    v43 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_35373A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v37;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_35373A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unchoiceList = v40;
    v44 = unchoiceList;
  }
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


bool __fastcall PhotoCampaignListViewManager__GetSwapLockList(
        PhotoCampaignListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
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
  System_Collections_Generic_List_long__o *v15; // x23
  System_Collections_Generic_List_long__o *v16; // x22
  int64_t v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  __int128 v30; // q0
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  int v36; // w21
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int64_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  System_Int64_array **v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]

  if ( (byte_4AB17F4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v14);
    byte_4AB17F4 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 161) )
      {
        if ( *(_BYTE *)(itemList + 157) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v47, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v34 = v27[4];
            v35 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              v17,
              *(const MethodInfo_35358F0 **)(*(_QWORD *)(v34 + 192) + 112LL));
            goto LABEL_28;
          }
          v29 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v30 = *(_OWORD *)(v24 + 32);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
          *(_OWORD *)&v48.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v46 = v48;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v46, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v31 = v15->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v31 )
            goto LABEL_37;
          v33 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v33 >= v31->max_length )
          {
            v34 = v32[4];
            v35 = v15;
            goto LABEL_27;
          }
          v29 = &v31->obj.klass + v33;
          v15->fields._size = v33 + 1;
        }
        v29[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1BAB678(itemList, v17);
  v36 = v16->fields._size + v15->fields._size;
  if ( v36 < 1 )
  {
    *lockList = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)lockList, 0, v18, v19);
    v44 = unlockList;
    v43 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v37 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_35373A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v37;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_35373A8 *)Method_System_Collections_Generic_List_long__ToArray__);
    v43 = (int)v40;
    *unlockList = v40;
    v44 = unlockList;
  }
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v44, v43, v41, v42);
  return v36 > 0;
}


void __fastcall PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AB17E1 & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_TypeInfo, v1);
    byte_4AB17E1 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1BAB678(0LL, v1);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  int64_t v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x11
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v24; // x0
  Il2CppObject v25; // q0
  int64_t v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppClass *v29; // x8
  Il2CppType v30; // q0
  int64_t v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *monitor; // x22
  __int64 v35; // x1
  void *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4AB17E6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantMaster___, usrSvtId);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v11);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v13);
    byte_4AB17E6 = 1;
  }
  memset(&v41, 0, sizeof(v41));
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v41.fields._list = *(_OWORD *)&v40.fields.currentCryptoKey;
      v41.fields._current = (Il2CppObject *)v40.fields.fakeValue;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v18 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v41,
            (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v41.fields._current
          && (methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v41.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (PhotoCampaignListViewItem_c *)v41.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = v41.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1BAB678(v18, v19);
            klass = current[7].klass;
            if ( !klass )
              sub_1BAB678(v18, v19);
            byval_arg = klass->_1.byval_arg;
            *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
            *(Il2CppType *)&v40.fields.fakeValue = byval_arg;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v39 = v40;
            v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v39, 0LL);
            v25 = Entity[2];
            v26 = v24;
            *(Il2CppObject *)&v38.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v38.fields.fakeValue = v25;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v38, 0LL);
            if ( v26 == v18 )
            {
              current[7].klass = (Il2CppClass *)Entity;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&current[7], (int32_t)Entity, v27, v28);
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
          sub_1BAB678(v18, v19);
LABEL_27:
        v29 = current[7].klass;
        if ( !v29 )
          sub_1BAB678(v18, v19);
        v30 = v29->_1.byval_arg;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v29->_1.name;
        *(Il2CppType *)&v40.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v37 = v40;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v37, 0LL);
        if ( !SelfUserGame )
          sub_1BAB678(v31, v32);
        PhotoCampaignListViewItem__ModifyItem(
          (PhotoCampaignListViewItem_o *)current,
          v31 == SelfUserGame->fields.favoriteUserSvtId,
          v33);
        monitor = (UnityEngine_Object_o *)current[6].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v36 = current[6].monitor;
          if ( !v36 )
            sub_1BAB678(0LL, v35);
          (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v36 + 392LL))(
            v36,
            current,
            *(_QWORD *)(*(_QWORD *)v36 + 400LL));
        }
      }
    }
LABEL_44:
    sub_1BAB678(Master_object, v14);
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
  int64_t Master_object; // x0
  __int64 v11; // x1
  int v12; // w8
  int64_t v13; // x20
  unsigned int v14; // w25
  bool v15; // w21
  __int64 v16; // x8
  __int128 v17; // q0
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v19; // x23
  int32_t v20; // w24
  PhotoCampaignListViewItem_o *v21; // x22
  __int64 methodPtr_low; // x10
  __int64 v23; // x8
  __int128 v24; // q0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-80h]

  if ( (byte_4AB17F6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v9);
    byte_4AB17F6 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_31;
  v12 = *(_DWORD *)(Master_object + 24);
  v13 = Master_object;
  if ( v12 >= 1 )
  {
    v14 = 0;
    v15 = isIconSizeChange;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1BAB680(Master_object, v11);
      v16 = *(_QWORD *)(v13 + 8LL * (int)v14 + 32);
      if ( !v16 )
        break;
      v17 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v31, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v19 = Master_object;
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= itemList->fields._size )
          goto LABEL_29;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   itemList,
                                   v20,
                                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v21 = (PhotoCampaignListViewItem_o *)Master_object;
        methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)methodPtr_low
          || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v23 = *(_QWORD *)(Master_object + 112);
        if ( v23 )
        {
          v24 = *(_OWORD *)(v23 + 32);
          *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
          *(_OWORD *)&v32.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v32;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v30, 0LL);
          if ( Master_object == v19 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v20;
        if ( !itemList )
          goto LABEL_31;
      }
      userSvtEntity = v21->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v32.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v29 = v32;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v29, 0LL);
      PhotoCampaignListViewManager__ModifyLockItem(this, v21, v27, 1, v15, v28);
LABEL_29:
      v12 = *(_DWORD *)(v13 + 24);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_31:
    sub_1BAB678(Master_object, v11);
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
  __int128 v19; // q1
  PhotoCampaignListViewManager_o *v20; // x25
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4AB17F8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, photoCampaignItem);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v12);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (PhotoCampaignListViewManager_o *)sub_1BAB41C(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v14);
    byte_4AB17F8 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_26;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v26, 0LL);
      v19 = *(_OWORD *)&v17->fields.dropObjectList;
      v20 = (PhotoCampaignListViewManager_o *)v18;
      *(UnityEngine_MonoBehaviour_Fields *)&v25.fields.currentCryptoKey = v17->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v25.fields.fakeValue = v19;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(
                                                 &v25,
                                                 0LL);
      if ( v20 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&photoCampaignItem->fields.userSvtEntity,
          (int32_t)v17,
          v21,
          v22);
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
    PhotoCampaignListViewItem__ModifyChoiceItem(photoCampaignItem, v23);
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
    sub_1BAB678(this, photoCampaignItem);
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4AB17EC & 1) == 0 )
  {
    sub_1BAB41C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__, v3);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_OnClickFilterKind__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB17EC = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BAB668(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1BAB678(v12, v13);
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
  int32_t v3; // w3
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BAB678(v6, v7);
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

  if ( (byte_4AB17F1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AB17F1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BAB678(v5, v6);
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v10; // x21
  ServantSortSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4AB17EF & 1) == 0 )
  {
    sub_1BAB41C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_EndSelectSortKind__, v3);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_OnClickSortKind__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB17EF = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BAB668(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1BAB678(v12, v13);
    CommonUI__OpenServantSortSelectMenu(v10, 3, sort, 0, v11, 0LL);
  }
}


void __fastcall PhotoCampaignListViewManager__OnLongPushListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  unsigned int Index; // w0

  if ( (byte_4AB17EB & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_OnLongPushListView__, obj);
    byte_4AB17EB = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v7, v8);
      if ( !callbackFunc )
        return;
      v9 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BAB434(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BAB400(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
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
    sub_1BAB678(scrollView, obj);
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

  if ( (byte_4AB17EA & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB17EA = 1;
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
          sub_1BAB678(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4AB17E9 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__, v9);
    sub_1BAB41C(&Method_PhotoCampaignListViewManager_OnMoveEnd__, v10);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v11);
    byte_4AB17E9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v17, v18);
      PhotoCampaignListViewObject__Init_31979276((PhotoCampaignListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  PhotoCampaignListViewItem_o *current; // x20
  __int64 methodPtr_low; // x10
  Il2CppClass *klass; // x8
  Il2CppType byval_arg; // q0
  const MethodInfo *v18; // x2
  int32_t v19; // w1
  UnityEngine_Object_o *viewObject; // x21
  __int64 v21; // x1
  struct ListViewObject_o *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4AB17E7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, usrSvtId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v10);
    byte_4AB17E7 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    *(_OWORD *)&v25.fields._list = *(_OWORD *)&v24.fields.currentCryptoKey;
    v25.fields._current = (Il2CppObject *)v24.fields.fakeValue;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v12 )
        break;
      current = (PhotoCampaignListViewItem_o *)v25.fields._current;
      if ( !v25.fields._current
        || (methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v25.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (PhotoCampaignListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        sub_1BAB678(v12, v13);
      }
      klass = v25.fields._current[7].klass;
      if ( !klass )
        sub_1BAB678(v12, v13);
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v24.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v23 = v24;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v23, 0LL) == usrSvtId )
        v19 = 0;
      else
        v19 = -1;
      PhotoCampaignListViewItem__ModifyItem_31970908(current, v19, v18);
      viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
      {
        v22 = current->fields.viewObject;
        if ( !v22 )
          sub_1BAB678(0LL, v21);
        ((void (__fastcall *)(struct ListViewObject_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))v22->klass->vtable._5_SetItem.method)(
          v22,
          current,
          v22->klass->vtable._6_SetItem.methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4AB17EE & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_17541/*"btn_filter_on"*/, method);
    sub_1BAB41C(&StringLiteral_17540/*"btn_filter"*/, v3);
    byte_4AB17EE = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BAB678(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17540/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17541/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall PhotoCampaignListViewManager__SetMode(
        PhotoCampaignListViewManager_o *this,
        int32_t mode,
        PhotoCampaignListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  PhotoCampaignListViewManager__SetMode_31964416(this, mode, v6);
}


void __fastcall PhotoCampaignListViewManager__SetMode_31964416(
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
    sub_1BAB678(scrollView, v5);
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
  if ( (byte_4AB17E8 & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_1BAB41C(&PhotoCampaignListViewObject_TypeInfo, obj);
    byte_4AB17E8 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PhotoCampaignListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_1BAB678(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PhotoCampaignListViewObject__Init_31978700((PhotoCampaignListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  System_String_o **v21; // x8

  if ( (byte_4AB17F2 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_17571/*"btn_sort_up"*/, v3);
    sub_1BAB41C(&StringLiteral_17659/*"btn_txt_up"*/, v4);
    sub_1BAB41C(&StringLiteral_17614/*"btn_txt_new"*/, v5);
    sub_1BAB41C(&StringLiteral_17604/*"btn_txt_down"*/, v6);
    sub_1BAB41C(&StringLiteral_17621/*"btn_txt_old"*/, v7);
    sub_1BAB41C(&StringLiteral_17568/*"btn_sort_down"*/, v8);
    byte_4AB17F2 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_34;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17621/*"btn_txt_old"*/ : &StringLiteral_17614/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              v19 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
LABEL_30:
              if ( v17->fields.isAscendingOrder )
                v21 = v18;
              else
                v21 = v19;
              UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17659/*"btn_txt_up"*/ : &StringLiteral_17604/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17571/*"btn_sort_up"*/;
              v19 = (System_String_o **)&StringLiteral_17568/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BAB678(sort, v10);
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
  __int64 v11; // x1
  Il2CppObject *current; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AB17F7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v8);
    byte_4AB17F7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !v14.fields._current )
        goto LABEL_13;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v14.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (PhotoCampaignListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1BAB938(v14.fields._current);
LABEL_13:
        sub_1BAB678(current, v11);
      }
      BYTE4(v14.fields._current[10].klass) = v10;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4AB17DE & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB17DE = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_1BAB938(v7);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB17E3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB17E3 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BAB678(0LL, v18);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(
                                 (PhotoCampaignListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BAB678(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41118488((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BAB678(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BAB678(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BAB678(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BAB678(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB17E2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB17E2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BAB678(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BAB678(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AB17DF & 1) == 0 )
  {
    sub_1BAB41C(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB17DF = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BAB938(v7);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19E87B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E8760;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4AB17FA & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BAB41C(&PhotoCampaignListViewManager_ResultKind_TypeInfo, v9);
    byte_4AB17FA = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PhotoCampaignListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v14, callback, object);
}


void __fastcall PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  __int64 v5; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4AB17FB & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_4AB17FB = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    v10 = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1BAB938(v3);
    return PhotoCampaignListViewManager___c__DisplayClass24_0___CreateList_b__1(v10, v11, v12);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1BAB678(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(&v13, 0LL) == v4->fields.latestSelectedUsrSvtId;
}


bool __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___CreateList_b__1(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  PhotoCampaignListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4AB17FC & 1) == 0 )
  {
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1BAB41C(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_4AB17FC = 1;
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
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v15.fields.fakeValue = byval_arg;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v14 = v15;
      this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46699376(
                                                                       &v14,
                                                                       0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1BAB678(this, item);
  }
  v11 = (PhotoCampaignListViewObject_o *)sub_1BAB938(v3);
  PhotoCampaignListViewObject__add_callbackFunc(v11, v12, v13);
  return result;
}