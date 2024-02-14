void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  ListViewSort_o *v17; // x19
  struct ServantListViewManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  ListViewSort_o *v27; // x19
  struct ServantListViewManager_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_421812D & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&ServantListViewManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_12742/*"Servant1"*/, v4);
    sub_B0D8A4(&StringLiteral_12744/*"Servant4"*/, v5);
    sub_B0D8A4(&StringLiteral_12743/*"Servant2"*/, v6);
    byte_421812D = 1;
  }
  v7 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v7, (System_String_o *)StringLiteral_12742/*"Servant1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B0D840(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v17 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v15, v16);
  ListViewSort___ctor_32823364(v17, (System_String_o *)StringLiteral_12743/*"Servant2"*/, 3, 0, 0LL);
  v18 = ServantListViewManager_TypeInfo->static_fields;
  v18->servantEquipSortInfo = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v18->servantEquipSortInfo,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v25, v26);
  ListViewSort___ctor_32823364(v27, (System_String_o *)StringLiteral_12744/*"Servant4"*/, 2, 0, 0LL);
  v28 = ServantListViewManager_TypeInfo->static_fields;
  v28->commandCodeSortInfo = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v28->commandCodeSortInfo,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
    sub_B0D840(
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
        ServantListViewManager__SetMode_31237376(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (ServantListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (ServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserCommandCodeMaster_o *v29; // x24
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  DataManager_o *v37; // x22
  BalanceConfig_c *v38; // x0
  int svtKeep; // w20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *v46; // x23
  ServantListViewManager_c *v47; // x8
  __int64 v48; // x26
  struct ListViewSort_o *commandCodeSortInfo; // x1
  struct ListViewSort_o **p_sort; // x24
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  ServantListViewManager_c *v57; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  ServantListViewManager_c *v65; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v67; // x1
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  UserDeckMaster_o *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  struct DataMasterBase_array *datalist; // x24
  signed __int64 v76; // x27
  unsigned __int64 v77; // x22
  UserServantEntity_o *v78; // x24
  System_Int64_array *v79; // x25
  System_Int64_array *v80; // x26
  ServantListViewItem_o *v81; // x23
  UserServantCommandCodeMaster_o *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  unsigned __int64 v85; // x21
  signed __int64 v86; // x20
  UserCommandCodeEntity_o *v87; // x24
  System_Int64_array *v88; // x25
  ServantListViewItem_o *v89; // x23
  __int64 v90; // x0
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v92; // x21
  System_String_o *v93; // x22
  Il2CppObject *v94; // x23
  Il2CppObject *v95; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v97; // x21
  const MethodInfo *v98; // x2
  UILabel_o *v99; // x22
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  struct DataMasterBase_array *v103; // [xsp+8h] [xbp-98h]
  int v104; // [xsp+14h] [xbp-8Ch]
  __int64 v105; // [xsp+18h] [xbp-88h]
  DataManager_o *v107; // [xsp+28h] [xbp-78h]
  int v108; // [xsp+30h] [xbp-70h] BYREF
  int v109; // [xsp+34h] [xbp-6Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+38h] [xbp-68h] BYREF
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4218116 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&ServantListViewItem_TypeInfo, v14);
    sub_B0D8A4(&ServantListViewManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/, v17);
    sub_B0D8A4(&StringLiteral_3239/*"COMMAND_CODE_EMPTY"*/, v18);
    sub_B0D8A4(&StringLiteral_11681/*"SERVANT_ALL_EMPTY"*/, v19);
    sub_B0D8A4(&StringLiteral_11744/*"SERVANT_EQUIP_TAKE"*/, v20);
    sub_B0D8A4(&StringLiteral_3258/*"COMMAND_CODE_TAKE"*/, v21);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_B0D8A4(&StringLiteral_12092/*"SERVANT_TAKE"*/, v23);
    sub_B0D8A4(&StringLiteral_1/*""*/, v24);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v25);
    byte_4218116 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v29 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 0:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
      v107 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_TAKE"*/, 0LL);
      v65 = ServantListViewManager_TypeInfo;
      v48 = StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v65 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v65->static_fields->servantSortInfo;
      v67 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)v67,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 0;
      goto LABEL_44;
    case 1:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      Instance = (DataManager_o *)UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      v107 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtEquipKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v57 = ServantListViewManager_TypeInfo;
      v48 = StringLiteral_11718/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v57 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v57->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      p_sort = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 1;
LABEL_44:
      Instance = (DataManager_o *)*p_sort;
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      v37 = 0LL;
      break;
    case 3:
      if ( !v29 )
        goto LABEL_112;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList(v29, 0LL);
      if ( !SelfUserGame )
        goto LABEL_112;
      v37 = Instance;
      if ( !byte_421088F )
      {
        sub_B0D8A4(&BalanceConfig_TypeInfo, v36);
        byte_421088F = 1;
      }
      v38 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v38 = BalanceConfig_TypeInfo;
      }
      svtKeep = v38->static_fields->CommandCodeFrameMax;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3258/*"COMMAND_CODE_TAKE"*/, 0LL);
      v47 = ServantListViewManager_TypeInfo;
      v48 = StringLiteral_3239/*"COMMAND_CODE_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v47 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v47->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      p_sort = &this->fields.sort;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)commandCodeSortInfo,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 3;
      Instance = (DataManager_o *)*p_sort;
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      v107 = 0LL;
      break;
    default:
      v107 = 0LL;
      svtKeep = 0;
      v37 = 0LL;
      v48 = StringLiteral_11681/*"SERVANT_ALL_EMPTY"*/;
      v46 = (System_String_o *)StringLiteral_1/*""*/;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
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
    UILabel__set_text((UILabel_o *)Instance, v46, 0LL);
  }
  v104 = svtKeep;
  if ( v107 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_112;
    v71 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v105 = v48;
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v71 )
      goto LABEL_112;
    UserDeckMaster__getPartyList(v71, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
    datalist = v107->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v103 = v107->fields.datalist;
      if ( (_DWORD)v103 )
      {
        v76 = (int)v107->fields.datalist;
        v77 = 0LL;
        while ( 1 )
        {
          v78 = (UserServantEntity_o *)*((_QWORD *)&v107->fields.lookup + v77);
          v80 = equipIdList;
          v79 = svtIdList;
          v81 = (ServantListViewItem_o *)sub_B0D974(ServantListViewItem_TypeInfo, v73, v74);
          ServantListViewItem___ctor(v81, v77, v78, v79, v80, setupInfo, 0LL);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          if ( (__int64)++v77 >= v76 )
            goto LABEL_87;
          if ( v77 >= LODWORD(v107->fields.datalist) )
            goto LABEL_86;
        }
LABEL_112:
        sub_B0D97C(Instance);
      }
LABEL_86:
      v90 = sub_B0D9A8(v72);
      sub_B0D948(v90, 0LL);
    }
LABEL_88:
    v48 = v105;
    goto LABEL_90;
  }
  if ( !v37 )
  {
    LODWORD(datalist) = 0;
    goto LABEL_90;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v82 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v105 = v48;
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v82 )
    goto LABEL_112;
  UserServantCommandCodeMaster__getAttachList(v82, &userCommandCodeIdList, (int64_t)Instance, 0LL);
  datalist = v37->fields.datalist;
  if ( (int)datalist < 1 )
    goto LABEL_88;
  v103 = v37->fields.datalist;
  if ( !(_DWORD)v103 )
    goto LABEL_86;
  v85 = 0LL;
  v86 = (int)v37->fields.datalist;
  while ( 1 )
  {
    v87 = (UserCommandCodeEntity_o *)*((_QWORD *)&v37->fields.lookup + v85);
    v88 = userCommandCodeIdList;
    v89 = (ServantListViewItem_o *)sub_B0D974(ServantListViewItem_TypeInfo, v83, v84);
    ServantListViewItem___ctor_28191932(v89, v85, v87, v88, 0LL);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_112;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( (__int64)++v85 >= v86 )
      break;
    if ( v85 >= LODWORD(v37->fields.datalist) )
      goto LABEL_86;
  }
LABEL_87:
  v48 = v105;
  LODWORD(datalist) = (_DWORD)v103;
LABEL_90:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v92 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
    v109 = (int)datalist;
    v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
    v108 = v104;
    v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
    Instance = (DataManager_o *)System_String__Format_43845440(v93, v94, v95, 0LL);
    if ( !v92 )
      goto LABEL_112;
    UILabel__set_text(v92, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)datalist >= 1 )
    v97 = (System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v97 = (System_String_o *)v48;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v99 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get(v97, 0LL);
    if ( !v99 )
      goto LABEL_112;
    UILabel__set_text(v99, (System_String_o *)Instance, 0LL);
  }
  ServantListViewManager__SetBonusFilterIds(this, setupInfo, v98);
  ServantListViewManager__SetBonusFilterKind(this, v100);
  ServantListViewManager__SetBonusFilterButton(this, v101);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v102);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4218112 & 1) == 0 )
  {
    sub_B0D8A4(&ServantListViewManager_TypeInfo, v1);
    byte_4218112 = 1;
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
    sub_B0D97C(servantSortInfo);
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
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4218122 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4218122 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__CloseServantFilterSelectMenu(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__EndSelectSortKind(
        ServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4218124 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantListViewManager_EndCloseSelectSortKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4218124 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__CloseServantSortSelectMenu(Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  ServantListViewItem_o *v14; // x0

  v4 = this;
  if ( (byte_4218129 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantListViewManager_o *)sub_B0D8A4(&ServantListViewItem_TypeInfo, v6);
    byte_4218129 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (ServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      v13 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (ServantListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] == ServantListViewItem_TypeInfo )
          v14 = (ServantListViewItem_o *)itemList->fields._items->m_Items[v10];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      this = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(v14, 0LL);
      ++v10;
      if ( (_DWORD)this == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  ServantListViewItem_o *v14; // x0

  v4 = this;
  if ( (byte_421812A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantListViewManager_o *)sub_B0D8A4(&ServantListViewItem_TypeInfo, v6);
    byte_421812A = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_20;
  size = itemList->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)itemList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v11 = itemList->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      v12 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (ServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      v13 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
      {
        if ( (ServantListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] == ServantListViewItem_TypeInfo )
          v14 = (ServantListViewItem_o *)itemList->fields._items->m_Items[v10];
        else
          v14 = 0LL;
      }
      else
      {
        v14 = 0LL;
      }
      this = (ServantListViewManager_o *)ServantListViewItem__get_CommandCodeId(v14, 0LL);
      ++v10;
      if ( (_DWORD)this == commandCodeId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B0D97C(this);
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4218119 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B0D8A4(&ServantListViewItem_TypeInfo, v5);
    byte_4218119 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ServantListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantListViewItem_TypeInfo )
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
    sub_B0D97C(0LL);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall ServantListViewManager__GetSwapChoiceList(
        ServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
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
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v27; // w25
  __int64 v28; // x9
  __int64 v29; // x8
  __int128 v30; // q0
  __int128 *v31; // x0
  __int64 v32; // x8
  __int128 v33; // q0
  const MethodInfo_2FB5EB0 *v34; // x2
  int64_t v35; // x1
  System_Collections_Generic_List_long__o *v36; // x0
  __int128 v37; // q0
  __int128 *v38; // x0
  __int128 v39; // q0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  bool result; // w0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  ServantListViewManager_o *v61; // x0
  ListViewObject_o *v62; // x1
  ListViewItem_o *v63; // x2
  const MethodInfo *v64; // x3
  __int128 v66[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v67[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v68[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v69[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v70; // [xsp+90h] [xbp-80h]
  __int128 v71; // [xsp+A0h] [xbp-70h]

  if ( (byte_421811B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&ServantListViewItem_TypeInfo, v13);
    byte_421811B = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v18 = (int64_t)itemList->fields._items->m_Items[v27];
      if ( !v18 )
        goto LABEL_46;
      v28 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v28
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v28 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B0DC70(v18);
        ServantListViewManager__SetObjectItem(v61, v62, v63, v64);
        return result;
      }
      v29 = *(_QWORD *)(v18 + 112);
      if ( v29 && *(_BYTE *)(v18 + 265) )
      {
        if ( !*(_BYTE *)(v18 + 227) )
        {
          v37 = *(_OWORD *)(v29 + 32);
          v70 = *(_OWORD *)(v29 + 16);
          v71 = v37;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v68;
          v68[0] = v70;
          v68[1] = v71;
LABEL_35:
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v38,
                  0LL);
          if ( !v14 )
            goto LABEL_46;
          v34 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v35 = v18;
          v36 = v14;
          goto LABEL_37;
        }
        v30 = *(_OWORD *)(v29 + 32);
        v70 = *(_OWORD *)(v29 + 16);
        v71 = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v69;
        v69[0] = v70;
        v69[1] = v71;
      }
      else
      {
        v32 = *(_QWORD *)(v18 + 144);
        if ( !v32 || !*(_BYTE *)(v18 + 265) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v18 + 227) )
        {
          v39 = *(_OWORD *)(v32 + 32);
          v70 = *(_OWORD *)(v32 + 16);
          v71 = v39;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v66;
          v66[0] = v70;
          v66[1] = v71;
          goto LABEL_35;
        }
        v33 = *(_OWORD *)(v32 + 32);
        v70 = *(_OWORD *)(v32 + 16);
        v71 = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v67;
        v67[0] = v70;
        v67[1] = v71;
      }
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v31,
              0LL);
      if ( !v17 )
        goto LABEL_46;
      v34 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
      v35 = v18;
      v36 = v17;
LABEL_37:
      System_Collections_Generic_List_long___Add(v36, v35, v34);
LABEL_38:
      if ( (int)++v27 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v14 || !v17 )
LABEL_46:
    sub_B0D97C(v18);
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, 0LL, v19, v20, v21, v22, v23, v24);
    *unchoiceList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v40;
    sub_B0D840((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v47;
    sub_B0D840((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


bool __fastcall ServantListViewManager__GetSwapLockList(
        ServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
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
  System_Collections_Generic_List_long__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_long__o *v17; // x22
  int64_t v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v27; // w25
  __int64 v28; // x9
  __int64 v29; // x8
  __int128 v30; // q0
  __int128 *v31; // x0
  __int64 v32; // x8
  __int128 v33; // q0
  const MethodInfo_2FB5EB0 *v34; // x2
  int64_t v35; // x1
  System_Collections_Generic_List_long__o *v36; // x0
  __int128 v37; // q0
  __int128 *v38; // x0
  __int128 v39; // q0
  System_Int64_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  ServantListViewManager_o *v61; // x0
  System_Int64_array **v62; // x1
  System_Int64_array **v63; // x2
  const MethodInfo *v64; // x3
  __int128 v66[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v67[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v68[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v69[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v70; // [xsp+90h] [xbp-80h]
  __int128 v71; // [xsp+A0h] [xbp-70h]

  if ( (byte_421811A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&ServantListViewItem_TypeInfo, v13);
    byte_421811A = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v17 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v15, v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v18 = (int64_t)itemList->fields._items->m_Items[v27];
      if ( !v18 )
        goto LABEL_46;
      v28 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v28
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v28 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B0DC70(v18);
        return ServantListViewManager__GetSwapChoiceList(v61, v62, v63, v64);
      }
      v29 = *(_QWORD *)(v18 + 112);
      if ( v29 && *(_BYTE *)(v18 + 264) )
      {
        if ( !*(_BYTE *)(v18 + 226) )
        {
          v37 = *(_OWORD *)(v29 + 32);
          v70 = *(_OWORD *)(v29 + 16);
          v71 = v37;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v68;
          v68[0] = v70;
          v68[1] = v71;
LABEL_35:
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v38,
                  0LL);
          if ( !v14 )
            goto LABEL_46;
          v34 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v35 = v18;
          v36 = v14;
          goto LABEL_37;
        }
        v30 = *(_OWORD *)(v29 + 32);
        v70 = *(_OWORD *)(v29 + 16);
        v71 = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v69;
        v69[0] = v70;
        v69[1] = v71;
      }
      else
      {
        v32 = *(_QWORD *)(v18 + 144);
        if ( !v32 || !*(_BYTE *)(v18 + 264) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v18 + 226) )
        {
          v39 = *(_OWORD *)(v32 + 32);
          v70 = *(_OWORD *)(v32 + 16);
          v71 = v39;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v66;
          v66[0] = v70;
          v66[1] = v71;
          goto LABEL_35;
        }
        v33 = *(_OWORD *)(v32 + 32);
        v70 = *(_OWORD *)(v32 + 16);
        v71 = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v31 = v67;
        v67[0] = v70;
        v67[1] = v71;
      }
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v31,
              0LL);
      if ( !v17 )
        goto LABEL_46;
      v34 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
      v35 = v18;
      v36 = v17;
LABEL_37:
      System_Collections_Generic_List_long___Add(v36, v35, v34);
LABEL_38:
      if ( (int)++v27 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v14 || !v17 )
LABEL_46:
    sub_B0D97C(v18);
  if ( v17->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)lockList, 0LL, v19, v20, v21, v22, v23, v24);
    *unlockList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, 0LL, v55, v56, v57, v58, v59, v60);
    return 0;
  }
  else
  {
    v40 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v40;
    sub_B0D840((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v17,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v47;
    sub_B0D840((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    return 1;
  }
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_4218113 & 1) == 0 )
  {
    sub_B0D8A4(&ServantListViewManager_TypeInfo, v1);
    byte_4218113 = 1;
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
    sub_B0D97C(servantSortInfo);
  }
  ListViewSort__InitLoad(servantSortInfo, 0LL);
}


void __fastcall ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  ListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x21
  unsigned __int64 v10; // x22
  ListViewItem_o *v11; // x25
  __int64 v12; // x10
  ListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]

  v4 = (ListViewManager_o *)this;
  if ( (byte_4218120 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userSvtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    this = (ServantListViewManager_o *)sub_B0D8A4(&ServantListViewItem_TypeInfo, v7);
    byte_4218120 = 1;
  }
  if ( userSvtId >= 1 )
  {
    itemList = v4->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
    size = itemList->fields._size;
    if ( (int)size >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v11 = itemList->fields._items->m_Items[v10];
        if ( !v11 )
          break;
        v12 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v12
          || (ServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] != ServantListViewItem_TypeInfo )
        {
          break;
        }
        klass = v11[1].klass;
        if ( klass )
        {
          byval_arg = klass->_1.byval_arg;
          *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
          *(Il2CppType *)&v16.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v15 = v16;
          this = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                               &v15,
                                               0LL);
          if ( this == (ServantListViewManager_o *)userSvtId )
            ListViewManager__JumpItem(v4, v11->fields.index, 0LL);
        }
        if ( (__int64)++v10 >= size )
          return;
        itemList = v4->fields.itemList;
      }
      while ( itemList );
LABEL_20:
      sub_B0D97C(this);
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
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserCommandCodeMaster_o *v15; // x22
  UserDeckMaster_o *v16; // x23
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v19; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  il2cpp_array_size_t v22; // w27
  Il2CppClass **v23; // x26
  Il2CppClass *v24; // x8
  System_Int32_array ***v25; // x26
  Il2CppClass *v26; // t1
  Il2CppType byval_arg; // q0
  int64_t v28; // x21
  unsigned __int64 v29; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x23
  ServantListViewItem_o *v31; // x23
  __int64 v32; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v34; // q0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  unsigned int v42; // w27
  int64_t v43; // x26
  __int64 v44; // x8
  System_Int32_array ***v45; // x26
  __int64 v46; // t1
  __int128 v47; // q0
  int64_t v48; // x22
  unsigned __int64 v49; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x23
  ServantListViewItem_o *v51; // x23
  __int64 v52; // x10
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  __int128 v54; // q0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  __int64 v62; // x0
  unsigned __int64 v63; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v64; // x20
  ListViewItem_o *v65; // x20
  __int64 v66; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v69; // [xsp+10h] [xbp-120h]
  int64_t v70; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v71; // [xsp+18h] [xbp-118h]
  __int64 v72; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+D0h] [xbp-60h] BYREF

  if ( (byte_4218117 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, isIconSizeChange);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B0D8A4(&ServantListViewItem_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4218117 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v15 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v16 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v16 )
    goto LABEL_98;
  UserDeckMaster__getPartyList(v16, &svtIdList, &equipIdList, Instance, 0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v15 )
        goto LABEL_98;
      Instance = (int64_t)UserCommandCodeMaster__getList(v15, 0LL);
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
      v19 = ServantEquipList;
      Instance = 0LL;
      goto LABEL_22;
    default:
      Instance = 0LL;
      break;
  }
  v19 = 0LL;
LABEL_22:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_98;
  size = itemList->fields._size;
  if ( v19 )
  {
    v69 = *(_QWORD *)&v19->max_length;
    if ( (int)v69 >= 1 )
    {
      if ( (_DWORD)v69 )
      {
        v22 = 0;
        v71 = v19;
        while ( 1 )
        {
          v23 = &v19->obj.klass + (int)v22;
          v26 = v23[4];
          v25 = (System_Int32_array ***)(v23 + 4);
          v24 = v26;
          if ( !v26 )
            goto LABEL_98;
          byval_arg = v24->_1.byval_arg;
          *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&v24->_1.name;
          *(Il2CppType *)&v77.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v76 = v77;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v76, 0LL);
          if ( (int)size >= 1 )
          {
            v28 = Instance;
            v29 = 0LL;
            while ( 1 )
            {
              v30 = this->fields.itemList;
              if ( !v30 )
                goto LABEL_98;
              if ( v29 >= (unsigned int)v30->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v31 = (ServantListViewItem_o *)v30->fields._items->m_Items[v29];
              if ( !v31 )
                goto LABEL_98;
              v32 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v32
                || (ServantListViewItem_c *)v31->klass->_2.typeHierarchy[v32 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userSvtEntity = v31->fields.userSvtEntity;
              if ( userSvtEntity )
              {
                v34 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v77.fields.fakeValue = v34;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v75 = v77;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v75, 0LL);
                if ( Instance == v28 )
                  break;
              }
              if ( (__int64)++v29 >= size )
                goto LABEL_49;
            }
            if ( v22 >= v71->max_length )
              goto LABEL_80;
            v41 = *v25;
            v31->fields.userSvtEntity = (struct UserServantEntity_o *)*v25;
            sub_B0D840((BattleServantConfConponent_o *)&v31->fields.userSvtEntity, v41, v35, v36, v37, v38, v39, v40);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v31, 0LL);
              ServantListViewItem__ModifyChoiceItem(v31, 0LL);
            }
          }
LABEL_49:
          v19 = v71;
          if ( (int)++v22 >= (int)v69 )
            goto LABEL_81;
          if ( v22 >= v71->max_length )
            goto LABEL_80;
        }
      }
      goto LABEL_80;
    }
  }
  else if ( Instance )
  {
    v72 = *(_QWORD *)(Instance + 24);
    if ( (int)v72 >= 1 )
    {
      if ( (_DWORD)v72 )
      {
        v42 = 0;
        v70 = Instance;
        while ( 1 )
        {
          v43 = Instance + 8LL * (int)v42;
          v46 = *(_QWORD *)(v43 + 32);
          v45 = (System_Int32_array ***)(v43 + 32);
          v44 = v46;
          if ( !v46 )
            break;
          v47 = *(_OWORD *)(v44 + 32);
          *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)(v44 + 16);
          *(_OWORD *)&v77.fields.fakeValue = v47;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v74 = v77;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v74, 0LL);
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
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v51 = (ServantListViewItem_o *)v50->fields._items->m_Items[v49];
              if ( !v51 )
                goto LABEL_98;
              v52 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v51->klass->_2.bitflags2 + 1) < (unsigned int)v52
                || (ServantListViewItem_c *)v51->klass->_2.typeHierarchy[v52 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userCommandCodeEntity = v51->fields.userCommandCodeEntity;
              if ( userCommandCodeEntity )
              {
                v54 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v77.fields.fakeValue = v54;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v73 = v77;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v73, 0LL);
                if ( Instance == v48 )
                  break;
              }
              if ( (__int64)++v49 >= size )
                goto LABEL_78;
            }
            if ( v42 >= *(_DWORD *)(v70 + 24) )
              goto LABEL_80;
            v61 = *v45;
            v51->fields.userCommandCodeEntity = (struct UserCommandCodeEntity_o *)*v45;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v51->fields.userCommandCodeEntity,
              v61,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v51, 0LL);
              ServantListViewItem__ModifyChoiceItem(v51, 0LL);
            }
          }
LABEL_78:
          Instance = v70;
          if ( (int)++v42 >= (int)v72 )
            goto LABEL_81;
          if ( v42 >= *(_DWORD *)(v70 + 24) )
            goto LABEL_80;
        }
LABEL_98:
        sub_B0D97C(Instance);
      }
LABEL_80:
      v62 = sub_B0D9A8(Instance);
      sub_B0D948(v62, 0LL);
    }
  }
LABEL_81:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v63 = 0LL;
    while ( 1 )
    {
      v64 = this->fields.itemList;
      if ( !v64 )
        goto LABEL_98;
      if ( v63 >= (unsigned int)v64->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v65 = v64->fields._items->m_Items[v63];
      if ( v65 )
      {
        v66 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v65->klass->_2.bitflags2 + 1) >= (unsigned int)v66
          && (ServantListViewItem_c *)v65->klass->_2.typeHierarchy[v66 - 1] == ServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v65->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v65->fields.viewObject;
            if ( !Instance )
              goto LABEL_98;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v65, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v63 >= size )
        return;
    }
  }
}


void __fastcall ServantListViewManager__OnClickBonusFilterKind(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_4218127 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4218127 = 1;
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
      sub_B0D97C(0LL);
    ListViewSort__IncBonusKind2(sort, this->fields.bonusEventIds, this->fields.servantFilterIds, 0LL, 0LL, 0LL, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t kind; // w23
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x22
  __int64 v12; // x0
  int32_t v13; // w1
  ListViewSort_o *v14; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v15; // x22

  if ( (byte_4218121 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ServantListViewManager_EndSelectFilterKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4218121 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( kind == 1 )
          v13 = 5;
        else
          v13 = 6;
        CommonUI__OpenServantFilterSelectMenu_17023928(Instance, v13, sort, (ListViewManager_o *)this, v11, -1, 0LL);
        return;
      }
    }
    else
    {
      v14 = this->fields.sort;
      v15 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(ServantFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu(Instance, 0, v14, v15, -1, 0LL);
        return;
      }
    }
    sub_B0D97C(v12);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
    Index = ListViewObject__get_Index(obj, 0LL);
    ServantListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortAscendingOrder(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4218125 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4218125 = 1;
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
      sub_B0D97C(v3);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t kind; // w23
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x20
  CommonUI_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  ServantSortSelectMenu_CallbackFunc_o *v12; // x22
  __int64 v13; // x0
  int v14; // w8
  int32_t v15; // w1

  if ( (byte_4218123 & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ServantListViewManager_EndSelectSortKind__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4218123 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v10, v11);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B0D97C(v13);
    if ( kind == 3 )
      v14 = 6;
    else
      v14 = 4;
    if ( kind )
      v15 = v14;
    else
      v15 = 3;
    CommonUI__OpenServantSortSelectMenu(v9, v15, sort, 0, v12, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v10);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_421811F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421811F = 1;
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
      v13 = this->fields.scrollView;
      if ( v13 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
        v13 = this->fields.scrollView;
        if ( v13 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v13->klass->vtable._6_get_shouldMoveVertically.method)(
                  v13,
                  v13->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_15;
          v13 = this->fields.scrollView;
          if ( v13 )
          {
            UIScrollView__UpdatePosition(v13, 0LL);
LABEL_15:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B0D97C(v13);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421811D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_ServantListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_421811D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_31237560(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_421811E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_ServantListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_421811E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


void __fastcall ServantListViewManager__SaveSortInfo(ServantListViewManager_o *this, const MethodInfo *method)
{
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8

  if ( (byte_4218118 & 1) == 0 )
  {
    sub_B0D8A4(&ServantListViewManager_TypeInfo, method);
    byte_4218118 = 1;
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
    sub_B0D97C(v4);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8
  bool v6; // w1

  if ( (byte_4218128 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218128 = 1;
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
          v6 = 0;
          if ( gameObject )
            goto LABEL_11;
        }
      }
    }
    sub_B0D97C(gameObject);
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIds,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantFilterIds = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantFilterIds, 0LL, v21, v22, v23, v24, v25, v26);
    return;
  }
  kind = this->fields.kind;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_9;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    this->fields.bonusEventIds = servantEquipFilterEventIdList;
    sub_B0D840(
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
    sub_B0D840(
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
  sub_B0D840(
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
      sub_B0D97C(this);
  }
  v29->fields.isBonusKind = (char)servantFilterIds;
}


void __fastcall ServantListViewManager__SetBonusFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
  if ( sort->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(sort, this->fields.bonusEventIds, this->fields.servantFilterIds, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_421812B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17044/*"btn_filter_on"*/, method);
    sub_B0D8A4(&StringLiteral_17043/*"btn_filter"*/, v3);
    byte_421812B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B0D97C(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17043/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17044/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_31237376(this, mode, v10);
}


void __fastcall ServantListViewManager__SetMode_31237376(
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
  ServantListViewManager__RequestListObject_31237560(this, v6, v5);
}


void __fastcall ServantListViewManager__SetMode_31237504(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_31237376(this, mode, v10);
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
  if ( (byte_421811C & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_B0D8A4(&ServantListViewObject_TypeInfo, obj);
    byte_421811C = 1;
  }
  if ( !obj
    || (v6 = *(&ServantListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v11; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v13; // x8
  int32_t sortKind; // w9
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v18; // x9
  System_String_o **v19; // x10
  System_String_o **v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v24; // x20

  if ( (byte_4218126 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17072/*"btn_sort_up"*/, v3);
    sub_B0D8A4(&StringLiteral_17156/*"btn_txt_up"*/, v4);
    sub_B0D8A4(&StringLiteral_17112/*"btn_txt_new"*/, v5);
    sub_B0D8A4(&StringLiteral_17102/*"btn_txt_down"*/, v6);
    sub_B0D8A4(&StringLiteral_17119/*"btn_txt_old"*/, v7);
    sub_B0D8A4(&StringLiteral_17069/*"btn_sort_down"*/, v8);
    byte_4218126 = 1;
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
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_44;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
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
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_44;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17119/*"btn_txt_old"*/ : &StringLiteral_17112/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
      v19 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v20 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17156/*"btn_txt_up"*/ : &StringLiteral_17102/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
      v21 = this->fields.sort;
      if ( !v21 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v21->fields.isAscendingOrder;
      v18 = (System_String_o **)&StringLiteral_17072/*"btn_sort_up"*/;
      v19 = (System_String_o **)&StringLiteral_17069/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v22 = v18;
    else
      v22 = v19;
    UISprite__set_spriteName((UISprite_o *)sort, *v22, 0LL);
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
      v24 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_32861208(
                                 sort,
                                 this->fields.bonusEventIds,
                                 this->fields.servantFilterIds,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v24 )
      {
        UILabel__set_text(v24, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B0D97C(sort);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SelfUserGame; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v11; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  _BOOL8 v13; // x0
  Il2CppObject *current; // x20
  __int64 v15; // x9
  Il2CppClass *v16; // x8
  Il2CppType byval_arg; // q0
  UserServantEntity_o *v18; // x0
  UserServantEntity_o *v19; // x0
  UserServantEntity_o *v20; // x0
  UserServantEntity_o *v21; // x0
  bool v22; // w8
  UserServantEntity_o *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_421812C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&ServantListViewItem_TypeInfo, v9);
    byte_421812C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v11 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B0D97C(SelfUserGame);
  }
  klass = v11[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    SelfUserGame,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v26.fields.current = (Il2CppObject *)v25.fields.fakeValue;
  *(_OWORD *)&v26.fields.list = *(_OWORD *)&v25.fields.currentCryptoKey;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v13 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      goto LABEL_31;
    v15 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (ServantListViewItem_c *)v26.fields.current->klass->_2.typeHierarchy[v15 - 1] != ServantListViewItem_TypeInfo )
    {
      sub_B0DC70(v26.fields.current);
LABEL_31:
      sub_B0D97C(v13);
    }
    v16 = v26.fields.current[7].klass;
    if ( !v16 )
    {
      BYTE6(v26.fields.current[14].klass) = 0;
LABEL_25:
      v22 = 1;
      goto LABEL_26;
    }
    byval_arg = v16->_1.byval_arg;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v16->_1.name;
    *(Il2CppType *)&v25.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v24 = v25;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v24, 0LL) == (_QWORD)klass;
    if ( !isPushMode )
      goto LABEL_25;
    v18 = (UserServantEntity_o *)current[7].klass;
    if ( !v18 )
      sub_B0D97C(0LL);
    if ( UserServantEntity__IsLeave(v18, 0LL) )
      goto LABEL_23;
    v19 = (UserServantEntity_o *)current[7].klass;
    if ( !v19 )
      sub_B0D97C(0LL);
    if ( UserServantEntity__IsEventJoin(v19, 0LL) )
      goto LABEL_23;
    v20 = (UserServantEntity_o *)current[7].klass;
    if ( !v20 )
      sub_B0D97C(0LL);
    if ( UserServantEntity__IsCombineMaterial(v20, 0LL) )
      goto LABEL_23;
    v21 = (UserServantEntity_o *)current[7].klass;
    if ( !v21 )
      sub_B0D97C(0LL);
    if ( UserServantEntity__IsStatusUp(v21, 0LL) )
    {
LABEL_23:
      v22 = 0;
    }
    else
    {
      v23 = (UserServantEntity_o *)current[7].klass;
      if ( !v23 )
        sub_B0D97C(0LL);
      v22 = !UserServantEntity__IsMaterialTd(v23, 0LL);
    }
LABEL_26:
    HIBYTE(current[14].klass) = v22;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_421810E & 1) == 0 )
  {
    sub_B0D8A4(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_421810E = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4218110 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4218110 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
    sub_B0D97C(0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  ServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4218115 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4218115 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (ServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)current,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v12;
}


System_Collections_Generic_List_ServantListViewObject__o *__fastcall ServantListViewManager__get_ObjectList(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4218114 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4218114 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v12;
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

  if ( (byte_421810F & 1) == 0 )
  {
    sub_B0D8A4(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_421810F = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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

  if ( (byte_4218111 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4218111 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4212239 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&ServantListViewManager_ResultKind_TypeInfo, v9);
    byte_4212239 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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