void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ListViewSort_o *v9; // x19
  struct ServantListViewManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ListViewSort_o *v13; // x19
  struct ServantListViewManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4AFE114 & 1) == 0 )
  {
    sub_1BC3008(&ListViewSort_TypeInfo, v1);
    sub_1BC3008(&ServantListViewManager_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_12593/*"Servant1"*/, v3);
    sub_1BC3008(&StringLiteral_12595/*"Servant4"*/, v4);
    sub_1BC3008(&StringLiteral_12594/*"Servant2"*/, v5);
    byte_4AFE114 = 1;
  }
  v6 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v6, (System_String_o *)StringLiteral_12593/*"Servant1"*/, 3, 0, 0LL);
  ServantListViewManager_TypeInfo->static_fields->servantSortInfo = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)ServantListViewManager_TypeInfo->static_fields, (int32_t)v6, v7, v8);
  v9 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v9, (System_String_o *)StringLiteral_12594/*"Servant2"*/, 3, 0, 0LL);
  static_fields = ServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->servantEquipSortInfo, (int32_t)v9, v11, v12);
  v13 = (ListViewSort_o *)sub_1BC3254(ListViewSort_TypeInfo);
  ListViewSort___ctor_42802648(v13, (System_String_o *)StringLiteral_12595/*"Servant4"*/, 2, 0, 0LL);
  v14 = ServantListViewManager_TypeInfo->static_fields;
  v14->commandCodeSortInfo = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v14->commandCodeSortInfo, (int32_t)v13, v15, v16);
}


void __fastcall ServantListViewManager___ctor(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantListViewManager__ChangeIconScale(ServantListViewManager_o *this, const MethodInfo *method)
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
    sub_1BC2FAC((CGThumbnailListItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        ServantListViewManager__ModifyList(this, 1, v10),
        ServantListViewManager__SetMode_34059476(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1BC3264(sort, method);
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
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  DataManager_o *v33; // x21
  int CommandCodeFrameMax; // w20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x23
  ServantListViewManager_c *v38; // x8
  __int64 v39; // x26
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v41; // x1
  int v42; // w8
  DataManager_o *v43; // x22
  BalanceConfig_c *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  ServantListViewManager_c *v47; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  ServantListViewManager_c *v51; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  Il2CppObject *v57; // x22
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  struct System_Threading_CancellationTokenSource_o *v61; // x24
  __int64 v62; // x22
  __int64 v63; // x28
  UserServantEntity_o *v64; // x24
  System_Int64_array *v65; // x25
  System_Int64_array *v66; // x26
  ServantListViewItem_o *v67; // x23
  const MethodInfo *v68; // x6
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  Il2CppObject *v75; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  __int64 v77; // x21
  UserCommandCodeEntity_o *v78; // x24
  System_Int64_array *v79; // x25
  ServantListViewItem_o *v80; // x23
  const MethodInfo *v81; // x4
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v87; // x8
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v89; // x21
  System_String_o *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x23
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v100; // x21
  const MethodInfo *v101; // x2
  UILabel_o *v102; // x22
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x1
  struct System_Threading_CancellationTokenSource_o *v105; // [xsp+0h] [xbp-A0h]
  __int64 v106; // [xsp+10h] [xbp-90h]
  int v108; // [xsp+20h] [xbp-80h] BYREF
  int v109; // [xsp+24h] [xbp-7Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+28h] [xbp-78h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4AFE0FD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&NetworkManager_TypeInfo, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v14);
    sub_1BC3008(&ServantListViewManager_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&StringLiteral_11492/*"SERVANT_EQUIP_EMPTY"*/, v17);
    sub_1BC3008(&StringLiteral_3610/*"COMMAND_CODE_EMPTY"*/, v18);
    sub_1BC3008(&StringLiteral_11452/*"SERVANT_ALL_EMPTY"*/, v19);
    sub_1BC3008(&StringLiteral_11518/*"SERVANT_EQUIP_TAKE"*/, v20);
    sub_1BC3008(&StringLiteral_3629/*"COMMAND_CODE_TAKE"*/, v21);
    sub_1BC3008(&StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_1BC3008(&StringLiteral_11890/*"SERVANT_TAKE"*/, v23);
    sub_1BC3008(&StringLiteral_1/*""*/, v24);
    sub_1BC3008(&StringLiteral_12360/*"SUM_INFO"*/, v25);
    byte_4AFE0FD = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v30 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 3:
      if ( !v30 )
        goto LABEL_113;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v30, 0LL);
      if ( !SelfUserGame )
        goto LABEL_113;
      v43 = Instance;
      if ( !byte_4AFC80E )
      {
        sub_1BC3008(&BalanceConfig_TypeInfo, v28);
        byte_4AFC80E = 1;
      }
      v44 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v44 = BalanceConfig_TypeInfo;
      }
      CommandCodeFrameMax = v44->static_fields->CommandCodeFrameMax;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3629/*"COMMAND_CODE_TAKE"*/, 0LL);
      v47 = ServantListViewManager_TypeInfo;
      v39 = StringLiteral_3610/*"COMMAND_CODE_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v47 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v47->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)commandCodeSortInfo, v45, v46);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v33 = 0LL;
      v42 = 3;
      goto LABEL_36;
    case 1:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_113;
      v33 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtEquipKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11518/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v51 = ServantListViewManager_TypeInfo;
      v39 = StringLiteral_11492/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v51 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v51->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v49, v50);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v43 = 0LL;
      v42 = 1;
      goto LABEL_36;
    case 0:
      if ( !MasterData_object )
        goto LABEL_113;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_113;
      v33 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_TAKE"*/, 0LL);
      v38 = ServantListViewManager_TypeInfo;
      v39 = StringLiteral_11492/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v38 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v38->static_fields->servantSortInfo;
      v41 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v41, v35, v36);
      Instance = (DataManager_o *)this->fields.sort;
      if ( !Instance )
        goto LABEL_113;
      v42 = 0;
      v43 = 0LL;
LABEL_36:
      LODWORD(Instance->fields.writeMasterDataThread) = v42;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      goto LABEL_38;
  }
  CommandCodeFrameMax = 0;
  v43 = 0LL;
  v37 = (System_String_o *)StringLiteral_1/*""*/;
  v39 = StringLiteral_11452/*"SERVANT_ALL_EMPTY"*/;
  v33 = 0LL;
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v31, v32);
LABEL_46:
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)Instance, v37, 0LL);
  }
  if ( !v33 )
  {
    if ( !v43 )
    {
      LODWORD(v61) = 0;
      goto LABEL_95;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_113;
    v75 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v28);
      byte_4AFC1F1 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v106 = v39;
    if ( !v75 )
      goto LABEL_113;
    UserServantCommandCodeMaster__getAttachList(
      (UserServantCommandCodeMaster_o *)v75,
      &userCommandCodeIdList,
      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
      0LL);
    m_CancellationTokenSource = v43->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      if ( (unsigned int)v43->fields.m_CancellationTokenSource )
      {
        v77 = 0LL;
        do
        {
          v78 = (UserCommandCodeEntity_o *)*((_QWORD *)&v43->fields._DispLog + v77);
          v79 = userCommandCodeIdList;
          v80 = (ServantListViewItem_o *)sub_1BC3254(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor_34076508(v80, v77, v78, v79, v81);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            goto LABEL_113;
          v84 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v85 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v84 )
            goto LABEL_113;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v84 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v80,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = v84 + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v87 + 32) = v80;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v87 + 32), (int32_t)v80, v82, v83);
          }
          if ( (unsigned int)m_CancellationTokenSource - 1LL == v77 )
            goto LABEL_92;
        }
        while ( ++v77 < (unsigned __int64)LODWORD(v43->fields.m_CancellationTokenSource) );
      }
LABEL_91:
      sub_1BC326C(v58, v59, v60);
    }
LABEL_92:
    LODWORD(v61) = (_DWORD)m_CancellationTokenSource;
LABEL_93:
    v39 = v106;
    goto LABEL_95;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  v57 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v28);
    byte_4AFC1F1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v106 = v39;
  if ( !v57 )
    goto LABEL_113;
  UserDeckMaster__getPartyList(
    (UserDeckMaster_o *)v57,
    &svtIdList,
    &equipIdList,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    0LL);
  v61 = v33->fields.m_CancellationTokenSource;
  if ( (int)v61 < 1 )
    goto LABEL_93;
  v105 = v33->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v105 )
    goto LABEL_91;
  v62 = 0LL;
  v63 = (unsigned int)v33->fields.m_CancellationTokenSource - 1LL;
  while ( 1 )
  {
    v64 = (UserServantEntity_o *)*((_QWORD *)&v33->fields._DispLog + v62);
    v66 = equipIdList;
    v65 = svtIdList;
    v67 = (ServantListViewItem_o *)sub_1BC3254(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor(v67, v62, v64, v65, v66, setupInfo, v68);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_113;
    v71 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v72 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v71 )
      goto LABEL_113;
    v73 = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v67,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = v71 + 8 * v73;
      LODWORD(Instance->fields.m_CancellationTokenSource) = v73 + 1;
      *(_QWORD *)(v74 + 32) = v67;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v74 + 32), (int32_t)v67, v69, v70);
    }
    if ( v63 == v62 )
      break;
    if ( ++v62 >= (unsigned __int64)LODWORD(v33->fields.m_CancellationTokenSource) )
      goto LABEL_91;
  }
  v39 = v106;
  LODWORD(v61) = (_DWORD)v105;
LABEL_95:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v89 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUM_INFO"*/, 0LL);
    v109 = (int)v61;
    v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109, v91, v92, v93);
    v108 = CommandCodeFrameMax;
    v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v95, v96, v97);
    Instance = (DataManager_o *)System_String__Format_62389940(v90, v94, v98, 0LL);
    if ( !v89 )
      goto LABEL_113;
    UILabel__set_text(v89, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v61 >= 1 )
    v100 = (System_String_o *)StringLiteral_11692/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v100 = (System_String_o *)v39;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v102 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get(v100, 0LL);
    if ( v102 )
    {
      UILabel__set_text(v102, (System_String_o *)Instance, 0LL);
      goto LABEL_112;
    }
LABEL_113:
    sub_1BC3264(Instance, v28);
  }
LABEL_112:
  ServantListViewManager__SetBonusFilterInfo(this, setupInfo, v101);
  ServantListViewManager__SetBonusFilterButton(this, v103);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v104);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AFE0F9 & 1) == 0 )
  {
    sub_1BC3008(&ServantListViewManager_TypeInfo, v1);
    byte_4AFE0F9 = 1;
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
    sub_1BC3264(servantSortInfo, v1);
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

  if ( (byte_4AFE109 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_ServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFE109 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1BC3264(v10, v11);
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

  if ( (byte_4AFE10B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_ServantListViewManager_EndCloseSelectSortKind__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFE10B = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1BC3264(v9, v10);
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

  if ( (byte_4AFE110 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v6);
    byte_4AFE110 = 1;
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
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BC3264(itemList, *(_QWORD *)&svtId);
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

  if ( (byte_4AFE111 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v6);
    byte_4AFE111 = 1;
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
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BC3264(itemList, *(_QWORD *)&commandCodeId);
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

  if ( (byte_4AFE100 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v5);
    byte_4AFE100 = 1;
  }
  result = (ServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1BC3264(0LL, method);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x9
  __int64 v24; // x8
  __int128 v25; // q0
  __int128 *v26; // x0
  __int64 v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  __int64 v33; // x8
  System_Collections_Generic_List_long__o *v34; // x0
  __int128 v35; // q0
  __int128 *v36; // x0
  __int128 v37; // q0
  struct System_Int64_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  int v41; // w21
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Int64_array *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  System_Int64_array **v49; // x0
  bool result; // w0
  CharaGraphListMenu_o *v51; // x0
  System_String_o *v52; // x1
  const MethodInfo *v53; // x2
  __int128 v54[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v55[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v56[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v57[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v58; // [xsp+90h] [xbp-80h]
  __int128 v59; // [xsp+A0h] [xbp-70h]

  if ( (byte_4AFE102 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v14);
    byte_4AFE102 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v17 = ServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v51 = (CharaGraphListMenu_o *)sub_1BC3524(itemList);
        CharaGraphListMenu__EndStatusSync(v51, v52, v53);
        return result;
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 281) )
      {
        if ( *(_BYTE *)(itemList + 239) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          v58 = *(_OWORD *)(v24 + 16);
          v59 = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v57;
          v57[0] = v58;
          v57[1] = v59;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v26,
                       0LL);
          if ( !v16 )
            goto LABEL_48;
          items = v16->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v16->fields._size;
          v17 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v33 = v30[4];
            v34 = v16;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v34,
              (int64_t)v17,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v33 + 192) + 112LL));
            goto LABEL_39;
          }
          v32 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          goto LABEL_36;
        }
        v35 = *(_OWORD *)(v24 + 32);
        v58 = *(_OWORD *)(v24 + 16);
        v59 = v35;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v56;
        v56[0] = v58;
        v56[1] = v59;
      }
      else
      {
        v27 = *(_QWORD *)(itemList + 144);
        if ( !v27 || !*(_BYTE *)(itemList + 281) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 239) )
        {
          v28 = *(_OWORD *)(v27 + 32);
          v58 = *(_OWORD *)(v27 + 16);
          v59 = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v55;
          v55[0] = v58;
          v55[1] = v59;
          goto LABEL_21;
        }
        v37 = *(_OWORD *)(v27 + 32);
        v58 = *(_OWORD *)(v27 + 16);
        v59 = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v54;
        v54[0] = v58;
        v54[1] = v59;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v36,
                   0LL);
      if ( !v15 )
        goto LABEL_48;
      v38 = v15->fields._items;
      v39 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v38 )
        goto LABEL_48;
      v40 = v15->fields._size;
      v17 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v40 >= v38->max_length )
      {
        v33 = v39[4];
        v34 = v15;
        goto LABEL_38;
      }
      v32 = &v38->obj.klass + v40;
      v15->fields._size = v40 + 1;
LABEL_36:
      v32[4] = (Il2CppClass *)v17;
LABEL_39:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v15 || !v16 )
LABEL_48:
    sub_1BC3264(itemList, v17);
  v41 = v16->fields._size + v15->fields._size;
  if ( v41 < 1 )
  {
    *choiceList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)choiceList, 0, v18, v19);
    v49 = unchoiceList;
    v48 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v42;
    sub_1BC2FAC((CGThumbnailListItem_o *)choiceList, (int32_t)v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    v48 = (int)v45;
    *unchoiceList = v45;
    v49 = unchoiceList;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)v49, v48, v46, v47);
  return v41 > 0;
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int64_t itemList; // x0
  int v21; // w25
  int32_t v22; // w24
  __int64 methodPtr_low; // x9
  __int64 v24; // x8
  __int128 v25; // q0
  __int128 *v26; // x0
  __int64 v27; // x8
  __int128 v28; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  __int64 v33; // x8
  System_Collections_Generic_List_long__o *v34; // x0
  __int128 v35; // q0
  __int128 *v36; // x0
  __int128 v37; // q0
  struct System_Int64_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  int v41; // w21
  System_Int64_array *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Int64_array *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  System_Int64_array **v49; // x0
  ServantListViewManager_o *v51; // x0
  System_Int64_array **v52; // x1
  System_Int64_array **v53; // x2
  const MethodInfo *v54; // x3
  __int128 v55[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v56[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v57[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v58[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v59; // [xsp+90h] [xbp-80h]
  __int128 v60; // [xsp+A0h] [xbp-70h]

  if ( (byte_4AFE101 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v14);
    byte_4AFE101 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v21 = *(_DWORD *)(itemList + 24);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v22,
                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v17 = ServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v51 = (ServantListViewManager_o *)sub_1BC3524(itemList);
        return ServantListViewManager__GetSwapChoiceList(v51, v52, v53, v54);
      }
      v24 = *(_QWORD *)(itemList + 112);
      if ( v24 && *(_BYTE *)(itemList + 280) )
      {
        if ( *(_BYTE *)(itemList + 238) )
        {
          v25 = *(_OWORD *)(v24 + 32);
          v59 = *(_OWORD *)(v24 + 16);
          v60 = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v58;
          v58[0] = v59;
          v58[1] = v60;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v26,
                       0LL);
          if ( !v16 )
            goto LABEL_48;
          items = v16->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v16->fields._size;
          v17 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v33 = v30[4];
            v34 = v16;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v34,
              (int64_t)v17,
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v33 + 192) + 112LL));
            goto LABEL_39;
          }
          v32 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          goto LABEL_36;
        }
        v35 = *(_OWORD *)(v24 + 32);
        v59 = *(_OWORD *)(v24 + 16);
        v60 = v35;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v57;
        v57[0] = v59;
        v57[1] = v60;
      }
      else
      {
        v27 = *(_QWORD *)(itemList + 144);
        if ( !v27 || !*(_BYTE *)(itemList + 280) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 238) )
        {
          v28 = *(_OWORD *)(v27 + 32);
          v59 = *(_OWORD *)(v27 + 16);
          v60 = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v56;
          v56[0] = v59;
          v56[1] = v60;
          goto LABEL_21;
        }
        v37 = *(_OWORD *)(v27 + 32);
        v59 = *(_OWORD *)(v27 + 16);
        v60 = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v55;
        v55[0] = v59;
        v55[1] = v60;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v36,
                   0LL);
      if ( !v15 )
        goto LABEL_48;
      v38 = v15->fields._items;
      v39 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v38 )
        goto LABEL_48;
      v40 = v15->fields._size;
      v17 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v40 >= v38->max_length )
      {
        v33 = v39[4];
        v34 = v15;
        goto LABEL_38;
      }
      v32 = &v38->obj.klass + v40;
      v15->fields._size = v40 + 1;
LABEL_36:
      v32[4] = (Il2CppClass *)v17;
LABEL_39:
      if ( v21 == ++v22 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v15 || !v16 )
LABEL_48:
    sub_1BC3264(itemList, v17);
  v41 = v16->fields._size + v15->fields._size;
  if ( v41 < 1 )
  {
    *lockList = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)lockList, 0, v18, v19);
    v49 = unlockList;
    v48 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v42 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v42;
    sub_1BC2FAC((CGThumbnailListItem_o *)lockList, (int32_t)v42, v43, v44);
    v45 = System_Collections_Generic_List_long___ToArray(
            v16,
            (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
    v48 = (int)v45;
    *unlockList = v45;
    v49 = unlockList;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)v49, v48, v46, v47);
  return v41 > 0;
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4AFE0FA & 1) == 0 )
  {
    sub_1BC3008(&ServantListViewManager_TypeInfo, v1);
    byte_4AFE0FA = 1;
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
    sub_1BC3264(servantSortInfo, v1);
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

  if ( (byte_4AFE107 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userSvtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v7);
    byte_4AFE107 = 1;
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
                                                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v15, 0LL) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v11->fields._items), 0LL);
        }
        if ( size == ++v10 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      }
      while ( itemList );
LABEL_17:
      sub_1BC3264(itemList, userSvtId);
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
  __int64 v18; // x2
  int32_t kind; // w8
  UserCommandCodeEntity_array *List; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  unsigned int v23; // w28
  int64_t v24; // x21
  __int64 v25; // x8
  UserServantEntity_o **v26; // x21
  __int64 v27; // t1
  __int128 v28; // q0
  int64_t v29; // x0
  int64_t v30; // x22
  int32_t v31; // w24
  int64_t v32; // x23
  __int64 methodPtr_low; // x10
  __int64 v34; // x8
  __int128 v35; // q0
  const MethodInfo *v36; // x3
  UserServantEntity_o *v37; // x22
  UserServantEntity_o *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  il2cpp_array_size_t v41; // w20
  Il2CppClass **v42; // x22
  Il2CppClass *v43; // x8
  __int64 *v44; // x22
  Il2CppClass *v45; // t1
  Il2CppType byval_arg; // q0
  int64_t v47; // x21
  int32_t v48; // w23
  int64_t v49; // x24
  __int64 v50; // x10
  __int64 v51; // x8
  __int128 v52; // q0
  const MethodInfo *v53; // x3
  __int64 v54; // x1
  const MethodInfo *v55; // x1
  int32_t v56; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v58; // x21
  __int64 v59; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v62; // [xsp+10h] [xbp-120h]
  UserCommandCodeEntity_array *v63; // [xsp+10h] [xbp-120h]
  int64_t v64; // [xsp+18h] [xbp-118h]
  __int64 v65; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C0h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4AFE0FE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, isIconSizeChange);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserDeckMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4AFE0FE = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v17 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v14);
    byte_4AFC1F1 = 1;
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
      List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v16, 0LL);
      break;
    case 1:
      if ( !MasterData_object )
        goto LABEL_90;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      goto LABEL_22;
    case 0:
      if ( !MasterData_object )
        goto LABEL_90;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
LABEL_22:
      List = 0LL;
      goto LABEL_25;
    default:
      List = 0LL;
      break;
  }
  Instance = 0LL;
LABEL_25:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_90;
  size = itemList->fields._size;
  if ( Instance )
  {
    v62 = *(_QWORD *)(Instance + 24);
    if ( (int)v62 >= 1 )
    {
      if ( (_DWORD)v62 )
      {
        v23 = 0;
        v64 = Instance;
        while ( 1 )
        {
          v24 = Instance + 8LL * (int)v23;
          v27 = *(_QWORD *)(v24 + 32);
          v26 = (UserServantEntity_o **)(v24 + 32);
          v25 = v27;
          if ( !v27 )
            goto LABEL_90;
          v28 = *(_OWORD *)(v25 + 32);
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
          *(_OWORD *)&v70.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v69 = v70;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v69, 0LL);
          if ( size >= 1 )
          {
            v30 = v29;
            v31 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v31,
                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v32 = Instance;
              methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
                || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
              {
                goto LABEL_90;
              }
              v34 = *(_QWORD *)(Instance + 112);
              if ( v34 )
              {
                v35 = *(_OWORD *)(v34 + 32);
                *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v34 + 16);
                *(_OWORD *)&v70.fields.fakeValue = v35;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v68 = v70;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v68, 0LL);
                if ( Instance == v30 )
                  break;
              }
              if ( size == ++v31 )
                goto LABEL_48;
            }
            if ( v23 >= *(_DWORD *)(v64 + 24) )
              goto LABEL_75;
            v37 = *v26;
            v38 = *v26;
            *(_QWORD *)(v32 + 112) = *v26;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 112), (int32_t)v38, v18, v36);
            ServantListViewItem__SetOverwriteStatus((ServantListViewItem_o *)v32, v37, v39);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v32, v14);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v32, v40);
            }
          }
LABEL_48:
          Instance = v64;
          if ( ++v23 == (_DWORD)v62 )
            goto LABEL_76;
          if ( v23 >= *(_DWORD *)(v64 + 24) )
            goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
  }
  else if ( List )
  {
    v65 = *(_QWORD *)&List->max_length;
    if ( (int)v65 >= 1 )
    {
      if ( (_DWORD)v65 )
      {
        v41 = 0;
        v63 = List;
        while ( 1 )
        {
          v42 = &List->obj.klass + (int)v41;
          v45 = v42[4];
          v44 = (__int64 *)(v42 + 4);
          v43 = v45;
          if ( !v45 )
            break;
          byval_arg = v43->_1.byval_arg;
          *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&v43->_1.name;
          *(Il2CppType *)&v70.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v67 = v70;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v67, 0LL);
          if ( size >= 1 )
          {
            v47 = Instance;
            v48 = 0;
            while ( 1 )
            {
              Instance = (int64_t)this->fields.itemList;
              if ( !Instance )
                goto LABEL_90;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v48,
                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_90;
              v49 = Instance;
              v50 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)v50
                || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v50 - 8) != ServantListViewItem_TypeInfo )
              {
                goto LABEL_90;
              }
              v51 = *(_QWORD *)(Instance + 144);
              if ( v51 )
              {
                v52 = *(_OWORD *)(v51 + 32);
                *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)(v51 + 16);
                *(_OWORD *)&v70.fields.fakeValue = v52;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v66 = v70;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v66, 0LL);
                if ( Instance == v47 )
                  break;
              }
              if ( size == ++v48 )
                goto LABEL_73;
            }
            if ( v41 >= v63->max_length )
              goto LABEL_75;
            v54 = *v44;
            *(_QWORD *)(v49 + 144) = *v44;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v49 + 144), v54, v18, v53);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v49, v14);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v49, v55);
            }
          }
LABEL_73:
          List = v63;
          if ( ++v41 == (_DWORD)v65 )
            goto LABEL_76;
          if ( v41 >= v63->max_length )
            goto LABEL_75;
        }
LABEL_90:
        sub_1BC3264(Instance, v14);
      }
LABEL_75:
      sub_1BC326C(Instance, v14, v18);
    }
  }
LABEL_76:
  if ( size >= 1 && isIconSizeChange )
  {
    v56 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.itemList;
      if ( !Instance )
        goto LABEL_90;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v56,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v58 = (ListViewItem_o *)Item;
        v59 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v59
          && (ServantListViewItem_c *)Item->klass->_2.typeHierarchy[v59 - 1] == ServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (int64_t)v58->fields.viewObject;
            if ( !Instance )
              goto LABEL_90;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v58, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v56 )
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

  if ( (byte_4AFE10E & 1) == 0 )
  {
    sub_1BC3008(&Method_ServantListViewManager_OnClickBonusFilterKind__, method);
    byte_4AFE10E = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_ServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BC3264(0LL, v5);
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

  if ( (byte_4AFE108 & 1) == 0 )
  {
    sub_1BC3008(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_ServantListViewManager_EndSelectFilterKind__, v3);
    sub_1BC3008(&Method_ServantListViewManager_OnClickFilterKind__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFE108 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_ServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
        CommonUI__OpenServantFilterSelectMenu_30737880(
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
      v16 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
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
    sub_1BC3264(v12, v13);
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
  const MethodInfo *v3; // x3
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BC3264(v6, v7);
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

  if ( (byte_4AFE10C & 1) == 0 )
  {
    sub_1BC3008(&Method_ServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_4AFE10C = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_ServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1BC3264(v5, v6);
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

  if ( (byte_4AFE10A & 1) == 0 )
  {
    sub_1BC3008(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_ServantListViewManager_EndSelectSortKind__, v3);
    sub_1BC3008(&Method_ServantListViewManager_OnClickSortKind__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFE10A = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_ServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BC3254(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1BC3264(v13, v14);
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
  const MethodInfo *v3; // x3
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1BC3264(v6, v7);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4AFE106 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFE106 = 1;
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
      v10 = this->fields.scrollView;
      if ( v10 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
        v10 = this->fields.scrollView;
        if ( v10 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v10->klass->vtable._6_get_shouldMoveVertically.method)(
                  v10,
                  v10->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_14;
          v10 = this->fields.scrollView;
          if ( v10 )
          {
            UIScrollView__UpdatePosition(v10, 0LL);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
            if ( callbackFunc2 )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                callbackFunc2->fields.original_method_info,
                *(_QWORD *)&callbackFunc2->fields.extra_arg);
            return;
          }
        }
      }
      sub_1BC3264(v10, v7);
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

  if ( (byte_4AFE104 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v11);
    sub_1BC3008(&Method_ServantListViewManager_OnMoveEnd__, v12);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v13);
    byte_4AFE104 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v19, v20);
      ServantListViewObject__Init_34091008((ServantListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_34089980(
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

  if ( (byte_4AFE105 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v9);
    sub_1BC3008(&Method_ServantListViewManager_OnMoveEnd__, v10);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v11);
    byte_4AFE105 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v17, v18);
      ServantListViewObject__Init_34091092((ServantListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
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

  if ( (byte_4AFE0FF & 1) == 0 )
  {
    sub_1BC3008(&ServantListViewManager_TypeInfo, method);
    byte_4AFE0FF = 1;
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
    sub_1BC3264(v4, v5);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4AFE10F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFE10F = 1;
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
    sub_1BC3264(gameObject, v4);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterInfo(
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
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, (int32_t)AlignedBonusFilter, v13, v14);
LABEL_11:
    v10 = this->fields.sort;
    sort = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)this->fields.alignedBonusFilterInfos,
                               0LL);
    if ( v10 )
    {
      v11 = ((unsigned __int8)sort & 1) == 0;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BC3264(sort, setupInfo);
  }
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.alignedBonusFilterInfos, 0, (int32_t)method, v3);
  v10 = this->fields.sort;
  if ( !v10 )
    goto LABEL_14;
  v11 = 0;
LABEL_13:
  v10->fields.isBonusKind = v11;
}


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_4AFE112 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17332/*"btn_filter_on"*/, method);
    sub_1BC3008(&StringLiteral_17331/*"btn_filter"*/, v3);
    byte_4AFE112 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1BC3264(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall ServantListViewManager__SetMode(
        ServantListViewManager_o *this,
        int32_t mode,
        ServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantListViewManager__SetMode_34059476(this, mode, v6);
}


void __fastcall ServantListViewManager__SetMode_34059476(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantListViewManager__RequestListObject_34089980(this, mode + 1, v5);
}


void __fastcall ServantListViewManager__SetMode_34089928(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantListViewManager__SetMode_34059476(this, mode, v6);
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
  if ( (byte_4AFE103 & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_1BC3008(&ServantListViewObject_TypeInfo, obj);
    byte_4AFE103 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantListViewObject__Init_34089856((ServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4AFE10D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17368/*"btn_sort_up"*/, v3);
    sub_1BC3008(&StringLiteral_17463/*"btn_txt_up"*/, v4);
    sub_1BC3008(&StringLiteral_17416/*"btn_txt_new"*/, v5);
    sub_1BC3008(&StringLiteral_17406/*"btn_txt_down"*/, v6);
    sub_1BC3008(&StringLiteral_17423/*"btn_txt_old"*/, v7);
    sub_1BC3008(&StringLiteral_17365/*"btn_sort_down"*/, v8);
    byte_4AFE10D = 1;
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
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17423/*"btn_txt_old"*/ : &StringLiteral_17416/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v20 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17463/*"btn_txt_up"*/ : &StringLiteral_17406/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v18 = (System_String_o **)&StringLiteral_17368/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17365/*"btn_sort_down"*/;
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
      sub_1BC3264(sort, v10);
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
  void *monitor; // x23
  Il2CppObject *v14; // x26
  Il2CppObject *v15; // x28
  __int64 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  Il2CppClass *klass; // x8
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

  if ( (byte_4AFE113 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BC3008(&ServantListViewItem_TypeInfo, v9);
    byte_4AFE113 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1BC3264(SelfUserGame, v11);
  }
  monitor = v12[3].monitor;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    SelfUserGame,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v14 = 0LL;
  v15 = 0LL;
  *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
  v36.fields._current = (Il2CppObject *)v35.fields.fakeValue;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v16 & 1) == 0 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v36.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ServantListViewItem_c *)v36.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
    {
      v16 = sub_1BC3524(v36.fields._current);
LABEL_40:
      sub_1BC3264(v16, v17);
    }
    klass = v36.fields._current[7].klass;
    if ( !klass )
    {
      BYTE2(v36.fields._current[15].klass) = 0;
      goto LABEL_20;
    }
    byval_arg = klass->_1.byval_arg;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v35.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v35;
    BYTE2(current[15].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v34, 0LL) == (_QWORD)monitor;
    if ( isPushMode )
    {
      v23 = (UserServantEntity_o *)current[7].klass;
      if ( !v23 )
        sub_1BC3264(0LL, v22);
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
          sub_1BC3264(0LL, v24);
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
            sub_1BC3264(0LL, v30);
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
              sub_1BC3264(0LL, v30);
            IsEventJoin = UserServantEntity__IsStatusUp(v32, 0LL);
            if ( IsEventJoin )
            {
              v26 = 0;
            }
            else
            {
              v33 = (UserServantEntity_o *)current[7].klass;
              if ( !v33 )
                sub_1BC3264(0LL, v30);
              IsEventJoin = UserServantEntity__IsMaterialTd(v33, 0LL);
              v26 = !IsEventJoin;
            }
          }
          v15 = current;
        }
        if ( !v27 )
          sub_1BC3264(IsEventJoin, v30);
      }
      BYTE3(v27[15].klass) = v26;
    }
    else
    {
LABEL_20:
      BYTE3(current[15].klass) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4AFE0F5 & 1) == 0 )
  {
    sub_1BC3008(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFE0F5 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFE0F7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFE0F7 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1BC3524(v7);
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
    sub_1BC3264(0LL, state);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AFE0FC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFE0FC = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v18);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem((ServantListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1BC3264(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42785324((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BC3264(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BC3264(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BC3264(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AFE0FB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4AFE0FB = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4AFE0F6 & 1) == 0 )
  {
    sub_1BC3008(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AFE0F6 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1BC3524(v7);
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

  if ( (byte_4AFE0F8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4AFE0F8 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BC3524(v7);
  ServantListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager_CallbackFunc___ctor(
        ServantListViewManager_CallbackFunc_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A08C84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08C2C;
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
  if ( (byte_4AFE115 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&ServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4AFE115 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v16, *(_QWORD *)&result, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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