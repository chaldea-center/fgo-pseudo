void __fastcall PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19

  if ( (byte_4C1D7A9 & 1) == 0 )
  {
    sub_1C3B764(&ListViewSort_TypeInfo, v1);
    sub_1C3B764(&PhotoCampaignListViewManager_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_10832/*"REST"*/, v3);
    byte_4C1D7A9 = 1;
  }
  v4 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42232596(v4, (System_String_o *)StringLiteral_10832/*"REST"*/, 3, 0, 0LL);
  PhotoCampaignListViewManager_TypeInfo->static_fields->servantSortInfo = v4;
  sub_1C3B708(PhotoCampaignListViewManager_TypeInfo->static_fields);
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
    sub_1C3B708(p_seed);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        PhotoCampaignListViewManager__ModifyList(this, 1, v8),
        PhotoCampaignListViewManager__SetMode_32746372(this, 2, v9),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1C3B9C0(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall PhotoCampaignListViewManager__CreateList(
        PhotoCampaignListViewManager_o *this,
        int64_t focusUsrSvtId,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        const MethodInfo *method)
{
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  Il2CppObject *v33; // x24
  __int64 OrganizationList; // x0
  __int64 v35; // x1
  Il2CppObject *Master_object; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int v39; // w23
  void **p_monitor; // x24
  Il2CppObject *v41; // x26
  __int64 v42; // x26
  int v43; // w22
  PhotoCampaignListViewManager_c *v44; // x0
  struct ListViewSort_o **p_sort; // x19
  UnityEngine_Object_o *infoDataLabel; // x19
  UILabel_o *v47; // x27
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_String_o *v51; // x20
  Il2CppObject *v52; // x19
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  __int64 v57; // x8
  int32_t v58; // w27
  __int64 v59; // x28
  __int128 v60; // q0
  PhotoCampaignListViewManager_o *v61; // x21
  int64_t v62; // x0
  __int64 v63; // x19
  __int64 v64; // x20
  int64_t v65; // x29
  bool v66; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x20
  __int64 v68; // x19
  __int64 v69; // x25
  int32_t v70; // w0
  __int64 v71; // x22
  System_Int64_array *v72; // x19
  PhotoCampaignListViewItem_o *v73; // x20
  const MethodInfo *v74; // x6
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x19
  System_String_o *v80; // x20
  UILabel_o *v81; // x21
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v84; // x1
  UnityEngine_Object_o *scrollBar; // x19
  struct UIScrollBar_o *v86; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Predicate_object__o *v88; // x21
  Il2CppObject *v89; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v90; // x20
  System_Predicate_object__o *v91; // x21
  struct ListViewSort_o **v92; // [xsp+8h] [xbp-F8h]
  __int64 v93; // [xsp+10h] [xbp-F0h]
  Il2CppObject *v94; // [xsp+18h] [xbp-E8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // [xsp+20h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+50h] [xbp-B0h] BYREF
  int v99; // [xsp+74h] [xbp-8Ch] BYREF
  System_Int32_array *restrictionSvtList; // [xsp+78h] [xbp-88h] BYREF
  Il2CppObject *v101; // [xsp+80h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+88h] [xbp-78h] BYREF
  System_Int64_array *svtIdList; // [xsp+90h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_4C1D794 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantPhotoMaster___, focusUsrSvtId);
    sub_1C3B764(&Method_DataManager_GetMaster_UserDeckMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_1C3B764(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_1C3B764(&int_TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Find__, v16);
    sub_1C3B764(&LocalizationManager_TypeInfo, v17);
    sub_1C3B764(&NetworkManager_TypeInfo, v18);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v19);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v22);
    sub_1C3B764(&PhotoCampaignListViewManager_TypeInfo, v23);
    sub_1C3B764(&System_Predicate_ListViewItem__TypeInfo, v24);
    sub_1C3B764(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__, v25);
    sub_1C3B764(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__, v26);
    sub_1C3B764(&PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo, v27);
    sub_1C3B764(&StringLiteral_11810/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/, v28);
    sub_1C3B764(&StringLiteral_11770/*"SHOP_BUY_MANA_ITEM"*/, v29);
    sub_1C3B764(&StringLiteral_12010/*"START_FRIENDSHIPUP_EFFECT"*/, v30);
    sub_1C3B764(&StringLiteral_12200/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, v31);
    sub_1C3B764(&StringLiteral_12657/*"Specified slot number was invalid."*/, v32);
    byte_4C1D794 = 1;
  }
  svtIdList = 0LL;
  entity = 0LL;
  v101 = 0LL;
  equipIdList = 0LL;
  restrictionSvtList = 0LL;
  v33 = (Il2CppObject *)sub_1C3B9B0(PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_96;
  v33[1].klass = (Il2CppClass *)focusUsrSvtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  OrganizationList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  v95 = (DataMasterBase_TMaster__TEntity__PKType__o *)OrganizationList;
  if ( !Master_object )
    goto LABEL_96;
  OrganizationList = DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       &entity,
                       anotherUserSvtId,
                       (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (OrganizationList & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_96;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v105.fields.currentCryptoKey = klass;
    *(_QWORD *)&v105.fields.fakeValue = monitor;
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v105, 0LL);
  }
  else
  {
    v39 = 0;
  }
  v94 = v33;
  v33[1].monitor = UserGameMaster__getSelfUserGame(0LL);
  p_monitor = &v33[1].monitor;
  sub_1C3B708(p_monitor);
  this->fields.isCanNotLongPush = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v41 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v35);
    byte_4C1C955 = 1;
  }
  OrganizationList = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    OrganizationList = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v41 )
    goto LABEL_96;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v41,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(OrganizationList + 184) + 64LL),
    0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  OrganizationList = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  if ( !*p_monitor )
    goto LABEL_96;
  v42 = OrganizationList;
  v43 = *((_DWORD *)*p_monitor + 38);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12200/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, 0LL);
  v44 = PhotoCampaignListViewManager_TypeInfo;
  v93 = StringLiteral_11810/*"SHOP_HELP_SELL_SERVANT_EXPLANATION"*/;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v44 = PhotoCampaignListViewManager_TypeInfo;
  }
  this->fields.sort = v44->static_fields->servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C3B708(&this->fields.sort);
  OrganizationList = (__int64)this->fields.sort;
  if ( !OrganizationList
    || (ListViewSort__Load((ListViewSort_o *)OrganizationList, 0LL), v92 = &this->fields.sort, !*p_sort) )
  {
LABEL_96:
    sub_1C3B9C0(OrganizationList, v35);
  }
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  OrganizationList = UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL);
  if ( (OrganizationList & 1) != 0 )
  {
    v47 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12657/*"Specified slot number was invalid."*/, 0LL);
    if ( !v42 )
      goto LABEL_96;
    v51 = (System_String_o *)OrganizationList;
    LODWORD(v98.fields.currentCryptoKey) = *(_QWORD *)(v42 + 24);
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v48, v49, v50);
    v99 = v43;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v53, v54, v55);
    OrganizationList = (__int64)System_String__Format_63382984(v51, v52, v56, 0LL);
    if ( !v47 )
      goto LABEL_96;
    UILabel__set_text(v47, (System_String_o *)OrganizationList, 0LL);
  }
  else if ( !v42 )
  {
    goto LABEL_96;
  }
  v57 = *(_QWORD *)(v42 + 24);
  if ( (int)v57 >= 1 )
  {
    v58 = 0;
    do
    {
      if ( v58 >= (unsigned int)v57 )
        sub_1C3B9C8(OrganizationList, v35);
      v59 = *(_QWORD *)(v42 + 8LL * v58 + 32);
      if ( !v59 )
        goto LABEL_96;
      v60 = *(_OWORD *)(v59 + 32);
      v61 = this;
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)(v59 + 16);
      *(_OWORD *)&v98.fields.fakeValue = v60;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v97 = v98;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v97, 0LL);
      v64 = *(_QWORD *)(v59 + 80);
      v63 = *(_QWORD *)(v59 + 88);
      v65 = v62;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v106.fields.currentCryptoKey = v64;
      *(_QWORD *)&v106.fields.fakeValue = v63;
      OrganizationList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v106, 0LL);
      v66 = (_DWORD)OrganizationList == v39;
      if ( (anotherSvtLimitCount & 0x80000000) == 0 && v39 >= 1 && (_DWORD)OrganizationList != v39 )
      {
        OrganizationList = ServantScriptMaster__getId(v39, anotherSvtLimitCount, 0LL);
        if ( !v95 )
          goto LABEL_96;
        OrganizationList = DataMasterBase_object__object__long___TryGetEntity(
                             v95,
                             &v101,
                             (int)OrganizationList,
                             (const MethodInfo_329D3F0 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
        if ( (OrganizationList & 1) == 0 )
          goto LABEL_56;
        OrganizationList = (__int64)v101;
        if ( !v101 )
          goto LABEL_96;
        OrganizationList = ServantPhotoEntity__TryGetRestrictionSvtList(
                             (ServantPhotoEntity_o *)v101,
                             &restrictionSvtList,
                             0LL);
        if ( (OrganizationList & 1) != 0 )
        {
          v67 = (System_Collections_Generic_IEnumerable_TSource__o *)restrictionSvtList;
          v68 = *(_QWORD *)(v59 + 80);
          v69 = *(_QWORD *)(v59 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v107.fields.currentCryptoKey = v68;
          *(_QWORD *)&v107.fields.fakeValue = v69;
          v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v107, 0LL);
          OrganizationList = System_Linq_Enumerable__Contains_int_(
                               v67,
                               v70,
                               (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
          v66 = OrganizationList;
        }
        else
        {
LABEL_56:
          v66 = 0;
        }
      }
      if ( !*p_monitor )
        goto LABEL_96;
      v71 = *((_QWORD *)*p_monitor + 14);
      v72 = svtIdList;
      v73 = (PhotoCampaignListViewItem_o *)sub_1C3B9B0(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v73, v58, (UserServantEntity_o *)v59, v72, v65 == v71, v66, v74);
      OrganizationList = (__int64)v61->fields.itemList;
      if ( !OrganizationList )
        goto LABEL_96;
      v75 = *(_QWORD *)(OrganizationList + 16);
      v76 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(OrganizationList + 28);
      if ( !v75 )
        goto LABEL_96;
      v77 = *(int *)(OrganizationList + 24);
      this = v61;
      if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)OrganizationList,
          (Il2CppObject *)v73,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = v75 + 8 * v77;
        *(_DWORD *)(OrganizationList + 24) = v77 + 1;
        *(_QWORD *)(v78 + 32) = v73;
        OrganizationList = sub_1C3B708(v78 + 32);
      }
      v57 = *(_QWORD *)(v42 + 24);
    }
    while ( ++v58 < (int)v57 );
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v57 )
    v80 = (System_String_o *)StringLiteral_12010/*"START_FRIENDSHIPUP_EFFECT"*/;
  else
    v80 = (System_String_o *)v93;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  OrganizationList = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (OrganizationList & 1) != 0 )
  {
    v81 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (__int64)LocalizationManager__Get(v80, 0LL);
    if ( !v81 )
      goto LABEL_96;
    UILabel__set_text(v81, (System_String_o *)OrganizationList, 0LL);
  }
  if ( !*v92 )
    goto LABEL_96;
  iconScaleKind = (*v92)->fields.iconScaleKind;
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
      goto LABEL_82;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C3B708(&this->fields.seed);
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v84);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    OrganizationList = (__int64)this->fields.scrollBar;
    if ( !OrganizationList )
      goto LABEL_96;
    OrganizationList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)OrganizationList, 0LL);
    if ( !OrganizationList )
      goto LABEL_96;
    OrganizationList = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)OrganizationList, 0LL);
    if ( (OrganizationList & 1) != 0 )
    {
      v86 = this->fields.scrollBar;
      if ( !v86 )
        goto LABEL_96;
      if ( v86->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v88 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v88,
          v94,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__,
          0LL);
        if ( !itemList )
          goto LABEL_96;
        v89 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v88,
                (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v89 )
          goto LABEL_94;
        v90 = this->fields.itemList;
        v91 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v91,
          v94,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__,
          0LL);
        if ( !v90 )
          goto LABEL_96;
        v89 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v90,
                (System_Predicate_T__o *)v91,
                (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v89 )
LABEL_94:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v89[1].klass), 0LL);
      }
    }
  }
}


void __fastcall PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C1D790 & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_TypeInfo, v1);
    byte_4C1D790 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C3B9C0(0LL, v1);
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
    sub_1C3B9C0(0LL, v3);
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

  if ( (byte_4C1D79D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4C1D79D = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1C3B9C0(v10, v11);
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

  if ( (byte_4C1D7A0 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C1D7A0 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v6);
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

  if ( (byte_4C1D7A3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v6);
    byte_4C1D7A3 = 1;
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
                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C3B9C0(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4C1D796 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_4C1D796 = 1;
  }
  result = (PhotoCampaignListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PhotoCampaignListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C3B9C0(0LL, method);
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4C1D7A5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v14);
    byte_4C1D7A5 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 112);
      if ( v22 && *(_BYTE *)(itemList + 162) )
      {
        if ( *(_BYTE *)(itemList + 158) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C3B9C0(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *choiceList = 0LL;
    sub_1C3B708(choiceList);
    v35 = unchoiceList;
    *unchoiceList = 0LL;
  }
  else
  {
    *choiceList = System_Collections_Generic_List_long___ToArray(
                    v15,
                    (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3B708(choiceList);
    *unchoiceList = System_Collections_Generic_List_long___ToArray(
                      v16,
                      (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unchoiceList;
  }
  sub_1C3B708(v35);
  return v34 > 0;
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
  int64_t itemList; // x0
  int v19; // w25
  int32_t v20; // w24
  __int64 methodPtr_low; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  int v34; // w21
  System_Int64_array **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]

  if ( (byte_4C1D7A4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v14);
    byte_4C1D7A4 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_37;
  v19 = *(_DWORD *)(itemList + 24);
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v20,
                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(itemList + 112);
      if ( v22 && *(_BYTE *)(itemList + 161) )
      {
        if ( *(_BYTE *)(itemList + 157) )
        {
          v23 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v38, 0LL);
          if ( !v16 )
            goto LABEL_37;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v16->fields._size;
          v17 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v32 = v25[4];
            v33 = v16;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v33,
              v17,
              *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v32 + 192) + 112LL));
            goto LABEL_28;
          }
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
        }
        else
        {
          v28 = *(_OWORD *)(v22 + 32);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v22 + 16);
          *(_OWORD *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v39;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v37, 0LL);
          if ( !v15 )
            goto LABEL_37;
          v29 = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v15->fields._version;
          if ( !v29 )
            goto LABEL_37;
          v31 = v15->fields._size;
          v17 = itemList;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            v32 = v30[4];
            v33 = v15;
            goto LABEL_27;
          }
          v27 = &v29->obj.klass + v31;
          v15->fields._size = v31 + 1;
        }
        v27[4] = (Il2CppClass *)v17;
      }
LABEL_28:
      if ( v19 == ++v20 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v15 || !v16 )
LABEL_37:
    sub_1C3B9C0(itemList, v17);
  v34 = v16->fields._size + v15->fields._size;
  if ( v34 < 1 )
  {
    *lockList = 0LL;
    sub_1C3B708(lockList);
    v35 = unlockList;
    *unlockList = 0LL;
  }
  else
  {
    *lockList = System_Collections_Generic_List_long___ToArray(
                  v15,
                  (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3B708(lockList);
    *unlockList = System_Collections_Generic_List_long___ToArray(
                    v16,
                    (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = unlockList;
  }
  sub_1C3B708(v35);
  return v34 > 0;
}


void __fastcall PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C1D791 & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_TypeInfo, v1);
    byte_4C1D791 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C3B9C0(0LL, v1);
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
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x11
  PhotoCampaignListViewItem_o *current; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v23; // q0
  int64_t v24; // x0
  Il2CppObject v25; // q0
  int64_t v26; // x23
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q0
  int64_t v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *viewObject; // x22
  __int64 v33; // x1
  struct ListViewObject_o *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4C1D797 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, usrSvtId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v13);
    byte_4C1D797 = 1;
  }
  memset(&v39, 0, sizeof(v39));
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields.currentCryptoKey;
      v39.fields._current = (Il2CppObject *)v38.fields.fakeValue;
      while ( 1 )
      {
        v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v39,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v18 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v39,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v39.fields._current
          && (methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(v39.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
        {
          if ( (PhotoCampaignListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = (PhotoCampaignListViewItem_o *)v39.fields._current;
          else
            current = 0LL;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1C3B9C0(v18, v19);
            userSvtEntity = current->fields.userSvtEntity;
            if ( !userSvtEntity )
              sub_1C3B9C0(v18, v19);
            v23 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v38.fields.fakeValue = v23;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v37 = v38;
            v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v37, 0LL);
            v25 = Entity[2];
            v26 = v24;
            *(Il2CppObject *)&v36.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v36.fields.fakeValue = v25;
            v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
            if ( v26 == v18 )
            {
              current->fields.userSvtEntity = (struct UserServantEntity_o *)Entity;
              v18 = sub_1C3B708(&current->fields.userSvtEntity);
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
          sub_1C3B9C0(v18, v19);
LABEL_27:
        v27 = current->fields.userSvtEntity;
        if ( !v27 )
          sub_1C3B9C0(v18, v19);
        v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v38;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v35, 0LL);
        if ( !SelfUserGame )
          sub_1C3B9C0(v29, v30);
        PhotoCampaignListViewItem__ModifyItem(current, v29 == SelfUserGame->fields.favoriteUserSvtId, v31);
        viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
        {
          v34 = current->fields.viewObject;
          if ( !v34 )
            sub_1C3B9C0(0LL, v33);
          ((void (__fastcall *)(struct ListViewObject_o *, PhotoCampaignListViewItem_o *, Il2CppMethodPointer))v34->klass->vtable._5_SetItem.method)(
            v34,
            current,
            v34->klass->vtable._6_SetItem.methodPtr);
        }
      }
    }
LABEL_44:
    sub_1C3B9C0(Master_object, v14);
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

  if ( (byte_4C1D7A6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, isIconSizeChange);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v9);
    byte_4C1D7A6 = 1;
  }
  UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
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
        sub_1C3B9C8(Master_object, v11);
      v16 = *(_QWORD *)(v13 + 8LL * (int)v14 + 32);
      if ( !v16 )
        break;
      v17 = *(_OWORD *)(v16 + 32);
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v32.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v31, 0LL);
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
                                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v30, 0LL);
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
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v29, 0LL);
      PhotoCampaignListViewManager__ModifyLockItem(this, v21, v27, 1, v15, v28);
LABEL_29:
      v12 = *(_DWORD *)(v13 + 24);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_31:
    sub_1C3B9C0(Master_object, v11);
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
  const MethodInfo *v21; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4C1D7A8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, photoCampaignItem);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (PhotoCampaignListViewManager_o *)sub_1C3B764(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v14);
    byte_4C1D7A8 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_26;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v16 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v17 = this;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v25.fields.fakeValue = v16;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v24, 0LL);
      v19 = *(_OWORD *)&v17->fields.dropObjectList;
      v20 = (PhotoCampaignListViewManager_o *)v18;
      *(UnityEngine_MonoBehaviour_Fields *)&v23.fields.currentCryptoKey = v17->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v23.fields.fakeValue = v19;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                                 &v23,
                                                 0LL);
      if ( v20 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v17;
        this = (PhotoCampaignListViewManager_o *)sub_1C3B708(&photoCampaignItem->fields.userSvtEntity);
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
    PhotoCampaignListViewItem__ModifyChoiceItem(photoCampaignItem, v21);
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
    sub_1C3B9C0(this, photoCampaignItem);
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

  if ( (byte_4C1D79C & 1) == 0 )
  {
    sub_1C3B764(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__, v3);
    sub_1C3B764(&Method_PhotoCampaignListViewManager_OnClickFilterKind__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1D79C = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C3B9B0(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_1C3B9C0(v12, v13);
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
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  v5 = sub_1C3B708(&this->fields.callbackFunc);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C1D7A1 & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__, method);
    byte_4C1D7A1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C1D79F & 1) == 0 )
  {
    sub_1C3B764(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_PhotoCampaignListViewManager_EndSelectSortKind__, v3);
    sub_1C3B764(&Method_PhotoCampaignListViewManager_OnClickSortKind__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1D79F = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C3B9B0(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v10 )
      sub_1C3B9C0(v12, v13);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int Index; // w0

  if ( (byte_4C1D79B & 1) == 0 )
  {
    sub_1C3B764(&Method_PhotoCampaignListViewManager_OnLongPushListView__, obj);
    byte_4C1D79B = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0LL;
      sub_1C3B708(&this->fields.callbackFunc);
      if ( !callbackFunc )
        return;
      v7 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C3B77C(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
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
    sub_1C3B9C0(scrollView, obj);
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

  if ( (byte_4C1D79A & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D79A = 1;
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
          sub_1C3B9C0(0LL, v7);
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

  if ( (byte_4C1D799 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__, v9);
    sub_1C3B764(&Method_PhotoCampaignListViewManager_OnMoveEnd__, v10);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v11);
    byte_4C1D799 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v17, v18);
      PhotoCampaignListViewObject__Init_32747032((PhotoCampaignListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
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

  if ( (byte_4C1D79E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17849/*"componentPackage"*/, method);
    sub_1C3B764(&StringLiteral_17848/*"componentHash"*/, v3);
    byte_4C1D79E = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1C3B9C0(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17848/*"componentHash"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17849/*"componentPackage"*/;
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
  sub_1C3B708(&this->fields.callbackFunc);
  PhotoCampaignListViewManager__SetMode_32746372(this, mode, v6);
}


void __fastcall PhotoCampaignListViewManager__SetMode_32746372(
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
    sub_1C3B9C0(scrollView, v5);
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
  if ( (byte_4C1D798 & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_1C3B764(&PhotoCampaignListViewObject_TypeInfo, obj);
    byte_4C1D798 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PhotoCampaignListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PhotoCampaignListViewObject__Init_32746248((PhotoCampaignListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4C1D7A2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17879/*"contain"*/, v3);
    sub_1C3B764(&StringLiteral_17970/*"cpu.brand"*/, v4);
    sub_1C3B764(&StringLiteral_17923/*"cord_n"*/, v5);
    sub_1C3B764(&StringLiteral_17913/*"convertJsonStringToMap"*/, v6);
    sub_1C3B764(&StringLiteral_17930/*"costCurrency"*/, v7);
    sub_1C3B764(&StringLiteral_17876/*"consumeType"*/, v8);
    byte_4C1D7A2 = 1;
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
          v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17930/*"costCurrency"*/ : &StringLiteral_17923/*"cord_n"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17876/*"consumeType"*/;
              v19 = (System_String_o **)&StringLiteral_17879/*"contain"*/;
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
          v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17970/*"cpu.brand"*/ : &StringLiteral_17913/*"convertJsonStringToMap"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
          v17 = this->fields.sort;
          if ( v17 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v18 = (System_String_o **)&StringLiteral_17879/*"contain"*/;
              v19 = (System_String_o **)&StringLiteral_17876/*"consumeType"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C3B9C0(sort, v10);
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

  if ( (byte_4C1D7A7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v8);
    byte_4C1D7A7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v10 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !v14.fields._current )
        goto LABEL_13;
      methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v14.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (PhotoCampaignListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1C3BC80(v14.fields._current);
LABEL_13:
        sub_1C3B9C0(current, v11);
      }
      BYTE4(v14.fields._current[10].klass) = v10;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall PhotoCampaignListViewManager__UpdateItemCannotSelectSvt(
        PhotoCampaignListViewManager_o *this,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
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
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  Il2CppObject *Master_object; // x22
  void *monitor; // x20
  Il2CppClass *klass; // x22
  int32_t v25; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Action_object__o *v27; // x22
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *v29; // x20
  Il2CppObject *v30; // x21
  struct PhotoCampaignListViewManager___c_StaticFields *static_fields; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C1D795 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_ListViewItem__TypeInfo, anotherUserSvtId);
    sub_1C3B764(&System_Action_GameObject__TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantPhotoMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__ForEach__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__ForEach__, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C3B764(&Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__, v15);
    sub_1C3B764(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__, v16);
    sub_1C3B764(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo, v17);
    sub_1C3B764(&PhotoCampaignListViewManager___c_TypeInfo, v18);
    byte_4C1D795 = 1;
  }
  entity = 0LL;
  v19 = sub_1C3B9B0(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_DWORD *)(v19 + 20) = anotherSvtLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  *(_QWORD *)(v19 + 24) = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  v20 = sub_1C3B708(v19 + 24);
  if ( !Master_object )
    goto LABEL_22;
  v20 = DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          anotherUserSvtId,
          (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (v20 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_22;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = klass;
    *(_QWORD *)&v33.fields.fakeValue = monitor;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v33, 0LL);
  }
  else
  {
    v25 = 0;
  }
  *(_DWORD *)(v19 + 16) = v25;
  itemList = this->fields.itemList;
  v27 = (System_Action_object__o *)sub_1C3B9B0(System_Action_ListViewItem__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v19,
    Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__,
    0LL);
  if ( !itemList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)itemList,
    (System_Action_T__o *)v27,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_ListViewItem__ForEach__);
  v20 = (__int64)PhotoCampaignListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PhotoCampaignListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager___c_TypeInfo);
    v20 = (__int64)PhotoCampaignListViewManager___c_TypeInfo;
  }
  v29 = *(System_Action_object__o **)(*(_QWORD *)(v20 + 184) + 8LL);
  if ( !v29 )
  {
    if ( !*(_DWORD *)(v20 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = (__int64)PhotoCampaignListViewManager___c_TypeInfo;
    }
    v30 = **(Il2CppObject ***)(v20 + 184);
    v29 = (System_Action_object__o *)sub_1C3B9B0(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(
      v29,
      v30,
      Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__,
      0LL);
    static_fields = PhotoCampaignListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_1 = (struct System_Action_GameObject__o *)v29;
    v20 = sub_1C3B708(&static_fields->__9__24_1);
  }
  if ( !objectList )
LABEL_22:
    sub_1C3B9C0(v20, v21);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)v29,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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

  if ( (byte_4C1D78E & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1D78E = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_1C3BC80(v7);
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C1D793 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1D793 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C3B9C0(0LL, v18);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(
                                 (PhotoCampaignListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C3B9C0(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_42215272((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1C3B9C0(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C3B9C0(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C3B9C0(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C3B9C0(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C3B708(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C1D792 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1D792 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1C3B708(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C1D78F & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C1D78F = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C3BC80(v7);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A75E14;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A75DBC;
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
  if ( (byte_4C1D7AA & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&PhotoCampaignListViewManager_ResultKind_TypeInfo, v9);
    byte_4C1D7AA = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PhotoCampaignListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v14, callback, object);
}


void __fastcall PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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


void __fastcall PhotoCampaignListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1D7AB & 1) == 0 )
  {
    sub_1C3B764(&PhotoCampaignListViewManager___c_TypeInfo, v1);
    byte_4C1D7AB = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(PhotoCampaignListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PhotoCampaignListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignListViewManager___c_o *)v2;
  sub_1C3B708(PhotoCampaignListViewManager___c_TypeInfo->static_fields);
}


void __fastcall PhotoCampaignListViewManager___c___ctor(
        PhotoCampaignListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignListViewManager___c___UpdateItemCannotSelectSvt_b__24_1(
        PhotoCampaignListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C1D7AC & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, x);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1D7AC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !x
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               x,
                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___)) == 0LL )
    {
      sub_1C3B9C0(Component_object, v6);
    }
    PhotoCampaignListViewObject__ModifyItemDraw((PhotoCampaignListViewObject_o *)Component_object, v6);
  }
}


void __fastcall PhotoCampaignListViewManager___c__DisplayClass23_0___ctor(
        PhotoCampaignListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__0(
        PhotoCampaignListViewManager___c__DisplayClass23_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v4; // x19
  __int64 v5; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4C1D7AD & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_4C1D7AD = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    v10 = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C3BC80(v3);
    return PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__1(v10, v11, v12);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1C3B9C0(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v14.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v13, 0LL) == v4->fields.focusUsrSvtId;
}


bool __fastcall PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__1(
        PhotoCampaignListViewManager___c__DisplayClass23_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v4; // x19
  __int64 v5; // x1
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v11; // x0
  ListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4C1D7AE & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v5);
    byte_4C1D7AE = 1;
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
      this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                                                       &v14,
                                                                       0LL);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1C3B9C0(this, item);
  }
  v11 = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C3BC80(v3);
  PhotoCampaignListViewManager___c__DisplayClass24_0___UpdateItemCannotSelectSvt_b__0(v11, v12, v13);
  return result;
}


void __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___ctor(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoCampaignListViewManager___c__DisplayClass24_0___UpdateItemCannotSelectSvt_b__0(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 methodPtr_low; // x10
  int32_t selectedSvtId; // w0
  bool v9; // w0
  int32_t anotherSvtLimitCount; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *photoMaster; // x20
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C1D7AF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__, x);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v5);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C3B764(&PhotoCampaignListViewItem_TypeInfo, v6);
    byte_4C1D7AF = 1;
  }
  source = 0LL;
  entity = 0LL;
  if ( x )
  {
    methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(x->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (PhotoCampaignListViewItem_c *)x->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
    {
      selectedSvtId = v4->fields.selectedSvtId;
      if ( x[1].fields.selectNum == selectedSvtId )
      {
        v9 = 1;
LABEL_16:
        BYTE4(x[2].monitor) = v9;
        return;
      }
      if ( selectedSvtId < 1
        || (anotherSvtLimitCount = v4->fields.anotherSvtLimitCount, (anotherSvtLimitCount & 0x80000000) != 0) )
      {
LABEL_15:
        v9 = 0;
        goto LABEL_16;
      }
      photoMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.photoMaster;
      this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)ServantScriptMaster__getId(
                                                                       selectedSvtId,
                                                                       anotherSvtLimitCount,
                                                                       0LL);
      if ( photoMaster )
      {
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                photoMaster,
                &entity,
                (int)this,
                (const MethodInfo_329D3F0 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__) )
          goto LABEL_15;
        this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)entity;
        if ( entity )
        {
          if ( ServantPhotoEntity__TryGetRestrictionSvtList(
                 (ServantPhotoEntity_o *)entity,
                 (System_Int32_array **)&source,
                 0LL) )
          {
            v9 = System_Linq_Enumerable__Contains_int_(
                   source,
                   x[1].fields.selectNum,
                   (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
            goto LABEL_16;
          }
          goto LABEL_15;
        }
      }
    }
    sub_1C3B9C0(this, x);
  }
}