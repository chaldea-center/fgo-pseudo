void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  ListViewSort_o *v13; // x19
  struct ServantListViewManager_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  ListViewSort_o *v21; // x19
  struct ServantListViewManager_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B62E83 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_TypeInfo, v1);
    sub_1BE4ACC(&ServantListViewManager_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_12814/*"Servant1"*/, v3);
    sub_1BE4ACC(&StringLiteral_12816/*"Servant4"*/, v4);
    sub_1BE4ACC(&StringLiteral_12815/*"Servant2"*/, v5);
    byte_4B62E83 = 1;
  }
  v6 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v6, (System_String_o *)StringLiteral_12814/*"Servant1"*/, 3, 0, 0LL);
  ServantListViewManager_TypeInfo->static_fields->servantSortInfo = v6;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ServantListViewManager_TypeInfo->static_fields,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v13, (System_String_o *)StringLiteral_12815/*"Servant2"*/, 3, 0, 0LL);
  static_fields = ServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v13;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->servantEquipSortInfo,
    (int64_t)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
  ListViewSort___ctor_41720260(v21, (System_String_o *)StringLiteral_12816/*"Servant4"*/, 2, 0, 0LL);
  v22 = ServantListViewManager_TypeInfo->static_fields;
  v22->commandCodeSortInfo = v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v22->commandCodeSortInfo, (int64_t)v21, v23, v24, v25, v26, v27, v28);
}


void __fastcall ServantListViewManager___ctor(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantListViewManager__ChangeIconScale(ServantListViewManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
    sub_1BE4A70((PartyOrganizationUtility_o *)p_seed, (int64_t)smallSizeSeed, v2, v3, v4, v5, v6, v7);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        ServantListViewManager__ModifyList(this, 1, v14),
        ServantListViewManager__SetMode_33413644(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1BE4D28(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__CreateList(
        ServantListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v6; // x1
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
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v30; // x24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  DataManager_o *v37; // x21
  int CommandCodeFrameMax; // w20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_o *v45; // x23
  ServantListViewManager_c *v46; // x8
  __int64 v47; // x26
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v49; // x1
  int v50; // w8
  DataManager_o *v51; // x22
  BalanceConfig_c *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  ServantListViewManager_c *v59; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  ServantListViewManager_c *v67; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  Il2CppObject *v73; // x22
  __int64 v74; // x0
  __int64 v75; // x1
  struct System_Threading_CancellationTokenSource_o *v76; // x24
  __int64 v77; // x22
  __int64 v78; // x28
  UserServantEntity_o *v79; // x24
  System_Int64_array *v80; // x25
  System_Int64_array *v81; // x26
  ServantListViewItem_o *v82; // x23
  const MethodInfo *v83; // x6
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  Il2CppObject *v94; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  __int64 v96; // x21
  UserCommandCodeEntity_o *v97; // x24
  System_Int64_array *v98; // x25
  ServantListViewItem_o *v99; // x23
  const MethodInfo *v100; // x4
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v110; // x8
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v112; // x21
  System_String_o *v113; // x22
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  Il2CppObject *v117; // x23
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  Il2CppObject *v121; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v123; // x21
  const MethodInfo *v124; // x2
  UILabel_o *v125; // x22
  const MethodInfo *v126; // x1
  const MethodInfo *v127; // x1
  struct System_Threading_CancellationTokenSource_o *v128; // [xsp+0h] [xbp-A0h]
  __int64 v129; // [xsp+10h] [xbp-90h]
  int v131; // [xsp+20h] [xbp-80h] BYREF
  int v132; // [xsp+24h] [xbp-7Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+28h] [xbp-78h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B62E6C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1BE4ACC(&int_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v13);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v14);
    sub_1BE4ACC(&ServantListViewManager_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&StringLiteral_11745/*"SERVANT_EQUIP_EMPTY"*/, v17);
    sub_1BE4ACC(&StringLiteral_3760/*"COMMAND_CODE_EMPTY"*/, v18);
    sub_1BE4ACC(&StringLiteral_11705/*"SERVANT_ALL_EMPTY"*/, v19);
    sub_1BE4ACC(&StringLiteral_11771/*"SERVANT_EQUIP_TAKE"*/, v20);
    sub_1BE4ACC(&StringLiteral_3779/*"COMMAND_CODE_TAKE"*/, v21);
    sub_1BE4ACC(&StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_1BE4ACC(&StringLiteral_12119/*"SERVANT_TAKE"*/, v23);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v24);
    sub_1BE4ACC(&StringLiteral_12568/*"SUM_INFO"*/, v25);
    byte_4B62E6C = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v30 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 3:
      if ( !v30 )
        goto LABEL_113;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v30, 0LL);
      if ( !SelfUserGame )
        goto LABEL_113;
      v51 = Instance;
      if ( !byte_4B61BFB )
      {
        sub_1BE4ACC(&BalanceConfig_TypeInfo, v28);
        byte_4B61BFB = 1;
      }
      v52 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      CommandCodeFrameMax = v52->static_fields->CommandCodeFrameMax;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3779/*"COMMAND_CODE_TAKE"*/, 0LL);
      v59 = ServantListViewManager_TypeInfo;
      v47 = StringLiteral_3760/*"COMMAND_CODE_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v59 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v59->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)commandCodeSortInfo,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v37 = 0LL;
      v50 = 3;
      goto LABEL_36;
    case 1:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_113;
      v37 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtEquipKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v67 = ServantListViewManager_TypeInfo;
      v47 = StringLiteral_11745/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v67 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v67->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.sort,
        (int64_t)servantEquipSortInfo,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v51 = 0LL;
      v50 = 1;
      goto LABEL_36;
    case 0:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_113;
      v37 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_TAKE"*/, 0LL);
      v46 = ServantListViewManager_TypeInfo;
      v47 = StringLiteral_11745/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v46 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v46->static_fields->servantSortInfo;
      v49 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v49, v39, v40, v41, v42, v43, v44);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v50 = 0;
      v51 = 0LL;
LABEL_36:
      LODWORD(Instance->fields.writeMasterDataThread) = v50;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      goto LABEL_38;
  }
  CommandCodeFrameMax = 0;
  v51 = 0LL;
  v45 = (System_String_o *)StringLiteral_1/*""*/;
  v47 = StringLiteral_11705/*"SERVANT_ALL_EMPTY"*/;
  v37 = 0LL;
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)normalSizeSeed, v31, v32, v33, v34, v35, v36);
LABEL_46:
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)Instance, v45, 0LL);
  }
  if ( !v37 )
  {
    if ( !v51 )
    {
      LODWORD(v76) = 0;
      goto LABEL_95;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    v94 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v28);
      byte_4B61717 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v129 = v47;
    if ( !v94 )
      goto LABEL_113;
    UserServantCommandCodeMaster__getAttachList(
      (UserServantCommandCodeMaster_o *)v94,
      &userCommandCodeIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0LL);
    m_CancellationTokenSource = v51->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      if ( (unsigned int)v51->fields.m_CancellationTokenSource )
      {
        v96 = 0LL;
        do
        {
          v97 = (UserCommandCodeEntity_o *)*((_QWORD *)&v51->fields._DispLog + v96);
          v98 = userCommandCodeIdList;
          v99 = (ServantListViewItem_o *)sub_1BE4D18(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor_33394080(v99, v96, v97, v98, v100);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_113;
          v107 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v108 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v107 )
            goto LABEL_113;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v107 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v99,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            v110 = v107 + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v110 + 32) = v99;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v110 + 32), (int64_t)v99, v101, v102, v103, v104, v105, v106);
          }
          if ( (unsigned int)m_CancellationTokenSource - 1LL == v96 )
            goto LABEL_92;
        }
        while ( ++v96 < (unsigned __int64)LODWORD(v51->fields.m_CancellationTokenSource) );
      }
LABEL_91:
      sub_1BE4D30(v74, v75);
    }
LABEL_92:
    LODWORD(v76) = (_DWORD)m_CancellationTokenSource;
LABEL_93:
    v47 = v129;
    goto LABEL_95;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v73 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v28);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v129 = v47;
  if ( !v73 )
    goto LABEL_113;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v73,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    0LL);
  v76 = v37->fields.m_CancellationTokenSource;
  if ( (int)v76 < 1 )
    goto LABEL_93;
  v128 = v37->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v128 )
    goto LABEL_91;
  v77 = 0LL;
  v78 = (unsigned int)v37->fields.m_CancellationTokenSource - 1LL;
  while ( 1 )
  {
    v79 = (UserServantEntity_o *)*((_QWORD *)&v37->fields._DispLog + v77);
    v81 = equipIdList;
    v80 = svtIdList;
    v82 = (ServantListViewItem_o *)sub_1BE4D18(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor(v82, v77, v79, v80, v81, setupInfo, v83);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_113;
    v90 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v91 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v90 )
      goto LABEL_113;
    v92 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v82,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = v90 + 8 * v92;
      LODWORD(Instance->fields.m_CancellationTokenSource) = v92 + 1;
      *(_QWORD *)(v93 + 32) = v82;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v93 + 32), (int64_t)v82, v84, v85, v86, v87, v88, v89);
    }
    if ( v78 == v77 )
      break;
    if ( ++v77 >= (unsigned __int64)LODWORD(v37->fields.m_CancellationTokenSource) )
      goto LABEL_91;
  }
  v47 = v129;
  LODWORD(v76) = (_DWORD)v128;
LABEL_95:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v112 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUM_INFO"*/, 0LL);
    v132 = (int)v76;
    v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v114, v115, v116);
    v131 = CommandCodeFrameMax;
    v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v118, v119, v120);
    Instance = (DataManager_o *)System_String__Format_62713180(v113, v117, v121, 0LL);
    if ( !v112 )
      goto LABEL_113;
    UILabel__set_text(v112, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v76 >= 1 )
    v123 = (System_String_o *)StringLiteral_11942/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v123 = (System_String_o *)v47;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v125 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get(v123, 0LL);
    if ( v125 )
    {
      UILabel__set_text(v125, (System_String_o *)Instance, 0LL);
      goto LABEL_112;
    }
LABEL_113:
    sub_1BE4D28(Instance, v28);
  }
LABEL_112:
  ServantListViewManager__SetBonusFilterInfo(this, setupInfo, v124);
  ServantListViewManager__SetBonusFilterButton(this, v126);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v127);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B62E68 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantListViewManager_TypeInfo, v1);
    byte_4B62E68 = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL) )
  {
    sub_1BE4D28(servantSortInfo, v1);
  }
  ListViewSort__DeleteContinueData(servantSortInfo, 0LL);
}


void __fastcall ServantListViewManager__DestroyList(ServantListViewManager_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *v2; // x0
  const MethodInfo *v3; // x1

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ServantListViewManager__SaveSortInfo(v2, v3);
}


void __fastcall ServantListViewManager__EndCloseSelectFilterKind(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantListViewManager__EndCloseSelectSortKind(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__EndSelectFilterKind(
        ServantListViewManager_o *this,
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

  if ( (byte_4B62E78 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B62E78 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v10, v11);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__EndSelectSortKind(
        ServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B62E7A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_ServantListViewManager_EndCloseSelectSortKind__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B62E7A = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v9, v10);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B62E7F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v6);
    byte_4B62E7F = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
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
                                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( ServantListViewItem__get_SvtId((ServantListViewItem_o *)itemList, *(const MethodInfo **)&svtId) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BE4D28(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetCommandCodeAmountSortValue(
        ServantListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v9; // w22
  int64_t v10; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B62E80 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v6);
    byte_4B62E80 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
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
                                                                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( ServantListViewItem__get_CommandCodeId(
             (ServantListViewItem_o *)itemList,
             *(const MethodInfo **)&commandCodeId) == commandCodeId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1BE4D28(itemList, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantListViewItem_o *__fastcall ServantListViewManager__GetItem(
        ServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B62E6F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v5);
    byte_4B62E6F = 1;
  }
  result = (ServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ServantListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
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


System_String_o *__fastcall ServantListViewManager__GetScaleButtonSpriteName(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BE4D28(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall ServantListViewManager__GetSwapChoiceList(
        ServantListViewManager_o *this,
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
  ServantListViewItem_c *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x9
  __int64 v28; // x8
  __int128 v29; // q0
  __int128 *v30; // x0
  __int64 v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  __int64 v37; // x8
  System_Collections_Generic_List_long__o *v38; // x0
  __int128 v39; // q0
  __int128 *v40; // x0
  __int128 v41; // q0
  struct System_Int64_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  int v45; // w21
  System_Int64_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Int64_array *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Int64_array **v60; // x0
  bool result; // w0
  ServantListViewManager_o *v62; // x0
  ListViewObject_o *v63; // x1
  ListViewItem_o *v64; // x2
  const MethodInfo *v65; // x3
  __int128 v66[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v67[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v68[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v69[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v70; // [xsp+90h] [xbp-80h]
  __int128 v71; // [xsp+A0h] [xbp-70h]

  if ( (byte_4B62E71 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v14);
    byte_4B62E71 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v17 = ServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v62 = (ServantListViewManager_o *)sub_1BE4FE8(itemList);
        ServantListViewManager__SetObjectItem(v62, v63, v64, v65);
        return result;
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 265) )
      {
        if ( *(_BYTE *)(itemList + 227) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          v70 = *(_OWORD *)(v28 + 16);
          v71 = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v69;
          v69[0] = v70;
          v69[1] = v71;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v30,
                       0LL);
          if ( !v16 )
            goto LABEL_48;
          items = v16->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v16->fields._size;
          v17 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v37 = v34[4];
            v38 = v16;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v38,
              (int64_t)v17,
              *(const MethodInfo_35D4258 **)(*(_QWORD *)(v37 + 192) + 112LL));
            goto LABEL_39;
          }
          v36 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          goto LABEL_36;
        }
        v39 = *(_OWORD *)(v28 + 32);
        v70 = *(_OWORD *)(v28 + 16);
        v71 = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v68;
        v68[0] = v70;
        v68[1] = v71;
      }
      else
      {
        v31 = *(_QWORD *)(itemList + 144);
        if ( !v31 || !*(_BYTE *)(itemList + 265) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 227) )
        {
          v32 = *(_OWORD *)(v31 + 32);
          v70 = *(_OWORD *)(v31 + 16);
          v71 = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v67;
          v67[0] = v70;
          v67[1] = v71;
          goto LABEL_21;
        }
        v41 = *(_OWORD *)(v31 + 32);
        v70 = *(_OWORD *)(v31 + 16);
        v71 = v41;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v66;
        v66[0] = v70;
        v66[1] = v71;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v40,
                   0LL);
      if ( !v15 )
        goto LABEL_48;
      v42 = v15->fields._items;
      v43 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v42 )
        goto LABEL_48;
      v44 = v15->fields._size;
      v17 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        v37 = v43[4];
        v38 = v15;
        goto LABEL_38;
      }
      v36 = &v42->obj.klass + v44;
      v15->fields._size = v44 + 1;
LABEL_36:
      v36[4] = (Il2CppClass *)v17;
LABEL_39:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v15 || !v16 )
LABEL_48:
    sub_1BE4D28(itemList, v17);
  v45 = v16->fields._size + v15->fields._size;
  if ( v45 < 1 )
  {
    *choiceList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    v60 = unchoiceList;
    v53 = 0LL;
    *unchoiceList = 0LL;
  }
  else
  {
    v46 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v46;
    sub_1BE4A70((PartyOrganizationUtility_o *)choiceList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
    v53 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v53;
    v60 = unchoiceList;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)v60, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  return v45 > 0;
}


bool __fastcall ServantListViewManager__GetSwapLockList(
        ServantListViewManager_o *this,
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
  ServantListViewItem_c *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t itemList; // x0
  int v25; // w25
  int32_t v26; // w24
  __int64 methodPtr_low; // x9
  __int64 v28; // x8
  __int128 v29; // q0
  __int128 *v30; // x0
  __int64 v31; // x8
  __int128 v32; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  __int64 v37; // x8
  System_Collections_Generic_List_long__o *v38; // x0
  __int128 v39; // q0
  __int128 *v40; // x0
  __int128 v41; // q0
  struct System_Int64_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  int v45; // w21
  System_Int64_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Int64_array *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Int64_array **v60; // x0
  ServantListViewManager_o *v62; // x0
  System_Int64_array **v63; // x1
  System_Int64_array **v64; // x2
  const MethodInfo *v65; // x3
  __int128 v66[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v67[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v68[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v69[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v70; // [xsp+90h] [xbp-80h]
  __int128 v71; // [xsp+A0h] [xbp-70h]

  if ( (byte_4B62E70 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v14);
    byte_4B62E70 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v25 = *(_DWORD *)(itemList + 24);
  if ( v25 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v26,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v17 = ServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v62 = (ServantListViewManager_o *)sub_1BE4FE8(itemList);
        return ServantListViewManager__GetSwapChoiceList(v62, v63, v64, v65);
      }
      v28 = *(_QWORD *)(itemList + 112);
      if ( v28 && *(_BYTE *)(itemList + 264) )
      {
        if ( *(_BYTE *)(itemList + 226) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          v70 = *(_OWORD *)(v28 + 16);
          v71 = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v69;
          v69[0] = v70;
          v69[1] = v71;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v30,
                       0LL);
          if ( !v16 )
            goto LABEL_48;
          items = v16->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v16->fields._size;
          v17 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v37 = v34[4];
            v38 = v16;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v38,
              (int64_t)v17,
              *(const MethodInfo_35D4258 **)(*(_QWORD *)(v37 + 192) + 112LL));
            goto LABEL_39;
          }
          v36 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          goto LABEL_36;
        }
        v39 = *(_OWORD *)(v28 + 32);
        v70 = *(_OWORD *)(v28 + 16);
        v71 = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v68;
        v68[0] = v70;
        v68[1] = v71;
      }
      else
      {
        v31 = *(_QWORD *)(itemList + 144);
        if ( !v31 || !*(_BYTE *)(itemList + 264) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 226) )
        {
          v32 = *(_OWORD *)(v31 + 32);
          v70 = *(_OWORD *)(v31 + 16);
          v71 = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v67;
          v67[0] = v70;
          v67[1] = v71;
          goto LABEL_21;
        }
        v41 = *(_OWORD *)(v31 + 32);
        v70 = *(_OWORD *)(v31 + 16);
        v71 = v41;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v66;
        v66[0] = v70;
        v66[1] = v71;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v40,
                   0LL);
      if ( !v15 )
        goto LABEL_48;
      v42 = v15->fields._items;
      v43 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v42 )
        goto LABEL_48;
      v44 = v15->fields._size;
      v17 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        v37 = v43[4];
        v38 = v15;
        goto LABEL_38;
      }
      v36 = &v42->obj.klass + v44;
      v15->fields._size = v44 + 1;
LABEL_36:
      v36[4] = (Il2CppClass *)v17;
LABEL_39:
      if ( v25 == ++v26 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v15 || !v16 )
LABEL_48:
    sub_1BE4D28(itemList, v17);
  v45 = v16->fields._size + v15->fields._size;
  if ( v45 < 1 )
  {
    *lockList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    v60 = unlockList;
    v53 = 0LL;
    *unlockList = 0LL;
  }
  else
  {
    v46 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v46;
    sub_1BE4A70((PartyOrganizationUtility_o *)lockList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
    v53 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v53;
    v60 = unlockList;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)v60, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  return v45 > 0;
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4B62E69 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantListViewManager_TypeInfo, v1);
    byte_4B62E69 = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL) )
  {
    sub_1BE4D28(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v10; // w21
  System_Collections_Generic_List_object__o *v11; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8
  Il2CppObject v14; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-70h]

  if ( (byte_4B62E76 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userSvtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v7);
    byte_4B62E76 = 1;
  }
  if ( userSvtId >= 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_17;
    size = itemList->fields._size;
    if ( size >= 1 )
    {
      v10 = 0;
      do
      {
        itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  itemList,
                                                                  v10,
                                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v11 = itemList;
        methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
        {
          break;
        }
        syncRoot = itemList[2].fields._syncRoot;
        if ( syncRoot )
        {
          v14 = syncRoot[2];
          *(Il2CppObject *)&v16.fields.currentCryptoKey = syncRoot[1];
          *(Il2CppObject *)&v16.fields.fakeValue = v14;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v15 = v16;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v15, 0LL) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v11->fields._items), 0LL);
        }
        if ( size == ++v10 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      }
      while ( itemList );
LABEL_17:
      sub_1BE4D28(itemList, userSvtId);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__ModifyList(
        ServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t Instance; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x23
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v20; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  il2cpp_array_size_t v23; // w28
  Il2CppClass **v24; // x22
  Il2CppClass *v25; // x8
  int64_t *v26; // x22
  Il2CppClass *v27; // t1
  Il2CppType byval_arg; // q0
  int64_t v29; // x21
  int32_t v30; // w23
  int64_t v31; // x24
  __int64 methodPtr_low; // x10
  __int64 v33; // x8
  __int128 v34; // q0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  const MethodInfo *v42; // x1
  unsigned int v43; // w28
  int64_t v44; // x21
  __int64 v45; // x8
  int64_t *v46; // x21
  __int64 v47; // t1
  __int128 v48; // q0
  int64_t v49; // x0
  int64_t v50; // x22
  int32_t v51; // w23
  int64_t v52; // x24
  __int64 v53; // x10
  __int64 v54; // x8
  __int128 v55; // q0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  const MethodInfo *v63; // x1
  int32_t v64; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v66; // x21
  __int64 v67; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v70; // [xsp+10h] [xbp-120h]
  int64_t v71; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v72; // [xsp+18h] [xbp-118h]
  __int64 v73; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C0h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4B62E6D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, isIconSizeChange);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserDeckMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B62E6D = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_90;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v17,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
    0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v16 )
        goto LABEL_90;
      Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v16, 0LL);
      break;
    case 1:
      if ( !MasterData_object )
        goto LABEL_90;
      ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      goto LABEL_22;
    case 0:
      if ( !MasterData_object )
        goto LABEL_90;
      ServantEquipList = UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
LABEL_22:
      v20 = ServantEquipList;
      Instance = 0LL;
      goto LABEL_25;
    default:
      Instance = 0LL;
      break;
  }
  v20 = 0LL;
LABEL_25:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_90;
  size = itemList->fields._size;
  if ( v20 )
  {
    v70 = *(_QWORD *)&v20->max_length;
    if ( (int)v70 >= 1 )
    {
      if ( (_DWORD)v70 )
      {
        v23 = 0;
        v72 = v20;
        while ( 1 )
        {
          v24 = &v20->obj.klass + (int)v23;
          v27 = v24[4];
          v26 = (int64_t *)(v24 + 4);
          v25 = v27;
          if ( !v27 )
            goto LABEL_90;
          byval_arg = v25->_1.byval_arg;
          *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v25->_1.name;
          *(Il2CppType *)&v78.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v77 = v78;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v77, 0LL);
          if ( size >= 1 )
          {
            v29 = Instance;
            v30 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v30,
                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v31 = Instance;
              methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
                || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
              {
                goto LABEL_90;
              }
              v33 = *(_QWORD *)(Instance + 112);
              if ( v33 )
              {
                v34 = *(_OWORD *)(v33 + 32);
                *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v33 + 16);
                *(_OWORD *)&v78.fields.fakeValue = v34;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v76 = v78;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v76, 0LL);
                if ( Instance == v29 )
                  break;
              }
              if ( size == ++v30 )
                goto LABEL_48;
            }
            if ( v23 >= v72->max_length )
              goto LABEL_75;
            v41 = *v26;
            *(_QWORD *)(v31 + 112) = *v26;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 112), v41, v35, v36, v37, v38, v39, v40);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v31, v14);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v31, v42);
            }
          }
LABEL_48:
          v20 = v72;
          if ( ++v23 == (_DWORD)v70 )
            goto LABEL_76;
          if ( v23 >= v72->max_length )
            goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
  }
  else if ( Instance )
  {
    v73 = *(_QWORD *)(Instance + 24);
    if ( (int)v73 >= 1 )
    {
      if ( (_DWORD)v73 )
      {
        v43 = 0;
        v71 = Instance;
        while ( 1 )
        {
          v44 = Instance + 8LL * (int)v43;
          v47 = *(_QWORD *)(v44 + 32);
          v46 = (int64_t *)(v44 + 32);
          v45 = v47;
          if ( !v47 )
            break;
          v48 = *(_OWORD *)(v45 + 32);
          *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
          *(_OWORD *)&v78.fields.fakeValue = v48;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v75 = v78;
          v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v75, 0LL);
          if ( size >= 1 )
          {
            v50 = v49;
            v51 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v51,
                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v52 = Instance;
              v53 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v53
                || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v53 - 8) != ServantListViewItem_TypeInfo )
              {
                goto LABEL_90;
              }
              v54 = *(_QWORD *)(Instance + 144);
              if ( v54 )
              {
                v55 = *(_OWORD *)(v54 + 32);
                *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v54 + 16);
                *(_OWORD *)&v78.fields.fakeValue = v55;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v74 = v78;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v74, 0LL);
                if ( Instance == v50 )
                  break;
              }
              if ( size == ++v51 )
                goto LABEL_73;
            }
            if ( v43 >= *(_DWORD *)(v71 + 24) )
              goto LABEL_75;
            v62 = *v46;
            *(_QWORD *)(v52 + 144) = *v46;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v52 + 144), v62, v56, v57, v58, v59, v60, v61);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v52, v14);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v52, v63);
            }
          }
LABEL_73:
          Instance = v71;
          if ( ++v43 == (_DWORD)v73 )
            goto LABEL_76;
          if ( v43 >= *(_DWORD *)(v71 + 24) )
            goto LABEL_75;
        }
LABEL_90:
        sub_1BE4D28(Instance, v14);
      }
LABEL_75:
      sub_1BE4D30(Instance, v14);
    }
  }
LABEL_76:
  if ( size >= 1 && isIconSizeChange )
  {
    v64 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_90;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v64,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v66 = (ListViewItem_o *)Item;
        v67 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v67
          && (ServantListViewItem_c *)Item->klass->_2.typeHierarchy[v67 - 1] == ServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (int64_t)v66->fields.viewObject;
            if ( !Instance )
              goto LABEL_90;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v66, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v64 )
        return;
    }
  }
}


void __fastcall ServantListViewManager__OnClickBonusFilterKind(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B62E7D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantListViewManager_OnClickBonusFilterKind__, method);
    byte_4B62E7D = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t kind; // w23
  Il2CppObject *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w1
  ListViewSort_o *v15; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v16; // x22

  if ( (byte_4B62E77 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantListViewManager_EndSelectFilterKind__, v3);
    sub_1BE4ACC(&Method_ServantListViewManager_OnClickFilterKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B62E77 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_ServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( kind == 1 )
          v14 = 5;
        else
          v14 = 6;
        CommonUI__OpenServantFilterSelectMenu_30880700(
          (CommonUI_o *)Instance,
          v14,
          sort,
          (ListViewManager_o *)this,
          v11,
          -1,
          0LL);
        return;
      }
    }
    else
    {
      v15 = this->fields.sort;
      v16 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu((CommonUI_o *)Instance, 0, v15, v16, -1, 0LL);
        return;
      }
    }
    sub_1BE4D28(v12, v13);
  }
}


void __fastcall ServantListViewManager__OnClickListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantListViewManager__OnClickSelectListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BE4D28(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ServantListViewManager__OnClickSortAscendingOrder(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B62E7B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4B62E7B = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BE4D28(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t kind; // w23
  Il2CppObject *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v11; // x21
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int v15; // w8
  int32_t v16; // w1

  if ( (byte_4B62E79 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ServantListViewManager_EndSelectSortKind__, v3);
    sub_1BE4ACC(&Method_ServantListViewManager_OnClickSortKind__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B62E79 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_ServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BE4D18(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1BE4D28(v13, v14);
    if ( kind == 3 )
      v15 = 6;
    else
      v15 = 4;
    if ( kind )
      v16 = v15;
    else
      v16 = 3;
    CommonUI__OpenServantSortSelectMenu(v11, v16, sort, 0, v12, 0LL);
  }
}


void __fastcall ServantListViewManager__OnLongPushListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BE4D28(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      Index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ServantListViewManager__OnMoveEnd(ServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B62E75 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62E75 = 1;
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
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_14;
      v14 = this->fields.scrollView;
      if ( v14 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
        v14 = this->fields.scrollView;
        if ( v14 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v14->klass->vtable._6_get_shouldMoveVertically.method)(
                  v14,
                  v14->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_14;
          v14 = this->fields.scrollView;
          if ( v14 )
          {
            UIScrollView__UpdatePosition(v14, 0LL);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
            if ( callbackFunc2 )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                callbackFunc2->fields.original_method_info,
                *(_QWORD *)&callbackFunc2->fields.extra_arg);
            return;
          }
        }
      }
      sub_1BE4D28(v14, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject(
        ServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B62E73 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v11);
    sub_1BE4ACC(&Method_ServantListViewManager_OnMoveEnd__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B62E73 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v19, v20);
      ServantListViewObject__Init_33414820((ServantListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_33413792(
        ServantListViewManager_o *this,
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

  if ( (byte_4B62E74 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v9);
    sub_1BE4ACC(&Method_ServantListViewManager_OnMoveEnd__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B62E74 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BE4D28(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v17, v18);
      ServantListViewObject__Init_33414904((ServantListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


void __fastcall ServantListViewManager__SaveSortInfo(ServantListViewManager_o *this, const MethodInfo *method)
{
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  __int64 v5; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8

  if ( (byte_4B62E6E & 1) == 0 )
  {
    sub_1BE4ACC(&ServantListViewManager_TypeInfo, method);
    byte_4B62E6E = 1;
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
    ListViewSort__Save(servantSortInfo, 0LL);
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
    ListViewSort__Save(servantEquipSortInfo, 0LL);
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
          (commandCodeSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) != 0LL) )
    {
      ListViewSort__Save(commandCodeSortInfo, 0LL);
      return;
    }
LABEL_22:
    sub_1BE4D28(v4, v5);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B62E7E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62E7E = 1;
  }
  bonusFilterKindButton = (UnityEngine_Object_o *)this->fields.bonusFilterKindButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bonusFilterKindButton, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      sort = this->fields.sort;
      if ( sort )
      {
        if ( sort->fields.isBonusKind )
        {
          v4 = this->fields.kind != 3;
          if ( gameObject )
          {
LABEL_10:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v4, 0LL);
            return;
          }
        }
        else
        {
          v4 = 0LL;
          if ( gameObject )
            goto LABEL_10;
        }
      }
    }
    sub_1BE4D28(gameObject, v4);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterInfo(
        ServantListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t kind; // w8
  ListViewSort_o *sort; // x0
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantFilterIds; // x5
  struct ListViewSort_o *v14; // x20
  bool v15; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

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
      servantFilterIds = 0LL;
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
                           0LL,
                           servantEquipFilterEventCampaignIds,
                           servantEquipFilterEventIds,
                           0LL,
                           servantFilterIds,
                           0,
                           0LL);
    this->fields.alignedBonusFilterInfos = AlignedBonusFilter;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
      (int64_t)AlignedBonusFilter,
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
                               0LL);
    if ( v14 )
    {
      v15 = ((unsigned __int8)sort & 1) == 0;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BE4D28(sort, setupInfo);
  }
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.alignedBonusFilterInfos,
    0LL,
    (int64_t)method,
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


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4B62E81 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17735/*"btn_filter_on"*/, method);
    sub_1BE4ACC(&StringLiteral_17734/*"btn_filter"*/, v3);
    byte_4B62E81 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BE4D28(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17734/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17735/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall ServantListViewManager__SetMode(
        ServantListViewManager_o *this,
        int32_t mode,
        ServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_33413644(this, mode, v10);
}


void __fastcall ServantListViewManager__SetMode_33413644(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantListViewManager__RequestListObject_33413792(this, mode + 1, v5);
}


void __fastcall ServantListViewManager__SetMode_33413740(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_33413644(this, mode, v10);
}


void __fastcall ServantListViewManager__SetObjectItem(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B62E72 & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_1BE4ACC(&ServantListViewObject_TypeInfo, obj);
    byte_4B62E72 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewObject_TypeInfo )
  {
    sub_1BE4D28(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantListViewObject__Init_33413572((ServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ServantListViewManager__SetSortButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v23; // x20

  if ( (byte_4B62E7C & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17765/*"btn_sort_up"*/, v3);
    sub_1BE4ACC(&StringLiteral_17856/*"btn_txt_up"*/, v4);
    sub_1BE4ACC(&StringLiteral_17809/*"btn_txt_new"*/, v5);
    sub_1BE4ACC(&StringLiteral_17799/*"btn_txt_down"*/, v6);
    sub_1BE4ACC(&StringLiteral_17816/*"btn_txt_old"*/, v7);
    sub_1BE4ACC(&StringLiteral_17762/*"btn_sort_down"*/, v8);
    byte_4B62E7C = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v12 )
      goto LABEL_41;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_41;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17816/*"btn_txt_old"*/ : &StringLiteral_17809/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17856/*"btn_txt_up"*/ : &StringLiteral_17799/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17765/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17762/*"btn_sort_down"*/;
    }
    if ( v17->fields.isAscendingOrder )
      v21 = v18;
    else
      v21 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    if ( sort->fields.isBonusKind )
    {
      v23 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v23 )
      {
        UILabel__set_text(v23, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1BE4D28(sort, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__UpdateItemDisplayState(
        ServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x8
  System_Collections_Generic_List_object__c *klass; // x23
  Il2CppObject *v14; // x26
  Il2CppObject *v15; // x28
  __int64 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  Il2CppClass *v20; // x8
  Il2CppType byval_arg; // q0
  __int64 v22; // x1
  UserServantEntity_o *v23; // x0
  __int64 v24; // x1
  _BOOL4 IsLeave; // w8
  bool v26; // w8
  Il2CppObject *v27; // x29
  UserServantEntity_o *v28; // x0
  _BOOL8 IsEventJoin; // x0
  __int64 v30; // x1
  UserServantEntity_o *v31; // x0
  UserServantEntity_o *v32; // x0
  UserServantEntity_o *v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B62E82 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BE4ACC(&ServantListViewItem_TypeInfo, v9);
    byte_4B62E82 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1BE4D28(SelfUserGame, v11);
  }
  klass = v12[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    SelfUserGame,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = 0LL;
  v15 = 0LL;
  *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
  v36.fields._current = (Il2CppObject *)v35.fields.fakeValue;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v16 & 1) == 0 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v36.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ServantListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
    {
      v16 = sub_1BE4FE8(v36.fields._current);
LABEL_40:
      sub_1BE4D28(v16, v17);
    }
    v20 = v36.fields._current[7].klass;
    if ( !v20 )
    {
      BYTE6(v36.fields._current[14].klass) = 0;
      goto LABEL_20;
    }
    byval_arg = v20->_1.byval_arg;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v20->_1.name;
    *(Il2CppType *)&v35.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v35;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v34, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v23 = (UserServantEntity_o *)current[7].klass;
      if ( !v23 )
        sub_1BE4D28(0LL, v22);
      IsLeave = UserServantEntity__IsLeave(v23, 0LL);
      if ( !IsLeave )
        v14 = current;
      if ( IsLeave )
      {
        v26 = 0;
        v27 = current;
      }
      else
      {
        v28 = (UserServantEntity_o *)current[7].klass;
        if ( !v28 )
          sub_1BE4D28(0LL, v24);
        IsEventJoin = UserServantEntity__IsEventJoin(v28, 0LL);
        if ( IsEventJoin )
          v27 = v15;
        else
          v27 = v14;
        if ( IsEventJoin )
        {
          v26 = 0;
          v27 = current;
        }
        else
        {
          v31 = (UserServantEntity_o *)current[7].klass;
          if ( !v31 )
            sub_1BE4D28(0LL, v30);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v31, 0LL);
          if ( IsEventJoin )
          {
            v26 = 0;
            v27 = v14;
          }
          else
          {
            v32 = (UserServantEntity_o *)current[7].klass;
            if ( !v32 )
              sub_1BE4D28(0LL, v30);
            IsEventJoin = UserServantEntity__IsStatusUp(v32, 0LL);
            if ( IsEventJoin )
            {
              v26 = 0;
            }
            else
            {
              v33 = (UserServantEntity_o *)current[7].klass;
              if ( !v33 )
                sub_1BE4D28(0LL, v30);
              IsEventJoin = UserServantEntity__IsMaterialTd(v33, 0LL);
              v26 = !IsEventJoin;
            }
          }
          v15 = current;
        }
        if ( !v27 )
          sub_1BE4D28(IsEventJoin, v30);
      }
      HIBYTE(v27[14].klass) = v26;
    }
    else
    {
LABEL_20:
      HIBYTE(current[14].klass) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall ServantListViewManager__add_callbackFunc(
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

  if ( (byte_4B62E64 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B62E64 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v7->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1BE4FE8(v7);
  ServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantListViewManager__add_callbackFunc2(
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

  if ( (byte_4B62E66 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B62E66 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1BE4FE8(v7);
  ServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantListViewManager__filterButtonState(
        ServantListViewManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1BE4D28(0LL, state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, Il2CppMethodPointer))filterButton->klass->vtable._14_SetState.method)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._15_OnPress.methodPtr);
}


System_Collections_Generic_List_ServantListViewObject__o *__fastcall ServantListViewManager__get_ClippingObjectList(
        ServantListViewManager_o *this,
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B62E6B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B62E6B = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BE4D28(0LL, v18);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem((ServantListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1BE4D28(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_41702652((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1BE4D28(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BE4D28(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BE4D28(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BE4D28(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantListViewObject__o *__fastcall ServantListViewManager__get_ObjectList(
        ServantListViewManager_o *this,
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B62E6A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    byte_4B62E6A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BE4D28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1BE4D28(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BE4D28(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v11;
}


void __fastcall ServantListViewManager__remove_callbackFunc(
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

  if ( (byte_4B62E65 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B62E65 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v7->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1BE4FE8(v7);
  ServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantListViewManager__remove_callbackFunc2(
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

  if ( (byte_4B62E67 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B62E67 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BE4FE8(v7);
  ServantListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager_CallbackFunc___ctor(
        ServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A22234;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A221DC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantListViewManager_CallbackFunc__BeginInvoke(
        ServantListViewManager_CallbackFunc_o *this,
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
  if ( (byte_4B62E84 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&ServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4B62E84 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v16, *(_QWORD *)&result, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall ServantListViewManager_CallbackFunc__Invoke(
        ServantListViewManager_CallbackFunc_o *this,
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