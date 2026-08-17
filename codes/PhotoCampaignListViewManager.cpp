void PhotoCampaignListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BBCA & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_11056/*"PhotoCampaign2026"*/);
    byte_596BBCA = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_11056/*"PhotoCampaign2026"*/, 3, 0, 0);
  PhotoCampaignListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PhotoCampaignListViewManager_TypeInfo->static_fields,
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
    *((_DWORD *)p_seed + 75) = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        PhotoCampaignListViewManager__ModifyList(this, 1, v14),
        PhotoCampaignListViewManager__SetMode_40532804(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_2213CDC(sort, method);
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
  __int64 v12; // x2
  Il2CppObject *Master_object; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x2
  Il2CppClass *klass; // x22
  void *monitor; // x23
  int v18; // w24
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v20; // x25
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  DataManager_c *v29; // x0
  __int64 v30; // x2
  Il2CppObject *v31; // x23
  __int64 v32; // x2
  ListViewSort_o *v33; // x27
  int v34; // w21
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  PhotoCampaignListViewManager_c *v42; // x0
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v44; // x1
  struct ListViewSort_o **p_sort; // x20
  __int64 v46; // x2
  UnityEngine_Object_o *infoDataLabel; // x20
  __int64 v48; // x2
  UILabel_o *v49; // x20
  System_String_o *v50; // x23
  Il2CppObject *v51; // x22
  Il2CppObject *v52; // x0
  __int64 v53; // x8
  int32_t v54; // w28
  __int64 v55; // x29
  __int128 v56; // q1
  __int64 v57; // x1
  __int64 v58; // x2
  int64_t v59; // x20
  __int64 v60; // x23
  __int64 v61; // x26
  __int64 v62; // x2
  char v63; // w23
  __int64 v64; // x22
  __int64 v65; // x23
  int32_t v66; // w0
  __int64 v67; // x2
  __int64 v68; // x22
  __int64 v69; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x23
  int32_t v71; // w0
  __int64 v72; // x21
  System_Int64_array *v73; // x22
  PhotoCampaignListViewItem_o *v74; // x26
  const MethodInfo *v75; // x6
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v85; // x8
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v87; // x20
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  UILabel_o *v94; // x21
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  const MethodInfo *v97; // x1
  __int64 v98; // x1
  __int64 v99; // x2
  UnityEngine_Object_o *scrollBar; // x20
  struct UIScrollBar_o *v101; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Predicate_object__o *v103; // x21
  Il2CppObject *v104; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v105; // x20
  System_Predicate_object__o *v106; // x21
  __int64 v107; // [xsp+10h] [xbp-100h]
  struct ListViewSort_o **v108; // [xsp+18h] [xbp-F8h]
  __int64 v109; // [xsp+20h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v110; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+60h] [xbp-B0h] BYREF
  int v115; // [xsp+84h] [xbp-8Ch] BYREF
  System_Int32_array *restrictionSvtList; // [xsp+88h] [xbp-88h] BYREF
  Il2CppObject *v117; // [xsp+90h] [xbp-80h] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  System_Int64_array *svtIdList; // [xsp+A0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_596BBB5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewManager_TypeInfo);
    sub_2213A60(&System_Predicate_ListViewItem__TypeInfo);
    sub_2213A60(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__);
    sub_2213A60(&Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__);
    sub_2213A60(&PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
    sub_2213A60(&StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/);
    sub_2213A60(&StringLiteral_12076/*"SERVANT_ALL_EMPTY"*/);
    sub_2213A60(&StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_2213A60(&StringLiteral_12522/*"SERVANT_TAKE"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596BBB5 = 1;
  }
  svtIdList = 0;
  entity = 0;
  v117 = 0;
  equipIdList = 0;
  restrictionSvtList = 0;
  v9 = sub_2213CCC(PhotoCampaignListViewManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_104;
  *(_QWORD *)(v9 + 16) = focusUsrSvtId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  if ( !Master_object )
    goto LABEL_104;
  v14 = OrganizationList;
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                     &entity,
                                                                     anotherUserSvtId,
                                                                     (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v110 = v14;
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_104;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v15);
    *(_QWORD *)&v121.fields.currentCryptoKey = klass;
    *(_QWORD *)&v121.fields.fakeValue = monitor;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v121, 0);
  }
  else
  {
    v18 = 0;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  *(_QWORD *)(v9 + 24) = SelfUserGame;
  v20 = v9 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)SelfUserGame, v21, v22, v23, v24, v25, v26);
  v29 = DataManager_TypeInfo;
  this->fields.isCanNotLongPush = 0;
  if ( !*(&v29->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v29, v27, v28);
  v31 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v30);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v30);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_104;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v31,
    &svtIdList,
    &equipIdList,
    (int64_t)OrganizationList[2].fields.list[1].monitor,
    0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantMaster__getOrganizationList(
                                                                     (UserServantMaster_o *)Master_object,
                                                                     0);
  if ( !*(_QWORD *)v20 )
    goto LABEL_104;
  v33 = (ListViewSort_o *)OrganizationList;
  v34 = *(_DWORD *)(*(_QWORD *)v20 + 160LL);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v32);
  LocalizationManager__Get((System_String_o *)StringLiteral_12522/*"SERVANT_TAKE"*/, 0);
  v42 = PhotoCampaignListViewManager_TypeInfo;
  v109 = StringLiteral_12116/*"SERVANT_EQUIP_EMPTY"*/;
  if ( !*(&PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo, v35, v36);
    v42 = PhotoCampaignListViewManager_TypeInfo;
  }
  p_servantSortInfo = &v42->static_fields->servantSortInfo;
  v44 = *p_servantSortInfo;
  this->fields.sort = *p_servantSortInfo;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v44, v36, v37, v38, v39, v40, v41);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.sort;
  if ( !OrganizationList
    || (ListViewSort__Load((ListViewSort_o *)OrganizationList, 0), v108 = &this->fields.sort, !*p_sort) )
  {
LABEL_104:
    sub_2213CDC(OrganizationList, v11);
  }
  (*p_sort)->fields.listViewKind = 0;
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v46);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                     infoDataLabel,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    v49 = this->fields.infoDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v48);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_13005/*"SUM_INFO"*/,
                                                                       0);
    if ( !v33 )
      goto LABEL_104;
    v50 = (System_String_o *)OrganizationList;
    LODWORD(v114.fields.currentCryptoKey) = *(_QWORD *)&v33->fields.FILTER_DEFAULT_VALUE;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v114);
    v115 = v34;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v115);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_75697880(v50, v51, v52, 0);
    if ( !v49 )
      goto LABEL_104;
    UILabel__set_text(v49, (System_String_o *)OrganizationList, 0);
  }
  else if ( !v33 )
  {
    goto LABEL_104;
  }
  v53 = *(_QWORD *)&v33->fields.FILTER_DEFAULT_VALUE;
  if ( (int)v53 >= 1 )
  {
    v107 = v9;
    v54 = 0;
    do
    {
      if ( v54 >= (unsigned int)v53 )
        sub_2213CE4(OrganizationList);
      v55 = *((_QWORD *)&v33->fields.manager + v54);
      if ( !v55 )
        goto LABEL_104;
      v56 = *(_OWORD *)(v55 + 32);
      *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)(v55 + 16);
      *(_OWORD *)&v114.fields.fakeValue = v56;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v48);
      v113 = v114;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v113, 0);
      v60 = *(_QWORD *)(v55 + 80);
      v61 = *(_QWORD *)(v55 + 88);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v57, v58);
      *(_QWORD *)&v122.fields.currentCryptoKey = v60;
      *(_QWORD *)&v122.fields.fakeValue = v61;
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                         v122,
                                                                         0);
      if ( (_DWORD)OrganizationList == v18 )
      {
        v63 = 1;
      }
      else
      {
        if ( anotherStaff )
        {
          v64 = *(_QWORD *)(v55 + 80);
          v65 = *(_QWORD *)(v55 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v62);
          *(_QWORD *)&v123.fields.currentCryptoKey = v64;
          *(_QWORD *)&v123.fields.fakeValue = v65;
          v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v123, 0);
          OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)StaffPhotoEntity__IsRestrictionSvt(
                                                                             anotherStaff,
                                                                             v66,
                                                                             0);
          v63 = (char)OrganizationList;
        }
        else
        {
          v63 = 0;
        }
        if ( (anotherSvtLimitCount & 0x80000000) == 0 && (v63 & 1) == 0 && v18 >= 1 )
        {
          OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantScriptMaster__getId(
                                                                             v18,
                                                                             anotherSvtLimitCount,
                                                                             0);
          if ( !v110 )
            goto LABEL_104;
          OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                             v110,
                                                                             &v117,
                                                                             (int)OrganizationList,
                                                                             (const MethodInfo_3F131DC *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)OrganizationList & 1) == 0 )
            goto LABEL_63;
          OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)v117;
          if ( !v117 )
            goto LABEL_104;
          OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantPhotoEntity__TryGetRestrictionSvtList(
                                                                             (ServantPhotoEntity_o *)v117,
                                                                             &restrictionSvtList,
                                                                             0);
          if ( ((unsigned __int8)OrganizationList & 1) != 0 )
          {
            v69 = *(_QWORD *)(v55 + 80);
            v68 = *(_QWORD *)(v55 + 88);
            v70 = (System_Collections_Generic_IEnumerable_TSource__o *)restrictionSvtList;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v67);
            *(_QWORD *)&v124.fields.currentCryptoKey = v69;
            *(_QWORD *)&v124.fields.fakeValue = v68;
            v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v124, 0);
            OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__Contains_int_(
                                                                               v70,
                                                                               v71,
                                                                               (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
            v63 = (char)OrganizationList;
          }
          else
          {
LABEL_63:
            v63 = 0;
          }
        }
      }
      if ( !*(_QWORD *)v20 )
        goto LABEL_104;
      v72 = *(_QWORD *)(*(_QWORD *)v20 + 120LL);
      v73 = svtIdList;
      v74 = (PhotoCampaignListViewItem_o *)sub_2213CCC(PhotoCampaignListViewItem_TypeInfo);
      PhotoCampaignListViewItem___ctor(v74, v54, (UserServantEntity_o *)v55, v73, v59 == v72, v63 & 1, v75);
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
      if ( !OrganizationList )
        goto LABEL_104;
      v82 = *(_QWORD *)&OrganizationList->fields._MasterKind_k__BackingField;
      v83 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(OrganizationList->fields._MasterName_k__BackingField);
      if ( !v82 )
        goto LABEL_104;
      MasterName_k__BackingField_low = SLODWORD(OrganizationList->fields._MasterName_k__BackingField);
      if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v82 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)OrganizationList,
          (Il2CppObject *)v74,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = v82 + 8 * MasterName_k__BackingField_low;
        LODWORD(OrganizationList->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
        *(_QWORD *)(v85 + 32) = v74;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v85 + 32), (int32_t)v74, v76, v77, v78, v79, v80, v81);
      }
      v53 = *(_QWORD *)&v33->fields.FILTER_DEFAULT_VALUE;
      ++v54;
    }
    while ( v54 < (int)v53 );
    v9 = v107;
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( v53 )
    v87 = (System_String_o *)StringLiteral_12319/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v87 = (System_String_o *)v109;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v48);
  OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                     emptyMessageLabel,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)OrganizationList & 1) != 0 )
  {
    v94 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v88);
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(v87, 0);
    if ( !v94 )
      goto LABEL_104;
    UILabel__set_text(v94, (System_String_o *)OrganizationList, 0);
  }
  if ( !*v108 )
    goto LABEL_104;
  iconScaleKind = (*v108)->fields.iconScaleKind;
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
      goto LABEL_90;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
LABEL_90:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  PhotoCampaignListViewManager__SetFilterButtonImage(this, v97);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98, v99);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.scrollBar;
    if ( OrganizationList )
    {
      OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)OrganizationList,
                                                                         0);
      if ( OrganizationList )
      {
        OrganizationList = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_activeSelf(
                                                                           (UnityEngine_GameObject_o *)OrganizationList,
                                                                           0);
        if ( ((unsigned __int8)OrganizationList & 1) == 0 )
          return;
        v101 = this->fields.scrollBar;
        if ( v101 )
        {
          if ( v101->fields.mSize > 0.98 )
            return;
          itemList = this->fields.itemList;
          v103 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            v103,
            (Il2CppObject *)v9,
            Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__0__,
            0);
          if ( itemList )
          {
            v104 = System_Collections_Generic_List_object___Find(
                     (System_Collections_Generic_List_object__o *)itemList,
                     (System_Predicate_T__o *)v103,
                     (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
            if ( v104 )
            {
LABEL_102:
              ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v104[1].klass), 0);
              return;
            }
            v105 = this->fields.itemList;
            v106 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v106,
              (Il2CppObject *)v9,
              Method_PhotoCampaignListViewManager___c__DisplayClass23_0__CreateList_b__1__,
              0);
            if ( v105 )
            {
              v104 = System_Collections_Generic_List_object___Find(
                       (System_Collections_Generic_List_object__o *)v105,
                       (System_Predicate_T__o *)v106,
                       (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
              if ( !v104 )
                return;
              goto LABEL_102;
            }
          }
        }
      }
    }
    goto LABEL_104;
  }
}


void PhotoCampaignListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PhotoCampaignListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596BBB1 & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_TypeInfo);
    byte_596BBB1 = 1;
  }
  v3 = PhotoCampaignListViewManager_TypeInfo;
  if ( !*(&PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo, v1, v2);
    v3 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void PhotoCampaignListViewManager__DestroyList(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_2213CDC(0, v3);
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

  if ( (byte_596BBBE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BBBE = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    PhotoCampaignListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void PhotoCampaignListViewManager__EndSelectSortKind(
        PhotoCampaignListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596BBC1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BBC1 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t PhotoCampaignListViewManager__GetAmountSortValue(
        PhotoCampaignListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PhotoCampaignListViewManager_o *v4; // x20
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
  if ( (byte_596BBC4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PhotoCampaignListViewManager_o *)sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBC4 = 1;
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
      this = (PhotoCampaignListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (PhotoCampaignListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 v8,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (PhotoCampaignListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
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


PhotoCampaignListViewItem_o *PhotoCampaignListViewManager__GetItem(
        PhotoCampaignListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PhotoCampaignListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596BBB7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBB7 = 1;
  }
  result = (PhotoCampaignListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (PhotoCampaignListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_2213CDC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool PhotoCampaignListViewManager__GetSwapChoiceList(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_596BBC6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBC6 = 1;
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
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
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


bool PhotoCampaignListViewManager__GetSwapLockList(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_596BBC5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBC5 = 1;
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
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
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


void PhotoCampaignListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PhotoCampaignListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_596BBB2 & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_TypeInfo);
    byte_596BBB2 = 1;
  }
  v3 = PhotoCampaignListViewManager_TypeInfo;
  if ( !*(&PhotoCampaignListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager_TypeInfo, v1, v2);
    v3 = PhotoCampaignListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo )
    sub_2213CDC(0, v1);
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void PhotoCampaignListViewManager__ModifyItem(
        PhotoCampaignListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameEntity_o *SelfUserGame; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x20
  int64_t v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x21
  _OWORD *monitor; // x8
  __int128 v17; // q0
  __int128 v18; // q1
  int v19; // w8
  int64_t v20; // x0
  Il2CppObject v21; // q1
  int64_t v22; // x23
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  _OWORD *v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  int64_t v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *klass; // x22
  __int64 v38; // x1
  Il2CppClass *v39; // x0
  __int64 v40; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+60h] [xbp-B0h] BYREF
  __int64 v45; // [xsp+80h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v46; // [xsp+88h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_596BBB8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBB8 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v47, 0, sizeof(v47));
  if ( itemList )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( usrSvtId < 1 )
    {
      Entity = 0;
    }
    else
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 Master_object,
                 usrSvtId,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v44,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v47.fields._current = (Il2CppObject *)v44.fields.fakeValue;
      *(_OWORD *)&v47.fields._list = *(_OWORD *)&v44.fields.currentCryptoKey;
      v45 = 0;
      v46 = &v47;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v47,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( (v11 & 1) == 0 )
        {
          v40 = v45;
          System_Collections_Generic_List_Enumerator_object___Dispose(
            v46,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          if ( v40 )
            sub_2213CD4(v40);
          return;
        }
        if ( v47.fields._current
          && (naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment,
              v47.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (PhotoCampaignListViewItem_c *)v47.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
            current = v47.fields._current;
          else
            current = 0;
          if ( Entity )
          {
LABEL_16:
            if ( !current )
              sub_2213CDC(v11, v12);
            monitor = current[7].monitor;
            if ( !monitor )
              sub_2213CDC(v11, v12);
            v17 = monitor[1];
            v18 = monitor[2];
            v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v44.fields.currentCryptoKey = v17;
            *(_OWORD *)&v44.fields.fakeValue = v18;
            if ( !v19 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
            v43 = v44;
            v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v43, 0);
            v21 = Entity[2];
            v22 = v20;
            *(Il2CppObject *)&v42.fields.currentCryptoKey = Entity[1];
            *(Il2CppObject *)&v42.fields.fakeValue = v21;
            v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v42, 0);
            if ( v22 == v11 )
            {
              current[7].monitor = Entity;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&current[7].monitor,
                (int32_t)Entity,
                v13,
                v23,
                v24,
                v25,
                v26,
                v27);
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
          sub_2213CDC(v11, v12);
LABEL_27:
        v28 = current[7].monitor;
        if ( !v28 )
          sub_2213CDC(v11, v12);
        v29 = v28[1];
        v30 = v28[2];
        v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v44.fields.currentCryptoKey = v29;
        *(_OWORD *)&v44.fields.fakeValue = v30;
        if ( !v31 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
        v41 = v44;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v41, 0);
        if ( !SelfUserGame )
          sub_2213CDC(v32, v33);
        PhotoCampaignListViewItem__ModifyItem(
          (PhotoCampaignListViewItem_o *)current,
          v32 == SelfUserGame->fields.favoriteUserSvtId,
          v34);
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
        {
          v39 = current[7].klass;
          if ( !v39 )
            sub_2213CDC(0, v38);
          (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v39->_1.image + 49))(
            v39,
            current,
            *((_QWORD *)v39->_1.image + 50));
        }
      }
    }
LABEL_44:
    sub_2213CDC(Master_object, v6);
  }
}


void PhotoCampaignListViewManager__ModifyList(
        PhotoCampaignListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int v10; // w8
  int64_t v11; // x21
  unsigned int v12; // w28
  __int64 v13; // x8
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // w8
  System_Collections_Generic_List_object__o *itemList; // x8
  int64_t v18; // x23
  int32_t v19; // w24
  PhotoCampaignListViewItem_o *v20; // x22
  __int64 naturalAligment; // x10
  __int64 v22; // x8
  __int128 v23; // q0
  __int128 v24; // q1
  int v25; // w8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v27; // q0
  __int128 v28; // q1
  int v29; // w8
  int64_t v30; // x0
  const MethodInfo *v31; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-80h]

  if ( (byte_596BBC7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBC7 = 1;
  }
  UserGameMaster__getSelfUserGame(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_31;
  Master_object = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_31;
  v10 = *(_DWORD *)(Master_object + 24);
  v11 = Master_object;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_2213CE4(Master_object);
      v13 = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
      if ( !v13 )
        break;
      v14 = *(_OWORD *)(v13 + 16);
      v15 = *(_OWORD *)(v13 + 32);
      v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v35.fields.currentCryptoKey = v14;
      *(_OWORD *)&v35.fields.fakeValue = v15;
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
      v34 = v35;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v34, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      v18 = Master_object;
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= itemList->fields._size )
          goto LABEL_29;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   itemList,
                                   v19,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Master_object )
          goto LABEL_31;
        v20 = (PhotoCampaignListViewItem_o *)Master_object;
        naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)Master_object + 304LL) < (unsigned int)naturalAligment
          || *(PhotoCampaignListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Master_object + 200LL) + 8 * naturalAligment - 8) != PhotoCampaignListViewItem_TypeInfo )
        {
          goto LABEL_31;
        }
        v22 = *(_QWORD *)(Master_object + 120);
        if ( v22 )
        {
          v23 = *(_OWORD *)(v22 + 16);
          v24 = *(_OWORD *)(v22 + 32);
          v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v35.fields.currentCryptoKey = v23;
          *(_OWORD *)&v35.fields.fakeValue = v24;
          if ( !v25 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
          v33 = v35;
          Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v33, 0);
          if ( Master_object == v18 )
            break;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        ++v19;
        if ( !itemList )
          goto LABEL_31;
      }
      userSvtEntity = v20->fields.userSvtEntity;
      if ( !userSvtEntity )
        break;
      v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      v28 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      v29 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v35.fields.currentCryptoKey = v27;
      *(_OWORD *)&v35.fields.fakeValue = v28;
      if ( !v29 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
      v32 = v35;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v32, 0);
      PhotoCampaignListViewManager__ModifyLockItem(this, v20, v30, 1, isIconSizeChange, v31);
LABEL_29:
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_31:
    sub_2213CDC(Master_object, v8);
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
  PhotoCampaignListViewManager_o *v12; // x23
  __int128 v13; // q1
  int64_t v14; // x0
  __int128 v15; // q0
  PhotoCampaignListViewManager_o *v16; // x25
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
  if ( (byte_596BBC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BBC9 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (PhotoCampaignListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_26;
    this = (PhotoCampaignListViewManager_o *)DataMasterBase_object__object__long___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               usrSvtId,
                                               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !photoCampaignItem )
        goto LABEL_26;
      userSvtEntity = photoCampaignItem->fields.userSvtEntity;
      if ( !userSvtEntity )
        goto LABEL_26;
      v12 = this;
      v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v13;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          photoCampaignItem,
          usrSvtId);
      v25 = v26;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v25, 0);
      v15 = *(_OWORD *)&v12->fields.dropObjectList;
      v16 = (PhotoCampaignListViewManager_o *)v14;
      *(UnityEngine_MonoBehaviour_Fields *)&v24.fields.currentCryptoKey = v12->fields.UnityEngine_MonoBehaviour_Fields;
      *(_OWORD *)&v24.fields.fakeValue = v15;
      this = (PhotoCampaignListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                 &v24,
                                                 0);
      if ( v16 == this )
      {
        photoCampaignItem->fields.userSvtEntity = (struct UserServantEntity_o *)v12;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&photoCampaignItem->fields.userSvtEntity,
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
    if ( !photoCampaignItem )
      goto LABEL_26;
  }
  else
  {
    if ( !photoCampaignItem )
      goto LABEL_26;
    PhotoCampaignListViewItem__ModifyLockItem(photoCampaignItem, (const MethodInfo *)photoCampaignItem);
    PhotoCampaignListViewItem__ModifyChoiceItem(photoCampaignItem, v22);
  }
  viewObject = (UnityEngine_Object_o *)photoCampaignItem->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, photoCampaignItem, usrSvtId);
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
    sub_2213CDC(this, photoCampaignItem);
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

  if ( (byte_596BBBD & 1) == 0 )
  {
    sub_2213A60(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PhotoCampaignListViewManager_EndSelectFilterKind__);
    sub_2213A60(&Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BBBD = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoCampaignListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectFilterKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct PhotoCampaignListViewManager_CallbackFunc_o *callbackFunc; // x20
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

  if ( (byte_596BBC2 & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    byte_596BBC2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoCampaignListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596BBC0 & 1) == 0 )
  {
    sub_2213A60(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PhotoCampaignListViewManager_EndSelectSortKind__);
    sub_2213A60(&Method_PhotoCampaignListViewManager_OnClickSortKind__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BBC0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_PhotoCampaignListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PhotoCampaignListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantSortSelectMenu_CallbackFunc_o *)sub_2213CCC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_PhotoCampaignListViewManager_EndSelectSortKind__,
      0);
    if ( !v7 )
      sub_2213CDC(v9, v10);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 Index; // x2

  if ( (byte_596BBBC & 1) == 0 )
  {
    sub_2213A60(&Method_PhotoCampaignListViewManager_OnLongPushListView__);
    byte_596BBBC = 1;
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
      v13 = Method_PhotoCampaignListViewManager_OnLongPushListView__;
      if ( (*((_BYTE *)Method_PhotoCampaignListViewManager_OnLongPushListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_2213A78(Method_PhotoCampaignListViewManager_OnLongPushListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      if ( obj )
      {
        Index = (unsigned int)ListViewObject__get_Index(obj, 0);
        ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          1,
          Index,
          callbackFunc->fields.method);
        return;
      }
    }
    sub_2213CDC(scrollView, obj);
  }
}


void PhotoCampaignListViewManager__OnMoveEnd(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x0

  if ( (byte_596BBBB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBBB = 1;
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
        v9 = this->fields.scrollView;
        if ( !v9 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v9->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v9,
          1,
          v9->klass->vtable._8_UpdateScrollbars.method);
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
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BBBA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__get_Count__);
    sub_2213A60(&Method_PhotoCampaignListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BBBA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)PhotoCampaignListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
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
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_PhotoCampaignListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      PhotoCampaignListViewObject__Init_40533452((PhotoCampaignListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_PhotoCampaignListViewObject__Dispose__);
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

  if ( (byte_596BBBF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18255/*"btn_filter_on"*/);
    sub_2213A60(&StringLiteral_18254/*"btn_filter"*/);
    byte_596BBBF = 1;
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


void PhotoCampaignListViewManager__SetMode(
        PhotoCampaignListViewManager_o *this,
        int32_t mode,
        PhotoCampaignListViewManager_CallbackFunc_o *callback,
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
  PhotoCampaignListViewManager__SetMode_40532804(this, mode, v10);
}


void PhotoCampaignListViewManager__SetMode_40532804(
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
    sub_2213CDC(scrollView, v5);
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
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596BBB9 & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewObject_TypeInfo);
    byte_596BBB9 = 1;
  }
  if ( obj
    && (naturalAligment = PhotoCampaignListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PhotoCampaignListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewObject_TypeInfo )
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
  PhotoCampaignListViewObject__Init_40532680((PhotoCampaignListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void PhotoCampaignListViewManager__SetSortButtonImage(PhotoCampaignListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_596BBC3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18395/*"btn_txt_up"*/);
    sub_2213A60(&StringLiteral_18344/*"btn_txt_new"*/);
    sub_2213A60(&StringLiteral_18334/*"btn_txt_down"*/);
    sub_2213A60(&StringLiteral_18352/*"btn_txt_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_596BBC3 = 1;
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


void PhotoCampaignListViewManager__UpdateDisplayState(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_596BBC8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBC8 = 1;
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
      naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
      if ( v12.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PhotoCampaignListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
      {
        current = (Il2CppObject *)sub_221405C(v12.fields._current, PhotoCampaignListViewItem_TypeInfo, v8, v9);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  DataManager_c *v20; // x0
  Il2CppObject *Master_object; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x2
  Il2CppClass *klass; // x20
  void *monitor; // x22
  int32_t v32; // w0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Action_object__o *v34; // x22
  __int64 v35; // x2
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  struct PhotoCampaignListViewManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__24_1; // x20
  Il2CppObject *v39; // x21
  struct PhotoCampaignListViewManager___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_596BBB6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ListViewItem__TypeInfo);
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantPhotoMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__);
    sub_2213A60(&Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__);
    sub_2213A60(&PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_2213A60(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_596BBB6 = 1;
  }
  entity = 0;
  v9 = sub_2213CCC(PhotoCampaignListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_22;
  *(_QWORD *)(v9 + 24) = anotherStaff;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)anotherStaff, v12, v13, v14, v15, v16, v17);
  v20 = DataManager_TypeInfo;
  *(_DWORD *)(v9 + 32) = anotherSvtLimitCount;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v18, v19);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPhotoMaster___);
  *(_QWORD *)(v9 + 40) = v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  if ( !Master_object )
    goto LABEL_22;
  v10 = (PhotoCampaignListViewManager___c_c *)DataMasterBase_object__object__long___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                anotherUserSvtId,
                                                (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_22;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v29);
    *(_QWORD *)&v48.fields.currentCryptoKey = klass;
    *(_QWORD *)&v48.fields.fakeValue = monitor;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
  }
  else
  {
    v32 = 0;
  }
  itemList = this->fields.itemList;
  *(_DWORD *)(v9 + 16) = v32;
  v34 = (System_Action_object__o *)sub_2213CCC(System_Action_ListViewItem__TypeInfo);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)v9,
    Method_PhotoCampaignListViewManager___c__DisplayClass24_0__UpdateItemCannotSelectSvt_b__0__,
    0);
  if ( !itemList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)itemList,
    (System_Action_T__o *)v34,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ListViewItem__ForEach__);
  v10 = PhotoCampaignListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&PhotoCampaignListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PhotoCampaignListViewManager___c_TypeInfo, v11, v35);
    v10 = PhotoCampaignListViewManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__24_1 = (System_Action_object__o *)static_fields->__9__24_1;
  if ( !_9__24_1 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v11, v35);
      static_fields = PhotoCampaignListViewManager___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__24_1 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(
      _9__24_1,
      v39,
      Method_PhotoCampaignListViewManager___c__UpdateItemCannotSelectSvt_b__24_1__,
      0);
    v40 = PhotoCampaignListViewManager___c_TypeInfo->static_fields;
    v40->__9__24_1 = (struct System_Action_GameObject__o *)_9__24_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->__9__24_1, (int32_t)_9__24_1, v41, v42, v43, v44, v45, v46);
  }
  if ( !objectList )
LABEL_22:
    sub_2213CDC(v10, v11);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__24_1,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void PhotoCampaignListViewManager__add_callbackFunc(
        PhotoCampaignListViewManager_o *this,
        PhotoCampaignListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PhotoCampaignListViewManager_o *v11; // x0
  PhotoCampaignListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BBAF & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_596BBAF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PhotoCampaignListViewManager_CallbackFunc_c *)v6->klass != PhotoCampaignListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PhotoCampaignListViewManager_o *)sub_221405C(v6, PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PhotoCampaignListViewManager__remove_callbackFunc(v11, v12, v13);
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *PhotoCampaignListViewManager__get_ClippingObjectList(
        PhotoCampaignListViewManager_o *this,
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
  ListViewItem_o *Item; // x0
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

  if ( (byte_596BBB4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBB4 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)PhotoCampaignListViewObject__GetItem(
                                 (PhotoCampaignListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__,
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
              v24 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
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
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v3;
}


System_Collections_Generic_List_PhotoCampaignListViewObject__o *PhotoCampaignListViewManager__get_ObjectList(
        PhotoCampaignListViewManager_o *this,
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

  if ( (byte_596BBB3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBB3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PhotoCampaignListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PhotoCampaignListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_PhotoCampaignListViewObject__Add__,
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
  return (System_Collections_Generic_List_PhotoCampaignListViewObject__o *)v3;
}


void PhotoCampaignListViewManager__remove_callbackFunc(
        PhotoCampaignListViewManager_o *this,
        PhotoCampaignListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596BBB0 & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_CallbackFunc_TypeInfo);
    byte_596BBB0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PhotoCampaignListViewManager_CallbackFunc_c *)v6->klass != PhotoCampaignListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, PhotoCampaignListViewManager_CallbackFunc_TypeInfo, v7, v8);
  PhotoCampaignListViewManager__DeleteContinueData(v11);
}


void PhotoCampaignListViewManager_CallbackFunc___ctor(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_20032F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20032A0;
}


System_IAsyncResult_o *PhotoCampaignListViewManager_CallbackFunc__BeginInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
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
  if ( (byte_596BBCB & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager_ResultKind_TypeInfo);
    byte_596BBCB = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PhotoCampaignListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void PhotoCampaignListViewManager_CallbackFunc__EndInvoke(
        PhotoCampaignListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BBCC & 1) == 0 )
  {
    sub_2213A60(&PhotoCampaignListViewManager___c_TypeInfo);
    byte_596BBCC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PhotoCampaignListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PhotoCampaignListViewManager___c_TypeInfo->static_fields->__9 = (struct PhotoCampaignListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PhotoCampaignListViewManager___c_TypeInfo->static_fields,
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

  if ( (byte_596BBCD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BBCD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !x
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               x,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___)) == 0 )
    {
      sub_2213CDC(Component_object, v5);
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
  __int64 v3; // x3
  ListViewItem_o *v4; // x20
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v5; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v4 = item;
  v5 = this;
  if ( (byte_596BBCE & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBCE = 1;
  }
  if ( !v4 )
LABEL_11:
    sub_2213CDC(this, item);
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PhotoCampaignListViewItem_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_221405C(
                                                                     v4,
                                                                     PhotoCampaignListViewItem_TypeInfo,
                                                                     method,
                                                                     v3);
    goto LABEL_11;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_11;
  byval_arg = klass->_1.byval_arg;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
  *(Il2CppType *)&v11.fields.fakeValue = byval_arg;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      PhotoCampaignListViewItem_TypeInfo,
      method);
  v10 = v11;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v10, 0) == v5->fields.focusUsrSvtId;
}


bool PhotoCampaignListViewManager___c__DisplayClass23_0___CreateList_b__1(
        PhotoCampaignListViewManager___c__DisplayClass23_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewItem_o *v4; // x20
  PhotoCampaignListViewManager___c__DisplayClass23_0_o *v5; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  struct UserGameEntity_o *userGameEntity; // x8
  bool result; // w0
  PhotoCampaignListViewManager___c__DisplayClass24_0_o *v11; // x0
  ListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v4 = item;
  v5 = this;
  if ( (byte_596BBCF & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBCF = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  item = (ListViewItem_o *)PhotoCampaignListViewItem_TypeInfo;
  naturalAligment = PhotoCampaignListViewItem_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (PhotoCampaignListViewItem_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == PhotoCampaignListViewItem_TypeInfo )
  {
    klass = v4[1].klass;
    if ( klass )
    {
      byval_arg = klass->_1.byval_arg;
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
      *(Il2CppType *)&v15.fields.fakeValue = byval_arg;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          PhotoCampaignListViewItem_TypeInfo,
          method);
      v14 = v15;
      this = (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                                       &v14,
                                                                       0);
      userGameEntity = v5->fields.userGameEntity;
      if ( userGameEntity )
        return this == (PhotoCampaignListViewManager___c__DisplayClass23_0_o *)userGameEntity->fields.favoriteUserSvtId;
    }
LABEL_11:
    sub_2213CDC(this, item);
  }
  v11 = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_221405C(
                                                                  v4,
                                                                  PhotoCampaignListViewItem_TypeInfo,
                                                                  method,
                                                                  v3);
  PhotoCampaignListViewManager___c__DisplayClass24_0___UpdateItemCannotSelectSvt_b__0(v11, v12, v13);
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
  if ( (byte_596BBD0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    this = (PhotoCampaignListViewManager___c__DisplayClass24_0_o *)sub_2213A60(&PhotoCampaignListViewItem_TypeInfo);
    byte_596BBD0 = 1;
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
        BYTE5(x[2].monitor) = v8;
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
                (const MethodInfo_3F131DC *)Method_DataMasterBase_ServantPhotoMaster__ServantPhotoEntity__long__TryGetEntity__) )
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
                   (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
            goto LABEL_19;
          }
          goto LABEL_18;
        }
      }
    }
    sub_2213CDC(this, x);
  }
}