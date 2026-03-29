void PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BE6C & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10684/*"PhotoCampaign2026"*/);
    byte_4D2BE6C = 1;
  }
  v1 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v1, (System_String_o *)StringLiteral_10684/*"PhotoCampaign2026"*/, 3, 0, 0);
  PhotoCampaignListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C93A78(
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        PhotoCampaignListViewManager__ModifyList(this, 1, v14),
        PhotoCampaignListViewManager__SetMode_34330736(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C93D2C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void PhotoCampaignListViewManager__CreateList(
        PhotoCampaignListViewManager_o *this,
        int64_t focusUsrSvtId,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        StaffPhotoEntity_o *anotherStaff,
        const MethodInfo *method)
{
  __int64 v9; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *OrganizationList; // x0
  __int64 v11; // x1
  Il2CppObject *Master_object; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v16; // w24
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v18; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppObject *v25; // x26
  ListViewSort_o *v26; // x27
  int v27; // w19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  PhotoCampaignListViewManager_c *v34; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v36; // x1
  struct ListViewSort_o **p_sort; // x20
  UnityEngine_Object_o *infoDataLabel; // x20
  UILabel_o *v39; // x20
  System_String_o *v40; // x22
  Il2CppObject *v41; // x23
  Il2CppObject *v42; // x0
  __int64 v43; // x8
  int32_t v44; // w28
  PhotoCampaignListViewManager_o *v45; // x19
  __int64 v46; // x29
  __int128 v47; // q0
  int64_t v48; // x0
  __int64 v49; // x22
  __int64 v50; // x23
  int64_t v51; // x20
  char v52; // w26
  __int64 v53; // x22
  __int64 v54; // x23
  int32_t v55; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x22
  __int64 v57; // x23
  __int64 v58; // x26
  int32_t v59; // w0
  __int64 v60; // x21
  System_Int64_array *v61; // x23
  PhotoCampaignListViewItem_o *v62; // x22
  const MethodInfo *v63; // x6
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v73; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  UILabel_o *v82; // x21
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v85; // x1
  UnityEngine_Object_o *scrollBar; // x20
  struct UIScrollBar_o *v87; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Predicate_object__o *v89; // x21
  Il2CppObject *v90; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v91; // x20
  System_Predicate_object__o *v92; // x21
  __int64 v93; // [xsp+10h] [xbp-100h]
  struct ListViewSort_o **v94; // [xsp+18h] [xbp-F8h]
  __int64 v95; // [xsp+20h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v96; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+60h] [xbp-B0h] BYREF
  int v101; // [xsp+84h] [xbp-8Ch] BYREF
  System_Int32_array *restrictionSvtList; // [xsp+88h] [xbp-88h] BYREF
  Il2CppObject *v103; // [xsp+90h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  System_Int64_array *svtIdList; // [xsp+A0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_4D2BE57 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewManager_TypeInfo);
    sub_1C93AD4(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__);
    sub_1C93AD4(&PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_11655/*"SERVANT_ALL_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C93AD4(&StringLiteral_12094/*"SERVANT_TAKE"*/);
    sub_1C93AD4(&StringLiteral_12573/*"SUM_INFO"*/);
    byte_4D2BE57 = 1;
  }
  svtIdList = 0;
  entity = 0;
  v103 = 0;
  equipIdList = 0;
  restrictionSvtList = 0;
  v9 = sub_1C93D20(PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_102;
  *(_QWORD *)(v9 + 16) = focusUsrSvtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  if ( !Master_object )
    goto LABEL_102;
  v13 = OrganizationList;
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                     &entity,
                                                                     anotherUserSvtId,
                                                                     (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_102;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v107.fields.currentCryptoKey = klass;
    *(_QWORD *)&v107.fields.fakeValue = monitor;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v107, 0);
  }
  else
  {
    v16 = 0;
  }
  v96 = v13;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  *(_QWORD *)(v9 + 24) = SelfUserGame;
  v18 = v9 + 24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)SelfUserGame, v19, v20, v21, v22, v23, v24);
  this->fields.isCanNotLongPush = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v25 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v25 )
    goto LABEL_102;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v25,
    &svtIdList,
    &equipIdList,
    (int64_t)OrganizationList[2].fields.list[1].monitor,
    0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantMaster__getOrganizationList(
                                                                     (UserServantMaster_o *)Master_object,
                                                                     0);
  if ( !*(_QWORD *)v18 )
    goto LABEL_102;
  v26 = (ListViewSort_o *)OrganizationList;
  v27 = *(_DWORD *)(*(_QWORD *)v18 + 160LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SERVANT_TAKE"*/, 0);
  v34 = PhotoCampaignListViewManager_TypeInfo;
  v95 = StringLiteral_11695/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v34 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v34->static_fields->servantSortInfo;
  v36 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v36, v28, v29, v30, v31, v32, v33);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.sort;
  if ( !OrganizationList
    || (ListViewSort__Load((ListViewSort_o *)OrganizationList, 0), v94 = &this->fields.sort, !*p_sort) )
  {
LABEL_102:
    sub_1C93D2C(OrganizationList, v11);
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
    v39 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12573/*"SUM_INFO"*/,
                                                                       0);
    if ( !v26 )
      goto LABEL_102;
    v40 = (System_String_o *)OrganizationList;
    LODWORD(v100.fields.currentCryptoKey) = *(_QWORD *)&v26->fields.FILTER_DEFAULT_VALUE;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
    v101 = v27;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_64467032(v40, v41, v42, 0);
    if ( !v39 )
      goto LABEL_102;
    UILabel__set_text(v39, (System_String_o *)OrganizationList, 0);
  }
  else if ( !v26 )
  {
    goto LABEL_102;
  }
  v43 = *(_QWORD *)&v26->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v43 < 1 )
    goto LABEL_70;
  v93 = v9;
  v44 = 0;
  do
  {
    if ( v44 >= (unsigned int)v43 )
      sub_1C93D34(OrganizationList);
    v45 = this;
    v46 = *((_QWORD *)&v26->fields.manager + v44);
    if ( !v46 )
      goto LABEL_102;
    v47 = *(_OWORD *)(v46 + 32);
    *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)(v46 + 16);
    *(_OWORD *)&v100.fields.fakeValue = v47;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v99 = v100;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v99, 0);
    v50 = *(_QWORD *)(v46 + 80);
    v49 = *(_QWORD *)(v46 + 88);
    v51 = v48;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v108.fields.currentCryptoKey = v50;
    *(_QWORD *)&v108.fields.fakeValue = v49;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                       v108,
                                                                       0);
    if ( (_DWORD)OrganizationList == v16 )
    {
      v52 = 1;
      goto LABEL_62;
    }
    if ( anotherStaff )
    {
      v54 = *(_QWORD *)(v46 + 80);
      v53 = *(_QWORD *)(v46 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v109.fields.currentCryptoKey = v54;
      *(_QWORD *)&v109.fields.fakeValue = v53;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v109, 0);
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)StaffPhotoEntity__IsRestrictionSvt(
                                                                         anotherStaff,
                                                                         v55,
                                                                         0);
      v52 = (char)OrganizationList;
      if ( (unsigned __int8)OrganizationList & 1 | (anotherSvtLimitCount < 0 || v16 < 1) )
        goto LABEL_62;
    }
    else if ( anotherSvtLimitCount < 0 || v16 < 1 )
    {
      goto LABEL_61;
    }
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantScriptMaster__getId(
                                                                       v16,
                                                                       anotherSvtLimitCount,
                                                                       0);
    if ( !v96 )
      goto LABEL_102;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                       v96,
                                                                       &v103,
                                                                       (int)OrganizationList,
                                                                       (const MethodInfo_3465A70 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)OrganizationList & 1) == 0 )
      goto LABEL_61;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)v103;
    if ( !v103 )
      goto LABEL_102;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantPhotoEntity__TryGetRestrictionSvtList(
                                                                       (ServantPhotoEntity_o *)v103,
                                                                       &restrictionSvtList,
                                                                       0);
    if ( ((unsigned __int8)OrganizationList & 1) == 0 )
    {
LABEL_61:
      v52 = 0;
      goto LABEL_62;
    }
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)restrictionSvtList;
    v57 = *(_QWORD *)(v46 + 80);
    v58 = *(_QWORD *)(v46 + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v110.fields.currentCryptoKey = v57;
    *(_QWORD *)&v110.fields.fakeValue = v58;
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v110, 0);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Contains_int_(
                                                                       v56,
                                                                       v59,
                                                                       (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
    v52 = (char)OrganizationList;
LABEL_62:
    if ( !*(_QWORD *)v18 )
      goto LABEL_102;
    v60 = *(_QWORD *)(*(_QWORD *)v18 + 120LL);
    v61 = svtIdList;
    v62 = (PhotoCampaignListViewItem_o *)sub_1C93D20(PhotoCampaignListViewItem_TypeInfo);
    PhotoCampaignListViewItem___ctor(v62, v44, (UserServantEntity_o *)v46, v61, v51 == v60, v52 & 1, v63);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)v45->fields.itemList;
    if ( !OrganizationList )
      goto LABEL_102;
    v70 = *(_QWORD *)&OrganizationList->fields._MasterKind_k__BackingField;
    v71 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++HIDWORD(OrganizationList->fields._MasterName_k__BackingField);
    if ( !v70 )
      goto LABEL_102;
    MasterName_k__BackingField_low = SLODWORD(OrganizationList->fields._MasterName_k__BackingField);
    this = v45;
    if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v70 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)OrganizationList,
        (Il2CppObject *)v62,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = v70 + 8 * MasterName_k__BackingField_low;
      LODWORD(OrganizationList->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
      *(_QWORD *)(v73 + 32) = v62;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 32), (int32_t)v62, v64, v65, v66, v67, v68, v69);
    }
    v43 = *(_QWORD *)&v26->fields.FILTER_DEFAULT_VALUE;
    ++v44;
  }
  while ( v44 < (int)v43 );
  v9 = v93;
LABEL_70:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v43 )
    v75 = (System_String_o *)StringLiteral_11895/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v75 = (System_String_o *)v95;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                     emptyMessageLabel,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    v82 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(v75, 0);
    if ( v82 )
    {
      UILabel__set_text(v82, (System_String_o *)OrganizationList, 0);
      goto LABEL_80;
    }
    goto LABEL_102;
  }
LABEL_80:
  if ( !*v94 )
    goto LABEL_102;
  iconScaleKind = (*v94)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
LABEL_87:
    this->fields.seed = normalSizeSeed;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.seed,
      (int32_t)normalSizeSeed,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    goto LABEL_88;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_87;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
    goto LABEL_87;
  }
LABEL_88:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v85);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.scrollBar;
    if ( !OrganizationList )
      goto LABEL_102;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)OrganizationList,
                                                                       0);
    if ( !OrganizationList )
      goto LABEL_102;
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)OrganizationList,
                                                                       0);
    if ( ((unsigned __int8)OrganizationList & 1) != 0 )
    {
      v87 = this->fields.scrollBar;
      if ( !v87 )
        goto LABEL_102;
      if ( v87->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v89 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v89,
          (Il2CppObject *)v9,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__,
          0);
        if ( !itemList )
          goto LABEL_102;
        v90 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v89,
                (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v90 )
          goto LABEL_100;
        v91 = this->fields.itemList;
        v92 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v92,
          (Il2CppObject *)v9,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__,
          0);
        if ( !v91 )
          goto LABEL_102;
        v90 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v91,
                (System_Predicate_T__o *)v92,
                (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v90 )
LABEL_100:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v90[1].klass), 0);
      }
    }
  }
}


void PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D2BE53 & 1) == 0 )
  {
    sub_1C93AD4(&PhotoCampaignListViewManager_TypeInfo);
    byte_4D2BE53 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C93D2C(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PhotoCampaignListViewManager__DestroyList(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C93D2C(0, v3);
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

  if ( (byte_4D2BE60 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BE60 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C93D2C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2BE63 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BE63 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
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

  if ( (byte_4D2BE66 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE66 = 1;
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
    sub_1C93D2C(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4D2BE59 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE59 = 1;
  }
  result = (PhotoCampaignListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PhotoCampaignListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D2BE68 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE68 = 1;
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

  if ( (byte_4D2BE67 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE67 = 1;
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


void PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D2BE54 & 1) == 0 )
  {
    sub_1C93AD4(&PhotoCampaignListViewManager_TypeInfo);
    byte_4D2BE54 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C93D2C(0, v1);
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

  if ( (byte_4D2BE5A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE5A = 1;
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        (System_Collections_Generic_List_object__o *)Master_object,
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
          sub_1C93D2C(v9, v10);
LABEL_27:
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
            sub_1C93D2C(0, v30);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v31->_1.image + 49))(
            v31,
            current,
            *((_QWORD *)v31->_1.image + 50));
        }
      }
    }
LABEL_44:
    sub_1C93D2C(Master_object, v5);
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

  if ( (byte_4D2BE69 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE69 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
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
        sub_1C93D34(Master_object);
      v11 = *(_QWORD *)(v8 + 8LL * (int)v9 + 32);
      if ( !v11 )
        break;
      v12 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v26 = v27;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v26, 0);
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
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v25, 0);
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
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v24, 0);
      PhotoCampaignListViewManager__ModifyLockItem(this, v16, v22, 1, v10, v23);
LABEL_29:
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_31:
    sub_1C93D2C(Master_object, v6);
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
  if ( (byte_4D2BE6B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BE6B = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v26, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (PhotoCampaignListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v25.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v25.fields.fakeValue = v15;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                 &v25,
                                                 0);
      if ( v16 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_1C93A78(
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
    sub_1C93D2C(this, photoCampaignItem);
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

  if ( (byte_4D2BE5F & 1) == 0 )
  {
    sub_1C93AD4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BE5F = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C93D2C(v9, v10);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C93D2C(v10, v11);
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

  if ( (byte_4D2BE64 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    byte_4D2BE64 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C93D2C(v5, v6);
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

  if ( (byte_4D2BE62 & 1) == 0 )
  {
    sub_1C93AD4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_EndSelectSortKind__);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_OnClickSortKind__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BE62 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C93D20(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C93D2C(v9, v10);
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

  if ( (byte_4D2BE5E & 1) == 0 )
  {
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_OnLongPushListView__);
    byte_4D2BE5E = 1;
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
      v13 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C93AEC(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v13, v13[4]);
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
    sub_1C93D2C(scrollView, obj);
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

  if ( (byte_4D2BE5D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE5D = 1;
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
          sub_1C93D2C(0, v7);
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

  if ( (byte_4D2BE5C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2BE5C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C93D2C(0, v6);
  size = ObjectList->fields._size;
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
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v10, v11);
      PhotoCampaignListViewObject__Init_34331396((PhotoCampaignListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
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

  if ( (byte_4D2BE61 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17618/*"btn_filter_on"*/);
    sub_1C93AD4(&StringLiteral_17617/*"btn_filter"*/);
    byte_4D2BE61 = 1;
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  PhotoCampaignListViewManager__SetMode_34330736(this, mode, v10);
}


void PhotoCampaignListViewManager__SetMode_34330736(
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
    sub_1C93D2C(scrollView, v5);
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
  if ( (byte_4D2BE5B & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_1C93AD4(&PhotoCampaignListViewObject_TypeInfo);
    byte_4D2BE5B = 1;
  }
  if ( !obj
    || (naturalAligment = PhotoCampaignListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PhotoCampaignListViewObject__Init_34330612((PhotoCampaignListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4D2BE65 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_17654/*"btn_sort_up"*/);
    sub_1C93AD4(&StringLiteral_17756/*"btn_txt_up"*/);
    sub_1C93AD4(&StringLiteral_17707/*"btn_txt_new"*/);
    sub_1C93AD4(&StringLiteral_17697/*"btn_txt_down"*/);
    sub_1C93AD4(&StringLiteral_17714/*"btn_txt_old"*/);
    sub_1C93AD4(&StringLiteral_17651/*"btn_sort_down"*/);
    byte_4D2BE65 = 1;
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

  if ( (byte_4D2BE6A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE6A = 1;
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
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( v10.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PhotoCampaignListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
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


void PhotoCampaignListViewManager__UpdateItemCannotSelectSvt(
        PhotoCampaignListViewManager_o *this,
        int64_t anotherUserSvtId,
        int32_t anotherSvtLimitCount,
        StaffPhotoEntity_o *anotherStaff,
        const MethodInfo *method)
{
  __int64 v9; // x21
  PhotoCampaignListViewManager___c_c *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Master_object; // x22
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  void *monitor; // x20
  Il2CppClass *klass; // x22
  int32_t v28; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Action_object__o *v30; // x22
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__24_1; // x20
  Il2CppObject *v33; // x21
  struct PhotoCampaignListViewManager___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4D2BE58 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ListViewItem__TypeInfo);
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__);
    sub_1C93AD4(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__);
    sub_1C93AD4(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_4D2BE58 = 1;
  }
  entity = 0;
  v9 = sub_1C93D20(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_22;
  *(_QWORD *)(v9 + 24) = anotherStaff;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)anotherStaff, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = anotherSvtLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  *(_QWORD *)(v9 + 40) = v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  if ( !Master_object )
    goto LABEL_22;
  v10 = (PhotoCampaignListViewManager___c_c *)DataMasterBase_object__object__long___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                anotherUserSvtId,
                                                (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_22;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = klass;
    *(_QWORD *)&v42.fields.fakeValue = monitor;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v42, 0);
  }
  else
  {
    v28 = 0;
  }
  *(_DWORD *)(v9 + 16) = v28;
  itemList = this->fields.itemList;
  v30 = (System_Action_object__o *)sub_1C93D20(System_Action_ListViewItem__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)v9,
    Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__,
    0);
  if ( !itemList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)itemList,
    (System_Action_T__o *)v30,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_ListViewItem__ForEach__);
  v10 = PhotoCampaignListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PhotoCampaignListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager___c_TypeInfo);
    v10 = PhotoCampaignListViewManager___c_TypeInfo;
  }
  _9__24_1 = (System_Action_object__o *)v10->static_fields->__9__24_1;
  if ( !_9__24_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = PhotoCampaignListViewManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v10->static_fields->__9;
    _9__24_1 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(
      _9__24_1,
      v33,
      Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__,
      0);
    static_fields = PhotoCampaignListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_1 = (struct System_Action_GameObject__o *)_9__24_1;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_1,
      (int32_t)_9__24_1,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !objectList )
LABEL_22:
    sub_1C93D2C(v10, v11);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__24_1,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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

  if ( (byte_4D2BE51 & 1) == 0 )
  {
    sub_1C93AD4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4D2BE51 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2BE56 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE56 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
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
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C93D2C(0, v10);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(
                                 (PhotoCampaignListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C93D2C(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44503492((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C93D2C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
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
          sub_1C93D2C(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C93D2C(Item, v13);
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

  if ( (byte_4D2BE55 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE55 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
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
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C93D2C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
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

  if ( (byte_4D2BE52 & 1) == 0 )
  {
    sub_1C93AD4(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4D2BE52 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C940C8(v7);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC19E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC198C;
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
  if ( (byte_4D2BE6D & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&PhotoCampaignListViewManager_ResultKind_TypeInfo);
    byte_4D2BE6D = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PhotoCampaignListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return sub_1C93A88(this, v10, callback, object);
}


void PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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

  if ( (byte_4D2BE6E & 1) == 0 )
  {
    sub_1C93AD4(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_4D2BE6E = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PhotoCampaignListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoCampaignListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignListViewManager___c_o *)v1;
  sub_1C93A78(
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

  if ( (byte_4D2BE6F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BE6F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !x
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               x,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___)) == 0 )
    {
      sub_1C93D2C(Component_object, v5);
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
  if ( (byte_4D2BE70 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE70 = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    v9 = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C940C8(v3);
    return PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__1(v9, v10, v11);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1C93D2C(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v12, 0) == v4->fields.focusUsrSvtId;
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
  if ( (byte_4D2BE71 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE71 = 1;
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
      this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                                       &v13,
                                                                       0);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1C93D2C(this, item);
  }
  v10 = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C940C8(v3);
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
  int32_t selectNum; // w1
  int32_t selectedSvtId; // w0
  bool v8; // w0
  int32_t anotherSvtLimitCount; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *photoMaster; // x20
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D2BE72 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C93AD4(&PhotoCampaignListViewItem_TypeInfo);
    byte_4D2BE72 = 1;
  }
  source = 0;
  entity = 0;
  if ( x )
  {
    naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
    if ( x->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (PhotoCampaignListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
    {
      selectNum = x[1].fields.selectNum;
      selectedSvtId = v4->fields.selectedSvtId;
      if ( selectNum == selectedSvtId )
      {
LABEL_9:
        v8 = 1;
LABEL_19:
        BYTE4(x[2].monitor) = v8;
        return;
      }
      if ( v4->fields.anotherStaff )
      {
        if ( StaffPhotoEntity__IsRestrictionSvt(v4->fields.anotherStaff, selectNum, 0) )
          goto LABEL_9;
        selectedSvtId = v4->fields.selectedSvtId;
      }
      if ( selectedSvtId < 1 || (anotherSvtLimitCount = v4->fields.anotherSvtLimitCount, anotherSvtLimitCount < 0) )
      {
LABEL_18:
        v8 = 0;
        goto LABEL_19;
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
                (const MethodInfo_3465A70 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__) )
          goto LABEL_18;
        this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)entity;
        if ( entity )
        {
          if ( ServantPhotoEntity__TryGetRestrictionSvtList(
                 (ServantPhotoEntity_o *)entity,
                 (System_Int32_array **)&source,
                 0) )
          {
            v8 = System_Linq_Enumerable__Contains_int_(
                   source,
                   x[1].fields.selectNum,
                   (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
            goto LABEL_19;
          }
          goto LABEL_18;
        }
      }
    }
    sub_1C93D2C(this, x);
  }
}