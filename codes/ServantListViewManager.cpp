void ServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ListViewSort_o *v4; // x19
  struct ServantListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ListViewSort_o *v8; // x19
  struct ServantListViewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB22EC & 1) == 0 )
  {
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&ServantListViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12723/*"Servant1"*/);
    sub_1C6BA08(&StringLiteral_12725/*"Servant4"*/);
    sub_1C6BA08(&StringLiteral_12724/*"Servant2"*/);
    byte_4CB22EC = 1;
  }
  v1 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v1, (System_String_o *)StringLiteral_12723/*"Servant1"*/, 3, 0, 0);
  ServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v4, (System_String_o *)StringLiteral_12724/*"Servant2"*/, 3, 0, 0);
  static_fields = ServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->servantEquipSortInfo, (int32_t)v4, v6, v7);
  v8 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor_44084664(v8, (System_String_o *)StringLiteral_12725/*"Servant4"*/, 2, 0, 0);
  v9 = ServantListViewManager_TypeInfo->static_fields;
  v9->commandCodeSortInfo = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->commandCodeSortInfo, (int32_t)v8, v10, v11);
}


void ServantListViewManager___ctor(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantListViewManager__ChangeIconScale(ServantListViewManager_o *this, const MethodInfo *method)
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
    *((_DWORD *)p_seed + 81) = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        ServantListViewManager__ModifyList(this, 1, v10),
        ServantListViewManager__SetMode_35184364(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_1C6BC60(sort, method);
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
  const MethodInfo *v12; // x3
  DataManager_o *v13; // x21
  int32_t CommandCodeFrameMax; // w20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x23
  ServantListViewManager_c *v18; // x8
  __int64 v19; // x26
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v21; // x1
  int v22; // w8
  DataManager_o *v23; // x22
  BalanceConfig_c *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  ServantListViewManager_c *v27; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  ServantListViewManager_c *v31; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  Il2CppObject *v37; // x22
  __int64 v38; // x0
  struct System_Threading_CancellationTokenSource_o *v39; // x24
  __int64 v40; // x22
  __int64 v41; // x28
  UserServantEntity_o *v42; // x24
  System_Int64_array *v43; // x25
  System_Int64_array *v44; // x26
  ServantListViewItem_o *v45; // x23
  const MethodInfo *v46; // x6
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  intptr_t v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  intptr_t v52; // x8
  Il2CppObject *v53; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  __int64 v55; // x21
  UserCommandCodeEntity_o *v56; // x24
  System_Int64_array *v57; // x25
  ServantListViewItem_o *v58; // x23
  const MethodInfo *v59; // x4
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v63; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v65; // x8
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v67; // x21
  System_String_o *v68; // x22
  Il2CppObject *v69; // x23
  Il2CppObject *v70; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v72; // x21
  const MethodInfo *v73; // x2
  UILabel_o *v74; // x22
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  struct System_Threading_CancellationTokenSource_o *v77; // [xsp+0h] [xbp-A0h]
  __int64 v78; // [xsp+10h] [xbp-90h]
  int32_t v80; // [xsp+20h] [xbp-80h] BYREF
  int v81; // [xsp+24h] [xbp-7Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+28h] [xbp-78h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CB22D5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    sub_1C6BA08(&ServantListViewManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_3639/*"COMMAND_CODE_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_11567/*"SERVANT_ALL_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_11633/*"SERVANT_EQUIP_TAKE"*/);
    sub_1C6BA08(&StringLiteral_3658/*"COMMAND_CODE_TAKE"*/);
    sub_1C6BA08(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1C6BA08(&StringLiteral_12006/*"SERVANT_TAKE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_12483/*"SUM_INFO"*/);
    byte_4CB22D5 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  userCommandCodeIdList = 0;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v10 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  switch ( kind )
  {
    case 3:
      if ( !v10 )
        goto LABEL_113;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v10, 0);
      if ( !SelfUserGame )
        goto LABEL_113;
      v23 = Instance;
      if ( !byte_4CB05AC )
      {
        sub_1C6BA08(&BalanceConfig_TypeInfo);
        byte_4CB05AC = 1;
      }
      v24 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v24 = BalanceConfig_TypeInfo;
      }
      CommandCodeFrameMax = v24->static_fields->CommandCodeFrameMax;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMAND_CODE_TAKE"*/, 0);
      v27 = ServantListViewManager_TypeInfo;
      v19 = StringLiteral_3639/*"COMMAND_CODE_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v27 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v27->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)commandCodeSortInfo, v25, v26);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v13 = 0;
      v22 = 3;
      goto LABEL_36;
    case 1:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
      if ( !SelfUserGame )
        goto LABEL_113;
      v13 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtEquipKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11633/*"SERVANT_EQUIP_TAKE"*/, 0);
      v31 = ServantListViewManager_TypeInfo;
      v19 = StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v31 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v31->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v29, v30);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v23 = 0;
      v22 = 1;
      goto LABEL_36;
    case 0:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
      if ( !SelfUserGame )
        goto LABEL_113;
      v13 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12006/*"SERVANT_TAKE"*/, 0);
      v18 = ServantListViewManager_TypeInfo;
      v19 = StringLiteral_11607/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v18 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v18->static_fields->servantSortInfo;
      v21 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v21, v15, v16);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v22 = 0;
      v23 = 0;
LABEL_36:
      LODWORD(Instance->fields.writeMasterDataThread) = v22;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      goto LABEL_38;
  }
  CommandCodeFrameMax = 0;
  v23 = 0;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  v19 = StringLiteral_11567/*"SERVANT_ALL_EMPTY"*/;
  v13 = 0;
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v11, v12);
LABEL_46:
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)Instance, v17, 0);
  }
  if ( !v13 )
  {
    if ( !v23 )
    {
      LODWORD(v39) = 0;
      goto LABEL_95;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    v53 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v78 = v19;
    if ( !v53 )
      goto LABEL_113;
    UserServantCommandCodeMaster__getAttachList(
      (UserServantCommandCodeMaster_o *)v53,
      &userCommandCodeIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0);
    m_CancellationTokenSource = v23->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      if ( (unsigned int)v23->fields.m_CancellationTokenSource )
      {
        v55 = 0;
        do
        {
          v56 = (UserCommandCodeEntity_o *)*((_QWORD *)&v23->fields._DispLog + v55);
          v57 = userCommandCodeIdList;
          v58 = (ServantListViewItem_o *)sub_1C6BC54(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor_35201468(v58, v55, v56, v57, v59);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_113;
          m_CachedPtr = Instance->fields.m_CachedPtr;
          v63 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_113;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v58,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v65 + 32) = v58;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v65 + 32), (int32_t)v58, v60, v61);
          }
          if ( (unsigned int)m_CancellationTokenSource - 1LL == v55 )
            goto LABEL_92;
        }
        while ( ++v55 < (unsigned __int64)LODWORD(v23->fields.m_CancellationTokenSource) );
      }
LABEL_91:
      sub_1C6BC68(v38);
    }
LABEL_92:
    LODWORD(v39) = (_DWORD)m_CancellationTokenSource;
LABEL_93:
    v19 = v78;
    goto LABEL_95;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v37 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v78 = v19;
  if ( !v37 )
    goto LABEL_113;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v37,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    0);
  v39 = v13->fields.m_CancellationTokenSource;
  if ( (int)v39 < 1 )
    goto LABEL_93;
  v77 = v13->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v77 )
    goto LABEL_91;
  v40 = 0;
  v41 = (unsigned int)v13->fields.m_CancellationTokenSource - 1LL;
  while ( 1 )
  {
    v42 = (UserServantEntity_o *)*((_QWORD *)&v13->fields._DispLog + v40);
    v44 = equipIdList;
    v43 = svtIdList;
    v45 = (ServantListViewItem_o *)sub_1C6BC54(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor(v45, v40, v42, v43, v44, setupInfo, v46);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_113;
    v49 = Instance->fields.m_CachedPtr;
    v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v49 )
      goto LABEL_113;
    v51 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v45,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = v49 + 8 * v51;
      LODWORD(Instance->fields.m_CancellationTokenSource) = v51 + 1;
      *(_QWORD *)(v52 + 32) = v45;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)v45, v47, v48);
    }
    if ( v41 == v40 )
      break;
    if ( ++v40 >= (unsigned __int64)LODWORD(v13->fields.m_CancellationTokenSource) )
      goto LABEL_91;
  }
  v19 = v78;
  LODWORD(v39) = (_DWORD)v77;
LABEL_95:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
  {
    v67 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUM_INFO"*/, 0);
    v81 = (int)v39;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
    v80 = CommandCodeFrameMax;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    Instance = (DataManager_o *)System_String__Format_64008100(v68, v69, v70, 0);
    if ( !v67 )
      goto LABEL_113;
    UILabel__set_text(v67, (System_String_o *)Instance, 0);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v39 >= 1 )
    v72 = (System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v72 = (System_String_o *)v19;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0) )
  {
    v74 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get(v72, 0);
    if ( v74 )
    {
      UILabel__set_text(v74, (System_String_o *)Instance, 0);
      goto LABEL_112;
    }
LABEL_113:
    sub_1C6BC60(Instance, v8);
  }
LABEL_112:
  ServantListViewManager__SetBonusFilterInfo(this, setupInfo, v73);
  ServantListViewManager__SetBonusFilterButton(this, v75);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ServantListViewManager__SetFilterButtonImage(this, v76);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CB22D1 & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_TypeInfo);
    byte_4CB22D1 = 1;
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
    sub_1C6BC60(servantSortInfo, v1);
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

  if ( (byte_4CB22E1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ServantListViewManager_EndCloseSelectFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB22E1 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ServantListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void ServantListViewManager__EndSelectSortKind(ServantListViewManager_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CB22E3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ServantListViewManager_EndCloseSelectSortKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB22E3 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_1C6BC60(v7, v8);
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

  if ( (byte_4CB22E8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    byte_4CB22E8 = 1;
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
                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( ServantListViewItem__get_SvtId((ServantListViewItem_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C6BC60(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4CB22E9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    byte_4CB22E9 = 1;
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
                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( ServantListViewItem__get_CommandCodeId(
             (ServantListViewItem_o *)itemList,
             *(const MethodInfo **)&commandCodeId) == commandCodeId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1C6BC60(itemList, *(_QWORD *)&commandCodeId);
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

  if ( (byte_4CB22D8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    byte_4CB22D8 = 1;
  }
  result = (ServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C6BC60(0, method);
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
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x9
  __int64 v16; // x8
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v18; // x0
  __int64 v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int64 v25; // x8
  System_Collections_Generic_List_long__o *v26; // x0
  __int128 v27; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v28; // x0
  __int128 v29; // q0
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int v33; // w21
  System_Int64_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  System_Int64_array **v41; // x0
  bool result; // w0
  CharaGraphListMenu_o *v43; // x0
  System_String_o *v44; // x1
  const MethodInfo *v45; // x2
  _OWORD v46[2]; // [xsp+10h] [xbp-100h] BYREF
  _OWORD v47[2]; // [xsp+30h] [xbp-E0h] BYREF
  _OWORD v48[2]; // [xsp+50h] [xbp-C0h] BYREF
  _OWORD v49[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v50; // [xsp+90h] [xbp-80h]
  __int128 v51; // [xsp+A0h] [xbp-70h]

  if ( (byte_4CB22DA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    byte_4CB22DA = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v9 = ServantListViewItem_TypeInfo;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
      {
        v43 = (CharaGraphListMenu_o *)sub_1C6BFFC(itemList);
        CharaGraphListMenu__EndStatusSync(v43, v44, v45);
        return result;
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 289) )
      {
        if ( *(_BYTE *)(itemList + 247) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          v50 = *(_OWORD *)(v16 + 16);
          v51 = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v49;
          v49[0] = v50;
          v49[1] = v51;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(v18, 0);
          if ( !v8 )
            goto LABEL_48;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v8->fields._size;
          v9 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v25 = v22[4];
            v26 = v8;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              (int64_t)v9,
              *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v25 + 192) + 112LL));
            goto LABEL_39;
          }
          v24 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          goto LABEL_36;
        }
        v27 = *(_OWORD *)(v16 + 32);
        v50 = *(_OWORD *)(v16 + 16);
        v51 = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v48;
        v48[0] = v50;
        v48[1] = v51;
      }
      else
      {
        v19 = *(_QWORD *)(itemList + 152);
        if ( !v19 || !*(_BYTE *)(itemList + 289) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 247) )
        {
          v20 = *(_OWORD *)(v19 + 32);
          v50 = *(_OWORD *)(v19 + 16);
          v51 = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v47;
          v47[0] = v50;
          v47[1] = v51;
          goto LABEL_21;
        }
        v29 = *(_OWORD *)(v19 + 32);
        v50 = *(_OWORD *)(v19 + 16);
        v51 = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v46;
        v46[0] = v50;
        v46[1] = v51;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(v28, 0);
      if ( !v7 )
        goto LABEL_48;
      v30 = v7->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v30 )
        goto LABEL_48;
      v32 = v7->fields._size;
      v9 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
      {
        v25 = v31[4];
        v26 = v7;
        goto LABEL_38;
      }
      v24 = &v30->obj.klass + v32;
      v7->fields._size = v32 + 1;
LABEL_36:
      v24[4] = (Il2CppClass *)v9;
LABEL_39:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v7 || !v8 )
LABEL_48:
    sub_1C6BC60(itemList, v9);
  v33 = v8->fields._size + v7->fields._size;
  if ( v33 < 1 )
  {
    *choiceList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)choiceList, 0, v10, v11);
    v41 = unchoiceList;
    v40 = 0;
    *unchoiceList = 0;
  }
  else
  {
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v34;
    sub_1C6B9AC((CGThumbnailListItem_o *)choiceList, (int32_t)v34, v35, v36);
    v37 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    v40 = (int)v37;
    *unchoiceList = v37;
    v41 = unchoiceList;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v41, v40, v38, v39);
  return v33 > 0;
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
  const MethodInfo *v11; // x3
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 naturalAligment; // x9
  __int64 v16; // x8
  __int128 v17; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v18; // x0
  __int64 v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int64 v25; // x8
  System_Collections_Generic_List_long__o *v26; // x0
  __int128 v27; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v28; // x0
  __int128 v29; // q0
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int v33; // w21
  System_Int64_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  System_Int64_array **v41; // x0
  ServantListViewManager_o *v43; // x0
  System_Int64_array **v44; // x1
  System_Int64_array **v45; // x2
  const MethodInfo *v46; // x3
  _OWORD v47[2]; // [xsp+10h] [xbp-100h] BYREF
  _OWORD v48[2]; // [xsp+30h] [xbp-E0h] BYREF
  _OWORD v49[2]; // [xsp+50h] [xbp-C0h] BYREF
  _OWORD v50[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v51; // [xsp+90h] [xbp-80h]
  __int128 v52; // [xsp+A0h] [xbp-70h]

  if ( (byte_4CB22D9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    byte_4CB22D9 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v13 = *(_DWORD *)(itemList + 24);
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v14,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v9 = ServantListViewItem_TypeInfo;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)naturalAligment
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
      {
        v43 = (ServantListViewManager_o *)sub_1C6BFFC(itemList);
        return ServantListViewManager__GetSwapChoiceList(v43, v44, v45, v46);
      }
      v16 = *(_QWORD *)(itemList + 120);
      if ( v16 && *(_BYTE *)(itemList + 288) )
      {
        if ( *(_BYTE *)(itemList + 246) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          v51 = *(_OWORD *)(v16 + 16);
          v52 = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v50;
          v50[0] = v51;
          v50[1] = v52;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(v18, 0);
          if ( !v8 )
            goto LABEL_48;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v8->fields._size;
          v9 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v25 = v22[4];
            v26 = v8;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              (int64_t)v9,
              *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v25 + 192) + 112LL));
            goto LABEL_39;
          }
          v24 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          goto LABEL_36;
        }
        v27 = *(_OWORD *)(v16 + 32);
        v51 = *(_OWORD *)(v16 + 16);
        v52 = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v49;
        v49[0] = v51;
        v49[1] = v52;
      }
      else
      {
        v19 = *(_QWORD *)(itemList + 152);
        if ( !v19 || !*(_BYTE *)(itemList + 288) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 246) )
        {
          v20 = *(_OWORD *)(v19 + 32);
          v51 = *(_OWORD *)(v19 + 16);
          v52 = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v48;
          v48[0] = v51;
          v48[1] = v52;
          goto LABEL_21;
        }
        v29 = *(_OWORD *)(v19 + 32);
        v51 = *(_OWORD *)(v19 + 16);
        v52 = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v47;
        v47[0] = v51;
        v47[1] = v52;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(v28, 0);
      if ( !v7 )
        goto LABEL_48;
      v30 = v7->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v30 )
        goto LABEL_48;
      v32 = v7->fields._size;
      v9 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
      {
        v25 = v31[4];
        v26 = v7;
        goto LABEL_38;
      }
      v24 = &v30->obj.klass + v32;
      v7->fields._size = v32 + 1;
LABEL_36:
      v24[4] = (Il2CppClass *)v9;
LABEL_39:
      if ( v13 == ++v14 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v7 || !v8 )
LABEL_48:
    sub_1C6BC60(itemList, v9);
  v33 = v8->fields._size + v7->fields._size;
  if ( v33 < 1 )
  {
    *lockList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)lockList, 0, v10, v11);
    v41 = unlockList;
    v40 = 0;
    *unlockList = 0;
  }
  else
  {
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v34;
    sub_1C6B9AC((CGThumbnailListItem_o *)lockList, (int32_t)v34, v35, v36);
    v37 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
    v40 = (int)v37;
    *unlockList = v37;
    v41 = unlockList;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)v41, v40, v38, v39);
  return v33 > 0;
}


void ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4CB22D2 & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_TypeInfo);
    byte_4CB22D2 = 1;
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
    sub_1C6BC60(servantSortInfo, v1);
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

  if ( (byte_4CB22DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    byte_4CB22DF = 1;
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
                                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v12, 0) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v8->fields._items), 0);
        }
        if ( size == ++v7 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      }
      while ( itemList );
LABEL_17:
      sub_1C6BC60(itemList, userSvtId);
    }
  }
}


void ServantListViewManager__ModifyList(
        ServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v7; // x22
  Il2CppObject *v8; // x23
  int32_t kind; // w8
  UserCommandCodeEntity_array *List; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v13; // w28
  int64_t v14; // x21
  __int64 v15; // x8
  UserServantEntity_o **v16; // x21
  __int64 v17; // t1
  __int128 v18; // q0
  int64_t v19; // x0
  int64_t v20; // x22
  int32_t v21; // w24
  int64_t v22; // x23
  __int64 naturalAligment; // x10
  __int64 v24; // x8
  __int128 v25; // q0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UserServantEntity_o *v28; // x22
  UserServantEntity_o *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  unsigned int v32; // w20
  Il2CppClass **v33; // x22
  Il2CppClass *v34; // x8
  __int64 *v35; // x22
  Il2CppClass *v36; // t1
  Il2CppType byval_arg; // q0
  int64_t v38; // x21
  int32_t v39; // w23
  int64_t v40; // x24
  __int64 v41; // x10
  __int64 v42; // x8
  __int128 v43; // q0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  const MethodInfo *v47; // x1
  int32_t v48; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v50; // x21
  __int64 v51; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v54; // [xsp+10h] [xbp-120h]
  UserCommandCodeEntity_array *v55; // [xsp+10h] [xbp-120h]
  int64_t v56; // [xsp+18h] [xbp-118h]
  il2cpp_array_size_t max_length; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C0h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4CB22D6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB22D6 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
      List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v7, 0);
      break;
    case 1:
      if ( !MasterData_object )
        goto LABEL_90;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
      goto LABEL_22;
    case 0:
      if ( !MasterData_object )
        goto LABEL_90;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
LABEL_22:
      List = 0;
      goto LABEL_25;
    default:
      List = 0;
      break;
  }
  Instance = 0;
LABEL_25:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_90;
  size = itemList->fields._size;
  if ( Instance )
  {
    v54 = *(_QWORD *)(Instance + 24);
    if ( (int)v54 >= 1 )
    {
      if ( (_DWORD)v54 )
      {
        v13 = 0;
        v56 = Instance;
        while ( 1 )
        {
          v14 = Instance + 8LL * (int)v13;
          v17 = *(_QWORD *)(v14 + 32);
          v16 = (UserServantEntity_o **)(v14 + 32);
          v15 = v17;
          if ( !v17 )
            goto LABEL_90;
          v18 = *(_OWORD *)(v15 + 32);
          *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
          *(_OWORD *)&v62.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v61 = v62;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v61, 0);
          if ( size >= 1 )
          {
            v20 = v19;
            v21 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v21,
                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v22 = Instance;
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
                *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
                *(_OWORD *)&v62.fields.fakeValue = v25;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v60 = v62;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v60, 0);
                if ( Instance == v20 )
                  break;
              }
              if ( size == ++v21 )
                goto LABEL_48;
            }
            if ( v13 >= *(_DWORD *)(v56 + 24) )
              goto LABEL_75;
            v28 = *v16;
            v29 = *v16;
            *(_QWORD *)(v22 + 120) = *v16;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 120), (int32_t)v29, v26, v27);
            ServantListViewItem__SetOverwriteStatus((ServantListViewItem_o *)v22, v28, v30);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v22, v5);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v22, v31);
            }
          }
LABEL_48:
          Instance = v56;
          if ( ++v13 == (_DWORD)v54 )
            goto LABEL_76;
          if ( v13 >= *(_DWORD *)(v56 + 24) )
            goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
  }
  else if ( List )
  {
    max_length = List->max_length;
    if ( (int)max_length >= 1 )
    {
      if ( (_DWORD)max_length )
      {
        v32 = 0;
        v55 = List;
        while ( 1 )
        {
          v33 = &List->obj.klass + (int)v32;
          v36 = v33[4];
          v35 = (__int64 *)(v33 + 4);
          v34 = v36;
          if ( !v36 )
            break;
          byval_arg = v34->_1.byval_arg;
          *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v34->_1.name;
          *(Il2CppType *)&v62.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v59 = v62;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v59, 0);
          if ( size >= 1 )
          {
            v38 = Instance;
            v39 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v39,
                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v40 = Instance;
              v41 = ServantListViewItem_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v41
                || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v41 - 8) != ServantListViewItem_TypeInfo )
              {
                goto LABEL_90;
              }
              v42 = *(_QWORD *)(Instance + 152);
              if ( v42 )
              {
                v43 = *(_OWORD *)(v42 + 32);
                *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v42 + 16);
                *(_OWORD *)&v62.fields.fakeValue = v43;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v58 = v62;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v58, 0);
                if ( Instance == v38 )
                  break;
              }
              if ( size == ++v39 )
                goto LABEL_73;
            }
            if ( v32 >= LODWORD(v55->max_length) )
              goto LABEL_75;
            v46 = *v35;
            *(_QWORD *)(v40 + 152) = *v35;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 152), v46, v44, v45);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v40, v5);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v40, v47);
            }
          }
LABEL_73:
          List = v55;
          if ( ++v32 == (_DWORD)max_length )
            goto LABEL_76;
          if ( v32 >= LODWORD(v55->max_length) )
            goto LABEL_75;
        }
LABEL_90:
        sub_1C6BC60(Instance, v5);
      }
LABEL_75:
      sub_1C6BC68(Instance);
    }
  }
LABEL_76:
  if ( size >= 1 && isIconSizeChange )
  {
    v48 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_90;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v48,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v50 = (ListViewItem_o *)Item;
        v51 = ServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v51
          && (ServantListViewItem_c *)Item->klass->_2.typeHierarchy[v51 - 1] == ServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (int64_t)v50->fields.viewObject;
            if ( !Instance )
              goto LABEL_90;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v50, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v48 )
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

  if ( (byte_4CB22E6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantListViewManager_OnClickBonusFilterKind__);
    byte_4CB22E6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C6BC60(0, v5);
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

  if ( (byte_4CB22E0 & 1) == 0 )
  {
    sub_1C6BA08(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_ServantListViewManager_EndSelectFilterKind__);
    sub_1C6BA08(&Method_ServantListViewManager_OnClickFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB22E0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
        CommonUI__OpenServantFilterSelectMenu_31424508(
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
      v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
    sub_1C6BC60(v9, v10);
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
  const MethodInfo *v3; // x3
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v6, v7);
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

  if ( (byte_4CB22E4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantListViewManager_OnClickSortAscendingOrder__);
    byte_4CB22E4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_1C6BC60(v5, v6);
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

  if ( (byte_4CB22E2 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_ServantListViewManager_EndSelectSortKind__);
    sub_1C6BA08(&Method_ServantListViewManager_OnClickSortKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB22E2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_1C6BC60(v10, v11);
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
  const MethodInfo *v3; // x3
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1C6BC60(v6, v7);
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
  const MethodInfo *v9; // x3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CB22DE & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB22DE = 1;
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
      v10 = this->fields.scrollView;
      if ( v10 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
        v10 = this->fields.scrollView;
        if ( v10 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v10->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                  v10,
                  v10->klass->vtable._6_get_shouldMoveVertically.method)
              & 1) == 0 )
            goto LABEL_14;
          v10 = this->fields.scrollView;
          if ( v10 )
          {
            UIScrollView__UpdatePosition(v10, 0);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
            if ( callbackFunc2 )
              ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                callbackFunc2->fields.method_code,
                callbackFunc2->fields.method);
            return;
          }
        }
      }
      sub_1C6BC60(v10, v7);
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB22DC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_1C6BA08(&Method_ServantListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB22DC = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v12, v13);
      ServantListViewObject__Init_35221476((ServantListViewObject_o *)current, mode, v11, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantListViewManager__RequestListObject_35214920(
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB22DD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_1C6BA08(&Method_ServantListViewManager_OnMoveEnd__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB22DD = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C6BC60(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v10, v11);
      ServantListViewObject__Init_35221560((ServantListViewObject_o *)current, mode, v9, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
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

  if ( (byte_4CB22D7 & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_TypeInfo);
    byte_4CB22D7 = 1;
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
    sub_1C6BC60(v4, v5);
  }
}


void ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CB22E7 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB22E7 = 1;
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
    sub_1C6BC60(gameObject, v4);
  }
}


void ServantListViewManager__SetBonusFilterInfo(
        ServantListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t kind; // w8
  ListViewSort_o *sort; // x0
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantFilterIds; // x5
  struct ListViewSort_o *v10; // x20
  bool v11; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

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
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v13, v14);
LABEL_11:
    v10 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0);
    if ( v10 )
    {
      v11 = ((unsigned __int8)sort & 1) == 0;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C6BC60(sort, setupInfo);
  }
  this->fields.alignedBonusFilterInfos = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, (int32_t)method, v3);
  v10 = this->fields.sort;
  if ( !v10 )
    goto LABEL_14;
  v11 = 0;
LABEL_13:
  v10->fields.isBonusKind = v11;
}


void ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4CB22EA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17502/*"btn_filter_on"*/);
    sub_1C6BA08(&StringLiteral_17501/*"btn_filter"*/);
    byte_4CB22EA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_1C6BC60(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17501/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17502/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void ServantListViewManager__SetMode(
        ServantListViewManager_o *this,
        int32_t mode,
        ServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantListViewManager__SetMode_35184364(this, mode, v6);
}


void ServantListViewManager__SetMode_35184364(ServantListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantListViewManager__RequestListObject_35214920(this, mode + 1, v5);
}


void ServantListViewManager__SetMode_35214868(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantListViewManager__SetMode_35184364(this, mode, v6);
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
  if ( (byte_4CB22DB & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_1C6BA08(&ServantListViewObject_TypeInfo);
    byte_4CB22DB = 1;
  }
  if ( !obj
    || (naturalAligment = ServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewObject_TypeInfo )
  {
    sub_1C6BC60(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantListViewObject__Init_35220700((ServantListViewObject_o *)obj, v7, 0);
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

  if ( (byte_4CB22E5 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17538/*"btn_sort_up"*/);
    sub_1C6BA08(&StringLiteral_17636/*"btn_txt_up"*/);
    sub_1C6BA08(&StringLiteral_17587/*"btn_txt_new"*/);
    sub_1C6BA08(&StringLiteral_17577/*"btn_txt_down"*/);
    sub_1C6BA08(&StringLiteral_17594/*"btn_txt_old"*/);
    sub_1C6BA08(&StringLiteral_17535/*"btn_sort_down"*/);
    byte_4CB22E5 = 1;
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17594/*"btn_txt_old"*/ : &StringLiteral_17587/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17636/*"btn_txt_up"*/ : &StringLiteral_17577/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
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
      sub_1C6BC60(sort, v4);
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

  if ( (byte_4CB22EB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&ServantListViewItem_TypeInfo);
    byte_4CB22EB = 1;
  }
  memset(&v29, 0, sizeof(v29));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_1C6BC60(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    SelfUserGame,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = 0;
  *(_OWORD *)&v29.fields._list = *(_OWORD *)&v28.fields.currentCryptoKey;
  v29.fields._current = (Il2CppObject *)v28.fields.fakeValue;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v10 & 1) == 0 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      goto LABEL_38;
    naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v29.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantListViewItem_c *)v29.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
    {
      v10 = sub_1C6BFFC(v29.fields._current);
LABEL_38:
      sub_1C6BC60(v10, v11);
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
    BYTE2(current[15].monitor) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v27, 0) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v17 = (UserServantEntity_o *)current[7].monitor;
      if ( !v17 )
        sub_1C6BC60(0, v16);
      if ( UserServantEntity__IsLeave(v17, 0) )
      {
        v19 = 0;
        v20 = current;
      }
      else
      {
        v21 = (UserServantEntity_o *)current[7].monitor;
        if ( !v21 )
          sub_1C6BC60(0, v18);
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
            sub_1C6BC60(0, v23);
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
              sub_1C6BC60(0, v23);
            IsEventJoin = UserServantEntity__IsStatusUp(v25, 0);
            if ( IsEventJoin )
            {
              v19 = 0;
            }
            else
            {
              v26 = (UserServantEntity_o *)current[7].monitor;
              if ( !v26 )
                sub_1C6BC60(0, v23);
              IsEventJoin = UserServantEntity__IsMaterialTd(v26, 0);
              v19 = !IsEventJoin;
            }
          }
          v9 = current;
        }
        if ( !v20 )
          sub_1C6BC60(IsEventJoin, v23);
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
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4CB22CD & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CB22CD = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1C6BFFC(v7);
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

  if ( (byte_4CB22CF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB22CF = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1C6BFFC(v7);
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
    sub_1C6BC60(0, state);
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
  __int64 v10; // x1
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

  if ( (byte_4CB22D4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB22D4 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C6BC60(0, v10);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem((ServantListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_1C6BC60(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_44066648((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C6BC60(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C6BC60(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C6BC60(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C6BC60(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB22D3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB22D3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CB22CE & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_4CB22CE = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1C6BFFC(v7);
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

  if ( (byte_4CB22D0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB22D0 = 1;
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
    v8 = sub_1CC77DC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C6BFFC(v7);
  ServantListViewManager__DeleteContinueData(v10);
}


void ServantListViewManager_CallbackFunc___ctor(
        ServantListViewManager_CallbackFunc_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9CED4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9CE7C;
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
  if ( (byte_4CB22ED & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&ServantListViewManager_ResultKind_TypeInfo);
    byte_4CB22ED = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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