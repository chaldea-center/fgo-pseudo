void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  ListViewSort_o *v9; // x19
  struct ServantListViewManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ListViewSort_o *v17; // x19
  struct ServantListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_438F220 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&ServantListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_12939/*"Servant1"*/);
    sub_B775C4(&StringLiteral_12941/*"Servant4"*/);
    sub_B775C4(&StringLiteral_12940/*"Servant2"*/);
    byte_438F220 = 1;
  }
  v1 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v1, (System_String_o *)StringLiteral_12939/*"Servant1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v9, (System_String_o *)StringLiteral_12940/*"Servant2"*/, 3, 0, 0LL);
  v10 = ServantListViewManager_TypeInfo->static_fields;
  v10->servantEquipSortInfo = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&v10->servantEquipSortInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v17, (System_String_o *)StringLiteral_12941/*"Servant4"*/, 2, 0, 0LL);
  v18 = ServantListViewManager_TypeInfo->static_fields;
  v18->commandCodeSortInfo = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&v18->commandCodeSortInfo,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall ServantListViewManager___ctor(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantListViewManager__ChangeIconScale(ServantListViewManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  unsigned int scaleType; // w8
  ServantListViewManager_o *v9; // x19
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  scaleType = this->fields.scaleType;
  v9 = this;
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
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = v9->fields.sort;
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = v9->fields.scaleType;
  this = (ServantListViewManager_o *)v9->fields.sort;
  if ( !this
    || (ListViewSort__Save((ListViewSort_o *)this, 0LL),
        ServantListViewManager__ModifyList(v9, 1, v13),
        ServantListViewManager__SetMode_32863484(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (ServantListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (ServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall ServantListViewManager__CreateList(
        ServantListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserCommandCodeMaster_o *v10; // x24
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *v17; // x22
  BalanceConfig_c *v18; // x0
  int svtKeep; // w20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *v26; // x23
  ServantListViewManager_c *v27; // x8
  __int64 v28; // x26
  struct ListViewSort_o *commandCodeSortInfo; // x1
  struct ListViewSort_o **p_sort; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ServantListViewManager_c *v37; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  ServantListViewManager_c *v45; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v47; // x1
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  UserDeckMaster_o *v51; // x22
  __int64 v52; // x0
  struct DataMasterBase_array *datalist; // x24
  signed __int64 v54; // x27
  unsigned __int64 v55; // x22
  UserServantEntity_o *v56; // x24
  System_Int64_array *v57; // x25
  System_Int64_array *v58; // x26
  ServantListViewItem_o *v59; // x23
  UserServantCommandCodeMaster_o *v60; // x21
  unsigned __int64 v61; // x21
  signed __int64 v62; // x20
  UserCommandCodeEntity_o *v63; // x24
  System_Int64_array *v64; // x25
  ServantListViewItem_o *v65; // x23
  __int64 v66; // x0
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v68; // x21
  System_String_o *v69; // x22
  __int64 v70; // x2
  Il2CppObject *v71; // x23
  __int64 v72; // x2
  Il2CppObject *v73; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v75; // x21
  const MethodInfo *v76; // x2
  UILabel_o *v77; // x22
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  struct DataMasterBase_array *v81; // [xsp+8h] [xbp-98h]
  int v82; // [xsp+14h] [xbp-8Ch]
  __int64 v83; // [xsp+18h] [xbp-88h]
  DataManager_o *v85; // [xsp+28h] [xbp-78h]
  int v86; // [xsp+30h] [xbp-70h] BYREF
  int v87; // [xsp+34h] [xbp-6Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+38h] [xbp-68h] BYREF
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_438F209 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantListViewItem_TypeInfo);
    sub_B775C4(&ServantListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_11914/*"SERVANT_EQUIP_EMPTY"*/);
    sub_B775C4(&StringLiteral_3352/*"COMMAND_CODE_EMPTY"*/);
    sub_B775C4(&StringLiteral_11874/*"SERVANT_ALL_EMPTY"*/);
    sub_B775C4(&StringLiteral_11940/*"SERVANT_EQUIP_TAKE"*/);
    sub_B775C4(&StringLiteral_3371/*"COMMAND_CODE_TAKE"*/);
    sub_B775C4(&StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    sub_B775C4(&StringLiteral_12286/*"SERVANT_TAKE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_438F209 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v10 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 0:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
      v85 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12286/*"SERVANT_TAKE"*/, 0LL);
      v45 = ServantListViewManager_TypeInfo;
      v28 = StringLiteral_11914/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v45 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v45->static_fields->servantSortInfo;
      v47 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)v47,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 0;
      goto LABEL_44;
    case 1:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v85 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtEquipKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v37 = ServantListViewManager_TypeInfo;
      v28 = StringLiteral_11914/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v37 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v37->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      p_sort = &this->fields.sort;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 1;
LABEL_44:
      Instance = (DataManager_o *)*p_sort;
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      v17 = 0LL;
      break;
    case 3:
      if ( !v10 )
        goto LABEL_112;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList(v10, 0LL);
      if ( !SelfUserGame )
        goto LABEL_112;
      v17 = Instance;
      if ( !byte_43874B8 )
      {
        sub_B775C4(&BalanceConfig_TypeInfo);
        byte_43874B8 = 1;
      }
      v18 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      svtKeep = v18->static_fields->CommandCodeFrameMax;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"COMMAND_CODE_TAKE"*/, 0LL);
      v27 = ServantListViewManager_TypeInfo;
      v28 = StringLiteral_3352/*"COMMAND_CODE_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v27 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v27->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      p_sort = &this->fields.sort;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)commandCodeSortInfo,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 3;
      Instance = (DataManager_o *)*p_sort;
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      v85 = 0LL;
      break;
    default:
      v85 = 0LL;
      svtKeep = 0;
      v17 = 0LL;
      v28 = StringLiteral_11874/*"SERVANT_ALL_EMPTY"*/;
      v26 = (System_String_o *)StringLiteral_1/*""*/;
      p_sort = &this->fields.sort;
      break;
  }
  if ( !*p_sort )
    goto LABEL_112;
  iconScaleKind = (*p_sort)->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    normalSizeSeed = this->fields.normalSizeSeed;
    goto LABEL_54;
  }
  if ( iconScaleKind == 2 )
  {
    normalSizeSeed = this->fields.smallSizeSeed;
    goto LABEL_54;
  }
  if ( iconScaleKind == 3 )
  {
    normalSizeSeed = this->fields.extremelySmallSizeSeed;
LABEL_54:
    this->fields.seed = normalSizeSeed;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_112;
    UILabel__set_text((UILabel_o *)Instance, v26, 0LL);
  }
  v82 = svtKeep;
  if ( v85 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_112;
    v51 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v83 = v28;
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v51 )
      goto LABEL_112;
    UserDeckMaster__getPartyList(v51, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
    datalist = v85->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v81 = v85->fields.datalist;
      if ( (_DWORD)v81 )
      {
        v54 = (int)v85->fields.datalist;
        v55 = 0LL;
        while ( 1 )
        {
          v56 = (UserServantEntity_o *)*((_QWORD *)&v85->fields.lookup + v55);
          v58 = equipIdList;
          v57 = svtIdList;
          v59 = (ServantListViewItem_o *)sub_B77694(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor(v59, v55, v56, v57, v58, setupInfo, 0LL);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          if ( (__int64)++v55 >= v54 )
            goto LABEL_87;
          if ( v55 >= LODWORD(v85->fields.datalist) )
            goto LABEL_86;
        }
LABEL_112:
        sub_B7769C(Instance, v8);
      }
LABEL_86:
      v66 = sub_B776C8(v52);
      sub_B77668(v66, 0LL);
    }
LABEL_88:
    v28 = v83;
    goto LABEL_90;
  }
  if ( !v17 )
  {
    LODWORD(datalist) = 0;
    goto LABEL_90;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v60 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v83 = v28;
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v60 )
    goto LABEL_112;
  UserServantCommandCodeMaster__getAttachList(v60, &userCommandCodeIdList, (int64_t)Instance, 0LL);
  datalist = v17->fields.datalist;
  if ( (int)datalist < 1 )
    goto LABEL_88;
  v81 = v17->fields.datalist;
  if ( !(_DWORD)v81 )
    goto LABEL_86;
  v61 = 0LL;
  v62 = (int)v17->fields.datalist;
  while ( 1 )
  {
    v63 = (UserCommandCodeEntity_o *)*((_QWORD *)&v17->fields.lookup + v61);
    v64 = userCommandCodeIdList;
    v65 = (ServantListViewItem_o *)sub_B77694(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor_29408960(v65, v61, v63, v64, 0LL);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_112;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( (__int64)++v61 >= v62 )
      break;
    if ( v61 >= LODWORD(v17->fields.datalist) )
      goto LABEL_86;
  }
LABEL_87:
  v28 = v83;
  LODWORD(datalist) = (_DWORD)v81;
LABEL_90:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v68 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
    v87 = (int)datalist;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v70);
    v86 = v82;
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v72);
    Instance = (DataManager_o *)System_String__Format_44897472(v69, v71, v73, 0LL);
    if ( !v68 )
      goto LABEL_112;
    UILabel__set_text(v68, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)datalist >= 1 )
    v75 = (System_String_o *)StringLiteral_12110/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v75 = (System_String_o *)v28;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v77 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get(v75, 0LL);
    if ( !v77 )
      goto LABEL_112;
    UILabel__set_text(v77, (System_String_o *)Instance, 0LL);
  }
  ServantListViewManager__SetBonusFilterIds(this, setupInfo, v76);
  ServantListViewManager__SetBonusFilterKind(this, v78);
  ServantListViewManager__SetBonusFilterButton(this, v79);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v80);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438F205 & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_TypeInfo);
    byte_438F205 = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_B7769C(servantSortInfo, v1);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_438F215 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantListViewManager_EndCloseSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438F215 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v5);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B7769C(v8, v9);
  CommonUI__CloseServantFilterSelectMenu(Instance, v7, 0LL);
}


void __fastcall ServantListViewManager__EndSelectSortKind(
        ServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438F217 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantListViewManager_EndCloseSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438F217 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__CloseServantSortSelectMenu(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  __int64 v11; // x11
  ServantListViewItem_o *v12; // x0

  v4 = this;
  if ( (byte_438F21C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantListViewManager_o *)sub_B775C4(&ServantListViewItem_TypeInfo);
    byte_438F21C = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (ServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      v11 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
      {
        if ( (ServantListViewItem_c *)v9->klass->_2.typeHierarchy[v11 - 1] == ServantListViewItem_TypeInfo )
          v12 = (ServantListViewItem_o *)itemList->fields._items->m_Items[v8];
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      this = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(v12, 0LL);
      ++v8;
      if ( (_DWORD)this == svtId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B7769C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetCommandCodeAmountSortValue(
        ServantListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  ServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v7; // x21
  unsigned __int64 v8; // x23
  ListViewItem_o *v9; // x8
  __int64 v10; // x11
  __int64 v11; // x11
  ServantListViewItem_o *v12; // x0

  v4 = this;
  if ( (byte_438F21D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (ServantListViewManager_o *)sub_B775C4(&ServantListViewItem_TypeInfo);
    byte_438F21D = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = itemList->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      v10 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (ServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      v11 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
      {
        if ( (ServantListViewItem_c *)v9->klass->_2.typeHierarchy[v11 - 1] == ServantListViewItem_TypeInfo )
          v12 = (ServantListViewItem_o *)itemList->fields._items->m_Items[v8];
        else
          v12 = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      this = (ServantListViewManager_o *)ServantListViewItem__get_CommandCodeId(v12, 0LL);
      ++v8;
      if ( (_DWORD)this == commandCodeId )
        ++v7;
      if ( (__int64)v8 >= size )
        return v7;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B7769C(this, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


ServantListViewItem_o *__fastcall ServantListViewManager__GetItem(
        ServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438F20C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&ServantListViewItem_TypeInfo);
    byte_438F20C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (ServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ServantListViewItem_TypeInfo )
    return (ServantListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall ServantListViewManager__GetScaleButtonSpriteName(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall ServantListViewManager__GetSwapChoiceList(
        ServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  ServantListViewItem_c *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v18; // w25
  __int64 v19; // x9
  __int64 v20; // x8
  __int128 v21; // q0
  __int128 *v22; // x0
  __int64 v23; // x8
  __int128 v24; // q0
  const MethodInfo_30EBD98 *v25; // x2
  int64_t v26; // x1
  System_Collections_Generic_List_long__o *v27; // x0
  __int128 v28; // q0
  __int128 *v29; // x0
  __int128 v30; // q0
  System_Int64_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int64_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  bool result; // w0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  ServantListViewManager_o *v52; // x0
  ListViewObject_o *v53; // x1
  ListViewItem_o *v54; // x2
  const MethodInfo *v55; // x3
  __int128 v57[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v58[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v59[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v60[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v61; // [xsp+90h] [xbp-80h]
  __int128 v62; // [xsp+A0h] [xbp-70h]

  if ( (byte_438F20E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantListViewItem_TypeInfo);
    byte_438F20E = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v8 = (int64_t)itemList->fields._items->m_Items[v18];
      if ( !v8 )
        goto LABEL_46;
      v9 = ServantListViewItem_TypeInfo;
      v19 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v8 + 300LL) < (unsigned int)v19
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v19 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B77990(v8);
        ServantListViewManager__SetObjectItem(v52, v53, v54, v55);
        return result;
      }
      v20 = *(_QWORD *)(v8 + 112);
      if ( v20 && *(_BYTE *)(v8 + 265) )
      {
        if ( !*(_BYTE *)(v8 + 227) )
        {
          v28 = *(_OWORD *)(v20 + 32);
          v61 = *(_OWORD *)(v20 + 16);
          v62 = v28;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v29 = v59;
          v59[0] = v61;
          v59[1] = v62;
LABEL_35:
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v29,
                 0LL);
          if ( !v6 )
            goto LABEL_46;
          v25 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v26 = v8;
          v27 = v6;
          goto LABEL_37;
        }
        v21 = *(_OWORD *)(v20 + 32);
        v61 = *(_OWORD *)(v20 + 16);
        v62 = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v22 = v60;
        v60[0] = v61;
        v60[1] = v62;
      }
      else
      {
        v23 = *(_QWORD *)(v8 + 144);
        if ( !v23 || !*(_BYTE *)(v8 + 265) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v8 + 227) )
        {
          v30 = *(_OWORD *)(v23 + 32);
          v61 = *(_OWORD *)(v23 + 16);
          v62 = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v29 = v57;
          v57[0] = v61;
          v57[1] = v62;
          goto LABEL_35;
        }
        v24 = *(_OWORD *)(v23 + 32);
        v61 = *(_OWORD *)(v23 + 16);
        v62 = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v22 = v58;
        v58[0] = v61;
        v58[1] = v62;
      }
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v22,
             0LL);
      if ( !v7 )
        goto LABEL_46;
      v25 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
      v26 = v8;
      v27 = v7;
LABEL_37:
      System_Collections_Generic_List_long___Add(v27, v26, v25);
LABEL_38:
      if ( (int)++v18 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v6 || !v7 )
LABEL_46:
    sub_B7769C(v8, v9);
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)choiceList, 0LL, v10, v11, v12, v13, v14, v15);
    *unchoiceList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, 0LL, v46, v47, v48, v49, v50, v51);
    return 0;
  }
  else
  {
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v31;
    sub_B77560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v38;
    sub_B77560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
    return 1;
  }
}


bool __fastcall ServantListViewManager__GetSwapLockList(
        ServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v6; // x23
  System_Collections_Generic_List_long__o *v7; // x22
  int64_t v8; // x0
  ServantListViewItem_c *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v18; // w25
  __int64 v19; // x9
  __int64 v20; // x8
  __int128 v21; // q0
  __int128 *v22; // x0
  __int64 v23; // x8
  __int128 v24; // q0
  const MethodInfo_30EBD98 *v25; // x2
  int64_t v26; // x1
  System_Collections_Generic_List_long__o *v27; // x0
  __int128 v28; // q0
  __int128 *v29; // x0
  __int128 v30; // q0
  System_Int64_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int64_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  ServantListViewManager_o *v52; // x0
  System_Int64_array **v53; // x1
  System_Int64_array **v54; // x2
  const MethodInfo *v55; // x3
  __int128 v57[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v58[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v59[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v60[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v61; // [xsp+90h] [xbp-80h]
  __int128 v62; // [xsp+A0h] [xbp-70h]

  if ( (byte_438F20D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantListViewItem_TypeInfo);
    byte_438F20D = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v8 = (int64_t)itemList->fields._items->m_Items[v18];
      if ( !v8 )
        goto LABEL_46;
      v9 = ServantListViewItem_TypeInfo;
      v19 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v8 + 300LL) < (unsigned int)v19
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v19 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B77990(v8);
        return ServantListViewManager__GetSwapChoiceList(v52, v53, v54, v55);
      }
      v20 = *(_QWORD *)(v8 + 112);
      if ( v20 && *(_BYTE *)(v8 + 264) )
      {
        if ( !*(_BYTE *)(v8 + 226) )
        {
          v28 = *(_OWORD *)(v20 + 32);
          v61 = *(_OWORD *)(v20 + 16);
          v62 = v28;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v29 = v59;
          v59[0] = v61;
          v59[1] = v62;
LABEL_35:
          v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v29,
                 0LL);
          if ( !v6 )
            goto LABEL_46;
          v25 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
          v26 = v8;
          v27 = v6;
          goto LABEL_37;
        }
        v21 = *(_OWORD *)(v20 + 32);
        v61 = *(_OWORD *)(v20 + 16);
        v62 = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v22 = v60;
        v60[0] = v61;
        v60[1] = v62;
      }
      else
      {
        v23 = *(_QWORD *)(v8 + 144);
        if ( !v23 || !*(_BYTE *)(v8 + 264) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v8 + 226) )
        {
          v30 = *(_OWORD *)(v23 + 32);
          v61 = *(_OWORD *)(v23 + 16);
          v62 = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v29 = v57;
          v57[0] = v61;
          v57[1] = v62;
          goto LABEL_35;
        }
        v24 = *(_OWORD *)(v23 + 32);
        v61 = *(_OWORD *)(v23 + 16);
        v62 = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v22 = v58;
        v58[0] = v61;
        v58[1] = v62;
      }
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v22,
             0LL);
      if ( !v7 )
        goto LABEL_46;
      v25 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
      v26 = v8;
      v27 = v7;
LABEL_37:
      System_Collections_Generic_List_long___Add(v27, v26, v25);
LABEL_38:
      if ( (int)++v18 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v6 || !v7 )
LABEL_46:
    sub_B7769C(v8, v9);
  if ( v7->fields._size + v6->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)lockList, 0LL, v10, v11, v12, v13, v14, v15);
    *unlockList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)unlockList, 0LL, v46, v47, v48, v49, v50, v51);
    return 0;
  }
  else
  {
    v31 = System_Collections_Generic_List_long___ToArray(
            v6,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v31;
    sub_B77560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    v38 = System_Collections_Generic_List_long___ToArray(
            v7,
            (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v38;
    sub_B77560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
    return 1;
  }
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_438F206 & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_TypeInfo);
    byte_438F206 = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
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
    sub_B7769C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  ListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x21
  unsigned __int64 v7; // x22
  ListViewItem_o *v8; // x25
  __int64 v9; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h]

  v4 = (ListViewManager_o *)this;
  if ( (byte_438F213 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantListViewManager_o *)sub_B775C4(&ServantListViewItem_TypeInfo);
    byte_438F213 = 1;
  }
  if ( userSvtId >= 1 )
  {
    itemList = v4->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
    size = itemList->fields._size;
    if ( (int)size >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v8 = itemList->fields._items->m_Items[v7];
        if ( !v8 )
          break;
        v9 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
          || (ServantListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] != ServantListViewItem_TypeInfo )
        {
          break;
        }
        klass = v8[1].klass;
        if ( klass )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v13.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v12 = v13;
          this = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                               &v12,
                                               0LL);
          if ( this == (ServantListViewManager_o *)userSvtId )
            ListViewManager__JumpItem(v4, v8->fields.index, 0LL);
        }
        if ( (__int64)++v7 >= size )
          return;
        itemList = v4->fields.itemList;
      }
      while ( itemList );
LABEL_20:
      sub_B7769C(this, userSvtId);
    }
  }
}


void __fastcall ServantListViewManager__ModifyList(
        ServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserCommandCodeMaster_o *v7; // x22
  UserDeckMaster_o *v8; // x23
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v11; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  il2cpp_array_size_t v14; // w27
  Il2CppClass **v15; // x26
  Il2CppClass *v16; // x8
  System_Int32_array ***v17; // x26
  Il2CppClass *v18; // t1
  Il2CppType byval_arg; // q0
  int64_t v20; // x21
  unsigned __int64 v21; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v22; // x23
  ServantListViewItem_o *v23; // x23
  __int64 v24; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v26; // q0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  unsigned int v34; // w27
  int64_t v35; // x26
  __int64 v36; // x8
  System_Int32_array ***v37; // x26
  __int64 v38; // t1
  __int128 v39; // q0
  int64_t v40; // x22
  unsigned __int64 v41; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v42; // x23
  ServantListViewItem_o *v43; // x23
  __int64 v44; // x10
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  __int128 v46; // q0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  __int64 v54; // x0
  unsigned __int64 v55; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v56; // x20
  ListViewItem_o *v57; // x20
  __int64 v58; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v61; // [xsp+10h] [xbp-120h]
  int64_t v62; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v63; // [xsp+18h] [xbp-118h]
  __int64 v64; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+D0h] [xbp-60h] BYREF

  if ( (byte_438F20A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F20A = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v7 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v8 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    goto LABEL_98;
  UserDeckMaster__getPartyList(v8, &svtIdList, &equipIdList, Instance, 0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v7 )
        goto LABEL_98;
      Instance = (int64_t)UserCommandCodeMaster__getList(v7, 0LL);
      break;
    case 1:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_98;
      ServantEquipList = UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      goto LABEL_19;
    case 0:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_98;
      ServantEquipList = UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
LABEL_19:
      v11 = ServantEquipList;
      Instance = 0LL;
      goto LABEL_22;
    default:
      Instance = 0LL;
      break;
  }
  v11 = 0LL;
LABEL_22:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_98;
  size = itemList->fields._size;
  if ( v11 )
  {
    v61 = *(_QWORD *)&v11->max_length;
    if ( (int)v61 >= 1 )
    {
      if ( (_DWORD)v61 )
      {
        v14 = 0;
        v63 = v11;
        while ( 1 )
        {
          v15 = &v11->obj.klass + (int)v14;
          v18 = v15[4];
          v17 = (System_Int32_array ***)(v15 + 4);
          v16 = v18;
          if ( !v18 )
            goto LABEL_98;
          byval_arg = v16->_1.byval_arg;
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
          *(Il2CppType *)&v69.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v68 = v69;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v68, 0LL);
          if ( (int)size >= 1 )
          {
            v20 = Instance;
            v21 = 0LL;
            while ( 1 )
            {
              v22 = this->fields.itemList;
              if ( !v22 )
                goto LABEL_98;
              if ( v21 >= (unsigned int)v22->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v23 = (ServantListViewItem_o *)v22->fields._items->m_Items[v21];
              if ( !v23 )
                goto LABEL_98;
              v24 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v24
                || (ServantListViewItem_c *)v23->klass->_2.typeHierarchy[v24 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userSvtEntity = v23->fields.userSvtEntity;
              if ( userSvtEntity )
              {
                v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v69.fields.fakeValue = v26;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v67 = v69;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v67, 0LL);
                if ( Instance == v20 )
                  break;
              }
              if ( (__int64)++v21 >= size )
                goto LABEL_49;
            }
            if ( v14 >= v63->max_length )
              goto LABEL_80;
            v33 = *v17;
            v23->fields.userSvtEntity = (struct UserServantEntity_o *)*v17;
            sub_B77560((BattleServantConfConponent_o *)&v23->fields.userSvtEntity, v33, v27, v28, v29, v30, v31, v32);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v23, 0LL);
              ServantListViewItem__ModifyChoiceItem(v23, 0LL);
            }
          }
LABEL_49:
          v11 = v63;
          if ( (int)++v14 >= (int)v61 )
            goto LABEL_81;
          if ( v14 >= v63->max_length )
            goto LABEL_80;
        }
      }
      goto LABEL_80;
    }
  }
  else if ( Instance )
  {
    v64 = *(_QWORD *)(Instance + 24);
    if ( (int)v64 >= 1 )
    {
      if ( (_DWORD)v64 )
      {
        v34 = 0;
        v62 = Instance;
        while ( 1 )
        {
          v35 = Instance + 8LL * (int)v34;
          v38 = *(_QWORD *)(v35 + 32);
          v37 = (System_Int32_array ***)(v35 + 32);
          v36 = v38;
          if ( !v38 )
            break;
          v39 = *(_OWORD *)(v36 + 32);
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(v36 + 16);
          *(_OWORD *)&v69.fields.fakeValue = v39;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v66 = v69;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v66, 0LL);
          if ( (int)size >= 1 )
          {
            v40 = Instance;
            v41 = 0LL;
            while ( 1 )
            {
              v42 = this->fields.itemList;
              if ( !v42 )
                goto LABEL_98;
              if ( v41 >= (unsigned int)v42->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v43 = (ServantListViewItem_o *)v42->fields._items->m_Items[v41];
              if ( !v43 )
                goto LABEL_98;
              v44 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v44
                || (ServantListViewItem_c *)v43->klass->_2.typeHierarchy[v44 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userCommandCodeEntity = v43->fields.userCommandCodeEntity;
              if ( userCommandCodeEntity )
              {
                v46 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v69.fields.fakeValue = v46;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v65 = v69;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v65, 0LL);
                if ( Instance == v40 )
                  break;
              }
              if ( (__int64)++v41 >= size )
                goto LABEL_78;
            }
            if ( v34 >= *(_DWORD *)(v62 + 24) )
              goto LABEL_80;
            v53 = *v37;
            v43->fields.userCommandCodeEntity = (struct UserCommandCodeEntity_o *)*v37;
            sub_B77560(
              (BattleServantConfConponent_o *)&v43->fields.userCommandCodeEntity,
              v53,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v43, 0LL);
              ServantListViewItem__ModifyChoiceItem(v43, 0LL);
            }
          }
LABEL_78:
          Instance = v62;
          if ( (int)++v34 >= (int)v64 )
            goto LABEL_81;
          if ( v34 >= *(_DWORD *)(v62 + 24) )
            goto LABEL_80;
        }
LABEL_98:
        sub_B7769C(Instance, v5);
      }
LABEL_80:
      v54 = sub_B776C8(Instance);
      sub_B77668(v54, 0LL);
    }
  }
LABEL_81:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v55 = 0LL;
    while ( 1 )
    {
      v56 = this->fields.itemList;
      if ( !v56 )
        goto LABEL_98;
      if ( v55 >= (unsigned int)v56->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v57 = v56->fields._items->m_Items[v55];
      if ( v57 )
      {
        v58 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v57->klass->_2.bitflags2 + 1) >= (unsigned int)v58
          && (ServantListViewItem_c *)v57->klass->_2.typeHierarchy[v58 - 1] == ServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v57->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v57->fields.viewObject;
            if ( !Instance )
              goto LABEL_98;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v57, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v55 >= size )
        return;
    }
  }
}


void __fastcall ServantListViewManager__OnClickBonusFilterKind(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_438F21A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F21A = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(0LL, v3);
    ListViewSort__IncBonusKind2(
      sort,
      this->fields.bonusEventIds,
      this->fields.servantFilterIds,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t kind; // w23
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  ListViewSort_o *v10; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22

  if ( (byte_438F214 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F214 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    kind = this->fields.kind;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v6 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( kind == 1 )
          v9 = 5;
        else
          v9 = 6;
        CommonUI__OpenServantFilterSelectMenu_18063096(Instance, v9, sort, (ListViewManager_o *)this, v6, -1, 0LL);
        return;
      }
    }
    else
    {
      v10 = this->fields.sort;
      v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu(Instance, 0, v10, v11, -1, 0LL);
        return;
      }
    }
    sub_B7769C(v7, v8);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    ServantListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortAscendingOrder(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438F218 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F218 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t kind; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v6; // x21
  ServantSortSelectMenu_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w8
  int32_t v11; // w1

  if ( (byte_438F216 & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantListViewManager_EndSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438F216 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v6 = (CommonUI_o *)Instance;
    v7 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v6 )
      sub_B7769C(v8, v9);
    if ( kind == 3 )
      v10 = 6;
    else
      v10 = 4;
    if ( kind )
      v11 = v10;
    else
      v11 = 3;
    CommonUI__OpenServantSortSelectMenu(v6, v11, sort, 0, v7, 0LL);
  }
}


void __fastcall ServantListViewManager__OnLongPushListView(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantListViewManager_CallbackFunc_o *callbackFunc; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_B7769C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    ServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall ServantListViewManager__OnMoveEnd(ServantListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_438F212 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F212 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_15;
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
            goto LABEL_15;
          v14 = this->fields.scrollView;
          if ( v14 )
          {
            UIScrollView__UpdatePosition(v14, 0LL);
LABEL_15:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B7769C(v14, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438F210 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_B775C4(&Method_ServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438F210 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v11,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_32863668(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438F211 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__);
    sub_B775C4(&Method_ServantListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438F211 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v9,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
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

  if ( (byte_438F20B & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_TypeInfo);
    byte_438F20B = 1;
  }
  v2 = ServantListViewManager_TypeInfo;
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v2->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v2 = ServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v2->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      servantEquipSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v2 = ServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v2->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (commandCodeSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) != 0LL) )
    {
      ListViewSort__Save(commandCodeSortInfo, 0LL);
      return;
    }
LABEL_28:
    sub_B7769C(v4, v5);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_438F21B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F21B = 1;
  }
  bonusFilterKindButton = (UnityEngine_Object_o *)this->fields.bonusFilterKindButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_11:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v4, 0LL);
            return;
          }
        }
        else
        {
          v4 = 0LL;
          if ( gameObject )
            goto LABEL_11;
        }
      }
    }
    sub_B7769C(gameObject, v4);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterIds(
        ServantListViewManager_o *this,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t kind; // w8
  struct System_Int32_array *servantEquipFilterEventIdList; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Int32_array **p_servantFilterIds; // x0
  struct System_Int32_array *servantFilterIdList; // x1
  struct ListViewSort_o *sort; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Int32_array *servantFilterEventIdList; // x1
  struct System_Int32_array *bonusEventIds; // x9
  struct ListViewSort_o *v29; // x8
  struct System_Int32_array *servantFilterIds; // x9

  if ( !setupInfo )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_17;
    sort->fields.isBonusKind = 0;
    this->fields.bonusEventIds = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIds,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantFilterIds = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.servantFilterIds, 0LL, v21, v22, v23, v24, v25, v26);
    return;
  }
  kind = this->fields.kind;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_9;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    this->fields.bonusEventIds = servantEquipFilterEventIdList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIds,
      (System_Int32_array **)servantEquipFilterEventIdList,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    p_servantFilterIds = &this->fields.servantFilterIds;
    servantFilterIdList = 0LL;
    this->fields.servantFilterIds = 0LL;
  }
  else
  {
    servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
    this->fields.bonusEventIds = servantFilterEventIdList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIds,
      (System_Int32_array **)servantFilterEventIdList,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    servantFilterIdList = setupInfo->fields.servantFilterIdList;
    p_servantFilterIds = &this->fields.servantFilterIds;
    this->fields.servantFilterIds = servantFilterIdList;
  }
  sub_B77560(
    (BattleServantConfConponent_o *)p_servantFilterIds,
    (System_Int32_array **)servantFilterIdList,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
LABEL_9:
  bonusEventIds = this->fields.bonusEventIds;
  v29 = this->fields.sort;
  if ( bonusEventIds && *(_QWORD *)&bonusEventIds->max_length )
  {
    LOBYTE(servantFilterIds) = 1;
    if ( !v29 )
      goto LABEL_17;
  }
  else
  {
    servantFilterIds = this->fields.servantFilterIds;
    if ( servantFilterIds )
      LOBYTE(servantFilterIds) = servantFilterIds->max_length != 0;
    if ( !v29 )
LABEL_17:
      sub_B7769C(this, setupInfo);
  }
  v29->fields.isBonusKind = (char)servantFilterIds;
}


void __fastcall ServantListViewManager__SetBonusFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, method);
  if ( sort->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(sort, this->fields.bonusEventIds, this->fields.servantFilterIds, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_438F21E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438F21E = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall ServantListViewManager__SetMode(
        ServantListViewManager_o *this,
        int32_t mode,
        ServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_32863484(this, mode, v10);
}


void __fastcall ServantListViewManager__SetMode_32863484(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  switch ( mode )
  {
    case 3:
      v6 = 4;
      break;
    case 2:
      v6 = 3;
      break;
    case 1:
      v6 = 2;
      break;
    default:
      return;
  }
  ServantListViewManager__RequestListObject_32863668(this, v6, v5);
}


void __fastcall ServantListViewManager__SetMode_32863612(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_32863484(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__SetObjectItem(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_438F20F & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_B775C4(&ServantListViewObject_TypeInfo);
    byte_438F20F = 1;
  }
  if ( !obj
    || (v6 = *(&ServantListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v13 = 3;
  else
    v13 = 2;
  ServantListViewObject__Init((ServantListViewObject_o *)obj, v13, 0LL, v9, *(UnityEngine_Vector3_o *)&v10, v8);
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
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20

  if ( (byte_438F219 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438F219 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_44;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_44;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_44;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_44;
    if ( sort->fields.isBonusKind )
    {
      v19 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34346624(
                                 sort,
                                 this->fields.bonusEventIds,
                                 this->fields.servantFilterIds,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B7769C(sort, v4);
    }
  }
}


void __fastcall ServantListViewManager__UpdateItemDisplayState(
        ServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v7; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  __int64 v12; // x9
  Il2CppClass *v13; // x8
  Il2CppType byval_arg; // q0
  __int64 v15; // x1
  UserServantEntity_o *v16; // x0
  __int64 v17; // x1
  UserServantEntity_o *v18; // x0
  __int64 v19; // x1
  UserServantEntity_o *v20; // x0
  __int64 v21; // x1
  UserServantEntity_o *v22; // x0
  __int64 v23; // x1
  bool v24; // w8
  UserServantEntity_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_438F21F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&ServantListViewItem_TypeInfo);
    byte_438F21F = 1;
  }
  memset(&v28, 0, sizeof(v28));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v7 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B7769C(SelfUserGame, v6);
  }
  klass = v7[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    SelfUserGame,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v28.fields.current = (Il2CppObject *)v27.fields.fakeValue;
  *(_OWORD *)&v28.fields.list = *(_OWORD *)&v27.fields.currentCryptoKey;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v28,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      goto LABEL_31;
    v12 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v28.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (ServantListViewItem_c *)v28.fields.current->klass->_2.typeHierarchy[v12 - 1] != ServantListViewItem_TypeInfo )
    {
      sub_B77990(v28.fields.current);
LABEL_31:
      sub_B7769C(v9, v10);
    }
    v13 = v28.fields.current[7].klass;
    if ( !v13 )
    {
      BYTE6(v28.fields.current[14].klass) = 0;
LABEL_25:
      v24 = 1;
      goto LABEL_26;
    }
    byval_arg = v13->_1.byval_arg;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v13->_1.name;
    *(Il2CppType *)&v27.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL) == (_QWORD)klass;
    if ( !isPushMode )
      goto LABEL_25;
    v16 = (UserServantEntity_o *)current[7].klass;
    if ( !v16 )
      sub_B7769C(0LL, v15);
    if ( UserServantEntity__IsLeave(v16, 0LL) )
      goto LABEL_23;
    v18 = (UserServantEntity_o *)current[7].klass;
    if ( !v18 )
      sub_B7769C(0LL, v17);
    if ( UserServantEntity__IsEventJoin(v18, 0LL) )
      goto LABEL_23;
    v20 = (UserServantEntity_o *)current[7].klass;
    if ( !v20 )
      sub_B7769C(0LL, v19);
    if ( UserServantEntity__IsCombineMaterial(v20, 0LL) )
      goto LABEL_23;
    v22 = (UserServantEntity_o *)current[7].klass;
    if ( !v22 )
      sub_B7769C(0LL, v21);
    if ( UserServantEntity__IsStatusUp(v22, 0LL) )
    {
LABEL_23:
      v24 = 0;
    }
    else
    {
      v25 = (UserServantEntity_o *)current[7].klass;
      if ( !v25 )
        sub_B7769C(0LL, v23);
      v24 = !UserServantEntity__IsMaterialTd(v25, 0LL);
    }
LABEL_26:
    HIBYTE(current[14].klass) = v24;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_438F201 & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_438F201 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438F203 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438F203 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
    sub_B7769C(0LL, state);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438F208 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F208 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (ServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)current,
                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantListViewObject__o *__fastcall ServantListViewManager__get_ObjectList(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438F207 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F207 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_438F202 & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_CallbackFunc_TypeInfo);
    byte_438F202 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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

  if ( (byte_438F204 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438F204 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4388824 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&ServantListViewManager_ResultKind_TypeInfo);
    byte_4388824 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v13, *(_QWORD *)&result);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager_CallbackFunc__Invoke(
        ServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  ServantListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  ServantListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}