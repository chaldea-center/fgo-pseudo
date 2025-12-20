void ServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ListViewSort_o *v8; // x19
  struct ServantListViewManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ListViewSort_o *v16; // x19
  struct ServantListViewManager_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2870B & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&ServantListViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_12773/*"Servant1"*/);
    sub_1C94098(&StringLiteral_12775/*"Servant4"*/);
    sub_1C94098(&StringLiteral_12774/*"Servant2"*/);
    byte_4D2870B = 1;
  }
  v1 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v1, (System_String_o *)StringLiteral_12773/*"Servant1"*/, 3, 0, 0);
  ServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v8, (System_String_o *)StringLiteral_12774/*"Servant2"*/, 3, 0, 0);
  static_fields = ServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v8;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->servantEquipSortInfo,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v16, (System_String_o *)StringLiteral_12775/*"Servant4"*/, 2, 0, 0);
  v17 = ServantListViewManager_TypeInfo->static_fields;
  v17->commandCodeSortInfo = v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v17->commandCodeSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
}


void ServantListViewManager___ctor(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantListViewManager__ChangeIconScale(ServantListViewManager_o *this, const MethodInfo *method)
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
    *((_DWORD *)p_seed + 81) = v11;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        ServantListViewManager__ModifyList(this, 1, v14),
        ServantListViewManager__SetMode_35575496(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C942F0(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void ServantListViewManager__CreateList(
        ServantListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v10; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  DataManager_o *v17; // x21
  int32_t CommandCodeFrameMax; // w20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_String_o *v25; // x23
  ServantListViewManager_c *v26; // x8
  __int64 v27; // x26
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v29; // x1
  int v30; // w8
  DataManager_o *v31; // x22
  BalanceConfig_c *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  ServantListViewManager_c *v39; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  ServantListViewManager_c *v47; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  Il2CppObject *v53; // x22
  __int64 v54; // x0
  struct System_Threading_CancellationTokenSource_o *v55; // x24
  __int64 v56; // x22
  __int64 v57; // x28
  UserServantEntity_o *v58; // x24
  System_Int64_array *v59; // x25
  System_Int64_array *v60; // x26
  ServantListViewItem_o *v61; // x23
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  intptr_t v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  intptr_t v71; // x8
  Il2CppObject *v72; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  __int64 v74; // x21
  UserCommandCodeEntity_o *v75; // x24
  System_Int64_array *v76; // x25
  ServantListViewItem_o *v77; // x23
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v85; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v87; // x8
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v89; // x21
  System_String_o *v90; // x22
  Il2CppObject *v91; // x23
  Il2CppObject *v92; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v94; // x21
  const MethodInfo *v95; // x2
  UILabel_o *v96; // x22
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x1
  struct System_Threading_CancellationTokenSource_o *v99; // [xsp+0h] [xbp-A0h]
  __int64 v100; // [xsp+10h] [xbp-90h]
  int32_t v102; // [xsp+20h] [xbp-80h] BYREF
  int v103; // [xsp+24h] [xbp-7Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+28h] [xbp-78h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D286F4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    sub_1C94098(&ServantListViewManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_11655/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C94098(&StringLiteral_3652/*"COMMAND_CODE_EMPTY"*/);
    sub_1C94098(&StringLiteral_11615/*"SERVANT_ALL_EMPTY"*/);
    sub_1C94098(&StringLiteral_11681/*"SERVANT_EQUIP_TAKE"*/);
    sub_1C94098(&StringLiteral_3671/*"COMMAND_CODE_TAKE"*/);
    sub_1C94098(&StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C94098(&StringLiteral_12054/*"SERVANT_TAKE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_12533/*"SUM_INFO"*/);
    byte_4D286F4 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  userCommandCodeIdList = 0;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v10 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  switch ( kind )
  {
    case 3:
      if ( !v10 )
        goto LABEL_113;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v10, 0);
      if ( !SelfUserGame )
        goto LABEL_113;
      v31 = Instance;
      if ( !byte_4D269E5 )
      {
        sub_1C94098(&BalanceConfig_TypeInfo);
        byte_4D269E5 = 1;
      }
      v32 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v32 = BalanceConfig_TypeInfo;
      }
      CommandCodeFrameMax = v32->static_fields->CommandCodeFrameMax;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3671/*"COMMAND_CODE_TAKE"*/, 0);
      v39 = ServantListViewManager_TypeInfo;
      v27 = StringLiteral_3652/*"COMMAND_CODE_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v39 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v39->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.sort,
        (int32_t)commandCodeSortInfo,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v17 = 0;
      v30 = 3;
      goto LABEL_36;
    case 1:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
      if ( !SelfUserGame )
        goto LABEL_113;
      v17 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtEquipKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11681/*"SERVANT_EQUIP_TAKE"*/, 0);
      v47 = ServantListViewManager_TypeInfo;
      v27 = StringLiteral_11655/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v47 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v47->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.sort,
        (int32_t)servantEquipSortInfo,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v31 = 0;
      v30 = 1;
      goto LABEL_36;
    case 0:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
      if ( !SelfUserGame )
        goto LABEL_113;
      v17 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_TAKE"*/, 0);
      v26 = ServantListViewManager_TypeInfo;
      v27 = StringLiteral_11655/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v26 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v26->static_fields->servantSortInfo;
      v29 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v29, v19, v20, v21, v22, v23, v24);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v30 = 0;
      v31 = 0;
LABEL_36:
      LODWORD(Instance->fields.writeMasterDataThread) = v30;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      goto LABEL_38;
  }
  CommandCodeFrameMax = 0;
  v31 = 0;
  v25 = (System_String_o *)StringLiteral_1/*""*/;
  v27 = StringLiteral_11615/*"SERVANT_ALL_EMPTY"*/;
  v17 = 0;
LABEL_38:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_113;
  iconScaleKind = sort->fields.iconScaleKind;
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
      goto LABEL_46;
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
  }
  this->fields.seed = normalSizeSeed;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v11, v12, v13, v14, v15, v16);
LABEL_46:
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)Instance, v25, 0);
  }
  if ( !v17 )
  {
    if ( !v31 )
    {
      LODWORD(v55) = 0;
      goto LABEL_95;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    v72 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v100 = v27;
    if ( !v72 )
      goto LABEL_113;
    UserServantCommandCodeMaster__getAttachList(
      (UserServantCommandCodeMaster_o *)v72,
      &userCommandCodeIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0);
    m_CancellationTokenSource = v31->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      if ( (unsigned int)v31->fields.m_CancellationTokenSource )
      {
        v74 = 0;
        do
        {
          v75 = (UserCommandCodeEntity_o *)*((_QWORD *)&v31->fields._DispLog + v74);
          v76 = userCommandCodeIdList;
          v77 = (ServantListViewItem_o *)sub_1C942E4(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor_35556200(v77, v74, v75, v76, 0);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_113;
          m_CachedPtr = Instance->fields.m_CachedPtr;
          v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_113;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v77,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v87 + 32) = v77;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v87 + 32), (int32_t)v77, v78, v79, v80, v81, v82, v83);
          }
          if ( (unsigned int)m_CancellationTokenSource - 1LL == v74 )
            goto LABEL_92;
        }
        while ( ++v74 < (unsigned __int64)LODWORD(v31->fields.m_CancellationTokenSource) );
      }
LABEL_91:
      sub_1C942F8(v54);
    }
LABEL_92:
    LODWORD(v55) = (_DWORD)m_CancellationTokenSource;
LABEL_93:
    v27 = v100;
    goto LABEL_95;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v53 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v100 = v27;
  if ( !v53 )
    goto LABEL_113;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v53,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    0);
  v55 = v17->fields.m_CancellationTokenSource;
  if ( (int)v55 < 1 )
    goto LABEL_93;
  v99 = v17->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v99 )
    goto LABEL_91;
  v56 = 0;
  v57 = (unsigned int)v17->fields.m_CancellationTokenSource - 1LL;
  while ( 1 )
  {
    v58 = (UserServantEntity_o *)*((_QWORD *)&v17->fields._DispLog + v56);
    v60 = equipIdList;
    v59 = svtIdList;
    v61 = (ServantListViewItem_o *)sub_1C942E4(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor(v61, v56, v58, v59, v60, setupInfo, 0);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_113;
    v68 = Instance->fields.m_CachedPtr;
    v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v68 )
      goto LABEL_113;
    v70 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v61,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = v68 + 8 * v70;
      LODWORD(Instance->fields.m_CancellationTokenSource) = v70 + 1;
      *(_QWORD *)(v71 + 32) = v61;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v71 + 32), (int32_t)v61, v62, v63, v64, v65, v66, v67);
    }
    if ( v57 == v56 )
      break;
    if ( ++v56 >= (unsigned __int64)LODWORD(v17->fields.m_CancellationTokenSource) )
      goto LABEL_91;
  }
  v27 = v100;
  LODWORD(v55) = (_DWORD)v99;
LABEL_95:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
  {
    v89 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12533/*"SUM_INFO"*/, 0);
    v103 = (int)v55;
    v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
    v102 = CommandCodeFrameMax;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
    Instance = (DataManager_o *)System_String__Format_64459052(v90, v91, v92, 0);
    if ( !v89 )
      goto LABEL_113;
    UILabel__set_text(v89, (System_String_o *)Instance, 0);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v55 >= 1 )
    v94 = (System_String_o *)StringLiteral_11855/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v94 = (System_String_o *)v27;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0) )
  {
    v96 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get(v94, 0);
    if ( v96 )
    {
      UILabel__set_text(v96, (System_String_o *)Instance, 0);
      goto LABEL_112;
    }
LABEL_113:
    sub_1C942F0(Instance, v8);
  }
LABEL_112:
  ServantListViewManager__SetBonusFilterInfo(this, setupInfo, v95);
  ServantListViewManager__SetBonusFilterButton(this, v97);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ServantListViewManager__SetFilterButtonImage(this, v98);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D286F0 & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_TypeInfo);
    byte_4D286F0 = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0) )
  {
    sub_1C942F0(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0);
}


void ServantListViewManager__DestroyList(ServantListViewManager_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *v2; // x0
  const MethodInfo *v3; // x1

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ServantListViewManager__SaveSortInfo(v2, v3);
}


void ServantListViewManager__EndCloseSelectFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void ServantListViewManager__EndCloseSelectSortKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void ServantListViewManager__EndSelectFilterKind(
        ServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D28700 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28700 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ServantListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C942F0(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void ServantListViewManager__EndSelectSortKind(ServantListViewManager_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D28702 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantListViewManager_EndCloseSelectSortKind__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28702 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C942F0(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4D28707 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    byte_4D28707 = 1;
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
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( ServantListViewItem__get_SvtId((ServantListViewItem_o *)itemList, 0) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C942F0(itemList, *(_QWORD *)&svtId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantListViewManager__GetCommandCodeAmountSortValue(
        ServantListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4D28708 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    byte_4D28708 = 1;
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
                                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( ServantListViewItem__get_CommandCodeId((ServantListViewItem_o *)itemList, 0) == commandCodeId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C942F0(itemList, *(_QWORD *)&commandCodeId);
  }
  return 0;
}


ServantListViewItem_o *ServantListViewManager__GetItem(
        ServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D286F7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    byte_4D286F7 = 1;
  }
  result = (ServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ServantListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
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


System_String_o *ServantListViewManager__GetScaleButtonSpriteName(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C942F0(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool ServantListViewManager__GetSwapChoiceList(
        ServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  ServantListViewItem_c *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x9
  __int64 v20; // x8
  __int128 v21; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v22; // x0
  __int64 v23; // x8
  __int128 v24; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int64 v29; // x8
  System_Collections_Generic_List_long__o *v30; // x0
  __int128 v31; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v32; // x0
  __int128 v33; // q0
  struct System_Int64_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  int v37; // w21
  System_Int64_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Int64_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  System_Int64_array **v53; // x0
  bool result; // w0
  ServantListViewManager_o *v55; // x0
  ListViewObject_o *v56; // x1
  ListViewItem_o *v57; // x2
  const MethodInfo *v58; // x3
  _OWORD v59[2]; // [xsp+10h] [xbp-100h] BYREF
  _OWORD v60[2]; // [xsp+30h] [xbp-E0h] BYREF
  _OWORD v61[2]; // [xsp+50h] [xbp-C0h] BYREF
  _OWORD v62[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v63; // [xsp+90h] [xbp-80h]
  __int128 v64; // [xsp+A0h] [xbp-70h]

  if ( (byte_4D286F9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    byte_4D286F9 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v9 = ServantListViewItem_TypeInfo;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
      {
        v55 = (ServantListViewManager_o *)sub_1C9468C(itemList);
        ServantListViewManager__SetObjectItem(v55, v56, v57, v58);
        return result;
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 289) )
      {
        if ( *(_BYTE *)(itemList + 247) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          v63 = *(_OWORD *)(v20 + 16);
          v64 = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v62;
          v62[0] = v63;
          v62[1] = v64;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(v22, 0);
          if ( !v8 )
            goto LABEL_48;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v8->fields._size;
          v9 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v29 = v26[4];
            v30 = v8;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v30,
              (int64_t)v9,
              *(const MethodInfo_3852E68 **)(*(_QWORD *)(v29 + 192) + 112LL));
            goto LABEL_39;
          }
          v28 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          goto LABEL_36;
        }
        v31 = *(_OWORD *)(v20 + 32);
        v63 = *(_OWORD *)(v20 + 16);
        v64 = v31;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v61;
        v61[0] = v63;
        v61[1] = v64;
      }
      else
      {
        v23 = *(_QWORD *)(itemList + 152);
        if ( !v23 || !*(_BYTE *)(itemList + 289) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 247) )
        {
          v24 = *(_OWORD *)(v23 + 32);
          v63 = *(_OWORD *)(v23 + 16);
          v64 = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v60;
          v60[0] = v63;
          v60[1] = v64;
          goto LABEL_21;
        }
        v33 = *(_OWORD *)(v23 + 32);
        v63 = *(_OWORD *)(v23 + 16);
        v64 = v33;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v59;
        v59[0] = v63;
        v59[1] = v64;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(v32, 0);
      if ( !v7 )
        goto LABEL_48;
      v34 = v7->fields._items;
      v35 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v34 )
        goto LABEL_48;
      v36 = v7->fields._size;
      v9 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
      {
        v29 = v35[4];
        v30 = v7;
        goto LABEL_38;
      }
      v28 = &v34->obj.klass + v36;
      v7->fields._size = v36 + 1;
LABEL_36:
      v28[4] = (Il2CppClass *)v9;
LABEL_39:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v7 || !v8 )
LABEL_48:
    sub_1C942F0(itemList, v9);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *choiceList = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)choiceList, 0, v10, v11, v12, v13, v14, v15);
    v53 = unchoiceList;
    v52 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v38;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)choiceList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    v52 = (int)v45;
    *unchoiceList = v45;
    v53 = unchoiceList;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v53, v52, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


bool ServantListViewManager__GetSwapLockList(
        ServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x23
  System_Collections_Generic_List_long__o *v8; // x22
  ServantListViewItem_c *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int64_t itemList; // x0
  int v17; // w25
  int32_t v18; // w24
  __int64 naturalAligment; // x9
  __int64 v20; // x8
  __int128 v21; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v22; // x0
  __int64 v23; // x8
  __int128 v24; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int64 v29; // x8
  System_Collections_Generic_List_long__o *v30; // x0
  __int128 v31; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v32; // x0
  __int128 v33; // q0
  struct System_Int64_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  int v37; // w21
  System_Int64_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Int64_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  System_Int64_array **v53; // x0
  ServantListViewManager_o *v55; // x0
  System_Int64_array **v56; // x1
  System_Int64_array **v57; // x2
  const MethodInfo *v58; // x3
  _OWORD v59[2]; // [xsp+10h] [xbp-100h] BYREF
  _OWORD v60[2]; // [xsp+30h] [xbp-E0h] BYREF
  _OWORD v61[2]; // [xsp+50h] [xbp-C0h] BYREF
  _OWORD v62[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v63; // [xsp+90h] [xbp-80h]
  __int128 v64; // [xsp+A0h] [xbp-70h]

  if ( (byte_4D286F8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    byte_4D286F8 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v17 = *(_DWORD *)(itemList + 24);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v18,
                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v9 = ServantListViewItem_TypeInfo;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
      {
        v55 = (ServantListViewManager_o *)sub_1C9468C(itemList);
        return ServantListViewManager__GetSwapChoiceList(v55, v56, v57, v58);
      }
      v20 = *(_QWORD *)(itemList + 120);
      if ( v20 && *(_BYTE *)(itemList + 288) )
      {
        if ( *(_BYTE *)(itemList + 246) )
        {
          v21 = *(_OWORD *)(v20 + 32);
          v63 = *(_OWORD *)(v20 + 16);
          v64 = v21;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v62;
          v62[0] = v63;
          v62[1] = v64;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(v22, 0);
          if ( !v8 )
            goto LABEL_48;
          items = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v8->fields._size;
          v9 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v29 = v26[4];
            v30 = v8;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v30,
              (int64_t)v9,
              *(const MethodInfo_3852E68 **)(*(_QWORD *)(v29 + 192) + 112LL));
            goto LABEL_39;
          }
          v28 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          goto LABEL_36;
        }
        v31 = *(_OWORD *)(v20 + 32);
        v63 = *(_OWORD *)(v20 + 16);
        v64 = v31;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v61;
        v61[0] = v63;
        v61[1] = v64;
      }
      else
      {
        v23 = *(_QWORD *)(itemList + 152);
        if ( !v23 || !*(_BYTE *)(itemList + 288) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 246) )
        {
          v24 = *(_OWORD *)(v23 + 32);
          v63 = *(_OWORD *)(v23 + 16);
          v64 = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v60;
          v60[0] = v63;
          v60[1] = v64;
          goto LABEL_21;
        }
        v33 = *(_OWORD *)(v23 + 32);
        v63 = *(_OWORD *)(v23 + 16);
        v64 = v33;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v59;
        v59[0] = v63;
        v59[1] = v64;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(v32, 0);
      if ( !v7 )
        goto LABEL_48;
      v34 = v7->fields._items;
      v35 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v34 )
        goto LABEL_48;
      v36 = v7->fields._size;
      v9 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
      {
        v29 = v35[4];
        v30 = v7;
        goto LABEL_38;
      }
      v28 = &v34->obj.klass + v36;
      v7->fields._size = v36 + 1;
LABEL_36:
      v28[4] = (Il2CppClass *)v9;
LABEL_39:
      if ( v17 == ++v18 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v7 || !v8 )
LABEL_48:
    sub_1C942F0(itemList, v9);
  v37 = v8->fields._size + v7->fields._size;
  if ( v37 < 1 )
  {
    *lockList = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)lockList, 0, v10, v11, v12, v13, v14, v15);
    v53 = unlockList;
    v52 = 0;
    *unlockList = 0;
  }
  else
  {
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v38;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)lockList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
    v52 = (int)v45;
    *unlockList = v45;
    v53 = unlockList;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v53, v52, v46, v47, v48, v49, v50, v51);
  return v37 > 0;
}


void ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4D286F1 & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_TypeInfo);
    byte_4D286F1 = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0) )
  {
    sub_1C942F0(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  Il2CppType byval_arg; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-70h]

  if ( (byte_4D286FE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    byte_4D286FE = 1;
  }
  if ( userSvtId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v7 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v7,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v8 = itemList;
        naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
        {
          break;
        }
        klass = itemList[3].klass;
        if ( klass )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v12 = v13;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v12, 0) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v8->fields._items), 0);
        }
        if ( size == ++v7 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      }
      while ( itemList );
LABEL_17:
      sub_1C942F0(itemList, userSvtId);
    }
  }
}


void ServantListViewManager__ModifyList(
        ServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v7; // x22
  Il2CppObject *v8; // x23
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v11; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v14; // w27
  Il2CppClass **v15; // x25
  Il2CppClass *v16; // x8
  UserServantEntity_o **v17; // x25
  Il2CppClass *v18; // t1
  Il2CppType byval_arg; // q0
  int64_t v20; // x21
  int32_t v21; // w24
  ServantListViewItem_o *v22; // x23
  __int64 naturalAligment; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  unsigned int v26; // w28
  int64_t v27; // x21
  __int64 v28; // x8
  __int64 *v29; // x21
  __int64 v30; // t1
  __int128 v31; // q0
  int64_t v32; // x0
  int64_t v33; // x22
  int32_t v34; // w24
  int64_t v35; // x23
  __int64 v36; // x10
  __int64 v37; // x8
  __int128 v38; // q0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x1
  int32_t v46; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v48; // x21
  __int64 v49; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v51; // [xsp+8h] [xbp-128h]
  il2cpp_array_size_t max_length; // [xsp+18h] [xbp-118h]
  int64_t v54; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C0h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4D286F5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D286F5 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_90;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v8,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v7 )
        goto LABEL_90;
      Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v7, 0);
      break;
    case 1:
      if ( !MasterData_object )
        goto LABEL_90;
      ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
      goto LABEL_22;
    case 0:
      if ( !MasterData_object )
        goto LABEL_90;
      ServantEquipList = UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
LABEL_22:
      v11 = ServantEquipList;
      Instance = 0;
      goto LABEL_25;
    default:
      Instance = 0;
      break;
  }
  v11 = 0;
LABEL_25:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_90;
  size = itemList->fields._size;
  if ( v11 )
  {
    max_length = v11->max_length;
    if ( (int)max_length >= 1 )
    {
      if ( (_DWORD)max_length )
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = &v11->obj.klass + (int)v14;
          v18 = v15[4];
          v17 = (UserServantEntity_o **)(v15 + 4);
          v16 = v18;
          if ( !v18 )
            goto LABEL_90;
          byval_arg = v16->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v58, 0);
          if ( size >= 1 )
          {
            v20 = Instance;
            v21 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v21,
                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v22 = (ServantListViewItem_o *)Instance;
              naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
                || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
              {
                goto LABEL_90;
              }
              v24 = *(_QWORD *)(Instance + 120);
              if ( v24 )
              {
                v25 = *(_OWORD *)(v24 + 32);
                *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
                *(_OWORD *)&v59.fields.fakeValue = v25;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v57 = v59;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v57, 0);
                if ( Instance == v20 )
                  break;
              }
              if ( size == ++v21 )
                goto LABEL_48;
            }
            if ( v14 >= LODWORD(v11->max_length) )
              goto LABEL_75;
            ServantListViewItem__ModifyUserServantEntity(v22, *v17, 0);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v22, 0);
              ServantListViewItem__ModifyChoiceItem(v22, 0);
            }
          }
LABEL_48:
          if ( ++v14 == (_DWORD)max_length )
            goto LABEL_76;
          if ( v14 >= LODWORD(v11->max_length) )
            goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
  }
  else if ( Instance )
  {
    v51 = *(_QWORD *)(Instance + 24);
    if ( (int)v51 >= 1 )
    {
      if ( (_DWORD)v51 )
      {
        v26 = 0;
        v54 = Instance;
        while ( 1 )
        {
          v27 = Instance + 8LL * (int)v26;
          v30 = *(_QWORD *)(v27 + 32);
          v29 = (__int64 *)(v27 + 32);
          v28 = v30;
          if ( !v30 )
            break;
          v31 = *(_OWORD *)(v28 + 32);
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
          *(_OWORD *)&v59.fields.fakeValue = v31;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v56 = v59;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v56, 0);
          if ( size >= 1 )
          {
            v33 = v32;
            v34 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v34,
                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v35 = Instance;
              v36 = ServantListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v36
                || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v36 - 8) != ServantListViewItem_TypeInfo )
              {
                goto LABEL_90;
              }
              v37 = *(_QWORD *)(Instance + 152);
              if ( v37 )
              {
                v38 = *(_OWORD *)(v37 + 32);
                *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
                *(_OWORD *)&v59.fields.fakeValue = v38;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v55 = v59;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v55, 0);
                if ( Instance == v33 )
                  break;
              }
              if ( size == ++v34 )
                goto LABEL_73;
            }
            if ( v26 >= *(_DWORD *)(v54 + 24) )
              goto LABEL_75;
            v45 = *v29;
            *(_QWORD *)(v35 + 152) = *v29;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 152), v45, v39, v40, v41, v42, v43, v44);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v35, 0);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v35, 0);
            }
          }
LABEL_73:
          Instance = v54;
          if ( ++v26 == (_DWORD)v51 )
            goto LABEL_76;
          if ( v26 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_75;
        }
LABEL_90:
        sub_1C942F0(Instance, v5);
      }
LABEL_75:
      sub_1C942F8(Instance);
    }
  }
LABEL_76:
  if ( size >= 1 && isIconSizeChange )
  {
    v46 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_90;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v46,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v48 = (ListViewItem_o *)Item;
        v49 = ServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v49
          && (ServantListViewItem_c *)Item->klass->_2.typeHierarchy[v49 - 1] == ServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (int64_t)v48->fields.viewObject;
            if ( !Instance )
              goto LABEL_90;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v48, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v46 )
        return;
    }
  }
}


void ServantListViewManager__OnClickBonusFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4D28705 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantListViewManager_OnClickBonusFilterKind__);
    byte_4D28705 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(0, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0, 0);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
}


void ServantListViewManager__OnClickFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t kind; // w23
  Il2CppObject *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  ListViewSort_o *v12; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22

  if ( (byte_4D286FF & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ServantListViewManager_EndSelectFilterKind__);
    sub_1C94098(&Method_ServantListViewManager_OnClickFilterKind__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D286FF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C942E4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0);
      if ( Instance )
      {
        if ( kind == 1 )
          v11 = 5;
        else
          v11 = 6;
        CommonUI__OpenServantFilterSelectMenu_31590308(
          (CommonUI_o *)Instance,
          v11,
          sort,
          (ListViewManager_o *)this,
          v8,
          -1,
          0);
        return;
      }
    }
    else
    {
      v12 = this->fields.sort;
      v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C942E4(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu((CommonUI_o *)Instance, 0, v12, v13, -1, 0);
        return;
      }
    }
    sub_1C942F0(v9, v10);
  }
}


void ServantListViewManager__OnClickListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void ServantListViewManager__OnClickSelectListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C942F0(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      Index,
      callbackFunc->fields.method);
  }
}


void ServantListViewManager__OnClickSortAscendingOrder(ServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D28703 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantListViewManager_OnClickSortAscendingOrder__);
    byte_4D28703 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C942F0(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void ServantListViewManager__OnClickSortKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t kind; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x21
  ServantSortSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int v12; // w8
  int32_t v13; // w1

  if ( (byte_4D28701 & 1) == 0 )
  {
    sub_1C94098(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ServantListViewManager_EndSelectSortKind__);
    sub_1C94098(&Method_ServantListViewManager_OnClickSortKind__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28701 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C942E4(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_1C942F0(v10, v11);
    if ( kind == 3 )
      v12 = 6;
    else
      v12 = 4;
    if ( kind )
      v13 = v12;
    else
      v13 = 3;
    CommonUI__OpenServantSortSelectMenu(v8, v13, sort, 0, v9, 0);
  }
}


void ServantListViewManager__OnLongPushListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C942F0(v10, v11);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void ServantListViewManager__OnMoveEnd(ServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D286FD & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D286FD = 1;
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
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_14;
      v14 = this->fields.scrollView;
      if ( v14 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
        v14 = this->fields.scrollView;
        if ( v14 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v14->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                  v14,
                  v14->klass->vtable._6_get_shouldMoveVertically.method)
              & 1) == 0 )
            goto LABEL_14;
          v14 = this->fields.scrollView;
          if ( v14 )
          {
            UIScrollView__UpdatePosition(v14, 0);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
            if ( callbackFunc2 )
              ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                callbackFunc2->fields.method_code,
                callbackFunc2->fields.method);
            return;
          }
        }
      }
      sub_1C942F0(v14, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantListViewManager__RequestListObject(
        ServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D286FB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_1C94098(&Method_ServantListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D286FB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      ServantListViewObject__Init_35576672((ServantListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantListViewManager__RequestListObject_35575644(
        ServantListViewManager_o *this,
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

  if ( (byte_4D286FC & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_1C94098(&Method_ServantListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D286FC = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      ServantListViewObject__Init_35576756((ServantListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


void ServantListViewManager__SaveSortInfo(ServantListViewManager_o *this, const MethodInfo *method)
{
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8

  if ( (byte_4D286F6 & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_TypeInfo);
    byte_4D286F6 = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_22;
    }
    ListViewSort__Save(servantSortInfo, 0);
    v2 = ServantListViewManager_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v2->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantEquipSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_22;
    }
    ListViewSort__Save(servantEquipSortInfo, 0);
    v2 = ServantListViewManager_TypeInfo;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v2->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (commandCodeSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) != 0) )
    {
      ListViewSort__Save(commandCodeSortInfo, 0);
      return;
    }
LABEL_22:
    sub_1C942F0(v4, v5);
  }
}


void ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4D28706 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28706 = 1;
  }
  bonusFilterKindButton = (UnityEngine_Object_o *)this->fields.bonusFilterKindButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bonusFilterKindButton, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      sort = this->fields.sort;
      if ( sort )
      {
        if ( sort->fields.isBonusKind )
        {
          v4 = this->fields.kind != 3;
          if ( gameObject )
          {
LABEL_10:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v4, 0);
            return;
          }
        }
        else
        {
          v4 = 0;
          if ( gameObject )
            goto LABEL_10;
        }
      }
    }
    sub_1C942F0(gameObject, v4);
  }
}


void ServantListViewManager__SetBonusFilterInfo(
        ServantListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t kind; // w8
  ListViewSort_o *sort; // x0
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantFilterIds; // x5
  struct ListViewSort_o *v14; // x20
  bool v15; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( setupInfo )
  {
    kind = this->fields.kind;
    if ( kind == 1 )
    {
      sort = this->fields.sort;
      if ( !sort )
        goto LABEL_14;
      servantEquipFilterEventIds = setupInfo->fields.servantEquipFilterEventIds;
      servantEquipFilterEventCampaignIds = setupInfo->fields.servantEquipFilterEventCampaignIds;
      servantFilterIds = 0;
    }
    else
    {
      if ( kind )
        goto LABEL_11;
      sort = this->fields.sort;
      if ( !sort )
        goto LABEL_14;
      servantEquipFilterEventIds = setupInfo->fields.servantFilterEventIds;
      servantFilterIds = setupInfo->fields.servantFilterIds;
      servantEquipFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
    }
    AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                           sort,
                           0,
                           servantEquipFilterEventCampaignIds,
                           servantEquipFilterEventIds,
                           0,
                           servantFilterIds,
                           0,
                           0);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
LABEL_11:
    v14 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0);
    if ( v14 )
    {
      v15 = ((unsigned __int8)sort & 1) == 0;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C942F0(sort, setupInfo);
  }
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.alignedBonusFilterInfos,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = this->fields.sort;
  if ( !v14 )
    goto LABEL_14;
  v15 = 0;
LABEL_13:
  v14->fields.isBonusKind = v15;
}


void ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4D28709 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17573/*"btn_filter_on"*/);
    sub_1C94098(&StringLiteral_17572/*"btn_filter"*/);
    byte_4D28709 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C942F0(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17572/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17573/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void ServantListViewManager__SetMode(
        ServantListViewManager_o *this,
        int32_t mode,
        ServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_35575496(this, mode, v10);
}


void ServantListViewManager__SetMode_35575496(ServantListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantListViewManager__RequestListObject_35575644(this, mode + 1, v5);
}


void ServantListViewManager__SetMode_35575592(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_35575496(this, mode, v10);
}


void ServantListViewManager__SetObjectItem(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D286FA & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_1C94098(&ServantListViewObject_TypeInfo);
    byte_4D286FA = 1;
  }
  if ( !obj
    || (naturalAligment = ServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantListViewObject__Init_35575372((ServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void ServantListViewManager__SetSortButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v17; // x20

  if ( (byte_4D28704 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17609/*"btn_sort_up"*/);
    sub_1C94098(&StringLiteral_17709/*"btn_txt_up"*/);
    sub_1C94098(&StringLiteral_17660/*"btn_txt_new"*/);
    sub_1C94098(&StringLiteral_17650/*"btn_txt_down"*/);
    sub_1C94098(&StringLiteral_17667/*"btn_txt_old"*/);
    sub_1C94098(&StringLiteral_17606/*"btn_sort_down"*/);
    byte_4D28704 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_41;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_41;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17667/*"btn_txt_old"*/ : &StringLiteral_17660/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17709/*"btn_txt_up"*/ : &StringLiteral_17650/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17609/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17606/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_1C942F0(sort, v4);
    }
  }
}


void ServantListViewManager__UpdateItemDisplayState(
        ServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  void *monitor; // x23
  Il2CppObject *v9; // x28
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  _OWORD *v14; // x8
  __int128 v15; // q0
  __int64 v16; // x1
  UserServantEntity_o *v17; // x0
  __int64 v18; // x1
  bool v19; // w8
  Il2CppObject *v20; // x29
  UserServantEntity_o *v21; // x0
  _BOOL8 IsEventJoin; // x0
  __int64 v23; // x1
  UserServantEntity_o *v24; // x0
  UserServantEntity_o *v25; // x0
  UserServantEntity_o *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D2870A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&ServantListViewItem_TypeInfo);
    byte_4D2870A = 1;
  }
  memset(&v29, 0, sizeof(v29));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C942F0(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    SelfUserGame,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = 0;
  *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields.currentCryptoKey;
  v29.fields._current = (Il2CppObject *)v28.fields.fakeValue;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v10 & 1) == 0 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      goto LABEL_38;
    naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v29.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
    {
      v10 = sub_1C9468C(v29.fields._current);
LABEL_38:
      sub_1C942F0(v10, v11);
    }
    v14 = v29.fields._current[7].monitor;
    if ( !v14 )
    {
      BYTE2(v29.fields._current[15].monitor) = 0;
      goto LABEL_18;
    }
    v15 = v14[2];
    *(_OWORD *)&v28.fields.currentCryptoKey = v14[1];
    *(_OWORD *)&v28.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v27 = v28;
    BYTE2(current[15].monitor) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v27, 0) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v17 = (UserServantEntity_o *)current[7].monitor;
      if ( !v17 )
        sub_1C942F0(0, v16);
      if ( UserServantEntity__IsLeave(v17, 0) )
      {
        v19 = 0;
        v20 = current;
      }
      else
      {
        v21 = (UserServantEntity_o *)current[7].monitor;
        if ( !v21 )
          sub_1C942F0(0, v18);
        IsEventJoin = UserServantEntity__IsEventJoin(v21, 0);
        if ( IsEventJoin )
          v20 = v9;
        else
          v20 = current;
        if ( IsEventJoin )
        {
          v19 = 0;
          v20 = current;
        }
        else
        {
          v24 = (UserServantEntity_o *)current[7].monitor;
          if ( !v24 )
            sub_1C942F0(0, v23);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v24, 0);
          if ( IsEventJoin )
          {
            v19 = 0;
            v20 = current;
          }
          else
          {
            v25 = (UserServantEntity_o *)current[7].monitor;
            if ( !v25 )
              sub_1C942F0(0, v23);
            IsEventJoin = UserServantEntity__IsStatusUp(v25, 0);
            if ( IsEventJoin )
            {
              v19 = 0;
            }
            else
            {
              v26 = (UserServantEntity_o *)current[7].monitor;
              if ( !v26 )
                sub_1C942F0(0, v23);
              IsEventJoin = UserServantEntity__IsMaterialTd(v26, 0);
              v19 = !IsEventJoin;
            }
          }
          v9 = current;
        }
        if ( !v20 )
          sub_1C942F0(IsEventJoin, v23);
      }
      BYTE3(v20[15].monitor) = v19;
    }
    else
    {
LABEL_18:
      BYTE3(current[15].monitor) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void ServantListViewManager__add_callbackFunc(
        ServantListViewManager_o *this,
        ServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantListViewManager_o *v10; // x0
  ServantListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D286EC & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_4D286EC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v7->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1C9468C(v7);
  ServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void ServantListViewManager__add_callbackFunc2(
        ServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D286EE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D286EE = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1C9468C(v7);
  ServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void ServantListViewManager__filterButtonState(
        ServantListViewManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1C942F0(0, state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, const MethodInfo *))filterButton->klass->vtable._14_SetState.methodPtr)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._14_SetState.method);
}


System_Collections_Generic_List_ServantListViewObject__o *ServantListViewManager__get_ClippingObjectList(
        ServantListViewManager_o *this,
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

  if ( (byte_4D286F3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D286F3 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem((ServantListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C942F0(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantListViewObject__o *ServantListViewManager__get_ObjectList(
        ServantListViewManager_o *this,
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

  if ( (byte_4D286F2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D286F2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v3;
}


void ServantListViewManager__remove_callbackFunc(
        ServantListViewManager_o *this,
        ServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D286ED & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_4D286ED = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v7->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1C9468C(v7);
  ServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void ServantListViewManager__remove_callbackFunc2(
        ServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4D286EF & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D286EF = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C9468C(v7);
  ServantListViewManager__DeleteContinueData(v10);
}


void ServantListViewManager_CallbackFunc___ctor(
        ServantListViewManager_CallbackFunc_o *this,
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
  sub_1C9403C(
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
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3950;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC38F8;
}


System_IAsyncResult_o *ServantListViewManager_CallbackFunc__BeginInvoke(
        ServantListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4D2870C & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&ServantListViewManager_ResultKind_TypeInfo);
    byte_4D2870C = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v10, callback, object);
}


void ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void ServantListViewManager_CallbackFunc__Invoke(
        ServantListViewManager_CallbackFunc_o *this,
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