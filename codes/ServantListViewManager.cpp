void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ListViewSort_o *v14; // x19
  struct ServantListViewManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ListViewSort_o *v22; // x19
  struct ServantListViewManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_418B23C & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&ServantListViewManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_12703/*"Servant1"*/, v3);
    sub_B2C35C(&StringLiteral_12705/*"Servant4"*/, v4);
    sub_B2C35C(&StringLiteral_12704/*"Servant2"*/, v5);
    byte_418B23C = 1;
  }
  v6 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v6, (System_String_o *)StringLiteral_12703/*"Servant1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v14 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v14, (System_String_o *)StringLiteral_12704/*"Servant2"*/, 3, 0, 0LL);
  v15 = ServantListViewManager_TypeInfo->static_fields;
  v15->servantEquipSortInfo = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->servantEquipSortInfo,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v22, (System_String_o *)StringLiteral_12705/*"Servant4"*/, 2, 0, 0LL);
  v23 = ServantListViewManager_TypeInfo->static_fields;
  v23->commandCodeSortInfo = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->commandCodeSortInfo,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
    sub_B2C2F8(
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
        ServantListViewManager__SetMode_31555952(v9, 2, v14),
        ListViewManager__SortItem((ListViewManager_o *)v9, -1, 0, -1, 0LL),
        (this = (ServantListViewManager_o *)v9->fields.scrollBar) == 0LL)
    || (this = (ServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(this, method);
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
  __int64 v28; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserCommandCodeMaster_o *v30; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
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
  struct DataMasterBase_array *datalist; // x24
  signed __int64 v74; // x27
  unsigned __int64 v75; // x22
  UserServantEntity_o *v76; // x24
  System_Int64_array *v77; // x25
  System_Int64_array *v78; // x26
  ServantListViewItem_o *v79; // x23
  UserServantCommandCodeMaster_o *v80; // x21
  unsigned __int64 v81; // x21
  signed __int64 v82; // x20
  UserCommandCodeEntity_o *v83; // x24
  System_Int64_array *v84; // x25
  ServantListViewItem_o *v85; // x23
  __int64 v86; // x0
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v88; // x21
  System_String_o *v89; // x22
  Il2CppObject *v90; // x23
  Il2CppObject *v91; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v93; // x21
  const MethodInfo *v94; // x2
  UILabel_o *v95; // x22
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x1
  struct DataMasterBase_array *v99; // [xsp+8h] [xbp-98h]
  int v100; // [xsp+14h] [xbp-8Ch]
  __int64 v101; // [xsp+18h] [xbp-88h]
  DataManager_o *v103; // [xsp+28h] [xbp-78h]
  int v104; // [xsp+30h] [xbp-70h] BYREF
  int v105; // [xsp+34h] [xbp-6Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+38h] [xbp-68h] BYREF
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_418B225 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&ServantListViewItem_TypeInfo, v14);
    sub_B2C35C(&ServantListViewManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/, v17);
    sub_B2C35C(&StringLiteral_3227/*"COMMAND_CODE_EMPTY"*/, v18);
    sub_B2C35C(&StringLiteral_11654/*"SERVANT_ALL_EMPTY"*/, v19);
    sub_B2C35C(&StringLiteral_11716/*"SERVANT_EQUIP_TAKE"*/, v20);
    sub_B2C35C(&StringLiteral_3246/*"COMMAND_CODE_TAKE"*/, v21);
    sub_B2C35C(&StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_B2C35C(&StringLiteral_12054/*"SERVANT_TAKE"*/, v23);
    sub_B2C35C(&StringLiteral_1/*""*/, v24);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v25);
    byte_418B225 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v30 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 0:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      Instance = (DataManager_o *)UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
      v103 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_TAKE"*/, 0LL);
      v65 = ServantListViewManager_TypeInfo;
      v48 = StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/;
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
      sub_B2C2F8(
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
      v103 = Instance;
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtEquipKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11716/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v57 = ServantListViewManager_TypeInfo;
      v48 = StringLiteral_11690/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v57 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v57->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      p_sort = &this->fields.sort;
      sub_B2C2F8(
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
      if ( !v30 )
        goto LABEL_112;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList(v30, 0LL);
      if ( !SelfUserGame )
        goto LABEL_112;
      v37 = Instance;
      if ( !byte_4183CB7 )
      {
        sub_B2C35C(&BalanceConfig_TypeInfo, v28);
        byte_4183CB7 = 1;
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
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3246/*"COMMAND_CODE_TAKE"*/, 0LL);
      v47 = ServantListViewManager_TypeInfo;
      v48 = StringLiteral_3227/*"COMMAND_CODE_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v47 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v47->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      p_sort = &this->fields.sort;
      sub_B2C2F8(
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
      v103 = 0LL;
      break;
    default:
      v103 = 0LL;
      svtKeep = 0;
      v37 = 0LL;
      v48 = StringLiteral_11654/*"SERVANT_ALL_EMPTY"*/;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)normalSizeSeed,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
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
  v100 = svtKeep;
  if ( v103 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_112;
    v71 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v101 = v48;
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v71 )
      goto LABEL_112;
    UserDeckMaster__getPartyList(v71, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
    datalist = v103->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v99 = v103->fields.datalist;
      if ( (_DWORD)v99 )
      {
        v74 = (int)v103->fields.datalist;
        v75 = 0LL;
        while ( 1 )
        {
          v76 = (UserServantEntity_o *)*((_QWORD *)&v103->fields.lookup + v75);
          v78 = equipIdList;
          v77 = svtIdList;
          v79 = (ServantListViewItem_o *)sub_B2C42C(ServantListViewItem_TypeInfo);
          ServantListViewItem___ctor(v79, v75, v76, v77, v78, setupInfo, 0LL);
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          if ( (__int64)++v75 >= v74 )
            goto LABEL_87;
          if ( v75 >= LODWORD(v103->fields.datalist) )
            goto LABEL_86;
        }
LABEL_112:
        sub_B2C434(Instance, v28);
      }
LABEL_86:
      v86 = sub_B2C460(v72);
      sub_B2C400(v86, 0LL);
    }
LABEL_88:
    v48 = v101;
    goto LABEL_90;
  }
  if ( !v37 )
  {
    LODWORD(datalist) = 0;
    goto LABEL_90;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  v80 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v101 = v48;
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v80 )
    goto LABEL_112;
  UserServantCommandCodeMaster__getAttachList(v80, &userCommandCodeIdList, (int64_t)Instance, 0LL);
  datalist = v37->fields.datalist;
  if ( (int)datalist < 1 )
    goto LABEL_88;
  v99 = v37->fields.datalist;
  if ( !(_DWORD)v99 )
    goto LABEL_86;
  v81 = 0LL;
  v82 = (int)v37->fields.datalist;
  while ( 1 )
  {
    v83 = (UserCommandCodeEntity_o *)*((_QWORD *)&v37->fields.lookup + v81);
    v84 = userCommandCodeIdList;
    v85 = (ServantListViewItem_o *)sub_B2C42C(ServantListViewItem_TypeInfo);
    ServantListViewItem___ctor_29379128(v85, v81, v83, v84, 0LL);
    Instance = (DataManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_112;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( (__int64)++v81 >= v82 )
      break;
    if ( v81 >= LODWORD(v37->fields.datalist) )
      goto LABEL_86;
  }
LABEL_87:
  v48 = v101;
  LODWORD(datalist) = (_DWORD)v99;
LABEL_90:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v88 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
    v105 = (int)datalist;
    v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
    v104 = v100;
    v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
    Instance = (DataManager_o *)System_String__Format_44301068(v89, v90, v91, 0LL);
    if ( !v88 )
      goto LABEL_112;
    UILabel__set_text(v88, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)datalist >= 1 )
    v93 = (System_String_o *)StringLiteral_11892/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v93 = (System_String_o *)v48;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v95 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get(v93, 0LL);
    if ( !v95 )
      goto LABEL_112;
    UILabel__set_text(v95, (System_String_o *)Instance, 0LL);
  }
  ServantListViewManager__SetBonusFilterIds(this, setupInfo, v94);
  ServantListViewManager__SetBonusFilterKind(this, v96);
  ServantListViewManager__SetBonusFilterButton(this, v97);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v98);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ListViewSort_o *servantSortInfo; // x0
  ServantListViewManager_c *v3; // x0

  if ( (byte_418B221 & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_TypeInfo, v1);
    byte_418B221 = 1;
  }
  v3 = ServantListViewManager_TypeInfo;
  if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
    v3 = ServantListViewManager_TypeInfo;
  }
  servantSortInfo = v3->static_fields->servantSortInfo;
  if ( !servantSortInfo
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantSortInfo, 0LL),
        (servantSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL) )
  {
    sub_B2C434(servantSortInfo, v1);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B231 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418B231 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__CloseServantFilterSelectMenu(Instance, v9, 0LL);
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
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_418B233 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantListViewManager_EndCloseSelectSortKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418B233 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__CloseServantSortSelectMenu(Instance, v8, 0LL);
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
  if ( (byte_418B238 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantListViewManager_o *)sub_B2C35C(&ServantListViewItem_TypeInfo, v6);
    byte_418B238 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  if ( (byte_418B239 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    this = (ServantListViewManager_o *)sub_B2C35C(&ServantListViewItem_TypeInfo, v6);
    byte_418B239 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, *(_QWORD *)&commandCodeId);
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

  if ( (byte_418B228 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&ServantListViewItem_TypeInfo, v5);
    byte_418B228 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(0LL, method);
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
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  ServantListViewItem_c *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v26; // w25
  __int64 v27; // x9
  __int64 v28; // x8
  __int128 v29; // q0
  __int128 *v30; // x0
  __int64 v31; // x8
  __int128 v32; // q0
  const MethodInfo_2F6CFA8 *v33; // x2
  int64_t v34; // x1
  System_Collections_Generic_List_long__o *v35; // x0
  __int128 v36; // q0
  __int128 *v37; // x0
  __int128 v38; // q0
  System_Int64_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int64_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  bool result; // w0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ServantListViewManager_o *v60; // x0
  ListViewObject_o *v61; // x1
  ListViewItem_o *v62; // x2
  const MethodInfo *v63; // x3
  __int128 v65[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v66[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v67[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v68[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v69; // [xsp+90h] [xbp-80h]
  __int128 v70; // [xsp+A0h] [xbp-70h]

  if ( (byte_418B22A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&ServantListViewItem_TypeInfo, v13);
    byte_418B22A = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v16 = (int64_t)itemList->fields._items->m_Items[v26];
      if ( !v16 )
        goto LABEL_46;
      v17 = ServantListViewItem_TypeInfo;
      v27 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v27
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v27 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B2C728(v16);
        ServantListViewManager__SetObjectItem(v60, v61, v62, v63);
        return result;
      }
      v28 = *(_QWORD *)(v16 + 112);
      if ( v28 && *(_BYTE *)(v16 + 265) )
      {
        if ( !*(_BYTE *)(v16 + 227) )
        {
          v36 = *(_OWORD *)(v28 + 32);
          v69 = *(_OWORD *)(v28 + 16);
          v70 = v36;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v37 = v67;
          v67[0] = v69;
          v67[1] = v70;
LABEL_35:
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v37,
                  0LL);
          if ( !v14 )
            goto LABEL_46;
          v33 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v34 = v16;
          v35 = v14;
          goto LABEL_37;
        }
        v29 = *(_OWORD *)(v28 + 32);
        v69 = *(_OWORD *)(v28 + 16);
        v70 = v29;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v68;
        v68[0] = v69;
        v68[1] = v70;
      }
      else
      {
        v31 = *(_QWORD *)(v16 + 144);
        if ( !v31 || !*(_BYTE *)(v16 + 265) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v16 + 227) )
        {
          v38 = *(_OWORD *)(v31 + 32);
          v69 = *(_OWORD *)(v31 + 16);
          v70 = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v37 = v65;
          v65[0] = v69;
          v65[1] = v70;
          goto LABEL_35;
        }
        v32 = *(_OWORD *)(v31 + 32);
        v69 = *(_OWORD *)(v31 + 16);
        v70 = v32;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v66;
        v66[0] = v69;
        v66[1] = v70;
      }
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v30,
              0LL);
      if ( !v15 )
        goto LABEL_46;
      v33 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
      v34 = v16;
      v35 = v15;
LABEL_37:
      System_Collections_Generic_List_long___Add(v35, v34, v33);
LABEL_38:
      if ( (int)++v26 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v14 || !v15 )
LABEL_46:
    sub_B2C434(v16, v17);
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v18, v19, v20, v21, v22, v23);
    *unchoiceList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v54, v55, v56, v57, v58, v59);
    return 0;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v39;
    sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
    v46 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v46;
    sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
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
  System_Collections_Generic_List_long__o *v15; // x22
  int64_t v16; // x0
  ServantListViewItem_c *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v26; // w25
  __int64 v27; // x9
  __int64 v28; // x8
  __int128 v29; // q0
  __int128 *v30; // x0
  __int64 v31; // x8
  __int128 v32; // q0
  const MethodInfo_2F6CFA8 *v33; // x2
  int64_t v34; // x1
  System_Collections_Generic_List_long__o *v35; // x0
  __int128 v36; // q0
  __int128 *v37; // x0
  __int128 v38; // q0
  System_Int64_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int64_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ServantListViewManager_o *v60; // x0
  System_Int64_array **v61; // x1
  System_Int64_array **v62; // x2
  const MethodInfo *v63; // x3
  __int128 v65[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v66[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v67[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v68[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v69; // [xsp+90h] [xbp-80h]
  __int128 v70; // [xsp+A0h] [xbp-70h]

  if ( (byte_418B229 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&ServantListViewItem_TypeInfo, v13);
    byte_418B229 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v16 = (int64_t)itemList->fields._items->m_Items[v26];
      if ( !v16 )
        goto LABEL_46;
      v17 = ServantListViewItem_TypeInfo;
      v27 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v27
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v27 - 8) != ServantListViewItem_TypeInfo )
      {
        sub_B2C728(v16);
        return ServantListViewManager__GetSwapChoiceList(v60, v61, v62, v63);
      }
      v28 = *(_QWORD *)(v16 + 112);
      if ( v28 && *(_BYTE *)(v16 + 264) )
      {
        if ( !*(_BYTE *)(v16 + 226) )
        {
          v36 = *(_OWORD *)(v28 + 32);
          v69 = *(_OWORD *)(v28 + 16);
          v70 = v36;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v37 = v67;
          v67[0] = v69;
          v67[1] = v70;
LABEL_35:
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v37,
                  0LL);
          if ( !v14 )
            goto LABEL_46;
          v33 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
          v34 = v16;
          v35 = v14;
          goto LABEL_37;
        }
        v29 = *(_OWORD *)(v28 + 32);
        v69 = *(_OWORD *)(v28 + 16);
        v70 = v29;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v68;
        v68[0] = v69;
        v68[1] = v70;
      }
      else
      {
        v31 = *(_QWORD *)(v16 + 144);
        if ( !v31 || !*(_BYTE *)(v16 + 264) )
          goto LABEL_38;
        if ( !*(_BYTE *)(v16 + 226) )
        {
          v38 = *(_OWORD *)(v31 + 32);
          v69 = *(_OWORD *)(v31 + 16);
          v70 = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v37 = v65;
          v65[0] = v69;
          v65[1] = v70;
          goto LABEL_35;
        }
        v32 = *(_OWORD *)(v31 + 32);
        v69 = *(_OWORD *)(v31 + 16);
        v70 = v32;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v66;
        v66[0] = v69;
        v66[1] = v70;
      }
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v30,
              0LL);
      if ( !v15 )
        goto LABEL_46;
      v33 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
      v34 = v16;
      v35 = v15;
LABEL_37:
      System_Collections_Generic_List_long___Add(v35, v34, v33);
LABEL_38:
      if ( (int)++v26 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v14 || !v15 )
LABEL_46:
    sub_B2C434(v16, v17);
  if ( v15->fields._size + v14->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v18, v19, v20, v21, v22, v23);
    *unlockList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v54, v55, v56, v57, v58, v59);
    return 0;
  }
  else
  {
    v39 = System_Collections_Generic_List_long___ToArray(
            v14,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v39;
    sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
    v46 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v46;
    sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
    return 1;
  }
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_418B222 & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_TypeInfo, v1);
    byte_418B222 = 1;
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
    sub_B2C434(servantSortInfo, v1);
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
  if ( (byte_418B22F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userSvtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    this = (ServantListViewManager_o *)sub_B2C35C(&ServantListViewItem_TypeInfo, v7);
    byte_418B22F = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          this = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
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
      sub_B2C434(this, userSvtId);
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
  __int64 v14; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserCommandCodeMaster_o *v16; // x22
  UserDeckMaster_o *v17; // x23
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v20; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  il2cpp_array_size_t v23; // w27
  Il2CppClass **v24; // x26
  Il2CppClass *v25; // x8
  System_Int32_array ***v26; // x26
  Il2CppClass *v27; // t1
  Il2CppType byval_arg; // q0
  int64_t v29; // x21
  unsigned __int64 v30; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x23
  ServantListViewItem_o *v32; // x23
  __int64 v33; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v35; // q0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  unsigned int v43; // w27
  int64_t v44; // x26
  __int64 v45; // x8
  System_Int32_array ***v46; // x26
  __int64 v47; // t1
  __int128 v48; // q0
  int64_t v49; // x22
  unsigned __int64 v50; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v51; // x23
  ServantListViewItem_o *v52; // x23
  __int64 v53; // x10
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  __int128 v55; // q0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  __int64 v63; // x0
  unsigned __int64 v64; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v65; // x20
  ListViewItem_o *v66; // x20
  __int64 v67; // x10
  UnityEngine_Object_o *viewObject; // x21
  __int64 v70; // [xsp+10h] [xbp-120h]
  int64_t v71; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v72; // [xsp+18h] [xbp-118h]
  __int64 v73; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+D0h] [xbp-60h] BYREF

  if ( (byte_418B226 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, isIconSizeChange);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&ServantListViewItem_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418B226 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v16 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  v17 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v17 )
    goto LABEL_98;
  UserDeckMaster__getPartyList(v17, &svtIdList, &equipIdList, Instance, 0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v16 )
        goto LABEL_98;
      Instance = (int64_t)UserCommandCodeMaster__getList(v16, 0LL);
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
      v20 = ServantEquipList;
      Instance = 0LL;
      goto LABEL_22;
    default:
      Instance = 0LL;
      break;
  }
  v20 = 0LL;
LABEL_22:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_98;
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
          v26 = (System_Int32_array ***)(v24 + 4);
          v25 = v27;
          if ( !v27 )
            goto LABEL_98;
          byval_arg = v25->_1.byval_arg;
          *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v25->_1.name;
          *(Il2CppType *)&v78.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v77 = v78;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v77, 0LL);
          if ( (int)size >= 1 )
          {
            v29 = Instance;
            v30 = 0LL;
            while ( 1 )
            {
              v31 = this->fields.itemList;
              if ( !v31 )
                goto LABEL_98;
              if ( v30 >= (unsigned int)v31->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v32 = (ServantListViewItem_o *)v31->fields._items->m_Items[v30];
              if ( !v32 )
                goto LABEL_98;
              v33 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33
                || (ServantListViewItem_c *)v32->klass->_2.typeHierarchy[v33 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userSvtEntity = v32->fields.userSvtEntity;
              if ( userSvtEntity )
              {
                v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v78.fields.fakeValue = v35;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v76 = v78;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v76, 0LL);
                if ( Instance == v29 )
                  break;
              }
              if ( (__int64)++v30 >= size )
                goto LABEL_49;
            }
            if ( v23 >= v72->max_length )
              goto LABEL_80;
            v42 = *v26;
            v32->fields.userSvtEntity = (struct UserServantEntity_o *)*v26;
            sub_B2C2F8((BattleServantConfConponent_o *)&v32->fields.userSvtEntity, v42, v36, v37, v38, v39, v40, v41);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v32, 0LL);
              ServantListViewItem__ModifyChoiceItem(v32, 0LL);
            }
          }
LABEL_49:
          v20 = v72;
          if ( (int)++v23 >= (int)v70 )
            goto LABEL_81;
          if ( v23 >= v72->max_length )
            goto LABEL_80;
        }
      }
      goto LABEL_80;
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
          v46 = (System_Int32_array ***)(v44 + 32);
          v45 = v47;
          if ( !v47 )
            break;
          v48 = *(_OWORD *)(v45 + 32);
          *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
          *(_OWORD *)&v78.fields.fakeValue = v48;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v75 = v78;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v75, 0LL);
          if ( (int)size >= 1 )
          {
            v49 = Instance;
            v50 = 0LL;
            while ( 1 )
            {
              v51 = this->fields.itemList;
              if ( !v51 )
                goto LABEL_98;
              if ( v50 >= (unsigned int)v51->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v52 = (ServantListViewItem_o *)v51->fields._items->m_Items[v50];
              if ( !v52 )
                goto LABEL_98;
              v53 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v52->klass->_2.bitflags2 + 1) < (unsigned int)v53
                || (ServantListViewItem_c *)v52->klass->_2.typeHierarchy[v53 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userCommandCodeEntity = v52->fields.userCommandCodeEntity;
              if ( userCommandCodeEntity )
              {
                v55 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v78.fields.fakeValue = v55;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v74 = v78;
                Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v74, 0LL);
                if ( Instance == v49 )
                  break;
              }
              if ( (__int64)++v50 >= size )
                goto LABEL_78;
            }
            if ( v43 >= *(_DWORD *)(v71 + 24) )
              goto LABEL_80;
            v62 = *v46;
            v52->fields.userCommandCodeEntity = (struct UserCommandCodeEntity_o *)*v46;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v52->fields.userCommandCodeEntity,
              v62,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v52, 0LL);
              ServantListViewItem__ModifyChoiceItem(v52, 0LL);
            }
          }
LABEL_78:
          Instance = v71;
          if ( (int)++v43 >= (int)v73 )
            goto LABEL_81;
          if ( v43 >= *(_DWORD *)(v71 + 24) )
            goto LABEL_80;
        }
LABEL_98:
        sub_B2C434(Instance, v14);
      }
LABEL_80:
      v63 = sub_B2C460(Instance);
      sub_B2C400(v63, 0LL);
    }
  }
LABEL_81:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v64 = 0LL;
    while ( 1 )
    {
      v65 = this->fields.itemList;
      if ( !v65 )
        goto LABEL_98;
      if ( v64 >= (unsigned int)v65->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v66 = v65->fields._items->m_Items[v64];
      if ( v66 )
      {
        v67 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v66->klass->_2.bitflags2 + 1) >= (unsigned int)v67
          && (ServantListViewItem_c *)v66->klass->_2.typeHierarchy[v67 - 1] == ServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v66->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)v66->fields.viewObject;
            if ( !Instance )
              goto LABEL_98;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v66, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v64 >= size )
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

  if ( (byte_418B236 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B236 = 1;
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
      sub_B2C434(0LL, v3);
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
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1
  ListViewSort_o *v13; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v14; // x22

  if ( (byte_418B230 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B230 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v9 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( kind == 1 )
          v12 = 5;
        else
          v12 = 6;
        CommonUI__OpenServantFilterSelectMenu_17978356(Instance, v12, sort, (ListViewManager_o *)this, v9, -1, 0LL);
        return;
      }
    }
    else
    {
      v13 = this->fields.sort;
      v14 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu(Instance, 0, v13, v14, -1, 0LL);
        return;
      }
    }
    sub_B2C434(v10, v11);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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

  if ( (byte_418B234 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B234 = 1;
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
      sub_B2C434(v3, v4);
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
  ServantSortSelectMenu_CallbackFunc_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w8
  int32_t v14; // w1

  if ( (byte_418B232 & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418B232 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B2C434(v11, v12);
    if ( kind == 3 )
      v13 = 6;
    else
      v13 = 4;
    if ( kind )
      v14 = v13;
    else
      v14 = 3;
    CommonUI__OpenServantSortSelectMenu(v9, v14, sort, 0, v10, 0LL);
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
  sub_B2C2F8(
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
      sub_B2C434(v10, v11);
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

  if ( (byte_418B22E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B22E = 1;
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
            sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B2C434(v14, v7);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B22C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_ServantListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418B22C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_31556136(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418B22D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ServantListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418B22D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
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

  if ( (byte_418B227 & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_TypeInfo, method);
    byte_418B227 = 1;
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
    sub_B2C434(v4, v5);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  _BOOL8 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_418B237 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B237 = 1;
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
    sub_B2C434(gameObject, v4);
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIds,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantFilterIds = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantFilterIds, 0LL, v21, v22, v23, v24, v25, v26);
    return;
  }
  kind = this->fields.kind;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_9;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    this->fields.bonusEventIds = servantEquipFilterEventIdList;
    sub_B2C2F8(
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
    sub_B2C2F8(
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
  sub_B2C2F8(
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
      sub_B2C434(this, setupInfo);
  }
  v29->fields.isBonusKind = (char)servantFilterIds;
}


void __fastcall ServantListViewManager__SetBonusFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B2C434(0LL, method);
  if ( sort->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(sort, this->fields.bonusEventIds, this->fields.servantFilterIds, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418B23A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418B23A = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_31555952(this, mode, v10);
}


void __fastcall ServantListViewManager__SetMode_31555952(
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
  ServantListViewManager__RequestListObject_31556136(this, v6, v5);
}


void __fastcall ServantListViewManager__SetMode_31556080(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_31555952(this, mode, v10);
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
  if ( (byte_418B22B & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_B2C35C(&ServantListViewObject_TypeInfo, obj);
    byte_418B22B = 1;
  }
  if ( !obj
    || (v6 = *(&ServantListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v25; // x20

  if ( (byte_418B235 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418B235 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_44;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_44;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v23 = v19;
    else
      v23 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
      v25 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_33951116(
                                 sort,
                                 this->fields.bonusEventIds,
                                 this->fields.servantFilterIds,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL);
      if ( v25 )
      {
        UILabel__set_text(v25, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B2C434(sort, v10);
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
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__c *klass; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x9
  Il2CppClass *v18; // x8
  Il2CppType byval_arg; // q0
  __int64 v20; // x1
  UserServantEntity_o *v21; // x0
  __int64 v22; // x1
  UserServantEntity_o *v23; // x0
  __int64 v24; // x1
  UserServantEntity_o *v25; // x0
  __int64 v26; // x1
  UserServantEntity_o *v27; // x0
  __int64 v28; // x1
  bool v29; // w8
  UserServantEntity_o *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_418B23B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&ServantListViewItem_TypeInfo, v9);
    byte_418B23B = 1;
  }
  memset(&v33, 0, sizeof(v33));
  SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v12 = SelfUserGame,
        (SelfUserGame = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList) == 0LL) )
  {
    sub_B2C434(SelfUserGame, v11);
  }
  klass = v12[3].klass;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    SelfUserGame,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33.fields.current = (Il2CppObject *)v32.fields.fakeValue;
  *(_OWORD *)&v33.fields.list = *(_OWORD *)&v32.fields.currentCryptoKey;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      goto LABEL_31;
    v17 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (ServantListViewItem_c *)v33.fields.current->klass->_2.typeHierarchy[v17 - 1] != ServantListViewItem_TypeInfo )
    {
      sub_B2C728(v33.fields.current);
LABEL_31:
      sub_B2C434(v14, v15);
    }
    v18 = v33.fields.current[7].klass;
    if ( !v18 )
    {
      BYTE6(v33.fields.current[14].klass) = 0;
LABEL_25:
      v29 = 1;
      goto LABEL_26;
    }
    byval_arg = v18->_1.byval_arg;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v18->_1.name;
    *(Il2CppType *)&v32.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v31 = v32;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v31, 0LL) == (_QWORD)klass;
    if ( !isPushMode )
      goto LABEL_25;
    v21 = (UserServantEntity_o *)current[7].klass;
    if ( !v21 )
      sub_B2C434(0LL, v20);
    if ( UserServantEntity__IsLeave(v21, 0LL) )
      goto LABEL_23;
    v23 = (UserServantEntity_o *)current[7].klass;
    if ( !v23 )
      sub_B2C434(0LL, v22);
    if ( UserServantEntity__IsEventJoin(v23, 0LL) )
      goto LABEL_23;
    v25 = (UserServantEntity_o *)current[7].klass;
    if ( !v25 )
      sub_B2C434(0LL, v24);
    if ( UserServantEntity__IsCombineMaterial(v25, 0LL) )
      goto LABEL_23;
    v27 = (UserServantEntity_o *)current[7].klass;
    if ( !v27 )
      sub_B2C434(0LL, v26);
    if ( UserServantEntity__IsStatusUp(v27, 0LL) )
    {
LABEL_23:
      v29 = 0;
    }
    else
    {
      v30 = (UserServantEntity_o *)current[7].klass;
      if ( !v30 )
        sub_B2C434(0LL, v28);
      v29 = !UserServantEntity__IsMaterialTd(v30, 0LL);
    }
LABEL_26:
    HIBYTE(current[14].klass) = v29;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_418B21D & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B21D = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B21F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B21F = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
    sub_B2C434(0LL, state);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  ServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418B224 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B224 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (ServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)current,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418B223 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418B223 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_418B21E & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418B21E = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418B220 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418B220 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41853F2 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ServantListViewManager_ResultKind_TypeInfo, v9);
    byte_41853F2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
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