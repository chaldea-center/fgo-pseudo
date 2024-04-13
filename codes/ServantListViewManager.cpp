void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  ListViewSort_o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ListViewSort_o *v24; // x19
  struct ServantListViewManager_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ListViewSort_o *v32; // x19
  struct ServantListViewManager_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42EC6D6 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ServantListViewManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_12854/*"Servant1"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_12856/*"Servant4"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12855/*"Servant2"*/, v13, v14, v15);
    byte_42EC6D6 = 1;
  }
  v16 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v16, (System_String_o *)StringLiteral_12854/*"Servant1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v24, (System_String_o *)StringLiteral_12855/*"Servant2"*/, 3, 0, 0LL);
  v25 = ServantListViewManager_TypeInfo->static_fields;
  v25->servantEquipSortInfo = v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v25->servantEquipSortInfo,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v32, (System_String_o *)StringLiteral_12856/*"Servant4"*/, 2, 0, 0LL);
  v33 = ServantListViewManager_TypeInfo->static_fields;
  v33->commandCodeSortInfo = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v33->commandCodeSortInfo,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
    sub_B5D560(
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
        ServantListViewManager__SetMode_32483724(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (ServantListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (ServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall ServantListViewManager__CreateList(
        ServantListViewManager_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v68; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserCommandCodeMaster_o *v70; // x24
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int v77; // w2
  __int64 v78; // x3
  DataManager_o *v79; // x22
  BalanceConfig_c *v80; // x0
  int svtKeep; // w20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_o *v88; // x23
  ServantListViewManager_c *v89; // x8
  __int64 v90; // x26
  struct ListViewSort_o *commandCodeSortInfo; // x1
  struct ListViewSort_o **p_sort; // x24
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  ServantListViewManager_c *v99; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  ServantListViewManager_c *v107; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v109; // x1
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  UserDeckMaster_o *v113; // x22
  __int64 v114; // x0
  struct DataMasterBase_array *datalist; // x24
  signed __int64 v116; // x27
  unsigned __int64 v117; // x22
  UserServantEntity_o *v118; // x24
  System_Int64_array *v119; // x25
  System_Int64_array *v120; // x26
  ServantListViewItem_o *v121; // x23
  UserServantCommandCodeMaster_o *v122; // x21
  unsigned __int64 v123; // x21
  signed __int64 v124; // x20
  UserCommandCodeEntity_o *v125; // x24
  System_Int64_array *v126; // x25
  ServantListViewItem_o *v127; // x23
  __int64 v128; // x0
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v130; // x21
  System_String_o *v131; // x22
  Il2CppObject *v132; // x23
  Il2CppObject *v133; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v135; // x21
  const MethodInfo *v136; // x2
  UILabel_o *v137; // x22
  const MethodInfo *v138; // x1
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x1
  struct DataMasterBase_array *v141; // [xsp+8h] [xbp-98h]
  int v142; // [xsp+14h] [xbp-8Ch]
  __int64 v143; // [xsp+18h] [xbp-88h]
  DataManager_o *v145; // [xsp+28h] [xbp-78h]
  int v146; // [xsp+30h] [xbp-70h] BYREF
  int v147; // [xsp+34h] [xbp-6Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+38h] [xbp-68h] BYREF
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42EC6BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, kind, (_DWORD)setupInfo, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ServantListViewItem_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ServantListViewManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_3292/*"COMMAND_CODE_EMPTY"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_11789/*"SERVANT_ALL_EMPTY"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_11855/*"SERVANT_EQUIP_TAKE"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_3311/*"COMMAND_CODE_TAKE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12201/*"SERVANT_TAKE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_1/*""*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v63, v64, v65);
    byte_42EC6BF = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v70 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 0:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
      v145 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12201/*"SERVANT_TAKE"*/, 0LL);
      v107 = ServantListViewManager_TypeInfo;
      v90 = StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v107 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v107->static_fields->servantSortInfo;
      v109 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)v109,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 0;
      goto LABEL_44;
    case 1:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v145 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtEquipKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v99 = ServantListViewManager_TypeInfo;
      v90 = StringLiteral_11829/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v99 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v99->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      p_sort = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 1;
LABEL_44:
      Instance = (DataManager_o *)*p_sort;
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      v79 = 0LL;
      break;
    case 3:
      if ( !v70 )
        goto LABEL_112;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList(v70, 0LL);
      if ( !SelfUserGame )
        goto LABEL_112;
      v79 = Instance;
      if ( !byte_42E4B73 )
      {
        sub_B5D5C4(&BalanceConfig_TypeInfo, v68, v77, v78);
        byte_42E4B73 = 1;
      }
      v80 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v80 = BalanceConfig_TypeInfo;
      }
      svtKeep = v80->static_fields->CommandCodeFrameMax;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_3311/*"COMMAND_CODE_TAKE"*/, 0LL);
      v89 = ServantListViewManager_TypeInfo;
      v90 = StringLiteral_3292/*"COMMAND_CODE_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v89 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v89->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      p_sort = &this->fields.sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)commandCodeSortInfo,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 3;
      Instance = (DataManager_o *)*p_sort;
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      v145 = 0LL;
      break;
    default:
      v145 = 0LL;
      svtKeep = 0;
      v79 = 0LL;
      v90 = StringLiteral_11789/*"SERVANT_ALL_EMPTY"*/;
      v88 = (System_String_o *)StringLiteral_1/*""*/;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
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
    UILabel__set_text((UILabel_o *)Instance, v88, 0LL);
  }
  v142 = svtKeep;
  if ( v145 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_112;
    v113 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v143 = v90;
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v113 )
      goto LABEL_112;
    UserDeckMaster__getPartyList(v113, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
    datalist = v145->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v141 = v145->fields.datalist;
      if ( (_DWORD)v141 )
      {
        v116 = (int)v145->fields.datalist;
        v117 = 0LL;
        while ( 1 )
        {
          v118 = (UserServantEntity_o *)*((_QWORD *)&v145->fields.lookup + v117);
          v120 = equipIdList;
          v119 = svtIdList;
          v121 = (ServantListViewItem_o *)sub_B5D694(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor(v121, v117, v118, v119, v120, setupInfo, 0LL);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          if ( (__int64)++v117 >= v116 )
            goto LABEL_87;
          if ( v117 >= LODWORD(v145->fields.datalist) )
            goto LABEL_86;
        }
LABEL_112:
        sub_B5D69C(Instance, v68);
      }
LABEL_86:
      v128 = sub_B5D6C8(v114);
      sub_B5D668(v128, 0LL);
    }
LABEL_88:
    v90 = v143;
    goto LABEL_90;
  }
  if ( !v79 )
  {
    LODWORD(datalist) = 0;
    goto LABEL_90;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v122 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v143 = v90;
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v122 )
    goto LABEL_112;
  UserServantCommandCodeMaster__getAttachList(v122, &userCommandCodeIdList, (int64_t)Instance, 0LL);
  datalist = v79->fields.datalist;
  if ( (int)datalist < 1 )
    goto LABEL_88;
  v141 = v79->fields.datalist;
  if ( !(_DWORD)v141 )
    goto LABEL_86;
  v123 = 0LL;
  v124 = (int)v79->fields.datalist;
  while ( 1 )
  {
    v125 = (UserCommandCodeEntity_o *)*((_QWORD *)&v79->fields.lookup + v123);
    v126 = userCommandCodeIdList;
    v127 = (ServantListViewItem_o *)sub_B5D694(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor_29398292(v127, v123, v125, v126, 0LL);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_112;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v127,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( (__int64)++v123 >= v124 )
      break;
    if ( v123 >= LODWORD(v79->fields.datalist) )
      goto LABEL_86;
  }
LABEL_87:
  v90 = v143;
  LODWORD(datalist) = (_DWORD)v141;
LABEL_90:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v130 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v131 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
    v147 = (int)datalist;
    v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v147);
    v146 = v142;
    v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v146);
    Instance = (DataManager_o *)System_String__Format_44573324(v131, v132, v133, 0LL);
    if ( !v130 )
      goto LABEL_112;
    UILabel__set_text(v130, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)datalist >= 1 )
    v135 = (System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v135 = (System_String_o *)v90;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v137 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get(v135, 0LL);
    if ( !v137 )
      goto LABEL_112;
    UILabel__set_text(v137, (System_String_o *)Instance, 0LL);
  }
  ServantListViewManager__SetBonusFilterIds(this, setupInfo, v136);
  ServantListViewManager__SetBonusFilterKind(this, v138);
  ServantListViewManager__SetBonusFilterButton(this, v139);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v140);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  ServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC6BB & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC6BB = 1;
  }
  v4 = ServantListViewManager_TypeInfo;
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v4 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EC6CB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantListViewManager_EndCloseSelectFilterKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EC6CB = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v12);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__CloseServantFilterSelectMenu(Instance, v14, 0LL);
}


void __fastcall ServantListViewManager__EndSelectSortKind(
        ServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EC6CD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantListViewManager_EndCloseSelectSortKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EC6CD = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantSortSelectMenu(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v14; // x21
  unsigned __int64 v15; // x23
  ListViewItem_o *v16; // x8
  __int64 v17; // x11
  __int64 v18; // x11
  ServantListViewItem_o *v19; // x0

  v5 = this;
  if ( (byte_42EC6D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantListViewManager_o *)sub_B5D5C4(&ServantListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC6D2 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (ServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      v18 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
      {
        if ( (ServantListViewItem_c *)v16->klass->_2.typeHierarchy[v18 - 1] == ServantListViewItem_TypeInfo )
          v19 = (ServantListViewItem_o *)itemList->fields._items->m_Items[v15];
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      this = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(v19, 0LL);
      ++v15;
      if ( (_DWORD)this == svtId )
        ++v14;
      if ( (__int64)v15 >= size )
        return v14;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetCommandCodeAmountSortValue(
        ServantListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v14; // x21
  unsigned __int64 v15; // x23
  ListViewItem_o *v16; // x8
  __int64 v17; // x11
  __int64 v18; // x11
  ServantListViewItem_o *v19; // x0

  v5 = this;
  if ( (byte_42EC6D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    this = (ServantListViewManager_o *)sub_B5D5C4(&ServantListViewItem_TypeInfo, v9, v10, v11);
    byte_42EC6D3 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v16 = itemList->fields._items->m_Items[v15];
      if ( !v16 )
        break;
      v17 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (ServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      v18 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
      {
        if ( (ServantListViewItem_c *)v16->klass->_2.typeHierarchy[v18 - 1] == ServantListViewItem_TypeInfo )
          v19 = (ServantListViewItem_o *)itemList->fields._items->m_Items[v15];
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      this = (ServantListViewManager_o *)ServantListViewItem__get_CommandCodeId(v19, 0LL);
      ++v15;
      if ( (_DWORD)this == commandCodeId )
        ++v14;
      if ( (__int64)v15 >= size )
        return v14;
      itemList = v5->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B5D69C(this, *(_QWORD *)&commandCodeId);
  }
  return 0LL;
}


ServantListViewItem_o *__fastcall ServantListViewManager__GetItem(
        ServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EC6C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&ServantListViewItem_TypeInfo, v6, v7, v8);
    byte_42EC6C2 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (ServantListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantListViewItem_TypeInfo )
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
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall ServantListViewManager__GetSwapChoiceList(
        ServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  ServantListViewItem_c *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v42; // w25
  __int64 v43; // x9
  __int64 v44; // x8
  __int128 v45; // q0
  __int128 *v46; // x0
  __int64 v47; // x8
  __int128 v48; // q0
  const MethodInfo_3047788 *v49; // x2
  int64_t v50; // x1
  System_Collections_Generic_List_long__o *v51; // x0
  __int128 v52; // q0
  __int128 *v53; // x0
  __int128 v54; // q0
  System_Int64_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int64_array *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  bool result; // w0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ServantListViewManager_o *v76; // x0
  ListViewObject_o *v77; // x1
  ListViewItem_o *v78; // x2
  const MethodInfo *v79; // x3
  __int128 v81[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v82[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v83[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v84[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v85; // [xsp+90h] [xbp-80h]
  __int128 v86; // [xsp+A0h] [xbp-70h]

  if ( (byte_42EC6C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)choiceList, (_DWORD)unchoiceList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC6C4 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v32 = (int64_t)itemList->fields._items->m_Items[v42];
      if ( !v32 )
        goto LABEL_46;
      v33 = ServantListViewItem_TypeInfo;
      v43 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v43
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v43 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B5D990(v32);
        ServantListViewManager__SetObjectItem(v76, v77, v78, v79);
        return result;
      }
      v44 = *(_QWORD *)(v32 + 112);
      if ( v44 && *(_BYTE *)(v32 + 265) )
      {
        if ( !*(_BYTE *)(v32 + 227) )
        {
          v52 = *(_OWORD *)(v44 + 32);
          v85 = *(_OWORD *)(v44 + 16);
          v86 = v52;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v53 = v83;
          v83[0] = v85;
          v83[1] = v86;
LABEL_35:
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v53,
                  0LL);
          if ( !v30 )
            goto LABEL_46;
          v49 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v50 = v32;
          v51 = v30;
          goto LABEL_37;
        }
        v45 = *(_OWORD *)(v44 + 32);
        v85 = *(_OWORD *)(v44 + 16);
        v86 = v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v46 = v84;
        v84[0] = v85;
        v84[1] = v86;
      }
      else
      {
        v47 = *(_QWORD *)(v32 + 144);
        if ( !v47 || !*(_BYTE *)(v32 + 265) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v32 + 227) )
        {
          v54 = *(_OWORD *)(v47 + 32);
          v85 = *(_OWORD *)(v47 + 16);
          v86 = v54;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v53 = v81;
          v81[0] = v85;
          v81[1] = v86;
          goto LABEL_35;
        }
        v48 = *(_OWORD *)(v47 + 32);
        v85 = *(_OWORD *)(v47 + 16);
        v86 = v48;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v46 = v82;
        v82[0] = v85;
        v82[1] = v86;
      }
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v46,
              0LL);
      if ( !v31 )
        goto LABEL_46;
      v49 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
      v50 = v32;
      v51 = v31;
LABEL_37:
      System_Collections_Generic_List_long___Add(v51, v50, v49);
LABEL_38:
      if ( (int)++v42 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v30 || !v31 )
LABEL_46:
    sub_B5D69C(v32, v33);
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, 0LL, v34, v35, v36, v37, v38, v39);
    *unchoiceList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, 0LL, v70, v71, v72, v73, v74, v75);
    return 0;
  }
  else
  {
    v55 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v55;
    sub_B5D560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
    v62 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v62;
    sub_B5D560((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
    return 1;
  }
}


bool __fastcall ServantListViewManager__GetSwapLockList(
        ServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_long__o *v30; // x23
  System_Collections_Generic_List_long__o *v31; // x22
  int64_t v32; // x0
  ServantListViewItem_c *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v42; // w25
  __int64 v43; // x9
  __int64 v44; // x8
  __int128 v45; // q0
  __int128 *v46; // x0
  __int64 v47; // x8
  __int128 v48; // q0
  const MethodInfo_3047788 *v49; // x2
  int64_t v50; // x1
  System_Collections_Generic_List_long__o *v51; // x0
  __int128 v52; // q0
  __int128 *v53; // x0
  __int128 v54; // q0
  System_Int64_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int64_array *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ServantListViewManager_o *v76; // x0
  System_Int64_array **v77; // x1
  System_Int64_array **v78; // x2
  const MethodInfo *v79; // x3
  __int128 v81[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v82[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v83[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v84[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v85; // [xsp+90h] [xbp-80h]
  __int128 v86; // [xsp+A0h] [xbp-70h]

  if ( (byte_42EC6C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)lockList, (_DWORD)unlockList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantListViewItem_TypeInfo, v27, v28, v29);
    byte_42EC6C3 = 1;
  }
  v30 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v31 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v32 = (int64_t)itemList->fields._items->m_Items[v42];
      if ( !v32 )
        goto LABEL_46;
      v33 = ServantListViewItem_TypeInfo;
      v43 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v43
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v43 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B5D990(v32);
        return ServantListViewManager__GetSwapChoiceList(v76, v77, v78, v79);
      }
      v44 = *(_QWORD *)(v32 + 112);
      if ( v44 && *(_BYTE *)(v32 + 264) )
      {
        if ( !*(_BYTE *)(v32 + 226) )
        {
          v52 = *(_OWORD *)(v44 + 32);
          v85 = *(_OWORD *)(v44 + 16);
          v86 = v52;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v53 = v83;
          v83[0] = v85;
          v83[1] = v86;
LABEL_35:
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v53,
                  0LL);
          if ( !v30 )
            goto LABEL_46;
          v49 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v50 = v32;
          v51 = v30;
          goto LABEL_37;
        }
        v45 = *(_OWORD *)(v44 + 32);
        v85 = *(_OWORD *)(v44 + 16);
        v86 = v45;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v46 = v84;
        v84[0] = v85;
        v84[1] = v86;
      }
      else
      {
        v47 = *(_QWORD *)(v32 + 144);
        if ( !v47 || !*(_BYTE *)(v32 + 264) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v32 + 226) )
        {
          v54 = *(_OWORD *)(v47 + 32);
          v85 = *(_OWORD *)(v47 + 16);
          v86 = v54;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v53 = v81;
          v81[0] = v85;
          v81[1] = v86;
          goto LABEL_35;
        }
        v48 = *(_OWORD *)(v47 + 32);
        v85 = *(_OWORD *)(v47 + 16);
        v86 = v48;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v46 = v82;
        v82[0] = v85;
        v82[1] = v86;
      }
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v46,
              0LL);
      if ( !v31 )
        goto LABEL_46;
      v49 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
      v50 = v32;
      v51 = v31;
LABEL_37:
      System_Collections_Generic_List_long___Add(v51, v50, v49);
LABEL_38:
      if ( (int)++v42 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v30 || !v31 )
LABEL_46:
    sub_B5D69C(v32, v33);
  if ( v31->fields._size + v30->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)lockList, 0LL, v34, v35, v36, v37, v38, v39);
    *unlockList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, 0LL, v70, v71, v72, v73, v74, v75);
    return 0;
  }
  else
  {
    v55 = System_Collections_Generic_List_long___ToArray(
            v30,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v55;
    sub_B5D560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
    v62 = System_Collections_Generic_List_long___ToArray(
            v31,
            (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v62;
    sub_B5D560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
    return 1;
  }
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  ServantListViewManager_c *v4; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_42EC6BC & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_TypeInfo, v1, v2, v3);
    byte_42EC6BC = 1;
  }
  v4 = ServantListViewManager_TypeInfo;
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v4 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v4->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL) )
  {
    sub_B5D69C(servantSortInfo, v1);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ListViewManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x21
  unsigned __int64 v17; // x22
  ListViewItem_o *v18; // x25
  __int64 v19; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-60h]

  v5 = (ListViewManager_o *)this;
  if ( (byte_42EC6C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10, v11);
    this = (ServantListViewManager_o *)sub_B5D5C4(&ServantListViewItem_TypeInfo, v12, v13, v14);
    byte_42EC6C9 = 1;
  }
  if ( userSvtId >= 1 )
  {
    itemList = v5->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
    size = itemList->fields._size;
    if ( (int)size >= 1 )
    {
      v17 = 0LL;
      do
      {
        if ( v17 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v18 = itemList->fields._items->m_Items[v17];
        if ( !v18 )
          break;
        v19 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (ServantListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != ServantListViewItem_TypeInfo )
        {
          break;
        }
        klass = v18[1].klass;
        if ( klass )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v23.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v22 = v23;
          this = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                               &v22,
                                               0LL);
          if ( this == (ServantListViewManager_o *)userSvtId )
            ListViewManager__JumpItem(v5, v18->fields.index, 0LL);
        }
        if ( (__int64)++v17 >= size )
          return;
        itemList = v5->fields.itemList;
      }
      while ( itemList );
LABEL_20:
      sub_B5D69C(this, userSvtId);
    }
  }
}


void __fastcall ServantListViewManager__ModifyList(
        ServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  char v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int64_t Instance; // x0
  __int64 v33; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserCommandCodeMaster_o *v35; // x22
  UserDeckMaster_o *v36; // x23
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v39; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  il2cpp_array_size_t v42; // w27
  Il2CppClass **v43; // x26
  Il2CppClass *v44; // x8
  System_Int32_array ***v45; // x26
  Il2CppClass *v46; // t1
  Il2CppType byval_arg; // q0
  int64_t v48; // x21
  unsigned __int64 v49; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x23
  ServantListViewItem_o *v51; // x23
  __int64 v52; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v54; // q0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  unsigned int v62; // w27
  int64_t v63; // x26
  __int64 v64; // x8
  System_Int32_array ***v65; // x26
  __int64 v66; // t1
  __int128 v67; // q0
  int64_t v68; // x22
  unsigned __int64 v69; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v70; // x23
  ServantListViewItem_o *v71; // x23
  __int64 v72; // x10
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  __int128 v74; // q0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  __int64 v82; // x0
  unsigned __int64 v83; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v84; // x20
  ListViewItem_o *v85; // x20
  __int64 v86; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v89; // [xsp+10h] [xbp-120h]
  int64_t v90; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v91; // [xsp+18h] [xbp-118h]
  __int64 v92; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+D0h] [xbp-60h] BYREF

  if ( (byte_42EC6C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, isIconSizeChange, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantListViewItem_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42EC6C0 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v35 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v36 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v36 )
    goto LABEL_98;
  UserDeckMaster__getPartyList(v36, &svtIdList, &equipIdList, Instance, 0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v35 )
        goto LABEL_98;
      Instance = (int64_t)UserCommandCodeMaster__getList(v35, 0LL);
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
      v39 = ServantEquipList;
      Instance = 0LL;
      goto LABEL_22;
    default:
      Instance = 0LL;
      break;
  }
  v39 = 0LL;
LABEL_22:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_98;
  size = itemList->fields._size;
  if ( v39 )
  {
    v89 = *(_QWORD *)&v39->max_length;
    if ( (int)v89 >= 1 )
    {
      if ( (_DWORD)v89 )
      {
        v42 = 0;
        v91 = v39;
        while ( 1 )
        {
          v43 = &v39->obj.klass + (int)v42;
          v46 = v43[4];
          v45 = (System_Int32_array ***)(v43 + 4);
          v44 = v46;
          if ( !v46 )
            goto LABEL_98;
          byval_arg = v44->_1.byval_arg;
          *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&v44->_1.name;
          *(Il2CppType *)&v97.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v96 = v97;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v96, 0LL);
          if ( (int)size >= 1 )
          {
            v48 = Instance;
            v49 = 0LL;
            while ( 1 )
            {
              v50 = this->fields.itemList;
              if ( !v50 )
                goto LABEL_98;
              if ( v49 >= (unsigned int)v50->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v51 = (ServantListViewItem_o *)v50->fields._items->m_Items[v49];
              if ( !v51 )
                goto LABEL_98;
              v52 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v51->klass->_2.bitflags2 + 1) < (unsigned int)v52
                || (ServantListViewItem_c *)v51->klass->_2.typeHierarchy[v52 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userSvtEntity = v51->fields.userSvtEntity;
              if ( userSvtEntity )
              {
                v54 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v97.fields.fakeValue = v54;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v95 = v97;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v95, 0LL);
                if ( Instance == v48 )
                  break;
              }
              if ( (__int64)++v49 >= size )
                goto LABEL_49;
            }
            if ( v42 >= v91->max_length )
              goto LABEL_80;
            v61 = *v45;
            v51->fields.userSvtEntity = (struct UserServantEntity_o *)*v45;
            sub_B5D560((BattleServantConfConponent_o *)&v51->fields.userSvtEntity, v61, v55, v56, v57, v58, v59, v60);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v51, 0LL);
              ServantListViewItem__ModifyChoiceItem(v51, 0LL);
            }
          }
LABEL_49:
          v39 = v91;
          if ( (int)++v42 >= (int)v89 )
            goto LABEL_81;
          if ( v42 >= v91->max_length )
            goto LABEL_80;
        }
      }
      goto LABEL_80;
    }
  }
  else if ( Instance )
  {
    v92 = *(_QWORD *)(Instance + 24);
    if ( (int)v92 >= 1 )
    {
      if ( (_DWORD)v92 )
      {
        v62 = 0;
        v90 = Instance;
        while ( 1 )
        {
          v63 = Instance + 8LL * (int)v62;
          v66 = *(_QWORD *)(v63 + 32);
          v65 = (System_Int32_array ***)(v63 + 32);
          v64 = v66;
          if ( !v66 )
            break;
          v67 = *(_OWORD *)(v64 + 32);
          *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)(v64 + 16);
          *(_OWORD *)&v97.fields.fakeValue = v67;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v94 = v97;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v94, 0LL);
          if ( (int)size >= 1 )
          {
            v68 = Instance;
            v69 = 0LL;
            while ( 1 )
            {
              v70 = this->fields.itemList;
              if ( !v70 )
                goto LABEL_98;
              if ( v69 >= (unsigned int)v70->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v71 = (ServantListViewItem_o *)v70->fields._items->m_Items[v69];
              if ( !v71 )
                goto LABEL_98;
              v72 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v71->klass->_2.bitflags2 + 1) < (unsigned int)v72
                || (ServantListViewItem_c *)v71->klass->_2.typeHierarchy[v72 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userCommandCodeEntity = v71->fields.userCommandCodeEntity;
              if ( userCommandCodeEntity )
              {
                v74 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v97.fields.fakeValue = v74;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v93 = v97;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v93, 0LL);
                if ( Instance == v68 )
                  break;
              }
              if ( (__int64)++v69 >= size )
                goto LABEL_78;
            }
            if ( v62 >= *(_DWORD *)(v90 + 24) )
              goto LABEL_80;
            v81 = *v65;
            v71->fields.userCommandCodeEntity = (struct UserCommandCodeEntity_o *)*v65;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v71->fields.userCommandCodeEntity,
              v81,
              v75,
              v76,
              v77,
              v78,
              v79,
              v80);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v71, 0LL);
              ServantListViewItem__ModifyChoiceItem(v71, 0LL);
            }
          }
LABEL_78:
          Instance = v90;
          if ( (int)++v62 >= (int)v92 )
            goto LABEL_81;
          if ( v62 >= *(_DWORD *)(v90 + 24) )
            goto LABEL_80;
        }
LABEL_98:
        sub_B5D69C(Instance, v33);
      }
LABEL_80:
      v82 = sub_B5D6C8(Instance);
      sub_B5D668(v82, 0LL);
    }
  }
LABEL_81:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v83 = 0LL;
    while ( 1 )
    {
      v84 = this->fields.itemList;
      if ( !v84 )
        goto LABEL_98;
      if ( v83 >= (unsigned int)v84->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v85 = v84->fields._items->m_Items[v83];
      if ( v85 )
      {
        v86 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v85->klass->_2.bitflags2 + 1) >= (unsigned int)v86
          && (ServantListViewItem_c *)v85->klass->_2.typeHierarchy[v86 - 1] == ServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v85->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v85->fields.viewObject;
            if ( !Instance )
              goto LABEL_98;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v85, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v83 >= size )
        return;
    }
  }
}


void __fastcall ServantListViewManager__OnClickBonusFilterKind(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42EC6D0 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC6D0 = 1;
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
      sub_B5D69C(0LL, v5);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIds, this->fields.servantFilterIds, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t kind; // w23
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w1
  ListViewSort_o *v21; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v22; // x22

  if ( (byte_42EC6CA & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantListViewManager_EndSelectFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC6CA = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( kind == 1 )
          v20 = 5;
        else
          v20 = 6;
        CommonUI__OpenServantFilterSelectMenu_18209116(Instance, v20, sort, (ListViewManager_o *)this, v17, -1, 0LL);
        return;
      }
    }
    else
    {
      v21 = this->fields.sort;
      v22 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v22,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu(Instance, 0, v21, v22, -1, 0LL);
        return;
      }
    }
    sub_B5D69C(v18, v19);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    ServantListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortAscendingOrder(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC6CE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC6CE = 1;
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
      sub_B5D69C(v5, v6);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t kind; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v17; // x21
  ServantSortSelectMenu_CallbackFunc_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int v21; // w8
  int32_t v22; // w1

  if ( (byte_42EC6CC & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantListViewManager_EndSelectSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EC6CC = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v17 = (CommonUI_o *)Instance;
    v18 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v17 )
      sub_B5D69C(v19, v20);
    if ( kind == 3 )
      v21 = 6;
    else
      v21 = 4;
    if ( kind )
      v22 = v21;
    else
      v22 = 3;
    CommonUI__OpenServantSortSelectMenu(v17, v22, sort, 0, v18, 0LL);
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
  sub_B5D560(
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
      sub_B5D69C(v10, v11);
    Index = ListViewObject__get_Index(obj, 0LL);
    ServantListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
  }
}


void __fastcall ServantListViewManager__OnMoveEnd(ServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EC6C8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC6C8 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_15;
      v16 = this->fields.scrollView;
      if ( v16 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
        v16 = this->fields.scrollView;
        if ( v16 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v16->klass->vtable._6_get_shouldMoveVertically.method)(
                  v16,
                  v16->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_15;
          v16 = this->fields.scrollView;
          if ( v16 )
          {
            UIScrollView__UpdatePosition(v16, 0LL);
LABEL_15:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B5D69C(v16, v9);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC6C6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_ServantListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EC6C6 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v33,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_32483908(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EC6C7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EC6C7 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v31,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


void __fastcall ServantListViewManager__SaveSortInfo(ServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewSort_o *servantSortInfo; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8
  ServantListViewManager_c *v9; // x0

  if ( (byte_42EC6C1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC6C1 = 1;
  }
  v9 = ServantListViewManager_TypeInfo;
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v9 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v9->static_fields->servantSortInfo;
  if ( servantSortInfo )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantSortInfo;
      if ( !servantSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantSortInfo, 0LL);
    v9 = ServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = ServantListViewManager_TypeInfo;
  }
  servantEquipSortInfo = v9->static_fields->servantEquipSortInfo;
  if ( servantEquipSortInfo )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      servantEquipSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo;
      if ( !servantEquipSortInfo )
        goto LABEL_28;
    }
    ListViewSort__Save(servantEquipSortInfo, 0LL);
    v9 = ServantListViewManager_TypeInfo;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = ServantListViewManager_TypeInfo;
  }
  commandCodeSortInfo = v9->static_fields->commandCodeSortInfo;
  if ( commandCodeSortInfo )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) == 0
      || v9->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v9),
          (commandCodeSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) != 0LL) )
    {
      ListViewSort__Save(commandCodeSortInfo, 0LL);
      return;
    }
LABEL_28:
    sub_B5D69C(v5, v6);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_42EC6D1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC6D1 = 1;
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
          v6 = this->fields.kind != 3;
          if ( gameObject )
          {
LABEL_11:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v6, 0LL);
            return;
          }
        }
        else
        {
          v6 = 0LL;
          if ( gameObject )
            goto LABEL_11;
        }
      }
    }
    sub_B5D69C(gameObject, v6);
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIds,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantFilterIds = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantFilterIds, 0LL, v21, v22, v23, v24, v25, v26);
    return;
  }
  kind = this->fields.kind;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_9;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    this->fields.bonusEventIds = servantEquipFilterEventIdList;
    sub_B5D560(
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
    sub_B5D560(
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
  sub_B5D560(
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
      sub_B5D69C(this, setupInfo);
  }
  v29->fields.isBonusKind = (char)servantFilterIds;
}


void __fastcall ServantListViewManager__SetBonusFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, method);
  if ( sort->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(sort, this->fields.bonusEventIds, this->fields.servantFilterIds, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v10; // x8

  if ( (byte_42EC6D4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17202/*"btn_filter_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17201/*"btn_filter"*/, v5, v6, v7);
    byte_42EC6D4 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B5D69C(sort, method);
  }
  v10 = (System_String_o **)&StringLiteral_17201/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v10 = (System_String_o **)&StringLiteral_17202/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v10, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_32483724(this, mode, v10);
}


void __fastcall ServantListViewManager__SetMode_32483724(
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
  ServantListViewManager__RequestListObject_32483908(this, v6, v5);
}


void __fastcall ServantListViewManager__SetMode_32483852(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_32483724(this, mode, v10);
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
  if ( (byte_42EC6C5 & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_B5D5C4(&ServantListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    byte_42EC6C5 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v24; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v26; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v28; // x8
  int32_t sortKind; // w9
  System_String_o **v30; // x8
  struct ListViewSort_o *v31; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v33; // x9
  System_String_o **v34; // x10
  System_String_o **v35; // x8
  struct ListViewSort_o *v36; // x8
  System_String_o **v37; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v39; // x20

  if ( (byte_42EC6CF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17230/*"btn_sort_up"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17314/*"btn_txt_up"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17270/*"btn_txt_new"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17260/*"btn_txt_down"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17277/*"btn_txt_old"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17227/*"btn_sort_down"*/, v20, v21, v22);
    byte_42EC6CF = 1;
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
    v26 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v26 )
      goto LABEL_44;
    UILabel__set_text(v26, (System_String_o *)sort, 0LL);
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
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_44;
    sortKind = v28->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v30 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17277/*"btn_txt_old"*/ : &StringLiteral_17270/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v30, 0LL);
      v31 = this->fields.sort;
      if ( !v31 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v31->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
      v34 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v35 = (System_String_o **)(v28->fields.isAscendingOrder ? &StringLiteral_17314/*"btn_txt_up"*/ : &StringLiteral_17260/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v35, 0LL);
      v36 = this->fields.sort;
      if ( !v36 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v36->fields.isAscendingOrder;
      v33 = (System_String_o **)&StringLiteral_17230/*"btn_sort_up"*/;
      v34 = (System_String_o **)&StringLiteral_17227/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v37 = v33;
    else
      v37 = v34;
    UISprite__set_spriteName((UISprite_o *)sort, *v37, 0LL);
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
      v39 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34067136(
                                 sort,
                                 this->fields.bonusEventIds,
                                 this->fields.servantFilterIds,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v39 )
      {
        UILabel__set_text(v39, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B5D69C(sort, v24);
    }
  }
}


void __fastcall ServantListViewManager__UpdateItemDisplayState(
        ServantListViewManager_o *this,
        bool isPushMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x20
  __int64 v28; // x9
  Il2CppClass *v29; // x8
  Il2CppType byval_arg; // q0
  __int64 v31; // x1
  UserServantEntity_o *v32; // x0
  __int64 v33; // x1
  UserServantEntity_o *v34; // x0
  __int64 v35; // x1
  UserServantEntity_o *v36; // x0
  __int64 v37; // x1
  UserServantEntity_o *v38; // x0
  __int64 v39; // x1
  bool v40; // w8
  UserServantEntity_o *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_42EC6D5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      isPushMode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantListViewItem_TypeInfo, v18, v19, v20);
    byte_42EC6D5 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v23 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B5D69C(SelfUserGame, v22);
  }
  klass = v23[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    SelfUserGame,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v44.fields.current = (Il2CppObject *)v43.fields.fakeValue;
  *(_OWORD *)&v44.fields.list = *(_OWORD *)&v43.fields.currentCryptoKey;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    current = v44.fields.current;
    if ( !v44.fields.current )
      goto LABEL_31;
    v28 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v44.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (ServantListViewItem_c *)v44.fields.current->klass->_2.typeHierarchy[v28 - 1] != ServantListViewItem_TypeInfo )
    {
      sub_B5D990(v44.fields.current);
LABEL_31:
      sub_B5D69C(v25, v26);
    }
    v29 = v44.fields.current[7].klass;
    if ( !v29 )
    {
      BYTE6(v44.fields.current[14].klass) = 0;
LABEL_25:
      v40 = 1;
      goto LABEL_26;
    }
    byval_arg = v29->_1.byval_arg;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v29->_1.name;
    *(Il2CppType *)&v43.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v42 = v43;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v42, 0LL) == (_QWORD)klass;
    if ( !isPushMode )
      goto LABEL_25;
    v32 = (UserServantEntity_o *)current[7].klass;
    if ( !v32 )
      sub_B5D69C(0LL, v31);
    if ( UserServantEntity__IsLeave(v32, 0LL) )
      goto LABEL_23;
    v34 = (UserServantEntity_o *)current[7].klass;
    if ( !v34 )
      sub_B5D69C(0LL, v33);
    if ( UserServantEntity__IsEventJoin(v34, 0LL) )
      goto LABEL_23;
    v36 = (UserServantEntity_o *)current[7].klass;
    if ( !v36 )
      sub_B5D69C(0LL, v35);
    if ( UserServantEntity__IsCombineMaterial(v36, 0LL) )
      goto LABEL_23;
    v38 = (UserServantEntity_o *)current[7].klass;
    if ( !v38 )
      sub_B5D69C(0LL, v37);
    if ( UserServantEntity__IsStatusUp(v38, 0LL) )
    {
LABEL_23:
      v40 = 0;
    }
    else
    {
      v41 = (UserServantEntity_o *)current[7].klass;
      if ( !v41 )
        sub_B5D69C(0LL, v39);
      v40 = !UserServantEntity__IsMaterialTd(v41, 0LL);
    }
LABEL_26:
    HIBYTE(current[14].klass) = v40;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall ServantListViewManager__add_callbackFunc(
        ServantListViewManager_o *this,
        ServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantListViewManager_o *v11; // x0
  ServantListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC6B7 & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC6B7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v8->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantListViewManager__add_callbackFunc2(
        ServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC6B9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC6B9 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantListViewManager__remove_callbackFunc2(v11, v12, v13);
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
    sub_B5D69C(0LL, state);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  ServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EC6BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC6BE = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (ServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)current,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v29;
}


System_Collections_Generic_List_ServantListViewObject__o *__fastcall ServantListViewManager__get_ObjectList(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC6BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EC6BD = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v29;
}


void __fastcall ServantListViewManager__remove_callbackFunc(
        ServantListViewManager_o *this,
        ServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC6B8 & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC6B8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantListViewManager_CallbackFunc_c *)v8->klass != ServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall ServantListViewManager__remove_callbackFunc2(
        ServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EC6BA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC6BA = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantListViewManager__DeleteContinueData(v11);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantListViewManager_CallbackFunc__BeginInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E5D64 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&ServantListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5D64 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  ServantListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  ServantListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}