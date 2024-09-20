void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  ListViewSort_o *v4; // x19
  struct ServantListViewManager_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  ListViewSort_o *v8; // x19
  struct ServantListViewManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A575BB & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12619/*"Servant1"*/);
    sub_1B885B0(&StringLiteral_12621/*"Servant4"*/);
    sub_1B885B0(&StringLiteral_12620/*"Servant2"*/);
    byte_4A575BB = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_12619/*"Servant1"*/, 3, 0, 0LL);
  ServantListViewManager_TypeInfo->static_fields->servantSortInfo = v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ServantListViewManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v4, (System_String_o *)StringLiteral_12620/*"Servant2"*/, 3, 0, 0LL);
  static_fields = ServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->servantEquipSortInfo, (int32_t)v4, v6, v7);
  v8 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v8, (System_String_o *)StringLiteral_12621/*"Servant4"*/, 2, 0, 0LL);
  v9 = ServantListViewManager_TypeInfo->static_fields;
  v9->commandCodeSortInfo = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->commandCodeSortInfo, (int32_t)v8, v10, v11);
}


void __fastcall ServantListViewManager___ctor(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantListViewManager__ChangeIconScale(ServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        ServantListViewManager__ModifyList(this, 1, v10),
        ServantListViewManager__SetMode_32684524(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1B8880C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall ServantListViewManager__CreateList(
        ServantListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v10; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  int64_t v13; // x21
  int CommandCodeFrameMax; // w20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x23
  ServantListViewManager_c *v18; // x8
  __int64 v19; // x26
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v21; // x1
  int v22; // w8
  int64_t v23; // x22
  BalanceConfig_c *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  ServantListViewManager_c *v27; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  ServantListViewManager_c *v31; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  struct ListViewSort_o *sort; // x8
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  Il2CppObject *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x24
  __int64 v41; // x22
  __int64 v42; // x28
  UserServantEntity_o *v43; // x24
  System_Int64_array *v44; // x25
  System_Int64_array *v45; // x26
  ServantListViewItem_o *v46; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  Il2CppObject *v53; // x21
  __int64 v54; // x19
  __int64 v55; // x21
  UserCommandCodeEntity_o *v56; // x24
  System_Int64_array *v57; // x25
  ServantListViewItem_o *v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v66; // x21
  System_String_o *v67; // x22
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x23
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v77; // x21
  const MethodInfo *v78; // x2
  UILabel_o *v79; // x22
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  __int64 v82; // [xsp+0h] [xbp-A0h]
  __int64 v83; // [xsp+10h] [xbp-90h]
  int v85; // [xsp+20h] [xbp-80h] BYREF
  int v86; // [xsp+24h] [xbp-7Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+28h] [xbp-78h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A575A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/);
    sub_1B885B0(&StringLiteral_3720/*"COMMAND_CODE_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11535/*"SERVANT_ALL_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11601/*"SERVANT_EQUIP_TAKE"*/);
    sub_1B885B0(&StringLiteral_3739/*"COMMAND_CODE_TAKE"*/);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_1B885B0(&StringLiteral_11949/*"SERVANT_TAKE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A575A4 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 3:
      if ( !v10 )
        goto LABEL_105;
      Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v10, 0LL);
      if ( !SelfUserGame )
        goto LABEL_105;
      v23 = Instance;
      if ( !byte_4A567BB )
      {
        sub_1B885B0(&BalanceConfig_TypeInfo);
        byte_4A567BB = 1;
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
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"COMMAND_CODE_TAKE"*/, 0LL);
      v27 = ServantListViewManager_TypeInfo;
      v19 = StringLiteral_3720/*"COMMAND_CODE_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v27 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v27->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)commandCodeSortInfo, v25, v26);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_105;
      v13 = 0LL;
      v22 = 3;
      goto LABEL_36;
    case 1:
      if ( !MasterData_object )
        goto LABEL_105;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_105;
      v13 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtEquipKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v31 = ServantListViewManager_TypeInfo;
      v19 = StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v31 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v31->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v29, v30);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_105;
      v23 = 0LL;
      v22 = 1;
      goto LABEL_36;
    case 0:
      if ( !MasterData_object )
        goto LABEL_105;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_105;
      v13 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_TAKE"*/, 0LL);
      v18 = ServantListViewManager_TypeInfo;
      v19 = StringLiteral_11575/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v18 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v18->static_fields->servantSortInfo;
      v21 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v21, v15, v16);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_105;
      v22 = 0;
      v23 = 0LL;
LABEL_36:
      *(_DWORD *)(Instance + 128) = v22;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      goto LABEL_38;
  }
  CommandCodeFrameMax = 0;
  v23 = 0LL;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  v19 = StringLiteral_11535/*"SERVANT_ALL_EMPTY"*/;
  v13 = 0LL;
LABEL_38:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_105;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v11, v12);
LABEL_46:
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)Instance, v17, 0LL);
  }
  if ( !v13 )
  {
    if ( !v23 )
    {
      LODWORD(v40) = 0;
      goto LABEL_87;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_105;
    v53 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v83 = v19;
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v53 )
      goto LABEL_105;
    UserServantCommandCodeMaster__getAttachList(
      (UserServantCommandCodeMaster_o *)v53,
      &userCommandCodeIdList,
      Instance,
      0LL);
    v54 = *(_QWORD *)(v23 + 24);
    if ( (int)v54 >= 1 )
    {
      if ( (unsigned int)*(_QWORD *)(v23 + 24) )
      {
        v55 = 0LL;
        do
        {
          v56 = *(UserCommandCodeEntity_o **)(v23 + 32 + 8 * v55);
          v57 = userCommandCodeIdList;
          v58 = (ServantListViewItem_o *)sub_1B887FC(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor_32599864(v58, v55, v56, v57, 0LL);
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_105;
          v61 = *(_QWORD *)(Instance + 16);
          v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v61 )
            goto LABEL_105;
          v63 = *(int *)(Instance + 24);
          if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v58,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = v61 + 8 * v63;
            *(_DWORD *)(Instance + 24) = v63 + 1;
            *(_QWORD *)(v64 + 32) = v58;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 32), (int32_t)v58, v59, v60);
          }
          if ( (unsigned int)v54 - 1LL == v55 )
            goto LABEL_84;
        }
        while ( ++v55 < (unsigned __int64)*(unsigned int *)(v23 + 24) );
      }
LABEL_83:
      sub_1B88814(v38, v39);
    }
LABEL_84:
    LODWORD(v40) = v54;
LABEL_85:
    v19 = v83;
    goto LABEL_87;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  v37 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v83 = v19;
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v37 )
    goto LABEL_105;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v37, &svtIdList, &equipIdList, Instance, 0LL);
  v40 = *(_QWORD *)(v13 + 24);
  if ( (int)v40 < 1 )
    goto LABEL_85;
  v82 = *(_QWORD *)(v13 + 24);
  if ( !(_DWORD)v82 )
    goto LABEL_83;
  v41 = 0LL;
  v42 = (unsigned int)*(_QWORD *)(v13 + 24) - 1LL;
  while ( 1 )
  {
    v43 = *(UserServantEntity_o **)(v13 + 32 + 8 * v41);
    v45 = equipIdList;
    v44 = svtIdList;
    v46 = (ServantListViewItem_o *)sub_1B887FC(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor(v46, v41, v43, v44, v45, setupInfo, 0LL);
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_105;
    v49 = *(_QWORD *)(Instance + 16);
    v50 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v49 )
      goto LABEL_105;
    v51 = *(int *)(Instance + 24);
    if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v46,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = v49 + 8 * v51;
      *(_DWORD *)(Instance + 24) = v51 + 1;
      *(_QWORD *)(v52 + 32) = v46;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)v46, v47, v48);
    }
    if ( v42 == v41 )
      break;
    if ( ++v41 >= (unsigned __int64)*(unsigned int *)(v13 + 24) )
      goto LABEL_83;
  }
  v19 = v83;
  LODWORD(v40) = v82;
LABEL_87:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v66 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SUM_INFO"*/, 0LL);
    v86 = v40;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v68, v69, v70);
    v85 = CommandCodeFrameMax;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v72, v73, v74);
    Instance = (int64_t)System_String__Format_61721404(v67, v71, v75, 0LL);
    if ( !v66 )
      goto LABEL_105;
    UILabel__set_text(v66, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v40 >= 1 )
    v77 = (System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v77 = (System_String_o *)v19;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v79 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get(v77, 0LL);
    if ( v79 )
    {
      UILabel__set_text(v79, (System_String_o *)Instance, 0LL);
      goto LABEL_104;
    }
LABEL_105:
    sub_1B8880C(Instance, v8);
  }
LABEL_104:
  ServantListViewManager__SetBonusFilterInfo(this, setupInfo, v78);
  ServantListViewManager__SetBonusFilterButton(this, v80);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v81);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A575A0 & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    byte_4A575A0 = 1;
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
    sub_1B8880C(servantSortInfo, v1);
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


void __fastcall ServantListViewManager__EndSelectFilterKind(
        ServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A575B0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantListViewManager_EndCloseSelectFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A575B0 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall ServantListViewManager__EndSelectSortKind(
        ServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A575B2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantListViewManager_EndCloseSelectSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A575B2 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4A575B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    byte_4A575B7 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( ServantListViewItem__get_SvtId((ServantListViewItem_o *)itemList, 0LL) == svtId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B8880C(itemList, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetCommandCodeAmountSortValue(
        ServantListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w22
  int64_t v8; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4A575B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    byte_4A575B8 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_13;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v7,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( ServantListViewItem__get_CommandCodeId((ServantListViewItem_o *)itemList, 0LL) == commandCodeId )
        ++v8;
      if ( size == v7 )
        return v8;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B8880C(itemList, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


ServantListViewItem_o *__fastcall ServantListViewManager__GetItem(
        ServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A575A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    byte_4A575A7 = 1;
  }
  result = (ServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall ServantListViewManager__GetSwapChoiceList(
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
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x9
  __int64 v16; // x8
  __int128 v17; // q0
  __int128 *v18; // x0
  __int64 v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int64 v25; // x8
  System_Collections_Generic_List_long__o *v26; // x0
  __int128 v27; // q0
  __int128 *v28; // x0
  __int128 v29; // q0
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int v33; // w21
  System_Int64_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  System_Int64_array **v41; // x0
  bool result; // w0
  ServantListViewManager_o *v43; // x0
  ListViewObject_o *v44; // x1
  ListViewItem_o *v45; // x2
  const MethodInfo *v46; // x3
  __int128 v47[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v48[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v49[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v50[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v51; // [xsp+90h] [xbp-80h]
  __int128 v52; // [xsp+A0h] [xbp-70h]

  if ( (byte_4A575A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    byte_4A575A9 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v9 = ServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v43 = (ServantListViewManager_o *)sub_1B88ACC(itemList);
        ServantListViewManager__SetObjectItem(v43, v44, v45, v46);
        return result;
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 265) )
      {
        if ( *(_BYTE *)(itemList + 227) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          v51 = *(_OWORD *)(v16 + 16);
          v52 = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = v50;
          v50[0] = v51;
          v50[1] = v52;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v18,
                       0LL);
          if ( !v8 )
            goto LABEL_48;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v8->fields._size;
          v9 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v25 = v22[4];
            v26 = v8;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              (int64_t)v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v25 + 192) + 112LL));
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
        v28 = v49;
        v49[0] = v51;
        v49[1] = v52;
      }
      else
      {
        v19 = *(_QWORD *)(itemList + 144);
        if ( !v19 || !*(_BYTE *)(itemList + 265) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 227) )
        {
          v20 = *(_OWORD *)(v19 + 32);
          v51 = *(_OWORD *)(v19 + 16);
          v52 = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = v48;
          v48[0] = v51;
          v48[1] = v52;
          goto LABEL_21;
        }
        v29 = *(_OWORD *)(v19 + 32);
        v51 = *(_OWORD *)(v19 + 16);
        v52 = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v47;
        v47[0] = v51;
        v47[1] = v52;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v28,
                   0LL);
      if ( !v7 )
        goto LABEL_48;
      v30 = v7->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v30 )
        goto LABEL_48;
      v32 = v7->fields._size;
      v9 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v32 >= v30->max_length )
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
    sub_1B8880C(itemList, v9);
  v33 = v8->fields._size + v7->fields._size;
  if ( v33 < 1 )
  {
    *choiceList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, 0, v10, v11);
    v41 = unchoiceList;
    v40 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v34, v35, v36);
    v37 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v40 = (int)v37;
    *unchoiceList = v37;
    v41 = unchoiceList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v41, v40, v38, v39);
  return v33 > 0;
}


bool __fastcall ServantListViewManager__GetSwapLockList(
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
  int64_t itemList; // x0
  int v13; // w25
  int32_t v14; // w24
  __int64 methodPtr_low; // x9
  __int64 v16; // x8
  __int128 v17; // q0
  __int128 *v18; // x0
  __int64 v19; // x8
  __int128 v20; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int64 v25; // x8
  System_Collections_Generic_List_long__o *v26; // x0
  __int128 v27; // q0
  __int128 *v28; // x0
  __int128 v29; // q0
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int v33; // w21
  System_Int64_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  System_Int64_array **v41; // x0
  ServantListViewManager_o *v43; // x0
  System_Int64_array **v44; // x1
  System_Int64_array **v45; // x2
  const MethodInfo *v46; // x3
  __int128 v47[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v48[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v49[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v50[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v51; // [xsp+90h] [xbp-80h]
  __int128 v52; // [xsp+A0h] [xbp-70h]

  if ( (byte_4A575A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    byte_4A575A8 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      v9 = ServantListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v43 = (ServantListViewManager_o *)sub_1B88ACC(itemList);
        return ServantListViewManager__GetSwapChoiceList(v43, v44, v45, v46);
      }
      v16 = *(_QWORD *)(itemList + 112);
      if ( v16 && *(_BYTE *)(itemList + 264) )
      {
        if ( *(_BYTE *)(itemList + 226) )
        {
          v17 = *(_OWORD *)(v16 + 32);
          v51 = *(_OWORD *)(v16 + 16);
          v52 = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = v50;
          v50[0] = v51;
          v50[1] = v52;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v18,
                       0LL);
          if ( !v8 )
            goto LABEL_48;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_long__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v8->fields._size;
          v9 = (ServantListViewItem_c *)itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v25 = v22[4];
            v26 = v8;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v26,
              (int64_t)v9,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v25 + 192) + 112LL));
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
        v28 = v49;
        v49[0] = v51;
        v49[1] = v52;
      }
      else
      {
        v19 = *(_QWORD *)(itemList + 144);
        if ( !v19 || !*(_BYTE *)(itemList + 264) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 226) )
        {
          v20 = *(_OWORD *)(v19 + 32);
          v51 = *(_OWORD *)(v19 + 16);
          v52 = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = v48;
          v48[0] = v51;
          v48[1] = v52;
          goto LABEL_21;
        }
        v29 = *(_OWORD *)(v19 + 32);
        v51 = *(_OWORD *)(v19 + 16);
        v52 = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v47;
        v47[0] = v51;
        v47[1] = v52;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v28,
                   0LL);
      if ( !v7 )
        goto LABEL_48;
      v30 = v7->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !v30 )
        goto LABEL_48;
      v32 = v7->fields._size;
      v9 = (ServantListViewItem_c *)itemList;
      if ( (unsigned int)v32 >= v30->max_length )
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
    sub_1B8880C(itemList, v9);
  v33 = v8->fields._size + v7->fields._size;
  if ( v33 < 1 )
  {
    *lockList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, 0, v10, v11);
    v41 = unlockList;
    v40 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v34 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v34, v35, v36);
    v37 = System_Collections_Generic_List_long___ToArray(
            v8,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    v40 = (int)v37;
    *unlockList = v37;
    v41 = unlockList;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v41, v40, v38, v39);
  return v33 > 0;
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4A575A1 & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    byte_4A575A1 = 1;
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
    sub_1B8880C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w23
  int32_t v7; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *syncRoot; // x8
  Il2CppObject v11; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-70h]

  if ( (byte_4A575AE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    byte_4A575AE = 1;
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
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !itemList )
          break;
        v8 = itemList;
        methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
        {
          break;
        }
        syncRoot = itemList[2].fields._syncRoot;
        if ( syncRoot )
        {
          v11 = syncRoot[2];
          *(Il2CppObject *)&v13.fields.currentCryptoKey = syncRoot[1];
          *(Il2CppObject *)&v13.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v12 = v13;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v8->fields._items), 0LL);
        }
        if ( size == ++v7 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      }
      while ( itemList );
LABEL_17:
      sub_1B8880C(itemList, userSvtId);
    }
  }
}


void __fastcall ServantListViewManager__ModifyList(
        ServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v7; // x22
  Il2CppObject *v8; // x23
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v11; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  il2cpp_array_size_t v14; // w28
  Il2CppClass **v15; // x22
  Il2CppClass *v16; // x8
  struct System_Collections_Generic_List_Thread__o **v17; // x22
  Il2CppClass *v18; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v20; // x21
  int32_t v21; // w24
  DataManager_o *v22; // x23
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v25; // q0
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Collections_Generic_List_Thread__o *v28; // x1
  unsigned int v29; // w28
  DataManager_c **v30; // x21
  DataManager_c *v31; // x8
  struct System_Exception_o **v32; // x21
  DataManager_c *v33; // t1
  Il2CppType v34; // q0
  int64_t v35; // x0
  DataManager_o *v36; // x22
  int32_t v37; // w24
  DataManager_o *v38; // x23
  __int64 v39; // x10
  struct System_Exception_o *writeMasterDataThreadException; // x8
  __int128 v41; // q0
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Exception_o *v44; // x1
  int32_t v45; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v47; // x21
  __int64 v48; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v51; // [xsp+10h] [xbp-120h]
  DataManager_o *v52; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v53; // [xsp+18h] [xbp-118h]
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C0h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4A575A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A575A5 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v8 )
    goto LABEL_86;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v8, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v7 )
        goto LABEL_86;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v7, 0LL);
      break;
    case 1:
      if ( !MasterData_object )
        goto LABEL_86;
      ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      goto LABEL_18;
    case 0:
      if ( !MasterData_object )
        goto LABEL_86;
      ServantEquipList = UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
LABEL_18:
      v11 = ServantEquipList;
      Instance = 0LL;
      goto LABEL_21;
    default:
      Instance = 0LL;
      break;
  }
  v11 = 0LL;
LABEL_21:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_86;
  size = itemList->fields._size;
  if ( v11 )
  {
    v51 = *(_QWORD *)&v11->max_length;
    if ( (int)v51 >= 1 )
    {
      if ( (_DWORD)v51 )
      {
        v14 = 0;
        v53 = v11;
        while ( 1 )
        {
          v15 = &v11->obj.klass + (int)v14;
          v18 = v15[4];
          v17 = (struct System_Collections_Generic_List_Thread__o **)(v15 + 4);
          v16 = v18;
          if ( !v18 )
            goto LABEL_86;
          byval_arg = v16->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v58 = v59;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v58, 0LL);
          if ( size >= 1 )
          {
            v20 = Instance;
            v21 = 0;
            while ( 1 )
            {
              Instance = (DataManager_o *)this->fields.itemList;
              if ( !Instance )
                goto LABEL_86;
              Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)Instance,
                                            v21,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_86;
              v22 = Instance;
              methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
                || (ServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_86;
              }
              masterLoadThreads = Instance->fields.masterLoadThreads;
              if ( masterLoadThreads )
              {
                v25 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
                *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
                *(_OWORD *)&v59.fields.fakeValue = v25;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v57 = v59;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                              &v57,
                                              0LL);
                if ( Instance == v20 )
                  break;
              }
              if ( size == ++v21 )
                goto LABEL_44;
            }
            if ( v14 >= v53->max_length )
              goto LABEL_71;
            v28 = *v17;
            v22->fields.masterLoadThreads = *v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.masterLoadThreads, (int32_t)v28, v26, v27);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v22, 0LL);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v22, 0LL);
            }
          }
LABEL_44:
          v11 = v53;
          if ( ++v14 == (_DWORD)v51 )
            goto LABEL_72;
          if ( v14 >= v53->max_length )
            goto LABEL_71;
        }
      }
      goto LABEL_71;
    }
  }
  else if ( Instance )
  {
    m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      if ( (_DWORD)m_CancellationTokenSource )
      {
        v29 = 0;
        v52 = Instance;
        while ( 1 )
        {
          v30 = &Instance->klass + (int)v29;
          v33 = v30[4];
          v32 = (struct System_Exception_o **)(v30 + 4);
          v31 = v33;
          if ( !v33 )
            break;
          v34 = v31->_1.byval_arg;
          *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v31->_1.name;
          *(Il2CppType *)&v59.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v56 = v59;
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v56, 0LL);
          if ( size >= 1 )
          {
            v36 = (DataManager_o *)v35;
            v37 = 0;
            while ( 1 )
            {
              Instance = (DataManager_o *)this->fields.itemList;
              if ( !Instance )
                goto LABEL_86;
              Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)Instance,
                                            v37,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_86;
              v38 = Instance;
              v39 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v39
                || (ServantListViewItem_c *)Instance->klass->_2.typeHierarchy[v39 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_86;
              }
              writeMasterDataThreadException = Instance->fields.writeMasterDataThreadException;
              if ( writeMasterDataThreadException )
              {
                v41 = *(_OWORD *)&writeMasterDataThreadException->fields._data;
                *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&writeMasterDataThreadException->fields._className;
                *(_OWORD *)&v59.fields.fakeValue = v41;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v55 = v59;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                              &v55,
                                              0LL);
                if ( Instance == v36 )
                  break;
              }
              if ( size == ++v37 )
                goto LABEL_69;
            }
            if ( v29 >= LODWORD(v52->fields.m_CancellationTokenSource) )
              goto LABEL_71;
            v44 = *v32;
            v38->fields.writeMasterDataThreadException = *v32;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v38->fields.writeMasterDataThreadException,
              (int32_t)v44,
              v42,
              v43);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v38, 0LL);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v38, 0LL);
            }
          }
LABEL_69:
          Instance = v52;
          if ( ++v29 == (_DWORD)m_CancellationTokenSource )
            goto LABEL_72;
          if ( v29 >= LODWORD(v52->fields.m_CancellationTokenSource) )
            goto LABEL_71;
        }
LABEL_86:
        sub_1B8880C(Instance, v5);
      }
LABEL_71:
      sub_1B88814(Instance, v5);
    }
  }
LABEL_72:
  if ( size >= 1 && isIconSizeChange )
  {
    v45 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_86;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v45,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v47 = (ListViewItem_o *)Item;
        v48 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v48
          && (ServantListViewItem_c *)Item->klass->_2.typeHierarchy[v48 - 1] == ServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v47->fields.viewObject;
            if ( !Instance )
              goto LABEL_86;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v47, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v45 )
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

  if ( (byte_4A575B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantListViewManager_OnClickBonusFilterKind__);
    byte_4A575B5 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(0LL, v5);
    ListViewSort__IncrementBonusFilter(sort, this->fields.alignedBonusFilterInfos, 0, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A575AF & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantListViewManager_EndSelectFilterKind__);
    sub_1B885B0(&Method_ServantListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A575AF = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantListViewManager_OnClickFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( kind == 1 )
          v11 = 5;
        else
          v11 = 6;
        CommonUI__OpenServantFilterSelectMenu_30500992(
          (CommonUI_o *)Instance,
          v11,
          sort,
          (ListViewManager_o *)this,
          v8,
          -1,
          0LL);
        return;
      }
    }
    else
    {
      v12 = this->fields.sort;
      v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu((CommonUI_o *)Instance, 0, v12, v13, -1, 0LL);
        return;
      }
    }
    sub_1B8880C(v9, v10);
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
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
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

  if ( (byte_4A575B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantListViewManager_OnClickSortAscendingOrder__);
    byte_4A575B3 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B8880C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortKind(ServantListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A575B1 & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ServantListViewManager_EndSelectSortKind__);
    sub_1B885B0(&Method_ServantListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A575B1 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantListViewManager_OnClickSortKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v8 = (CommonUI_o *)Instance;
    v9 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v8 )
      sub_1B8880C(v10, v11);
    if ( kind == 3 )
      v12 = 6;
    else
      v12 = 4;
    if ( kind )
      v13 = v12;
    else
      v13 = 3;
    CommonUI__OpenServantSortSelectMenu(v8, v13, sort, 0, v9, 0LL);
  }
}


void __fastcall ServantListViewManager__OnLongPushListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ServantListViewManager_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B8880C(v6, v7);
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
  int32_t v9; // w3
  UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A575AD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A575AD = 1;
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
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
            if ( callbackFunc2 )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                callbackFunc2->fields.original_method_info,
                *(_QWORD *)&callbackFunc2->fields.extra_arg);
            return;
          }
        }
      }
      sub_1B8880C(v10, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A575AB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A575AB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      ServantListViewObject__Init_32685700((ServantListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_32684672(
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

  if ( (byte_4A575AC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A575AC = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      ServantListViewObject__Init_32685784((ServantListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
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

  if ( (byte_4A575A6 & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_TypeInfo);
    byte_4A575A6 = 1;
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
    sub_1B8880C(v4, v5);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A575B6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A575B6 = 1;
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
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterInfo(
        ServantListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t kind; // w8
  ListViewSort_o *sort; // x0
  System_Int32_array *servantEquipFilterEventIds; // x3
  System_Int32_array *servantEquipFilterEventCampaignIds; // x2
  System_Int32_array *servantFilterIds; // x5
  struct ListViewSort_o *v10; // x20
  bool v11; // w8
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v13; // w2
  int32_t v14; // w3

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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos,
      (int32_t)AlignedBonusFilter,
      v13,
      v14);
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
    sub_1B8880C(sort, setupInfo);
  }
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, (int32_t)method, v3);
  v10 = this->fields.sort;
  if ( !v10 )
    goto LABEL_14;
  v11 = 0;
LABEL_13:
  v10->fields.isBonusKind = v11;
}


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_4A575B9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17511/*"btn_filter_on"*/);
    sub_1B885B0(&StringLiteral_17510/*"btn_filter"*/);
    byte_4A575B9 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B8880C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17510/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17511/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall ServantListViewManager__SetMode(
        ServantListViewManager_o *this,
        int32_t mode,
        ServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantListViewManager__SetMode_32684524(this, mode, v6);
}


void __fastcall ServantListViewManager__SetMode_32684524(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantListViewManager__RequestListObject_32684672(this, mode + 1, v5);
}


void __fastcall ServantListViewManager__SetMode_32684620(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantListViewManager__SetMode_32684524(this, mode, v6);
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
  if ( (byte_4A575AA & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_1B885B0(&ServantListViewObject_TypeInfo);
    byte_4A575AA = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantListViewObject__Init_32684400((ServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void __fastcall ServantListViewManager__SetSortButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A575B4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17541/*"btn_sort_up"*/);
    sub_1B885B0(&StringLiteral_17628/*"btn_txt_up"*/);
    sub_1B885B0(&StringLiteral_17584/*"btn_txt_new"*/);
    sub_1B885B0(&StringLiteral_17574/*"btn_txt_down"*/);
    sub_1B885B0(&StringLiteral_17591/*"btn_txt_old"*/);
    sub_1B885B0(&StringLiteral_17538/*"btn_sort_down"*/);
    byte_4A575B4 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v6 )
      goto LABEL_41;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
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
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17591/*"btn_txt_old"*/ : &StringLiteral_17584/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
      v13 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v14 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17628/*"btn_txt_up"*/ : &StringLiteral_17574/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v14, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v12 = (System_String_o **)&StringLiteral_17541/*"btn_sort_up"*/;
      v13 = (System_String_o **)&StringLiteral_17538/*"btn_sort_down"*/;
    }
    if ( v11->fields.isAscendingOrder )
      v15 = v12;
    else
      v15 = v13;
    UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
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
      v17 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1B8880C(sort, v4);
    }
  }
}


void __fastcall ServantListViewManager__UpdateItemDisplayState(
        ServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  System_Collections_Generic_List_object__c *klass; // x23
  Il2CppObject *v9; // x26
  Il2CppObject *v10; // x28
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  Il2CppClass *v15; // x8
  Il2CppType byval_arg; // q0
  __int64 v17; // x1
  UserServantEntity_o *v18; // x0
  __int64 v19; // x1
  _BOOL4 IsLeave; // w8
  bool v21; // w8
  Il2CppObject *v22; // x29
  UserServantEntity_o *v23; // x0
  _BOOL8 IsEventJoin; // x0
  __int64 v25; // x1
  UserServantEntity_o *v26; // x0
  UserServantEntity_o *v27; // x0
  UserServantEntity_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A575BA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantListViewItem_TypeInfo);
    byte_4A575BA = 1;
  }
  memset(&v31, 0, sizeof(v31));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v7 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1B8880C(SelfUserGame, v6);
  }
  klass = v7[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    SelfUserGame,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v9 = 0LL;
  v10 = 0LL;
  *(_OWORD *)&v31.fields._list = *(_OWORD *)&v30.fields.currentCryptoKey;
  v31.fields._current = (Il2CppObject *)v30.fields.fakeValue;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v11 & 1) == 0 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ServantListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
    {
      v11 = sub_1B88ACC(v31.fields._current);
LABEL_40:
      sub_1B8880C(v11, v12);
    }
    v15 = v31.fields._current[7].klass;
    if ( !v15 )
    {
      BYTE6(v31.fields._current[14].klass) = 0;
      goto LABEL_20;
    }
    byval_arg = v15->_1.byval_arg;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v15->_1.name;
    *(Il2CppType *)&v30.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v29 = v30;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v29, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v18 = (UserServantEntity_o *)current[7].klass;
      if ( !v18 )
        sub_1B8880C(0LL, v17);
      IsLeave = UserServantEntity__IsLeave(v18, 0LL);
      if ( !IsLeave )
        v9 = current;
      if ( IsLeave )
      {
        v21 = 0;
        v22 = current;
      }
      else
      {
        v23 = (UserServantEntity_o *)current[7].klass;
        if ( !v23 )
          sub_1B8880C(0LL, v19);
        IsEventJoin = UserServantEntity__IsEventJoin(v23, 0LL);
        if ( IsEventJoin )
          v22 = v10;
        else
          v22 = v9;
        if ( IsEventJoin )
        {
          v21 = 0;
          v22 = current;
        }
        else
        {
          v26 = (UserServantEntity_o *)current[7].klass;
          if ( !v26 )
            sub_1B8880C(0LL, v25);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v26, 0LL);
          if ( IsEventJoin )
          {
            v21 = 0;
            v22 = v9;
          }
          else
          {
            v27 = (UserServantEntity_o *)current[7].klass;
            if ( !v27 )
              sub_1B8880C(0LL, v25);
            IsEventJoin = UserServantEntity__IsStatusUp(v27, 0LL);
            if ( IsEventJoin )
            {
              v21 = 0;
            }
            else
            {
              v28 = (UserServantEntity_o *)current[7].klass;
              if ( !v28 )
                sub_1B8880C(0LL, v25);
              IsEventJoin = UserServantEntity__IsMaterialTd(v28, 0LL);
              v21 = !IsEventJoin;
            }
          }
          v10 = current;
        }
        if ( !v22 )
          sub_1B8880C(IsEventJoin, v25);
      }
      HIBYTE(v22[14].klass) = v21;
    }
    else
    {
LABEL_20:
      HIBYTE(current[14].klass) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4A5759C & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A5759C = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A5759E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5759E = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1B88ACC(v7);
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
    sub_1B8880C(0LL, state);
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
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A575A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A575A3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem((ServantListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantListViewObject__o *__fastcall ServantListViewManager__get_ObjectList(
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
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A575A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A575A2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v3;
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

  if ( (byte_4A5759D & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_4A5759D = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A5759F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5759F = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CA148;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CA0F0;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A575BC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&ServantListViewManager_ResultKind_TypeInfo);
    byte_4A575BC = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v15, *(_QWORD *)&result, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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