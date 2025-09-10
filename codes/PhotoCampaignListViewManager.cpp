void PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2291B & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10607/*"PhotoCampaign2025"*/);
    byte_4C2291B = 1;
  }
  v1 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v1, (System_String_o *)StringLiteral_10607/*"PhotoCampaign2025"*/, 3, 0, 0);
  PhotoCampaignListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C2D434((CGThumbnailListItem_o *)PhotoCampaignListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PhotoCampaignListViewManager___ctor(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PhotoCampaignListViewManager__ChangeIconScale(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int scaleType; // w8
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int v7; // w8
  struct ListViewItemSeed_o **p_seed; // x0
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
    p_seed = &this->fields.seed;
    *((_DWORD *)p_seed + 75) = v7;
    sub_1C2D434((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        PhotoCampaignListViewManager__ModifyList(this, 1, v10),
        PhotoCampaignListViewManager__SetMode_33595752(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C2D6EC(sort, method);
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
  CGThumbnailListItem_o *p_monitor; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x26
  int nestedTypes; // w22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  PhotoCampaignListViewManager_c *v24; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v26; // x1
  struct ListViewSort_o **p_sort; // x19
  UnityEngine_Object_o *infoDataLabel; // x19
  __int64 v29; // x2
  UILabel_o *v30; // x27
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_String_o *v34; // x20
  Il2CppObject *v35; // x19
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  struct System_String_o *MasterName_k__BackingField; // x8
  int32_t v41; // w27
  __int64 v42; // x28
  __int128 v43; // q0
  PhotoCampaignListViewManager_o *v44; // x21
  int64_t v45; // x0
  __int64 v46; // x19
  __int64 v47; // x20
  int64_t v48; // x29
  bool v49; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x20
  __int64 v51; // x19
  __int64 v52; // x25
  int32_t v53; // w0
  Il2CppClass *v54; // x22
  System_Int64_array *v55; // x19
  PhotoCampaignListViewItem_o *v56; // x20
  const MethodInfo *v57; // x6
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v63; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x19
  System_String_o *v65; // x20
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  UILabel_o *v68; // x21
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v71; // x1
  UnityEngine_Object_o *scrollBar; // x19
  struct UIScrollBar_o *v73; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Predicate_object__o *v75; // x21
  Il2CppObject *v76; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v77; // x20
  System_Predicate_object__o *v78; // x21
  struct ListViewSort_o **v79; // [xsp+8h] [xbp-F8h]
  __int64 v80; // [xsp+10h] [xbp-F0h]
  Il2CppObject *v81; // [xsp+18h] [xbp-E8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // [xsp+20h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+50h] [xbp-B0h] BYREF
  int v86; // [xsp+74h] [xbp-8Ch] BYREF
  System_Int32_array *restrictionSvtList; // [xsp+78h] [xbp-88h] BYREF
  Il2CppObject *v88; // [xsp+80h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+88h] [xbp-78h] BYREF
  System_Int64_array *svtIdList; // [xsp+90h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_4C22906 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewManager_TypeInfo);
    sub_1C2D490(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C2D490(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__);
    sub_1C2D490(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__);
    sub_1C2D490(&PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11601/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C2D490(&StringLiteral_11561/*"SERVANT_ALL_EMPTY"*/);
    sub_1C2D490(&StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C2D490(&StringLiteral_12000/*"SERVANT_TAKE"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C22906 = 1;
  }
  svtIdList = 0;
  entity = 0;
  v88 = 0;
  equipIdList = 0;
  restrictionSvtList = 0;
  v8 = (Il2CppObject *)sub_1C2D6DC(PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_96;
  v8[1].klass = (Il2CppClass *)focusUsrSvtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  v82 = OrganizationList;
  if ( !Master_object )
    goto LABEL_96;
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                     &entity,
                                                                     anotherUserSvtId,
                                                                     (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_96;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v92.fields.currentCryptoKey = klass;
    *(_QWORD *)&v92.fields.fakeValue = monitor;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v92, 0);
  }
  else
  {
    v14 = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v81 = v8;
  v8[1].monitor = SelfUserGame;
  p_monitor = (CGThumbnailListItem_o *)&v8[1].monitor;
  sub_1C2D434(p_monitor, (int32_t)SelfUserGame, v17, v18);
  this->fields.isCanNotLongPush = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_96;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v19,
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
  v20 = OrganizationList;
  nestedTypes = (int)p_monitor->klass->_1.nestedTypes;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_TAKE"*/, 0);
  v24 = PhotoCampaignListViewManager_TypeInfo;
  v80 = StringLiteral_11601/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v24 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v24->static_fields->servantSortInfo;
  v26 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v26, v22, v23);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.sort;
  if ( !OrganizationList
    || (ListViewSort__Load((ListViewSort_o *)OrganizationList, 0), v79 = &this->fields.sort, !*p_sort) )
  {
LABEL_96:
    sub_1C2D6EC(OrganizationList, v10);
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
    v30 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12474/*"SUM_INFO"*/,
                                                                       0);
    if ( !v20 )
      goto LABEL_96;
    v34 = (System_String_o *)OrganizationList;
    LODWORD(v85.fields.currentCryptoKey) = v20->fields._MasterName_k__BackingField;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v31, v32, v33);
    v86 = nestedTypes;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v36, v37, v38);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_63499156(v34, v35, v39, 0);
    if ( !v30 )
      goto LABEL_96;
    UILabel__set_text(v30, (System_String_o *)OrganizationList, 0);
  }
  else if ( !v20 )
  {
    goto LABEL_96;
  }
  MasterName_k__BackingField = v20->fields._MasterName_k__BackingField;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v41 = 0;
    do
    {
      if ( v41 >= (unsigned int)MasterName_k__BackingField )
        sub_1C2D6F4(OrganizationList, v10, v29);
      v42 = *((_QWORD *)&v20->fields.revision + v41);
      if ( !v42 )
        goto LABEL_96;
      v43 = *(_OWORD *)(v42 + 32);
      v44 = this;
      *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)(v42 + 16);
      *(_OWORD *)&v85.fields.fakeValue = v43;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v84 = v85;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v84, 0);
      v47 = *(_QWORD *)(v42 + 80);
      v46 = *(_QWORD *)(v42 + 88);
      v48 = v45;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v93.fields.currentCryptoKey = v47;
      *(_QWORD *)&v93.fields.fakeValue = v46;
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                         v93,
                                                                         0);
      v49 = (_DWORD)OrganizationList == v14;
      if ( (anotherSvtLimitCount & 0x80000000) == 0 && v14 >= 1 && (_DWORD)OrganizationList != v14 )
      {
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantScriptMaster__getId(
                                                                           v14,
                                                                           anotherSvtLimitCount,
                                                                           0);
        if ( !v82 )
          goto LABEL_96;
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                           v82,
                                                                           &v88,
                                                                           (int)OrganizationList,
                                                                           (const MethodInfo_338A340 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)OrganizationList & 1) == 0 )
          goto LABEL_56;
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)v88;
        if ( !v88 )
          goto LABEL_96;
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantPhotoEntity__TryGetRestrictionSvtList(
                                                                           (ServantPhotoEntity_o *)v88,
                                                                           &restrictionSvtList,
                                                                           0);
        if ( ((unsigned __int8)OrganizationList & 1) != 0 )
        {
          v50 = (System_Collections_Generic_IEnumerable_TSource__o *)restrictionSvtList;
          v51 = *(_QWORD *)(v42 + 80);
          v52 = *(_QWORD *)(v42 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v94.fields.currentCryptoKey = v51;
          *(_QWORD *)&v94.fields.fakeValue = v52;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v94, 0);
          OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Contains_int_(
                                                                             v50,
                                                                             v53,
                                                                             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
          v49 = (char)OrganizationList;
        }
        else
        {
LABEL_56:
          v49 = 0;
        }
      }
      if ( !p_monitor->klass )
        goto LABEL_96;
      v54 = p_monitor->klass->_1.klass;
      v55 = svtIdList;
      v56 = (PhotoCampaignListViewItem_o *)sub_1C2D6DC(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v56, v41, (UserServantEntity_o *)v42, v55, v48 == (_QWORD)v54, v49, v57);
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)v44->fields.itemList;
      if ( !OrganizationList )
        goto LABEL_96;
      v60 = *(_QWORD *)&OrganizationList->fields._MasterKind_k__BackingField;
      v61 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(OrganizationList->fields._MasterName_k__BackingField);
      if ( !v60 )
        goto LABEL_96;
      MasterName_k__BackingField_low = SLODWORD(OrganizationList->fields._MasterName_k__BackingField);
      this = v44;
      if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v60 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)OrganizationList,
          (Il2CppObject *)v56,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = v60 + 8 * MasterName_k__BackingField_low;
        LODWORD(OrganizationList->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
        *(_QWORD *)(v63 + 32) = v56;
        sub_1C2D434((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v56, v58, v59);
      }
      MasterName_k__BackingField = v20->fields._MasterName_k__BackingField;
    }
    while ( ++v41 < (int)MasterName_k__BackingField );
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( MasterName_k__BackingField )
    v65 = (System_String_o *)StringLiteral_11801/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v65 = (System_String_o *)v80;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                     emptyMessageLabel,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    v68 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(v65, 0);
    if ( !v68 )
      goto LABEL_96;
    UILabel__set_text(v68, (System_String_o *)OrganizationList, 0);
  }
  if ( !*v79 )
    goto LABEL_96;
  iconScaleKind = (*v79)->fields.iconScaleKind;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v66, v67);
LABEL_82:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v71);
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
      v73 = this->fields.scrollBar;
      if ( !v73 )
        goto LABEL_96;
      if ( v73->fields.mSize <= 0.98 )
      {
        itemList = this->fields.itemList;
        v75 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v75,
          v81,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__,
          0);
        if ( !itemList )
          goto LABEL_96;
        v76 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)itemList,
                (System_Predicate_T__o *)v75,
                (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v76 )
          goto LABEL_94;
        v77 = this->fields.itemList;
        v78 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v78,
          v81,
          Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__,
          0);
        if ( !v77 )
          goto LABEL_96;
        v76 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v77,
                (System_Predicate_T__o *)v78,
                (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v76 )
LABEL_94:
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v76[1].klass), 0);
      }
    }
  }
}


void PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C22902 & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_TypeInfo);
    byte_4C22902 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C2D6EC(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PhotoCampaignListViewManager__DestroyList(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C2290F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2290F = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C2D6EC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C22912 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22912 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C22915 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22915 = 1;
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
    sub_1C2D6EC(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4C22908 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22908 = 1;
  }
  result = (PhotoCampaignListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PhotoCampaignListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C22917 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22917 = 1;
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
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 170) )
      {
        if ( *(_BYTE *)(itemList + 166) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *choiceList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v36 = unchoiceList;
    v35 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)choiceList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unchoiceList = v32;
    v36 = unchoiceList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
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
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x10
  __int64 v16; // x8
  __int128 v17; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  __int128 v22; // q0
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  System_Collections_Generic_List_long__o *v27; // x0
  int v28; // w21
  System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Int64_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_Int64_array **v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]

  if ( (byte_4C22916 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22916 = 1;
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
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_37;
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
      {
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 169) )
      {
        if ( *(_BYTE *)(itemList + 165) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
          if ( !v8 )
            goto LABEL_37;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_37;
          size = v8->fields._size;
          v9 = itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v26 = v19[4];
            v27 = v8;
LABEL_27:
            System_Collections_Generic_List_long___AddWithResize(
              v27,
              v9,
              *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v26 + 192) + 112LL));
            goto LABEL_28;
          }
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          v22 = *(_OWORD *)(v16 + 32);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v16 + 16);
          *(_OWORD *)&v40.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v40;
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
          if ( !v7 )
            goto LABEL_37;
          v23 = v7->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v7->fields._version;
          if ( !v23 )
            goto LABEL_37;
          v25 = v7->fields._size;
          v9 = itemList;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v26 = v24[4];
            v27 = v7;
            goto LABEL_27;
          }
          v21 = &v23->obj.klass + v25;
          v7->fields._size = v25 + 1;
        }
        v21[4] = (Il2CppClass *)v9;
      }
LABEL_28:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_37;
    }
  }
  if ( !v7 || !v8 )
LABEL_37:
    sub_1C2D6EC(itemList, v9);
  v28 = v8->fields._size + v7->fields._size;
  if ( v28 < 1 )
  {
    *lockList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v36 = unlockList;
    v35 = 0;
    *unlockList = 0;
  }
  else
  {
    v29 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)lockList, (int32_t)v29, v30, v31);
    v32 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
    v35 = (int)v32;
    *unlockList = v32;
    v36 = unlockList;
  }
  sub_1C2D434((CGThumbnailListItem_o *)v36, v35, v33, v34);
  return v28 > 0;
}


void PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  PhotoCampaignListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4C22903 & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_TypeInfo);
    byte_4C22903 = 1;
  }
  v2 = PhotoCampaignListViewManager_TypeInfo;
  if ( !PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo);
    v2 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_1C2D6EC(0, v1);
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
  const MethodInfo *v19; // x3
  _OWORD *v20; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *klass; // x22
  __int64 v26; // x1
  Il2CppClass *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4C22909 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22909 = 1;
  }
  memset(&v32, 0, sizeof(v32));
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      *(_OWORD *)&v32.fields._list = *(_OWORD *)&v31.fields.currentCryptoKey;
      v32.fields._current = (Il2CppObject *)v31.fields.fakeValue;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v32,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v9 & 1) == 0 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          return;
        }
        if ( v32.fields._current
          && (naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment,
              v32.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (PhotoCampaignListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = v32.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_1C2D6EC(v9, v10);
            monitor = current[7].monitor;
            if ( !monitor )
              sub_1C2D6EC(v9, v10);
            v14 = monitor[2];
            *(_OWORD *)&v31.fields.currentCryptoKey = monitor[1];
            *(_OWORD *)&v31.fields.fakeValue = v14;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v30 = v31;
            v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
            v16 = Entity[2];
            v17 = v15;
            *(Il2CppObject *)&v29.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v29.fields.fakeValue = v16;
            v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
            if ( v17 == v9 )
            {
              current[7].monitor = Entity;
              sub_1C2D434((CGThumbnailListItem_o *)&current[7].monitor, (int32_t)Entity, v18, v19);
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
          sub_1C2D6EC(v9, v10);
LABEL_27:
        v20 = current[7].monitor;
        if ( !v20 )
          sub_1C2D6EC(v9, v10);
        v21 = v20[2];
        *(_OWORD *)&v31.fields.currentCryptoKey = v20[1];
        *(_OWORD *)&v31.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v31;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v28, 0);
        if ( !SelfUserGame )
          sub_1C2D6EC(v22, v23);
        PhotoCampaignListViewItem__ModifyItem(
          (PhotoCampaignListViewItem_o *)current,
          v22 == SelfUserGame->fields.favoriteUserSvtId,
          v24);
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v27 = current[7].klass;
          if ( !v27 )
            sub_1C2D6EC(0, v26);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v27->_1.image + 49))(
            v27,
            current,
            *((_QWORD *)v27->_1.image + 50));
        }
      }
    }
LABEL_44:
    sub_1C2D6EC(Master_object, v5);
  }
}


void PhotoCampaignListViewManager__ModifyList(
        PhotoCampaignListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
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
  PhotoCampaignListViewItem_o *v17; // x22
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

  if ( (byte_4C22918 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22918 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_31;
  v8 = *(_DWORD *)(Master_object + 24);
  v9 = Master_object;
  if ( v8 >= 1 )
  {
    v10 = 0;
    v11 = isIconSizeChange;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1C2D6F4(Master_object, v6, v7);
      v12 = *(_QWORD *)(v9 + 8LL * (int)v10 + 32);
      if ( !v12 )
        break;
      v13 = *(_OWORD *)(v12 + 32);
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
      *(_OWORD *)&v28.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v27 = v28;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v27, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v15 = Master_object;
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= itemList->fields._size )
          goto LABEL_29;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   itemList,
                                   v16,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v17 = (PhotoCampaignListViewItem_o *)Master_object;
        naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)naturalAligment
          || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v19 = *(_QWORD *)(Master_object + 120);
        if ( v19 )
        {
          v20 = *(_OWORD *)(v19 + 32);
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
          *(_OWORD *)&v28.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v28;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v26, 0);
          if ( Master_object == v15 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v16;
        if ( !itemList )
          goto LABEL_31;
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
      PhotoCampaignListViewManager__ModifyLockItem(this, v17, v23, 1, v11, v24);
LABEL_29:
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_31:
    sub_1C2D6EC(Master_object, v6);
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
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-60h]

  v10 = this;
  if ( (byte_4C2291A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2291A = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_26;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v13 = this;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v23.fields.fakeValue = v12;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v22 = v23;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v22, 0);
      v15 = *(_OWORD *)&v13->fields.dropObjectList;
      v16 = (PhotoCampaignListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v21.fields.currentCryptoKey = v13->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v21.fields.fakeValue = v15;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                 &v21,
                                                 0);
      if ( v16 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v13;
        sub_1C2D434((CGThumbnailListItem_o *)&photoCampaignItem->fields.userSvtEntity, (int32_t)v13, v17, v18);
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
    PhotoCampaignListViewItem__ModifyChoiceItem(photoCampaignItem, v19);
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
    sub_1C2D6EC(this, photoCampaignItem);
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

  if ( (byte_4C2290E & 1) == 0 )
  {
    sub_1C2D490(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__);
    sub_1C2D490(&Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2290E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  const MethodInfo *v3; // x3
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C22913 & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    byte_4C22913 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C22911 & 1) == 0 )
  {
    sub_1C2D490(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PhotoCampaignListViewManager_EndSelectSortKind__);
    sub_1C2D490(&Method_PhotoCampaignListViewManager_OnClickSortKind__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22911 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C2D6DC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_1C2D6EC(v9, v10);
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
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  unsigned int Index; // w0

  if ( (byte_4C2290D & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoCampaignListViewManager_OnLongPushListView__);
    byte_4C2290D = 1;
  }
  if ( !this->fields.isCanNotLongPush )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( scrollView )
    {
      UnityEngine_Behaviour__set_enabled(scrollView, 0, 0);
      callbackFunc = this->fields.callbackFunc;
      this->fields.callbackFunc = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v7, v8);
      if ( !callbackFunc )
        return;
      v9 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C2D4A8(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
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
    sub_1C2D6EC(scrollView, obj);
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

  if ( (byte_4C2290C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2290C = 1;
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

  if ( (byte_4C2290B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__);
    sub_1C2D490(&Method_PhotoCampaignListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2290B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
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
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      PhotoCampaignListViewObject__Init_33596412((PhotoCampaignListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
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

  if ( (byte_4C22910 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17481/*"btn_filter_on"*/);
    sub_1C2D490(&StringLiteral_17480/*"btn_filter"*/);
    byte_4C22910 = 1;
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


void PhotoCampaignListViewManager__SetMode(
        PhotoCampaignListViewManager_o *this,
        int32_t mode,
        PhotoCampaignListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  PhotoCampaignListViewManager__SetMode_33595752(this, mode, v6);
}


void PhotoCampaignListViewManager__SetMode_33595752(
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
    sub_1C2D6EC(scrollView, v5);
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
  if ( (byte_4C2290A & 1) == 0 )
  {
    this = (PhotoCampaignListViewManager_o *)sub_1C2D490(&PhotoCampaignListViewObject_TypeInfo);
    byte_4C2290A = 1;
  }
  if ( !obj
    || (naturalAligment = PhotoCampaignListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  PhotoCampaignListViewObject__Init_33595628((PhotoCampaignListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4C22914 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17517/*"btn_sort_up"*/);
    sub_1C2D490(&StringLiteral_17615/*"btn_txt_up"*/);
    sub_1C2D490(&StringLiteral_17566/*"btn_txt_new"*/);
    sub_1C2D490(&StringLiteral_17556/*"btn_txt_down"*/);
    sub_1C2D490(&StringLiteral_17573/*"btn_txt_old"*/);
    sub_1C2D490(&StringLiteral_17514/*"btn_sort_down"*/);
    byte_4C22914 = 1;
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

  if ( (byte_4C22919 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22919 = 1;
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
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( v10.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PhotoCampaignListViewItem_c *)v10.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
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
  const MethodInfo *v13; // x3
  void *monitor; // x20
  Il2CppClass *klass; // x22
  int32_t v16; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Action_object__o *v18; // x22
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__24_1; // x20
  Il2CppObject *v21; // x21
  struct PhotoCampaignListViewManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4C22907 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ListViewItem__TypeInfo);
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__);
    sub_1C2D490(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__);
    sub_1C2D490(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_4C22907 = 1;
  }
  entity = 0;
  v7 = sub_1C2D6DC(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_DWORD *)(v7 + 20) = anotherSvtLimitCount;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  *(_QWORD *)(v7 + 24) = v11;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v11, v12, v13);
  if ( !Master_object )
    goto LABEL_22;
  v8 = (PhotoCampaignListViewManager___c_c *)DataMasterBase_object__object__long___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                               &entity,
                                               anotherUserSvtId,
                                               (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_22;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = klass;
    *(_QWORD *)&v26.fields.fakeValue = monitor;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v26, 0);
  }
  else
  {
    v16 = 0;
  }
  *(_DWORD *)(v7 + 16) = v16;
  itemList = this->fields.itemList;
  v18 = (System_Action_object__o *)sub_1C2D6DC(System_Action_ListViewItem__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__,
    0);
  if ( !itemList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)itemList,
    (System_Action_T__o *)v18,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_ListViewItem__ForEach__);
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
    v21 = (Il2CppObject *)v8->static_fields->__9;
    _9__24_1 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(
      _9__24_1,
      v21,
      Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__,
      0);
    static_fields = PhotoCampaignListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__24_1 = (struct System_Action_GameObject__o *)_9__24_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__24_1, (int32_t)_9__24_1, v23, v24);
  }
  if ( !objectList )
LABEL_22:
    sub_1C2D6EC(v8, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__24_1,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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

  if ( (byte_4C22900 & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4C22900 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PhotoCampaignListViewManager_o *)sub_1C2D9AC(v7);
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
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C22905 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22905 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(
                                 (PhotoCampaignListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C22904 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22904 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C22901 & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_4C22901 = 1;
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
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C2D9AC(v7);
  PhotoCampaignListViewManager__DeleteContinueData(v10);
}


void PhotoCampaignListViewManager_CallbackFunc___ctor(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6B558;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6B500;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *PhotoCampaignListViewManager_CallbackFunc__BeginInvoke(
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
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4C2291C & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&PhotoCampaignListViewManager_ResultKind_TypeInfo);
    byte_4C2291C = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             PhotoCampaignListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C2291D & 1) == 0 )
  {
    sub_1C2D490(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_4C2291D = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(PhotoCampaignListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoCampaignListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignListViewManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)PhotoCampaignListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C2291E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2291E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !x
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               x,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___)) == 0 )
    {
      sub_1C2D6EC(Component_object, v5);
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
  if ( (byte_4C2291F & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C2291F = 1;
  }
  if ( !v3 )
    goto LABEL_10;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PhotoCampaignListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    v9 = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C2D9AC(v3);
    return PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__1(v9, v10, v11);
  }
  klass = v3[1].klass;
  if ( !klass )
LABEL_10:
    sub_1C2D6EC(this, item);
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v12, 0) == v4->fields.focusUsrSvtId;
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
  if ( (byte_4C22920 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22920 = 1;
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
      this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                                       &v13,
                                                                       0);
      userGameEntity = v4->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_1C2D6EC(this, item);
  }
  v10 = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C2D9AC(v3);
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
  if ( (byte_4C22921 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_1C2D490(&PhotoCampaignListViewItem_TypeInfo);
    byte_4C22921 = 1;
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
                (const MethodInfo_338A340 *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__) )
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
                   (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
            goto LABEL_16;
          }
          goto LABEL_15;
        }
      }
    }
    sub_1C2D6EC(this, x);
  }
}