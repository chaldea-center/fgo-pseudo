void ServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ListViewSort_o *v8; // x19
  struct ServantListViewManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  ListViewSort_o *v16; // x19
  struct ServantListViewManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_59344FC & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13231/*"Servant1"*/);
    sub_21FFC50(&StringLiteral_13233/*"Servant4"*/);
    sub_21FFC50(&StringLiteral_13232/*"Servant2"*/);
    byte_59344FC = 1;
  }
  v1 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v1, (System_String_o *)StringLiteral_13231/*"Servant1"*/, 3, 0, 0);
  ServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v8, (System_String_o *)StringLiteral_13232/*"Servant2"*/, 3, 0, 0);
  static_fields = ServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->servantEquipSortInfo,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v16, (System_String_o *)StringLiteral_13233/*"Servant4"*/, 2, 0, 0);
  v17 = ServantListViewManager_TypeInfo->static_fields;
  v17->commandCodeSortInfo = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->commandCodeSortInfo, (int32_t)v16, v18, v19, v20, v21, v22, v23);
}


void ServantListViewManager___ctor(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantListViewManager__ChangeIconScale(ServantListViewManager_o *this, const MethodInfo *method)
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
    *((_DWORD *)p_seed + 81) = v11;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0),
        ServantListViewManager__ModifyList(this, 1, v14),
        ServantListViewManager__SetMode_41703176(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
    sub_21FFECC(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void ServantListViewManager__CreateList(
        ServantListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x24
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  DataManager_o *v18; // x22
  int32_t CommandCodeFrameMax; // w20
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x24
  ServantListViewManager_c *v28; // x8
  __int64 v29; // x26
  struct ListViewSort_o *servantEquipSortInfo; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  ServantListViewManager_c *v33; // x8
  DataManager_o *v34; // x23
  __int64 v35; // x2
  BalanceConfig_c *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  ServantListViewManager_c *v44; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x21
  __int64 v50; // x2
  __int64 v51; // x2
  Il2CppObject *v52; // x21
  __int64 v53; // x0
  struct System_Threading_CancellationTokenSource_o *v54; // x24
  unsigned __int64 v55; // x21
  __int64 v56; // x20
  System_Int64_array *v57; // x25
  System_Int64_array *v58; // x26
  UserServantEntity_o *v59; // x24
  ServantListViewItem_o *v60; // x23
  const MethodInfo *v61; // x6
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  intptr_t v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  intptr_t v71; // x8
  __int64 v72; // x2
  Il2CppObject *v73; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  unsigned __int64 v75; // x21
  UserCommandCodeEntity_o *v76; // x24
  System_Int64_array *v77; // x25
  ServantListViewItem_o *v78; // x22
  const MethodInfo *v79; // x4
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v87; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v89; // x8
  UnityEngine_Object_o *infoDataLabel; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  UILabel_o *v93; // x21
  System_String_o *v94; // x22
  Il2CppObject *v95; // x23
  Il2CppObject *v96; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v98; // x21
  __int64 v99; // x1
  const MethodInfo *v100; // x2
  UILabel_o *v101; // x22
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x1
  struct System_Threading_CancellationTokenSource_o *v104; // [xsp+0h] [xbp-A0h]
  int32_t v105; // [xsp+Ch] [xbp-94h]
  __int64 v106; // [xsp+10h] [xbp-90h]
  int32_t v108; // [xsp+20h] [xbp-80h] BYREF
  int v109; // [xsp+24h] [xbp-7Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+28h] [xbp-78h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_59344E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantListViewItem_TypeInfo);
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/);
    sub_21FFC50(&StringLiteral_3784/*"COMMAND_CODE_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12053/*"SERVANT_ALL_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12119/*"SERVANT_EQUIP_TAKE"*/);
    sub_21FFC50(&StringLiteral_3803/*"COMMAND_CODE_TAKE"*/);
    sub_21FFC50(&StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_21FFC50(&StringLiteral_12496/*"SERVANT_TAKE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_59344E5 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  userCommandCodeIdList = 0;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v10 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  switch ( kind )
  {
    case 3:
      if ( !v10 )
        goto LABEL_109;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v10, 0);
      if ( !SelfUserGame )
        goto LABEL_109;
      v34 = Instance;
      if ( !byte_59324C8 )
      {
        sub_21FFC50(&BalanceConfig_TypeInfo);
        byte_59324C8 = 1;
      }
      v36 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v35);
        v36 = BalanceConfig_TypeInfo;
      }
      CommandCodeFrameMax = v36->static_fields->CommandCodeFrameMax;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v35);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COMMAND_CODE_TAKE"*/, 0);
      v44 = ServantListViewManager_TypeInfo;
      v29 = StringLiteral_3784/*"COMMAND_CODE_EMPTY"*/;
      if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v37, v38);
        v44 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v44->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
        (int32_t)commandCodeSortInfo,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_109;
      v18 = 0;
      goto LABEL_36;
    case 1:
      if ( !MasterData_object )
        goto LABEL_109;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
      if ( !SelfUserGame )
        goto LABEL_109;
      v18 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtEquipKeep;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v31);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_EQUIP_TAKE"*/, 0);
      v33 = ServantListViewManager_TypeInfo;
      v29 = StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v32, v21);
        v33 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v33->static_fields->servantEquipSortInfo;
      goto LABEL_22;
    case 0:
      if ( !MasterData_object )
        goto LABEL_109;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
      if ( !SelfUserGame )
        goto LABEL_109;
      v18 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtKeep;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v17);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12496/*"SERVANT_TAKE"*/, 0);
      v28 = ServantListViewManager_TypeInfo;
      v29 = StringLiteral_12093/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v20, v21);
        v28 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v28->static_fields->servantSortInfo;
LABEL_22:
      this->fields.sort = servantEquipSortInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
        (int32_t)servantEquipSortInfo,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_109;
      v34 = 0;
LABEL_36:
      LODWORD(Instance->fields.writeMasterDataThread) = kind;
      ListViewSort__Load((ListViewSort_o *)Instance, 0);
      goto LABEL_38;
  }
  CommandCodeFrameMax = 0;
  v34 = 0;
  v18 = 0;
  v27 = (System_String_o *)StringLiteral_1/*""*/;
  v29 = StringLiteral_12053/*"SERVANT_ALL_EMPTY"*/;
LABEL_38:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_109;
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.seed,
    (int32_t)normalSizeSeed,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
LABEL_46:
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v11);
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_109;
    UILabel__set_text((UILabel_o *)Instance, v27, 0);
  }
  if ( !v18 )
  {
    if ( !v34 )
    {
      LODWORD(v54) = 0;
      goto LABEL_91;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_109;
    v73 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v72);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v72);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v106 = v29;
    if ( !v73 )
      goto LABEL_109;
    UserServantCommandCodeMaster__getAttachList(
      (UserServantCommandCodeMaster_o *)v73,
      &userCommandCodeIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0);
    m_CancellationTokenSource = v34->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v75 = 0;
      do
      {
        if ( v75 >= LODWORD(v34->fields.m_CancellationTokenSource) )
LABEL_110:
          sub_21FFED4(v53);
        v76 = (UserCommandCodeEntity_o *)*((_QWORD *)&v34->fields._DispLog + v75);
        v77 = userCommandCodeIdList;
        v78 = (ServantListViewItem_o *)sub_21FFEBC(ServantListViewItem_TypeInfo);
        ServantListViewItem___ctor_41719232(v78, v75, v76, v77, v79);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          goto LABEL_109;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v87 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_109;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v78,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v89 + 32) = v78;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v89 + 32), (int32_t)v78, v80, v81, v82, v83, v84, v85);
        }
      }
      while ( (unsigned int)m_CancellationTokenSource != ++v75 );
    }
    LODWORD(v54) = (_DWORD)m_CancellationTokenSource;
LABEL_89:
    v29 = v106;
    goto LABEL_91;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v52 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v51);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v51);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v106 = v29;
  if ( !v52 )
    goto LABEL_109;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v52,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    0);
  v54 = v18->fields.m_CancellationTokenSource;
  if ( (int)v54 < 1 )
    goto LABEL_89;
  v105 = CommandCodeFrameMax;
  v55 = 0;
  v56 = (unsigned int)v18->fields.m_CancellationTokenSource;
  v104 = v18->fields.m_CancellationTokenSource;
  do
  {
    if ( v55 >= LODWORD(v18->fields.m_CancellationTokenSource) )
      goto LABEL_110;
    v58 = equipIdList;
    v57 = svtIdList;
    v59 = (UserServantEntity_o *)*((_QWORD *)&v18->fields._DispLog + v55);
    v60 = (ServantListViewItem_o *)sub_21FFEBC(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor(v60, v55, v59, v57, v58, setupInfo, v61);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_109;
    v68 = Instance->fields.m_CachedPtr;
    v69 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v68 )
      goto LABEL_109;
    v70 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v60,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = v68 + 8 * v70;
      LODWORD(Instance->fields.m_CancellationTokenSource) = v70 + 1;
      *(_QWORD *)(v71 + 32) = v60;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v71 + 32), (int32_t)v60, v62, v63, v64, v65, v66, v67);
    }
    ++v55;
  }
  while ( v56 != v55 );
  CommandCodeFrameMax = v105;
  v29 = v106;
  LODWORD(v54) = (_DWORD)v104;
LABEL_91:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v50);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0, 0) )
  {
    v93 = this->fields.infoDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91, v92);
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUM_INFO"*/, 0);
    v109 = (int)v54;
    v95 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v109);
    v108 = CommandCodeFrameMax;
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v108);
    Instance = (DataManager_o *)System_String__Format_75484576(v94, v95, v96, 0);
    if ( !v93 )
      goto LABEL_109;
    UILabel__set_text(v93, (System_String_o *)Instance, 0);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v54 >= 1 )
    v98 = (System_String_o *)StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v98 = (System_String_o *)v29;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91, v92);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0) )
  {
    v101 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99, v100);
    Instance = (DataManager_o *)LocalizationManager__Get(v98, 0);
    if ( v101 )
    {
      UILabel__set_text(v101, (System_String_o *)Instance, 0);
      goto LABEL_108;
    }
LABEL_109:
    sub_21FFECC(Instance, v8);
  }
LABEL_108:
  ServantListViewManager__SetBonusFilterInfo(this, setupInfo, v100);
  ServantListViewManager__SetBonusFilterButton(this, v102);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ServantListViewManager__SetFilterButtonImage(this, v103);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_59344E1 & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    byte_59344E1 = 1;
  }
  v3 = ServantListViewManager_TypeInfo;
  if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v1, v2);
    v3 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0) )
  {
    sub_21FFECC(servantSortInfo, v1);
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

  if ( (byte_59344F1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ServantListViewManager_EndCloseSelectFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59344F1 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
    ServantListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0);
  if ( !Instance )
    sub_21FFECC(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0);
}


void ServantListViewManager__EndSelectSortKind(ServantListViewManager_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_59344F3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ServantListViewManager_EndCloseSelectSortKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59344F3 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0);
  if ( !Instance )
    sub_21FFECC(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantListViewManager_o *v4; // x20
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
  if ( (byte_59344F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantListViewManager_o *)sub_21FFC50(&ServantListViewItem_TypeInfo);
    byte_59344F8 = 1;
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
      this = (ServantListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (ServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v8,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (ServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0) == svtId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_19:
    sub_21FFECC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t ServantListViewManager__GetCommandCodeAmountSortValue(
        ServantListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int64_t v7; // x21
  int32_t v8; // w22
  __int64 naturalAligment; // x10

  v4 = this;
  if ( (byte_59344F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantListViewManager_o *)sub_21FFC50(&ServantListViewItem_TypeInfo);
    byte_59344F9 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      this = (ServantListViewManager_o *)v4->fields.itemList;
      if ( !this )
        break;
      this = (ServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)this,
                                           v8,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (ServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v8;
      if ( ServantListViewItem__get_CommandCodeId((ServantListViewItem_o *)this, *(const MethodInfo **)&commandCodeId) == commandCodeId )
        ++v7;
      if ( size == v8 )
        return v7;
    }
LABEL_16:
    sub_21FFECC(this, *(_QWORD *)&commandCodeId);
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

  if ( (byte_59344E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&ServantListViewItem_TypeInfo);
    byte_59344E8 = 1;
  }
  result = (ServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_21FFECC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


bool ServantListViewManager__GetSwapChoiceList(
        ServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  ServantListViewItem_c *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x9
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v25; // x0
  __int64 v26; // x8
  __int128 v27; // q0
  __int128 v28; // q1
  int v29; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x8
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  __int128 v36; // q0
  __int128 v37; // q1
  int v38; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v39; // x0
  __int128 v40; // q0
  __int128 v41; // q1
  int v42; // w8
  struct System_Int64_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  int v46; // w21
  System_Int64_array *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Int64_array *v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  bool result; // w0
  CharaGraphListMenu_o *v62; // x0
  System_String_o *v63; // x1
  const MethodInfo *v64; // x2
  _OWORD v65[2]; // [xsp+10h] [xbp-100h] BYREF
  _OWORD v66[2]; // [xsp+30h] [xbp-E0h] BYREF
  _OWORD v67[2]; // [xsp+50h] [xbp-C0h] BYREF
  _OWORD v68[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v69; // [xsp+90h] [xbp-80h]
  __int128 v70; // [xsp+A0h] [xbp-70h]

  if ( (byte_59344EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantListViewItem_TypeInfo);
    byte_59344EA = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_47;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_47;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_47;
      v10 = ServantListViewItem_TypeInfo;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
      {
        v62 = (CharaGraphListMenu_o *)sub_220024C(Item, ServantListViewItem_TypeInfo, v11, v12);
        CharaGraphListMenu__EndStatusSync(v62, v63, v64);
        return result;
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 289) )
      {
        if ( *(_BYTE *)(Item + 247) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          v69 = v22;
          v70 = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              ServantListViewItem_TypeInfo,
              v11);
          v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v68;
          v68[0] = v69;
          v68[1] = v70;
LABEL_22:
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(v25, 0);
          if ( !v8 )
            goto LABEL_47;
          items = v8->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_47;
          v32 = v8->fields._size;
          v10 = (ServantListViewItem_c *)Item;
          if ( (unsigned int)v32 >= LODWORD(items->max_length) )
          {
            v34 = v31[4];
            v35 = v8;
LABEL_39:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              (int64_t)v10,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v34 + 192) + 112LL));
            continue;
          }
          v33 = &items->obj.klass + v32;
          v8->fields._size = v32 + 1;
          goto LABEL_37;
        }
        v36 = *(_OWORD *)(v21 + 16);
        v37 = *(_OWORD *)(v21 + 32);
        v38 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        v69 = v36;
        v70 = v37;
        if ( !v38 )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            ServantListViewItem_TypeInfo,
            v11);
        v39 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v67;
        v67[0] = v69;
        v67[1] = v70;
      }
      else
      {
        v26 = *(_QWORD *)(Item + 152);
        if ( !v26 || !*(_BYTE *)(Item + 289) )
          continue;
        if ( *(_BYTE *)(Item + 247) )
        {
          v27 = *(_OWORD *)(v26 + 16);
          v28 = *(_OWORD *)(v26 + 32);
          v29 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          v69 = v27;
          v70 = v28;
          if ( !v29 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              ServantListViewItem_TypeInfo,
              v11);
          v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v66;
          v66[0] = v69;
          v66[1] = v70;
          goto LABEL_22;
        }
        v40 = *(_OWORD *)(v26 + 16);
        v41 = *(_OWORD *)(v26 + 32);
        v42 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        v69 = v40;
        v70 = v41;
        if ( !v42 )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            ServantListViewItem_TypeInfo,
            v11);
        v39 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v65;
        v65[0] = v69;
        v65[1] = v70;
      }
      Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(v39, 0);
      if ( !v7 )
        goto LABEL_47;
      v43 = v7->fields._items;
      v44 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v43 )
        goto LABEL_47;
      v45 = v7->fields._size;
      v10 = (ServantListViewItem_c *)Item;
      if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
      {
        v34 = v44[4];
        v35 = v7;
        goto LABEL_39;
      }
      v33 = &v43->obj.klass + v45;
      v7->fields._size = v45 + 1;
LABEL_37:
      v33[4] = (Il2CppClass *)v10;
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_47:
    sub_21FFECC(Item, v10);
  v46 = v8->fields._size + v7->fields._size;
  if ( v46 < 1 )
  {
    *choiceList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, 0, v11, v12, v13, v14, v15, v16);
    v54 = 0;
  }
  else
  {
    v47 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v47;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)choiceList, (int32_t)v47, v48, v49, v50, v51, v52, v53);
    v54 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unchoiceList = v54;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unchoiceList, (int32_t)v54, v55, v56, v57, v58, v59, v60);
  return v46 > 0;
}


bool ServantListViewManager__GetSwapLockList(
        ServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x22
  System_Collections_Generic_List_long__o *v8; // x23
  int64_t Item; // x0
  ServantListViewItem_c *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  int32_t v19; // w24
  __int64 naturalAligment; // x9
  __int64 v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  int v24; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v25; // x0
  __int64 v26; // x8
  __int128 v27; // q0
  __int128 v28; // q1
  int v29; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x8
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  __int128 v36; // q0
  __int128 v37; // q1
  int v38; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v39; // x0
  __int128 v40; // q0
  __int128 v41; // q1
  int v42; // w8
  struct System_Int64_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  int v46; // w21
  System_Int64_array *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Int64_array *v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  ServantListViewManager_o *v62; // x0
  System_Int64_array **v63; // x1
  System_Int64_array **v64; // x2
  const MethodInfo *v65; // x3
  _OWORD v66[2]; // [xsp+10h] [xbp-100h] BYREF
  _OWORD v67[2]; // [xsp+30h] [xbp-E0h] BYREF
  _OWORD v68[2]; // [xsp+50h] [xbp-C0h] BYREF
  _OWORD v69[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v70; // [xsp+90h] [xbp-80h]
  __int128 v71; // [xsp+A0h] [xbp-70h]

  if ( (byte_59344E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantListViewItem_TypeInfo);
    byte_59344E9 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_47;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    do
    {
      Item = (int64_t)this->fields.itemList;
      if ( !Item )
        goto LABEL_47;
      Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        v19,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Item )
        goto LABEL_47;
      v10 = ServantListViewItem_TypeInfo;
      naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
      {
        v62 = (ServantListViewManager_o *)sub_220024C(Item, ServantListViewItem_TypeInfo, v11, v12);
        return ServantListViewManager__GetSwapChoiceList(v62, v63, v64, v65);
      }
      v21 = *(_QWORD *)(Item + 120);
      if ( v21 && *(_BYTE *)(Item + 288) )
      {
        if ( *(_BYTE *)(Item + 246) )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_OWORD *)(v21 + 32);
          v24 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          v70 = v22;
          v71 = v23;
          if ( !v24 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              ServantListViewItem_TypeInfo,
              v11);
          v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v69;
          v69[0] = v70;
          v69[1] = v71;
LABEL_22:
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(v25, 0);
          if ( !v8 )
            goto LABEL_47;
          items = v8->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_47;
          v32 = v8->fields._size;
          v10 = (ServantListViewItem_c *)Item;
          if ( (unsigned int)v32 >= LODWORD(items->max_length) )
          {
            v34 = v31[4];
            v35 = v8;
LABEL_39:
            System_Collections_Generic_List_long___AddWithResize(
              v35,
              (int64_t)v10,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v34 + 192) + 112LL));
            continue;
          }
          v33 = &items->obj.klass + v32;
          v8->fields._size = v32 + 1;
          goto LABEL_37;
        }
        v36 = *(_OWORD *)(v21 + 16);
        v37 = *(_OWORD *)(v21 + 32);
        v38 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        v70 = v36;
        v71 = v37;
        if ( !v38 )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            ServantListViewItem_TypeInfo,
            v11);
        v39 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v68;
        v68[0] = v70;
        v68[1] = v71;
      }
      else
      {
        v26 = *(_QWORD *)(Item + 152);
        if ( !v26 || !*(_BYTE *)(Item + 288) )
          continue;
        if ( *(_BYTE *)(Item + 246) )
        {
          v27 = *(_OWORD *)(v26 + 16);
          v28 = *(_OWORD *)(v26 + 32);
          v29 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          v70 = v27;
          v71 = v28;
          if ( !v29 )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
              ServantListViewItem_TypeInfo,
              v11);
          v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v67;
          v67[0] = v70;
          v67[1] = v71;
          goto LABEL_22;
        }
        v40 = *(_OWORD *)(v26 + 16);
        v41 = *(_OWORD *)(v26 + 32);
        v42 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        v70 = v40;
        v71 = v41;
        if ( !v42 )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            ServantListViewItem_TypeInfo,
            v11);
        v39 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v66;
        v66[0] = v70;
        v66[1] = v71;
      }
      Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(v39, 0);
      if ( !v7 )
        goto LABEL_47;
      v43 = v7->fields._items;
      v44 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v43 )
        goto LABEL_47;
      v45 = v7->fields._size;
      v10 = (ServantListViewItem_c *)Item;
      if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
      {
        v34 = v44[4];
        v35 = v7;
        goto LABEL_39;
      }
      v33 = &v43->obj.klass + v45;
      v7->fields._size = v45 + 1;
LABEL_37:
      v33[4] = (Il2CppClass *)v10;
    }
    while ( size != ++v19 );
  }
  if ( !v7 || !v8 )
LABEL_47:
    sub_21FFECC(Item, v10);
  v46 = v8->fields._size + v7->fields._size;
  if ( v46 < 1 )
  {
    *lockList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, 0, v11, v12, v13, v14, v15, v16);
    v54 = 0;
  }
  else
  {
    v47 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v47;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lockList, (int32_t)v47, v48, v49, v50, v51, v52, v53);
    v54 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  }
  *unlockList = v54;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)unlockList, (int32_t)v54, v55, v56, v57, v58, v59, v60);
  return v46 > 0;
}


void ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_59344E2 & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    byte_59344E2 = 1;
  }
  v3 = ServantListViewManager_TypeInfo;
  if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, v1, v2);
    v3 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0)
    || (ListViewSort__InitLoad(servantSortInfo, 0),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0) )
  {
    sub_21FFECC(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0);
}


void ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  ServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w23
  int32_t v7; // w21
  __int64 v8; // x2
  ServantListViewManager_o *v9; // x22
  __int64 naturalAligment; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  __int128 v12; // q0
  __int128 v13; // q1
  int v14; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-70h]

  v4 = this;
  if ( (byte_59344EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantListViewManager_o *)sub_21FFC50(&ServantListViewItem_TypeInfo);
    byte_59344EF = 1;
  }
  if ( userSvtId >= 1 )
  {
    itemList = v4->fields.itemList;
    if ( !itemList )
      goto LABEL_18;
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        this = (ServantListViewManager_o *)v4->fields.itemList;
        if ( !this )
          break;
        this = (ServantListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             v7,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !this )
          break;
        v9 = this;
        naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (ServantListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
        {
          break;
        }
        dragParentObject = this->fields.dragParentObject;
        if ( dragParentObject )
        {
          v12 = *(_OWORD *)&dragParentObject->fields.m_CachedPtr;
          v13 = *(_OWORD *)&dragParentObject[1].monitor;
          v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v16.fields.currentCryptoKey = v12;
          *(_OWORD *)&v16.fields.fakeValue = v13;
          if ( !v14 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId, v8);
          v15 = v16;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v15, 0) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)v4, HIDWORD(v9->fields.m_CachedPtr), 0);
        }
        if ( size == ++v7 )
          return;
      }
LABEL_18:
      sub_21FFECC(this, userSvtId);
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
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v7; // x21
  __int64 v8; // x2
  Il2CppObject *v9; // x22
  MethodInfo *v10; // x2
  int32_t kind; // w8
  int64_t v12; // x21
  int64_t v13; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w25
  unsigned __int64 v16; // x29
  unsigned __int64 v17; // x26
  __int64 v18; // x8
  UserServantEntity_o **v19; // x26
  __int64 v20; // t1
  __int128 v21; // q0
  __int128 v22; // q1
  int v23; // w8
  int64_t v24; // x21
  int32_t v25; // w23
  ServantListViewItem_o *v26; // x24
  __int64 naturalAligment; // x10
  __int64 v28; // x8
  __int128 v29; // q0
  __int128 v30; // q1
  int v31; // w8
  const MethodInfo *v32; // x1
  unsigned __int64 v33; // x20
  unsigned __int64 v34; // x26
  __int64 v35; // x8
  __int64 *v36; // x26
  __int64 v37; // t1
  __int128 v38; // q0
  __int128 v39; // q1
  int v40; // w8
  int64_t v41; // x22
  int32_t v42; // w24
  int64_t v43; // x23
  __int64 v44; // x10
  __int64 v45; // x8
  __int128 v46; // q0
  __int128 v47; // q1
  int v48; // w8
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  const MethodInfo *v55; // x1
  int32_t v56; // w20
  Il2CppObject *Item; // x0
  __int64 v58; // x2
  ListViewItem_o *v59; // x21
  __int64 v60; // x10
  UnityEngine_Object_o *klass; // x22
  __int64 v63; // [xsp+18h] [xbp-118h]
  __int64 v64; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C0h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_59344E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59344E6 = 1;
  }
  equipIdList = 0;
  svtIdList = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v8);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v8);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_85;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v9,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0);
  kind = this->fields.kind;
  if ( kind == 3 )
  {
    if ( !v7 )
      goto LABEL_85;
    Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v7, 0);
    v12 = Instance;
    v13 = 0;
  }
  else
  {
    if ( kind == 1 )
    {
      if ( !MasterData_object )
        goto LABEL_85;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0);
    }
    else
    {
      v12 = 0;
      v13 = 0;
      if ( kind )
        goto LABEL_23;
      if ( !MasterData_object )
        goto LABEL_85;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0);
    }
    v13 = Instance;
    v12 = 0;
  }
LABEL_23:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_85;
  size = itemList->fields._size;
  if ( v13 )
  {
    v63 = *(unsigned int *)(v13 + 24);
    if ( *(int *)(v13 + 24) >= 1 )
    {
      v16 = 0;
      while ( v16 < *(unsigned int *)(v13 + 24) )
      {
        v17 = v13 + 8 * v16;
        v20 = *(_QWORD *)(v17 + 32);
        v19 = (UserServantEntity_o **)(v17 + 32);
        v18 = v20;
        if ( !v20 )
          goto LABEL_85;
        v21 = *(_OWORD *)(v18 + 16);
        v22 = *(_OWORD *)(v18 + 32);
        v23 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v69.fields.currentCryptoKey = v21;
        *(_OWORD *)&v69.fields.fakeValue = v22;
        if ( !v23 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v10);
        v68 = v69;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v68, 0);
        if ( size >= 1 )
        {
          v24 = Instance;
          v25 = 0;
          while ( 1 )
          {
            Instance = (int64_t)this->fields.itemList;
            if ( !Instance )
              goto LABEL_85;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v25,
                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Instance )
              goto LABEL_85;
            v26 = (ServantListViewItem_o *)Instance;
            naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)naturalAligment
              || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * naturalAligment - 8) != ServantListViewItem_TypeInfo )
            {
              goto LABEL_85;
            }
            v28 = *(_QWORD *)(Instance + 120);
            if ( v28 )
            {
              v29 = *(_OWORD *)(v28 + 16);
              v30 = *(_OWORD *)(v28 + 32);
              v31 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v69.fields.currentCryptoKey = v29;
              *(_OWORD *)&v69.fields.fakeValue = v30;
              if ( !v31 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v10);
              v67 = v69;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v67, 0);
              if ( Instance == v24 )
                break;
            }
            if ( size == ++v25 )
              goto LABEL_46;
          }
          if ( v16 >= *(unsigned int *)(v13 + 24) )
            goto LABEL_86;
          ServantListViewItem__ModifyUserServantEntity(v26, *v19, v10);
          if ( !isIconSizeChange )
          {
            ServantListViewItem__ModifyLockItem(v26, v5);
            ServantListViewItem__ModifyChoiceItem(v26, v32);
          }
        }
LABEL_46:
        if ( ++v16 == v63 )
          goto LABEL_71;
      }
      goto LABEL_86;
    }
  }
  else if ( v12 )
  {
    v64 = *(unsigned int *)(v12 + 24);
    if ( *(int *)(v12 + 24) >= 1 )
    {
      v33 = 0;
      while ( v33 < *(unsigned int *)(v12 + 24) )
      {
        v34 = v12 + 8 * v33;
        v37 = *(_QWORD *)(v34 + 32);
        v36 = (__int64 *)(v34 + 32);
        v35 = v37;
        if ( !v37 )
          goto LABEL_85;
        v38 = *(_OWORD *)(v35 + 16);
        v39 = *(_OWORD *)(v35 + 32);
        v40 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v69.fields.currentCryptoKey = v38;
        *(_OWORD *)&v69.fields.fakeValue = v39;
        if ( !v40 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v10);
        v66 = v69;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v66, 0);
        if ( size >= 1 )
        {
          v41 = Instance;
          v42 = 0;
          while ( 1 )
          {
            Instance = (int64_t)this->fields.itemList;
            if ( !Instance )
              goto LABEL_85;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v42,
                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Instance )
              goto LABEL_85;
            v43 = Instance;
            v44 = ServantListViewItem_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v44
              || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v44 - 8) != ServantListViewItem_TypeInfo )
            {
              goto LABEL_85;
            }
            v45 = *(_QWORD *)(Instance + 152);
            if ( v45 )
            {
              v46 = *(_OWORD *)(v45 + 16);
              v47 = *(_OWORD *)(v45 + 32);
              v48 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v69.fields.currentCryptoKey = v46;
              *(_OWORD *)&v69.fields.fakeValue = v47;
              if ( !v48 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v10);
              v65 = v69;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v65, 0);
              if ( Instance == v41 )
                break;
            }
            if ( size == ++v42 )
              goto LABEL_70;
          }
          if ( v33 >= *(unsigned int *)(v12 + 24) )
            break;
          v54 = *v36;
          *(_QWORD *)(v43 + 152) = *v36;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v43 + 152),
            v54,
            (System_String_o *)v10,
            v49,
            v50,
            v51,
            v52,
            v53);
          if ( !isIconSizeChange )
          {
            ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v43, v5);
            ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v43, v55);
          }
        }
LABEL_70:
        if ( ++v33 == v64 )
          goto LABEL_71;
      }
LABEL_86:
      sub_21FFED4(Instance);
    }
  }
LABEL_71:
  if ( isIconSizeChange && size >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v56,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v59 = (ListViewItem_o *)Item;
        v60 = ServantListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment >= (unsigned int)v60
          && (ServantListViewItem_c *)Item->klass->_2.typeHierarchy[v60 - 1] == ServantListViewItem_TypeInfo )
        {
          klass = (UnityEngine_Object_o *)Item[7].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v58);
          if ( !UnityEngine_Object__op_Equality(klass, 0, 0) )
          {
            Instance = (int64_t)v59->fields.viewObject;
            if ( !Instance )
              break;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v59, this->fields.seed, 0);
          }
        }
      }
      if ( size == ++v56 )
        return;
    }
LABEL_85:
    sub_21FFECC(Instance, v5);
  }
}


void ServantListViewManager__OnClickBonusFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_59344F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantListViewManager_OnClickBonusFilterKind__);
    byte_59344F6 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(0, v5);
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
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v8; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  CommonUI_o *v12; // x0
  int32_t v13; // w1

  if ( (byte_59344F0 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantListViewManager_EndSelectFilterKind__);
    sub_21FFC50(&Method_ServantListViewManager_OnClickFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59344F0 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectFilterKind__,
      0);
    if ( kind == 1 )
    {
      if ( !v8 )
        goto LABEL_16;
      v12 = v8;
      v13 = 5;
    }
    else
    {
      if ( !kind )
      {
        if ( v8 )
        {
          CommonUI__OpenServantFilterSelectMenu(v8, 0, sort, v9, -1, 0);
          return;
        }
LABEL_16:
        sub_21FFECC(v10, v11);
      }
      if ( !v8 )
        goto LABEL_16;
      v12 = v8;
      v13 = 6;
    }
    CommonUI__OpenServantFilterSelectMenu_37298956(v12, v13, sort, (ListViewManager_o *)this, v9, -1, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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

  if ( (byte_59344F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantListViewManager_OnClickSortAscendingOrder__);
    byte_59344F4 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    sort = this->fields.sort;
    if ( !sort )
      sub_21FFECC(v5, v6);
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

  if ( (byte_59344F2 & 1) == 0 )
  {
    sub_21FFC50(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ServantListViewManager_EndSelectSortKind__);
    sub_21FFC50(&Method_ServantListViewManager_OnClickSortKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59344F2 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0);
    if ( !v8 )
      sub_21FFECC(v10, v11);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_21FFBF4(
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
      sub_21FFECC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      Index,
      callbackFunc->fields.method);
  }
}


void ServantListViewManager__OnMoveEnd(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_59344EE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59344EE = 1;
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
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_14;
      v15 = this->fields.scrollView;
      if ( v15 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
        v15 = this->fields.scrollView;
        if ( v15 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v15->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                  v15,
                  v15->klass->vtable._6_get_shouldMoveVertically.method)
              & 1) == 0 )
            goto LABEL_14;
          v15 = this->fields.scrollView;
          if ( v15 )
          {
            UIScrollView__UpdatePosition(v15, 0);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
            if ( callbackFunc2 )
              ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
                callbackFunc2->fields.method_code,
                callbackFunc2->fields.method);
            return;
          }
        }
      }
      sub_21FFECC(v15, v8);
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
  const MethodInfo_4450604 *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59344EC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_21FFC50(&Method_ServantListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59344EC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v13, v14);
      ServantListViewObject__Init_41739276((ServantListViewObject_o *)current, mode, v12, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantListViewManager__RequestListObject_41732800(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59344ED & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_21FFC50(&Method_ServantListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59344ED = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      ServantListViewObject__Init_41739360((ServantListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


void ServantListViewManager__SaveSortInfo(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantListViewManager_c *v3; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8

  if ( (byte_59344E7 & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_TypeInfo);
    byte_59344E7 = 1;
  }
  v3 = ServantListViewManager_TypeInfo;
  if ( !*(&ServantListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo, method, v2);
    v3 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_22;
    }
    ListViewSort__Save(servantSortInfo, 0);
    v3 = ServantListViewManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = ServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v3->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method, v2);
      servantEquipSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_22;
    }
    ListViewSort__Save(servantEquipSortInfo, 0);
    v3 = ServantListViewManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = ServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v3->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( *(&v3->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(v3, method, v2),
          (commandCodeSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) != 0) )
    {
      ListViewSort__Save(commandCodeSortInfo, 0);
      return;
    }
LABEL_22:
    sub_21FFECC(v5, v6);
  }
}


void ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_59344F7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59344F7 = 1;
  }
  bonusFilterKindButton = (UnityEngine_Object_o *)this->fields.bonusFilterKindButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
          v5 = this->fields.kind != 3;
          if ( gameObject )
          {
LABEL_10:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v5, 0);
            return;
          }
        }
        else
        {
          v5 = 0;
          if ( gameObject )
            goto LABEL_10;
        }
      }
    }
    sub_21FFECC(gameObject, v5);
  }
}


void ServantListViewManager__SetBonusFilterInfo(
        ServantListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t kind; // w8
  ListViewSort_o *sort; // x0
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantFilterIds; // x5
  System_Int32_array *servantEquipFilterEventIds; // x3
  struct ListViewSort_o *v14; // x20
  bool v15; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

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
      servantFilterIds = setupInfo->fields.servantFilterIds;
      servantEquipFilterEventCampaignIds = setupInfo->fields.servantFilterEventCampaignIds;
      servantEquipFilterEventIds = setupInfo->fields.servantFilterEventIds;
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
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
    sub_21FFECC(sort, setupInfo);
  }
  this->fields.alignedBonusFilterInfos = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.alignedBonusFilterInfos,
    0,
    (System_String_o *)method,
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

  if ( (byte_59344FA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18217/*"btn_filter_on"*/);
    sub_21FFC50(&StringLiteral_18216/*"btn_filter"*/);
    byte_59344FA = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0),
        !filterSprite) )
  {
    sub_21FFECC(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_18216/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_18217/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0);
}


void ServantListViewManager__SetMode(
        ServantListViewManager_o *this,
        int32_t mode,
        ServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_41703176(this, mode, v10);
}


void ServantListViewManager__SetMode_41703176(ServantListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantListViewManager__RequestListObject_41732800(this, mode + 1, v5);
}


void ServantListViewManager__SetMode_41732748(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_41703176(this, mode, v10);
}


void ServantListViewManager__SetObjectItem(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_59344EB & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewObject_TypeInfo);
    byte_59344EB = 1;
  }
  if ( obj
    && (naturalAligment = ServantListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantListViewObject_TypeInfo )
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
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ServantListViewObject__Init_41738488((ServantListViewObject_o *)v7, v8, 0);
}


void ServantListViewManager__SetSortButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ListViewSort_o *sort; // x0
  UILabel_o *v8; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  __int64 v10; // x2
  struct ListViewSort_o *v11; // x8
  int32_t sortKind; // w9
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x9
  System_String_o **v16; // x10
  System_String_o **v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v20; // x20

  if ( (byte_59344F5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18253/*"btn_sort_up"*/);
    sub_21FFC50(&StringLiteral_18357/*"btn_txt_up"*/);
    sub_21FFC50(&StringLiteral_18306/*"btn_txt_new"*/);
    sub_21FFC50(&StringLiteral_18296/*"btn_txt_down"*/);
    sub_21FFC50(&StringLiteral_18314/*"btn_txt_old"*/);
    sub_21FFC50(&StringLiteral_18250/*"btn_sort_down"*/);
    byte_59344F5 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v8 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v8 )
      goto LABEL_41;
    UILabel__set_text(v8, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v11 = this->fields.sort;
    if ( !v11 )
      goto LABEL_41;
    sortKind = v11->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v13 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18314/*"btn_txt_old"*/ : &StringLiteral_18306/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v13, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
      v16 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)(v11->fields.isAscendingOrder ? &StringLiteral_18357/*"btn_txt_up"*/ : &StringLiteral_18296/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v17, 0);
      v14 = this->fields.sort;
      if ( !v14 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)&StringLiteral_18253/*"btn_sort_up"*/;
      v16 = (System_String_o **)&StringLiteral_18250/*"btn_sort_down"*/;
    }
    if ( v14->fields.isAscendingOrder )
      v18 = v15;
    else
      v18 = v16;
    UISprite__set_spriteName((UISprite_o *)sort, *v18, 0);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v20 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(sort, this->fields.alignedBonusFilterInfos, 0, 0);
      if ( v20 )
      {
        UILabel__set_text(v20, (System_String_o *)sort, 0);
        return;
      }
LABEL_41:
      sub_21FFECC(sort, v5);
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
  void *monitor; // x25
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x9
  _OWORD *v15; // x8
  __int128 v16; // q0
  __int128 v17; // q1
  int v18; // w8
  __int64 v19; // x1
  UserServantEntity_o *v20; // x0
  __int64 v21; // x1
  UserServantEntity_o *v22; // x0
  __int64 v23; // x1
  UserServantEntity_o *v24; // x0
  __int64 v25; // x1
  UserServantEntity_o *v26; // x0
  __int64 v27; // x1
  bool v28; // w8
  char v29; // w8
  UserServantEntity_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  __int64 v33; // [xsp+40h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o *v34; // [xsp+48h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+50h] [xbp-60h] BYREF

  if ( (byte_59344FB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&ServantListViewItem_TypeInfo);
    byte_59344FB = 1;
  }
  memset(&v35, 0, sizeof(v35));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0) )
  {
    sub_21FFECC(SelfUserGame, v6);
  }
  monitor = v7[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    SelfUserGame,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v35.fields._current = (Il2CppObject *)v32.fields.fakeValue;
  *(_OWORD *)&v35.fields._list = *(_OWORD *)&v32.fields.currentCryptoKey;
  v33 = 0;
  v34 = &v35;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v35,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v9 & 1) == 0 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      goto LABEL_31;
    naturalAligment = ServantListViewItem_TypeInfo->_2.naturalAligment;
    if ( v35.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantListViewItem_c *)v35.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantListViewItem_TypeInfo )
    {
      v9 = sub_220024C(v35.fields._current, ServantListViewItem_TypeInfo, v11, v12);
LABEL_31:
      sub_21FFECC(v9, v10);
    }
    v15 = v35.fields._current[7].monitor;
    if ( !v15 )
    {
      BYTE2(v35.fields._current[15].monitor) = 0;
LABEL_25:
      v29 = 1;
      goto LABEL_26;
    }
    v16 = v15[1];
    v17 = v15[2];
    v18 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v32.fields.currentCryptoKey = v16;
    *(_OWORD *)&v32.fields.fakeValue = v17;
    if ( !v18 )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
        ServantListViewItem_TypeInfo,
        v11);
    v31 = v32;
    BYTE2(current[15].monitor) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v31, 0) == (_QWORD)monitor;
    if ( !isPushMode )
      goto LABEL_25;
    v20 = (UserServantEntity_o *)current[7].monitor;
    if ( !v20 )
      sub_21FFECC(0, v19);
    if ( UserServantEntity__IsLeave(v20, 0) )
      goto LABEL_22;
    v22 = (UserServantEntity_o *)current[7].monitor;
    if ( !v22 )
      sub_21FFECC(0, v21);
    if ( UserServantEntity__IsEventJoin(v22, 0) )
      goto LABEL_22;
    v24 = (UserServantEntity_o *)current[7].monitor;
    if ( !v24 )
      sub_21FFECC(0, v23);
    if ( UserServantEntity__IsCombineMaterial(v24, 0) )
      goto LABEL_22;
    v26 = (UserServantEntity_o *)current[7].monitor;
    if ( !v26 )
      sub_21FFECC(0, v25);
    if ( UserServantEntity__IsStatusUp(v26, 0) )
    {
LABEL_22:
      v28 = 0;
    }
    else
    {
      v30 = (UserServantEntity_o *)current[7].monitor;
      if ( !v30 )
        sub_21FFECC(0, v27);
      v28 = !UserServantEntity__IsMaterialTd(v30, 0);
    }
    v29 = v28;
LABEL_26:
    BYTE3(current[15].monitor) = v29;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void ServantListViewManager__add_callbackFunc(
        ServantListViewManager_o *this,
        ServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantListViewManager_o *v11; // x0
  ServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59344DD & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_59344DD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v6->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantListViewManager_o *)sub_220024C(v6, ServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  ServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void ServantListViewManager__add_callbackFunc2(
        ServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59344DF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59344DF = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  ServantListViewManager__remove_callbackFunc2(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void ServantListViewManager__filterButtonState(
        ServantListViewManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_21FFECC(0, *(_QWORD *)&state);
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
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

  if ( (byte_59344E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59344E4 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem((ServantListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_ServantListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_ServantListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantListViewObject__o *ServantListViewManager__get_ObjectList(
        ServantListViewManager_o *this,
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

  if ( (byte_59344E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59344E3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_ServantListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v3;
}


void ServantListViewManager__remove_callbackFunc(
        ServantListViewManager_o *this,
        ServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59344DE & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_59344DE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v6->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantListViewManager_o *)sub_220024C(v6, ServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
  ServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void ServantListViewManager__remove_callbackFunc2(
        ServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_59344E0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59344E0 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  ServantListViewManager__DeleteContinueData(v11);
}


void ServantListViewManager_CallbackFunc___ctor(
        ServantListViewManager_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF2A30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF29D8;
}


System_IAsyncResult_o *ServantListViewManager_CallbackFunc__BeginInvoke(
        ServantListViewManager_CallbackFunc_o *this,
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
  if ( (byte_59344FD & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_ResultKind_TypeInfo);
    byte_59344FD = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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