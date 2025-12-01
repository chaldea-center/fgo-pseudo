void PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC29B5 & 1) == 0 )
  {
    sub_1C713B0(&ListViewSort_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10618/*"PhotoCampaign2025"*/);
    byte_4CC29B5 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_44130992(v1, (System_String_o *)StringLiteral_10618/*"PhotoCampaign2025"*/, 3, 0, 0);
  PhotoCampaignListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)PhotoCampaignListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoCampaignListViewManager___ctor(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PhotoCampaignListViewManager__ChangeIconScale(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
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
    *((_DWORD *)p_seed + 75) = v11;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        PhotoCampaignListViewManager__ModifyList(this, 1, v14),
        PhotoCampaignListViewManager__SetMode_34045304(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C71608(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void PhotoCampaignListViewManager__CreateList(
        PhotoCampaignListViewManager_o *this,
        int64_t focusUsrSvtId,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *OrganizationList; // x0
  __int64 v10; // x1
  Il2CppObject *Master_object; // x25
  void *monitor; // x19
  Il2CppClass *klass; // x20
  int v14; // w23
  UserGameEntity_o *SelfUserGame; // x0
  GrandQuestFolderBoardItem_o *p_monitor; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x26
  int nestedTypes; // w22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  PhotoCampaignListViewManager_c *v32; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v34; // x1
  struct ListViewSort_o **p_sort; // x19
  UnityEngine_Object_o *infoDataLabel; // x19
  UILabel_o *v37; // x27
  System_String_o *v38; // x20
  Il2CppObject *v39; // x19
  Il2CppObject *v40; // x0
  struct System_String_o *MasterName_k__BackingField; // x8
  int32_t v42; // w27
  __int64 v43; // x28
  __int128 v44; // q0
  PhotoCampaignListViewManager_o *v45; // x21
  int64_t v46; // x0
  __int64 v47; // x19
  __int64 v48; // x20
  int64_t v49; // x29
  bool v50; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x20
  __int64 v52; // x19
  __int64 v53; // x25
  int32_t v54; // w0
  Il2CppClass *v55; // x22
  System_Int64_array *v56; // x19
  PhotoCampaignListViewItem_o *v57; // x20
  const MethodInfo *v58; // x6
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v68; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x19
  System_String_o *v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  UILabel_o *v77; // x21
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v80; // x1
  UnityEngine_Object_o *scrollBar; // x19
  struct UIScrollBar_o *v82; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Predicate_object__o *v84; // x21
  Il2CppObject *v85; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v86; // x20
  System_Predicate_object__o *v87; // x21
  struct ListViewSort_o **v88; // [xsp+8h] [xbp-F8h]
  __int64 v89; // [xsp+10h] [xbp-F0h]
  Il2CppObject *v90; // [xsp+18h] [xbp-E8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v91; // [xsp+20h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+50h] [xbp-B0h] BYREF
  int v95; // [xsp+74h] [xbp-8Ch] BYREF
  System_Int32_array *restrictionSvtList; // [xsp+78h] [xbp-88h] BYREF
  Il2CppObject *v97; // [xsp+80h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+88h] [xbp-78h] BYREF
  System_Int64_array *svtIdList; // [xsp+90h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16

  if ( (byte_4CC29A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewManager_TypeInfo);
    sub_1C713B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C713B0(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__);
    sub_1C713B0(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__);
    sub_1C713B0(&PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
    sub_1C713B0(&StringLiteral_11613/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C713B0(&StringLiteral_11573/*"SERVANT_ALL_EMPTY"*/);
    sub_1C713B0(&StringLiteral_11813/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C713B0(&StringLiteral_12012/*"SERVANT_TAKE"*/);
    sub_1C713B0(&StringLiteral_12489/*"SUM_INFO"*/);
    byte_4CC29A0 = 1;
  }
  svtIdList = 0;
  entity = 0;
  v97 = 0;
  equipIdList = 0;
  restrictionSvtList = 0;
  v8 = (Il2CppObject *)sub_1C715FC(PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_96;
  v8[1].klass = (Il2CppClass *)focusUsrSvtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  v91 = OrganizationList;
  if ( !Master_object )
    goto LABEL_96;
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                     &entity,
                                                                     anotherUserSvtId,
                                                                     (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_96;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v101.fields.currentCryptoKey = klass;
    *(_QWORD *)&v101.fields.fakeValue = monitor;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v101, 0);
  }
  else
  {
    v14 = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v90 = v8;
  v8[1].monitor = SelfUserGame;
  p_monitor = (GrandQuestFolderBoardItem_o *)&v8[1].monitor;
  sub_1C71354(p_monitor, (int32_t)SelfUserGame, v17, v18, v19, v20, v21, v22);
  this->fields.isCanNotLongPush = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_96;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v23,
    &svtIdList,
    &equipIdList,
    (int64_t)OrganizationList[2].fields.list[1].monitor,
    0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantMaster__getOrganizationList(
                                                                     (UserServantMaster_o *)Master_object,
                                                                     0);
  if ( !p_monitor->klass )
    goto LABEL_96;
  v24 = OrganizationList;
  nestedTypes = (int)p_monitor->klass->_1.nestedTypes;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SERVANT_TAKE"*/, 0);
  v32 = PhotoCampaignListViewManager_TypeInfo;
  v89 = StringLiteral_11613/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v32 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v32->static_fields->servantSortInfo;
  v34 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v34, v26, v27, v28, v29, v30, v31);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.sort;
  if ( !OrganizationList
    || (ListViewSort__Load((ListViewSort_o *)OrganizationList, 0), v88 = &this->fields.sort, !*p_sort) )
  {
LABEL_96:
    sub_1C71608(OrganizationList, v10);
  }
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                     infoDataLabel,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    v37 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12489/*"SUM_INFO"*/,
                                                                       0);
    if ( !v24 )
      goto LABEL_96;
    v38 = (System_String_o *)OrganizationList;
    LODWORD(v94.fields.currentCryptoKey) = v24->fields._MasterName_k__BackingField;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
    v95 = nestedTypes;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_64073032(v38, v39, v40, 0);
    if ( !v37 )
      goto LABEL_96;
    UILabel__set_text(v37, (System_String_o *)OrganizationList, 0);
  }
  else if ( !v24 )
  {
    goto LABEL_96;
  }
  MasterName_k__BackingField = v24->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v42 = 0;
    do
    {
      if ( v42 >= (unsigned int)MasterName_k__BackingField )
        sub_1C71610(OrganizationList);
      v43 = *((_QWORD *)&v24->fields.revision + v42);
      if ( !v43 )
        goto LABEL_96;
      v44 = *(_OWORD *)(v43 + 32);
      v45 = this;
      *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)(v43 + 16);
      *(_OWORD *)&v94.fields.fakeValue = v44;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v93 = v94;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v93, 0);
      v48 = *(_QWORD *)(v43 + 80);
      v47 = *(_QWORD *)(v43 + 88);
      v49 = v46;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v102.fields.currentCryptoKey = v48;
      *(_QWORD *)&v102.fields.fakeValue = v47;
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                                         v102,
                                                                         0);
      v50 = (_DWORD)OrganizationList == v14;
      if ( (anotherSvtLimitCount & 0x80000000) == 0 && v14 >= 1 && (_DWORD)OrganizationList != v14 )
      {
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantScriptMaster__getId(
                                                                           v14,
                                                                           anotherSvtLimitCount,
                                                                           0);
        if ( !v91 )
          goto LABEL_96;
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                           v91,
                                                                           &v97,
                                                                           (int)OrganizationList,
                                                                           (const MethodInfo_340B428 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)OrganizationList & 1) == 0 )
          goto LABEL_56;
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)v97;
        if ( !v97 )
          goto LABEL_96;
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantPhotoEntity__TryGetRestrictionSvtList(
                                                                           (ServantPhotoEntity_o *)v97,
                                                                           &restrictionSvtList,
                                                                           0);
        if ( ((unsigned __int8)OrganizationList & 1) != 0 )
        {
          v51 = (System_Collections_Generic_IEnumerable_TSource__o *)restrictionSvtList;
          v52 = *(_QWORD *)(v43 + 80);
          v53 = *(_QWORD *)(v43 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v103.fields.currentCryptoKey = v52;
          *(_QWORD *)&v103.fields.fakeValue = v53;
          v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v103, 0);
          OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Contains_int_(
                                                                             v51,
                                                                             v54,
                                                                             (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
          v50 = (char)OrganizationList;
        }
        else
        {
LABEL_56:
          v50 = 0;
        }
      }
      if ( !p_monitor->klass )
        goto LABEL_96;
      v55 = p_monitor->klass->_1.klass;
      v56 = svtIdList;
      v57 = (PhotoCampaignListViewItem_o *)sub_1C715FC(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v57, v42, (UserServantEntity_o *)v43, v56, v49 == (_QWORD)v55, v50, v58);
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)v45->fields.itemList;
      if ( !OrganizationList )
        goto LABEL_96;
      v65 = *(_QWORD *)&OrganizationList->fields._MasterKind_k__BackingField;
      v66 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(OrganizationList->fields._MasterName_k__BackingField);
      if ( !v65 )
        goto LABEL_96;
      MasterName_k__BackingField_low = SLODWORD(OrganizationList->fields._MasterName_k__BackingField);
      this = v45;
      if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v65 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)OrganizationList,
          (Il2CppObject *)v57,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = v65 + 8 * MasterName_k__BackingField_low;
        LODWORD(OrganizationList->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
        *(_QWORD *)(v68 + 32) = v57;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v68 + 32), (int32_t)v57, v59, v60, v61, v62, v63, v64);
      }
      MasterName_k__BackingField = v24->fields._MasterName_k__BackingField;
    }
    while ( ++v42 < (int)MasterName_k__BackingField );
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( MasterName_k__BackingField )
    v70 = (System_String_o *)StringLiteral_11813/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v70 = (System_String_o *)v89;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                     emptyMessageLabel,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    v77 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(v70, 0);
    if ( !v77 )
      goto LABEL_96;
    UILabel__set_text(v77, (System_String_o *)OrganizationList, 0);
  }
  if ( !*v88 )
    goto LABEL_96;
  iconScaleKind = (*v88)->fields.iconScaleKind;
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v71, v72, v73, v74, v75, v76);
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v80);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.scrollBar;
    if ( !OrganizationList )
      goto LABEL_96;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)OrganizationList,
                                                                       0);
    if ( !OrganizationList )
      goto LABEL_96;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)OrganizationList,
                                                                       0);
    if ( ((unsigned __int8)OrganizationList & 1) != 0 )
    {
      v82 = this->fields.scrollBar;
      if ( !v82 )
        goto LABEL_96;
      if ( v82->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v84 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v84,
          v90,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__,
          0);
        if ( !itemList )
          goto LABEL_96;
        v85 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v84,
                (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v85 )
          goto LABEL_94;
        v86 = this->fields.itemList;
        v87 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v87,
          v90,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__,
          0);
        if ( !v86 )
          goto LABEL_96;
        v85 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v86,
                (System_Predicate_T__o *)v87,
                (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v85 )
LABEL_94:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v85[1].klass), 0);
      }
    }
  }
}


void PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CC299C & 1) == 0 )
  {
    sub_1C713B0(&PhotoCampaignListViewManager_TypeInfo);
    byte_4CC299C = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C71608(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PhotoCampaignListViewManager__DestroyList(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C71608(0, v3);
  ListViewSort__Save(sort, 0);
}


void PhotoCampaignListViewManager__EndCloseSelectFilterKind(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void PhotoCampaignListViewManager__EndSelectFilterKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC29A9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC29A9 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C71608(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC29AC & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC29AC = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t PhotoCampaignListViewManager__GetAmountSortValue(
        PhotoCampaignListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4CC29AF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29AF = 1;
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
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PhotoCampaignListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
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
    sub_1C71608(itemList, *(_QWORD *)&svtId);
  }
  return 0;
}


PhotoCampaignListViewItem_o *PhotoCampaignListViewManager__GetItem(
        PhotoCampaignListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PhotoCampaignListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CC29A2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29A2 = 1;
  }
  result = (PhotoCampaignListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PhotoCampaignListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (PhotoCampaignListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
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


System_String_o *PhotoCampaignListViewManager__GetScaleButtonSpriteName(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C71608(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool PhotoCampaignListViewManager__GetSwapChoiceList(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_4CC29B1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29B1 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v51, 0);
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
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v30 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v50, 0);
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
    sub_1C71608(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *choiceList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unchoiceList;
    v47 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v33;
    sub_1C71354((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unchoiceList = v40;
    v48 = unchoiceList;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


bool PhotoCampaignListViewManager__GetSwapLockList(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_4CC29B0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29B0 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v51, 0);
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
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v30 + 192) + 112LL));
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
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v50, 0);
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
    sub_1C71608(itemList, v9);
  v32 = v8->fields._size + v7->fields._size;
  if ( v32 < 1 )
  {
    *lockList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v48 = unlockList;
    v47 = 0;
    *unlockList = 0;
  }
  else
  {
    v33 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v33;
    sub_1C71354((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    v40 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
    v47 = (int)v40;
    *unlockList = v40;
    v48 = unlockList;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v48, v47, v41, v42, v43, v44, v45, v46);
  return v32 > 0;
}


void PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CC299D & 1) == 0 )
  {
    sub_1C713B0(&PhotoCampaignListViewManager_TypeInfo);
    byte_4CC299D = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C71608(0, v1);
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void PhotoCampaignListViewManager__ModifyItem(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_4CC29A3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29A3 = 1;
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
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
      v36.fields._current = (Il2CppObject *)v35.fields.fakeValue;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v36,
               (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v36,
            (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v36.fields._current
          && (naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment,
              v36.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (PhotoCampaignListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = v36.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1C71608(v9, v10);
            monitor = current[7].monitor;
            if ( !monitor )
              sub_1C71608(v9, v10);
            v14 = monitor[2];
            *(_OWORD *)&v35.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v35.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v34 = v35;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v34, 0);
            v16 = Entity[2];
            v17 = v15;
            *(Il2CppObject *)&v33.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v33.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v33, 0);
            if ( v17 == v9 )
            {
              current[7].monitor = Entity;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)&current[7].monitor,
                (int32_t)Entity,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
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
          sub_1C71608(v9, v10);
LABEL_27:
        v24 = current[7].monitor;
        if ( !v24 )
          sub_1C71608(v9, v10);
        v25 = v24[2];
        *(_OWORD *)&v35.fields.currentCryptoKey = v24[1];
        *(_OWORD *)&v35.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v35;
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v32, 0);
        if ( !SelfUserGame )
          sub_1C71608(v26, v27);
        PhotoCampaignListViewItem__ModifyItem(
          (PhotoCampaignListViewItem_o *)current,
          v26 == SelfUserGame->fields.favoriteUserSvtId,
          v28);
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v31 = current[7].klass;
          if ( !v31 )
            sub_1C71608(0, v30);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v31->_1.image + 49))(
            v31,
            current,
            *((_QWORD *)v31->_1.image + 50));
        }
      }
    }
LABEL_44:
    sub_1C71608(Master_object, v5);
  }
}


void PhotoCampaignListViewManager__ModifyList(
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

  if ( (byte_4CC29B2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29B2 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
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
        sub_1C71610(Master_object);
      v11 = *(_QWORD *)(v8 + 8LL * (int)v9 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v26, 0);
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
                                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v16 = (PhotoCampaignListViewItem_o *)Master_object;
        naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)naturalAligment
          || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
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
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v25, 0);
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
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v24, 0);
      PhotoCampaignListViewManager__ModifyLockItem(this, v16, v22, 1, v10, v23);
LABEL_29:
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_31:
    sub_1C71608(Master_object, v6);
  }
}


void PhotoCampaignListViewManager__ModifyLockItem(
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
  if ( (byte_4CC29B4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC29B4 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_26;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v26, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (PhotoCampaignListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v25.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v25.fields.fakeValue = v15;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                 &v25,
                                                 0);
      if ( v16 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&photoCampaignItem->fields.userSvtEntity,
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
  if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
  {
    this = (PhotoCampaignListViewManager_o *)photoCampaignItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(PhotoCampaignListViewManager_o *, PhotoCampaignListViewItem_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
        this,
        photoCampaignItem,
        this->klass->vtable._5_SetSortButtonImage.method);
      if ( !isIconSizeChange )
        return;
      this = (PhotoCampaignListViewManager_o *)photoCampaignItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)photoCampaignItem, v10->fields.seed, 0);
        return;
      }
    }
LABEL_26:
    sub_1C71608(this, photoCampaignItem);
  }
}


void PhotoCampaignListViewManager__OnClickFilterKind(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC29A8 & 1) == 0 )
  {
    sub_1C713B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__);
    sub_1C713B0(&Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC29A8 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C71608(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, 8, sort, v8, -1, 0);
  }
}


void PhotoCampaignListViewManager__OnClickListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void PhotoCampaignListViewManager__OnClickSelectListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C71608(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void PhotoCampaignListViewManager__OnClickSortAscendingOrder(
        PhotoCampaignListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CC29AD & 1) == 0 )
  {
    sub_1C713B0(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    byte_4CC29AD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C71608(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void PhotoCampaignListViewManager__OnClickSortKind(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v7; // x21
  ServantSortSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC29AB & 1) == 0 )
  {
    sub_1C713B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_PhotoCampaignListViewManager_EndSelectSortKind__);
    sub_1C713B0(&Method_PhotoCampaignListViewManager_OnClickSortKind__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC29AB = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C715FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C71608(v9, v10);
    CommonUI__OpenServantSortSelectMenu(v7, 3, sort, 0, v8, 0);
  }
}


void PhotoCampaignListViewManager__OnLongPushListView(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  unsigned int Index; // w0

  if ( (byte_4CC29A7 & 1) == 0 )
  {
    sub_1C713B0(&Method_PhotoCampaignListViewManager_OnLongPushListView__);
    byte_4CC29A7 = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
      if ( !callbackFunc )
        return;
      v13 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C713C8(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
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
    sub_1C71608(scrollView, obj);
  }
}


void PhotoCampaignListViewManager__OnMoveEnd(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4CC29A6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC29A6 = 1;
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
          sub_1C71608(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PhotoCampaignListViewManager__RequestListObject(
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

  if ( (byte_4CC29A5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__);
    sub_1C713B0(&Method_PhotoCampaignListViewManager_OnMoveEnd__);
    sub_1C713B0(&StringLiteral_9943/*"OnMoveEnd"*/);
    byte_4CC29A5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C71608(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9943/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C71608(v10, v11);
      PhotoCampaignListViewObject__Init_34045964((PhotoCampaignListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
  }
}


void PhotoCampaignListViewManager__SetCanLongPushFlag(
        PhotoCampaignListViewManager_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isCanNotLongPush = flag;
}


void PhotoCampaignListViewManager__SetFilterButtonImage(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4CC29AA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17509/*"btn_filter_on"*/);
    sub_1C713B0(&StringLiteral_17508/*"btn_filter"*/);
    byte_4CC29AA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C71608(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17508/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17509/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void PhotoCampaignListViewManager__SetMode(
        PhotoCampaignListViewManager_o *this,
        int32_t mode,
        PhotoCampaignListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PhotoCampaignListViewManager__SetMode_34045304(this, mode, v10);
}


void PhotoCampaignListViewManager__SetMode_34045304(
        PhotoCampaignListViewManager_o *this,
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
    sub_1C71608(scrollView, v5);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)scrollView, 0);
LABEL_6:
  if ( (unsigned int)(mode - 1) <= 2 )
    PhotoCampaignListViewManager__RequestListObject(this, mode + 1, v7);
}


void PhotoCampaignListViewManager__SetObjectItem(
        PhotoCampaignListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CC29A4 & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_1C713B0(&PhotoCampaignListViewObject_TypeInfo);
    byte_4CC29A4 = 1;
  }
  if ( !obj
    || (naturalAligment = PhotoCampaignListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_1C71608(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PhotoCampaignListViewObject__Init_34045180((PhotoCampaignListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void PhotoCampaignListViewManager__SetSortButtonImage(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CC29AE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_17545/*"btn_sort_up"*/);
    sub_1C713B0(&StringLiteral_17645/*"btn_txt_up"*/);
    sub_1C713B0(&StringLiteral_17596/*"btn_txt_new"*/);
    sub_1C713B0(&StringLiteral_17586/*"btn_txt_down"*/);
    sub_1C713B0(&StringLiteral_17603/*"btn_txt_old"*/);
    sub_1C713B0(&StringLiteral_17542/*"btn_sort_down"*/);
    byte_4CC29AE = 1;
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
          v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17603/*"btn_txt_old"*/ : &StringLiteral_17596/*"btn_txt_new"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
              v13 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
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
          v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17645/*"btn_txt_up"*/ : &StringLiteral_17586/*"btn_txt_down"*/);
          UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
          v11 = this->fields.sort;
          if ( v11 )
          {
            sort = (ListViewSort_o *)this->fields.sortOrderSprite;
            if ( sort )
            {
              v12 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
              v13 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C71608(sort, v4);
  }
}


void PhotoCampaignListViewManager__UpdateDisplayState(
        PhotoCampaignListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  __int64 v7; // x1
  Il2CppObject *current; // x0
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC29B3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29B3 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isPushMode;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !v10.fields._current )
        goto LABEL_13;
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( v10.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PhotoCampaignListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_1C719A4(v10.fields._current);
LABEL_13:
        sub_1C71608(current, v7);
      }
      *((_BYTE *)&v10.fields._current->klass + (unsigned __int64)&qword_A8 + 4) = v6;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void PhotoCampaignListViewManager__UpdateItemCannotSelectSvt(
        PhotoCampaignListViewManager_o *this,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x21
  PhotoCampaignListViewManager___c_c *v8; // x0
  __int64 v9; // x1
  Il2CppObject *Master_object; // x22
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  void *monitor; // x20
  Il2CppClass *klass; // x22
  int32_t v20; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Action_object__o *v22; // x22
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__24_1; // x20
  Il2CppObject *v25; // x21
  struct PhotoCampaignListViewManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4CC29A1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_ListViewItem__TypeInfo);
    sub_1C713B0(&System_Action_GameObject__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__ForEach__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__);
    sub_1C713B0(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__);
    sub_1C713B0(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_4CC29A1 = 1;
  }
  entity = 0;
  v7 = sub_1C715FC(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_DWORD *)(v7 + 20) = anotherSvtLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  *(_QWORD *)(v7 + 24) = v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !Master_object )
    goto LABEL_22;
  v8 = (PhotoCampaignListViewManager___c_c *)DataMasterBase_object__object__long___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                               &entity,
                                               anotherUserSvtId,
                                               (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_22;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = klass;
    *(_QWORD *)&v34.fields.fakeValue = monitor;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v34, 0);
  }
  else
  {
    v20 = 0;
  }
  *(_DWORD *)(v7 + 16) = v20;
  itemList = this->fields.itemList;
  v22 = (System_Action_object__o *)sub_1C715FC(System_Action_ListViewItem__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__,
    0);
  if ( !itemList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)itemList,
    (System_Action_T__o *)v22,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_ListViewItem__ForEach__);
  v8 = PhotoCampaignListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PhotoCampaignListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager___c_TypeInfo);
    v8 = PhotoCampaignListViewManager___c_TypeInfo;
  }
  _9__24_1 = (System_Action_object__o *)v8->static_fields->__9__24_1;
  if ( !_9__24_1 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = PhotoCampaignListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v8->static_fields->__9;
    _9__24_1 = (System_Action_object__o *)sub_1C715FC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(
      _9__24_1,
      v25,
      Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__,
      0);
    static_fields = PhotoCampaignListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_1 = (struct System_Action_GameObject__o *)_9__24_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_1,
      (int32_t)_9__24_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !objectList )
LABEL_22:
    sub_1C71608(v8, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__24_1,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void PhotoCampaignListViewManager__add_callbackFunc(
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

  if ( (byte_4CC299A & 1) == 0 )
  {
    sub_1C713B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4CC299A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PhotoCampaignListViewManager_CallbackFunc_c *)v7->klass != PhotoCampaignListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_1C719A4(v7);
  PhotoCampaignListViewManager__remove_callbackFunc(v10, v11, v12);
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *PhotoCampaignListViewManager__get_ClippingObjectList(
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

  if ( (byte_4CC299F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC299F = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C71608(0, v10);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(
                                 (PhotoCampaignListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C71608(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C71608(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C71608(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C71608(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C71608(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v3;
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *PhotoCampaignListViewManager__get_ObjectList(
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

  if ( (byte_4CC299E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC299E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v3;
}


void PhotoCampaignListViewManager__remove_callbackFunc(
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

  if ( (byte_4CC299B & 1) == 0 )
  {
    sub_1C713B0(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4CC299B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PhotoCampaignListViewManager_CallbackFunc_c *)v7->klass != PhotoCampaignListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C719A4(v7);
  PhotoCampaignListViewManager__DeleteContinueData(v10);
}


void PhotoCampaignListViewManager_CallbackFunc___ctor(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA0488;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA0430;
}


System_IAsyncResult_o *PhotoCampaignListViewManager_CallbackFunc__BeginInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4CC29B6 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&PhotoCampaignListViewManager_ResultKind_TypeInfo);
    byte_4CC29B6 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PhotoCampaignListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void PhotoCampaignListViewManager_CallbackFunc__Invoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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


void PhotoCampaignListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC29B7 & 1) == 0 )
  {
    sub_1C713B0(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_4CC29B7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(PhotoCampaignListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoCampaignListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)PhotoCampaignListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoCampaignListViewManager___c___ctor(PhotoCampaignListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoCampaignListViewManager___c___UpdateItemCannotSelectSvt_b__24_1(
        PhotoCampaignListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CC29B8 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC29B8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !x
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               x,
                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___)) == 0 )
    {
      sub_1C71608(Component_object, v5);
    }
    PhotoCampaignListViewObject__ModifyItemDraw((PhotoCampaignListViewObject_o *)Component_object, v5);
  }
}


void PhotoCampaignListViewManager___c__DisplayClass23_0___ctor(
        PhotoCampaignListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__0(
        PhotoCampaignListViewManager___c__DisplayClass23_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v9; // x0
  ListViewItem_o *v10; // x1
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4CC29B9 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29B9 = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    v9 = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C719A4(v3);
    return PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__1(v9, v10, v11);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1C71608(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v12, 0) == v4->fields.focusUsrSvtId;
}


bool PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__1(
        PhotoCampaignListViewManager___c__DisplayClass23_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v10; // x0
  ListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  v3 = item;
  v4 = this;
  if ( (byte_4CC29BA & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29BA = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
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
      this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                                       &v13,
                                                                       0);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1C71608(this, item);
  }
  v10 = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C719A4(v3);
  PhotoCampaignListViewManager___c__DisplayClass24_0___UpdateItemCannotSelectSvt_b__0(v10, v11, v12);
  return result;
}


void PhotoCampaignListViewManager___c__DisplayClass24_0___ctor(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoCampaignListViewManager___c__DisplayClass24_0___UpdateItemCannotSelectSvt_b__0(
        PhotoCampaignListViewManager___c__DisplayClass24_0_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v4; // x20
  __int64 naturalAligment; // x10
  int32_t selectedSvtId; // w0
  bool v7; // w0
  int32_t anotherSvtLimitCount; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *photoMaster; // x20
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CC29BB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C713B0(&PhotoCampaignListViewItem_TypeInfo);
    byte_4CC29BB = 1;
  }
  source = 0;
  entity = 0;
  if ( x )
  {
    naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
    if ( x->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (PhotoCampaignListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
    {
      selectedSvtId = v4->fields.selectedSvtId;
      if ( x[1].fields.selectNum == selectedSvtId )
      {
        v7 = 1;
LABEL_16:
        BYTE4(x[2].monitor) = v7;
        return;
      }
      if ( selectedSvtId < 1 || (anotherSvtLimitCount = v4->fields.anotherSvtLimitCount, anotherSvtLimitCount < 0) )
      {
LABEL_15:
        v7 = 0;
        goto LABEL_16;
      }
      photoMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.photoMaster;
      this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)ServantScriptMaster__getId(
                                                                       selectedSvtId,
                                                                       anotherSvtLimitCount,
                                                                       0);
      if ( photoMaster )
      {
        if ( !DataMasterBase_object__object__long___TryGetEntity(
                photoMaster,
                &entity,
                (int)this,
                (const MethodInfo_340B428 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__) )
          goto LABEL_15;
        this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)entity;
        if ( entity )
        {
          if ( ServantPhotoEntity__TryGetRestrictionSvtList(
                 (ServantPhotoEntity_o *)entity,
                 (System_Int32_array **)&source,
                 0) )
          {
            v7 = System_Linq_Enumerable__Contains_int_(
                   source,
                   x[1].fields.selectNum,
                   (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
            goto LABEL_16;
          }
          goto LABEL_15;
        }
      }
    }
    sub_1C71608(this, x);
  }
}