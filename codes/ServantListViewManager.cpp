void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewSort_o *v9; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  ListViewSort_o *v21; // x19
  struct ServantListViewManager_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  ListViewSort_o *v33; // x19
  struct ServantListViewManager_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FD6C5 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&ServantListViewManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12647/*"Servant1"*/, v6);
    sub_B16FFC(&StringLiteral_12649/*"Servant4"*/, v7);
    sub_B16FFC(&StringLiteral_12648/*"Servant2"*/, v8);
    byte_40FD6C5 = 1;
  }
  v9 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v9, (System_String_o *)StringLiteral_12647/*"Servant1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B16F98(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v21 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v17, v18, v19, v20);
  ListViewSort___ctor_30208480(v21, (System_String_o *)StringLiteral_12648/*"Servant2"*/, 3, 0, 0LL);
  v22 = ServantListViewManager_TypeInfo->static_fields;
  v22->servantEquipSortInfo = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v22->servantEquipSortInfo,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v29, v30, v31, v32);
  ListViewSort___ctor_30208480(v33, (System_String_o *)StringLiteral_12649/*"Servant4"*/, 2, 0, 0LL);
  v34 = ServantListViewManager_TypeInfo->static_fields;
  v34->commandCodeSortInfo = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v34->commandCodeSortInfo,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  struct ListViewItemSeed_o *smallSizeSeed; // x1
  int32_t v11; // w8
  struct ListViewSort_o *sort; // x8
  ListViewSort_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  UnityEngine_Component_o *scrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x0

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
    this->fields.scaleType = v11;
    this->fields.seed = smallSizeSeed;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.seed,
      (System_Int32_array **)smallSizeSeed,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = this->fields.scaleType;
  v13 = this->fields.sort;
  if ( !v13
    || (ListViewSort__Save(v13, 0LL),
        ServantListViewManager__ModifyList(this, 1, v14),
        ServantListViewManager__SetMode_31576552(this, 2, v15),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(scrollBar, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v29; // x0
  UserCommandCodeMaster_o *v30; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UserCommandCodeEntity_array *List; // x0
  __int64 v38; // x1
  UserCommandCodeEntity_array *v39; // x22
  BalanceConfig_c *v40; // x0
  int svtKeep; // w20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x23
  ServantListViewManager_c *v49; // x8
  __int64 v50; // x26
  struct ListViewSort_o *commandCodeSortInfo; // x1
  ListViewSort_o **p_sort; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  ServantListViewManager_c *v59; // x8
  struct ListViewSort_o *servantEquipSortInfo; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  ServantListViewManager_c *v67; // x8
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v69; // x1
  unsigned int iconScaleKind; // w8
  struct ListViewItemSeed_o *normalSizeSeed; // x1
  UnityEngine_Object_o *infoTitleLabel; // x24
  UILabel_o *v73; // x0
  WebViewManager_o *v74; // x0
  UserDeckMaster_o *v75; // x22
  int64_t UserId; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  __int64 v82; // x24
  signed __int64 v83; // x27
  unsigned __int64 v84; // x22
  UserServantEntity_o *v85; // x24
  System_Int64_array *v86; // x25
  System_Int64_array *v87; // x26
  ServantListViewItem_o *v88; // x23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  WebViewManager_o *v90; // x0
  UserServantCommandCodeMaster_o *v91; // x21
  int64_t v92; // x0
  __int64 v93; // x3
  __int64 v94; // x4
  unsigned __int64 v95; // x21
  signed __int64 v96; // x20
  UserCommandCodeEntity_o *v97; // x24
  System_Int64_array *v98; // x25
  ServantListViewItem_o *v99; // x23
  struct System_Collections_Generic_List_ListViewItem__o *v100; // x0
  UnityEngine_Object_o *infoDataLabel; // x21
  UILabel_o *v102; // x21
  System_String_o *v103; // x22
  Il2CppObject *v104; // x23
  Il2CppObject *v105; // x0
  System_String_o *v106; // x0
  UnityEngine_Object_o *emptyMessageLabel; // x22
  System_String_o *v108; // x21
  const MethodInfo *v109; // x2
  UILabel_o *v110; // x22
  System_String_o *v111; // x0
  const MethodInfo *v112; // x1
  const MethodInfo *v113; // x1
  const MethodInfo *v114; // x1
  __int64 v115; // [xsp+8h] [xbp-98h]
  int v116; // [xsp+14h] [xbp-8Ch]
  __int64 v117; // [xsp+18h] [xbp-88h]
  UserServantEntity_array *KeepServantList; // [xsp+28h] [xbp-78h]
  int v120; // [xsp+30h] [xbp-70h] BYREF
  int v121; // [xsp+34h] [xbp-6Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+38h] [xbp-68h] BYREF
  System_Int64_array *equipIdList; // [xsp+40h] [xbp-60h] BYREF
  System_Int64_array *svtIdList; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FD6AE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v14);
    sub_B16FFC(&ServantListViewManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_11651/*"SERVANT_EQUIP_EMPTY"*/, v17);
    sub_B16FFC(&StringLiteral_3218/*"COMMAND_CODE_EMPTY"*/, v18);
    sub_B16FFC(&StringLiteral_11618/*"SERVANT_ALL_EMPTY"*/, v19);
    sub_B16FFC(&StringLiteral_11677/*"SERVANT_EQUIP_TAKE"*/, v20);
    sub_B16FFC(&StringLiteral_3237/*"COMMAND_CODE_TAKE"*/, v21);
    sub_B16FFC(&StringLiteral_11842/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_B16FFC(&StringLiteral_12003/*"SERVANT_TAKE"*/, v23);
    sub_B16FFC(&StringLiteral_1/*""*/, v24);
    sub_B16FFC(&StringLiteral_12413/*"SUM_INFO"*/, v25);
    byte_40FD6AE = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_112;
  v30 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v29,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 0:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      KeepServantList = UserServantMaster__getKeepServantList(MasterData_WarQuestSelectionMaster, 0LL);
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12003/*"SERVANT_TAKE"*/, 0LL);
      v67 = ServantListViewManager_TypeInfo;
      v50 = StringLiteral_11651/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v67 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v67->static_fields->servantSortInfo;
      v69 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      p_sort = &this->fields.sort;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)v69,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 0;
      goto LABEL_44;
    case 1:
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_112;
      KeepServantList = UserServantMaster__getServantEquipList(MasterData_WarQuestSelectionMaster, 0LL);
      if ( !SelfUserGame )
        goto LABEL_112;
      svtKeep = SelfUserGame->fields.svtEquipKeep;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11677/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v59 = ServantListViewManager_TypeInfo;
      v50 = StringLiteral_11651/*"SERVANT_EQUIP_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v59 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v59->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      p_sort = &this->fields.sort;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)servantEquipSortInfo,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 1;
LABEL_44:
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load(*p_sort, 0LL);
      v39 = 0LL;
      break;
    case 3:
      if ( !v30 )
        goto LABEL_112;
      List = UserCommandCodeMaster__getList(v30, 0LL);
      if ( !SelfUserGame )
        goto LABEL_112;
      v39 = List;
      if ( !byte_40F6094 )
      {
        sub_B16FFC(&BalanceConfig_TypeInfo, v38);
        byte_40F6094 = 1;
      }
      v40 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v40 = BalanceConfig_TypeInfo;
      }
      svtKeep = v40->static_fields->CommandCodeFrameMax;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3237/*"COMMAND_CODE_TAKE"*/, 0LL);
      v49 = ServantListViewManager_TypeInfo;
      v50 = StringLiteral_3218/*"COMMAND_CODE_EMPTY"*/;
      if ( (BYTE3(ServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v49 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v49->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      p_sort = &this->fields.sort;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.sort,
        (System_Int32_array **)commandCodeSortInfo,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      if ( !this->fields.sort )
        goto LABEL_112;
      this->fields.sort->fields.listViewKind = 3;
      if ( !*p_sort )
        goto LABEL_112;
      ListViewSort__Load(*p_sort, 0LL);
      KeepServantList = 0LL;
      break;
    default:
      KeepServantList = 0LL;
      svtKeep = 0;
      v39 = 0LL;
      v50 = StringLiteral_11618/*"SERVANT_ALL_EMPTY"*/;
      v48 = (System_String_o *)StringLiteral_1/*""*/;
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
    sub_B16F98(
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
    v73 = this->fields.infoTitleLabel;
    if ( !v73 )
      goto LABEL_112;
    UILabel__set_text(v73, v48, 0LL);
  }
  v116 = svtKeep;
  if ( KeepServantList )
  {
    v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v74 )
      goto LABEL_112;
    v75 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v74,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v117 = v50;
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v75 )
      goto LABEL_112;
    UserDeckMaster__getPartyList(v75, &svtIdList, &equipIdList, UserId, 0LL);
    v82 = *(_QWORD *)&KeepServantList->max_length;
    if ( (int)v82 >= 1 )
    {
      v115 = *(_QWORD *)&KeepServantList->max_length;
      if ( (_DWORD)v115 )
      {
        v83 = (int)*(_QWORD *)&KeepServantList->max_length;
        v84 = 0LL;
        while ( 1 )
        {
          v85 = KeepServantList->m_Items[v84];
          v87 = equipIdList;
          v86 = svtIdList;
          v88 = (ServantListViewItem_o *)sub_B170CC(ServantListViewItem_TypeInfo, v78, v79, v80, v81);
          ServantListViewItem___ctor(v88, v84, v85, v86, v87, setupInfo, 0LL);
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          if ( (__int64)++v84 >= v83 )
            goto LABEL_87;
          if ( v84 >= KeepServantList->max_length )
            goto LABEL_86;
        }
LABEL_112:
        sub_B170D4();
      }
LABEL_86:
      sub_B17100(v77, v78, v79);
      sub_B170A0();
    }
LABEL_88:
    v50 = v117;
    goto LABEL_90;
  }
  if ( !v39 )
  {
    LODWORD(v82) = 0;
    goto LABEL_90;
  }
  v90 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v90 )
    goto LABEL_112;
  v91 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v90,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v117 = v50;
  v92 = NetworkManager__get_UserId(0LL);
  if ( !v91 )
    goto LABEL_112;
  UserServantCommandCodeMaster__getAttachList(v91, &userCommandCodeIdList, v92, 0LL);
  v82 = *(_QWORD *)&v39->max_length;
  if ( (int)v82 < 1 )
    goto LABEL_88;
  v115 = *(_QWORD *)&v39->max_length;
  if ( !(_DWORD)v115 )
    goto LABEL_86;
  v95 = 0LL;
  v96 = (int)*(_QWORD *)&v39->max_length;
  while ( 1 )
  {
    v97 = v39->m_Items[v95];
    v98 = userCommandCodeIdList;
    v99 = (ServantListViewItem_o *)sub_B170CC(ServantListViewItem_TypeInfo, v78, v79, v93, v94);
    ServantListViewItem___ctor_29659972(v99, v95, v97, v98, 0LL);
    v100 = this->fields.itemList;
    if ( !v100 )
      goto LABEL_112;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v100,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( (__int64)++v95 >= v96 )
      break;
    if ( v95 >= v39->max_length )
      goto LABEL_86;
  }
LABEL_87:
  v50 = v117;
  LODWORD(v82) = v115;
LABEL_90:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v102 = this->fields.infoDataLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUM_INFO"*/, 0LL);
    v121 = v82;
    v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v121);
    v120 = v116;
    v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
    v106 = System_String__Format_43739268(v103, v104, v105, 0LL);
    if ( !v102 )
      goto LABEL_112;
    UILabel__set_text(v102, v106, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v82 >= 1 )
    v108 = (System_String_o *)StringLiteral_11842/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v108 = (System_String_o *)v50;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v110 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v111 = LocalizationManager__Get(v108, 0LL);
    if ( !v110 )
      goto LABEL_112;
    UILabel__set_text(v110, v111, 0LL);
  }
  ServantListViewManager__SetBonusFilterIds(this, setupInfo, v109);
  ServantListViewManager__SetBonusFilterKind(this, v112);
  ServantListViewManager__SetBonusFilterButton(this, v113);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v114);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0
  ListViewSort_o *commandCodeSortInfo; // x0

  if ( (byte_40FD6AA & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_TypeInfo, v1);
    byte_40FD6AA = 1;
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
        (servantEquipSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__DeleteContinueData(servantEquipSortInfo, 0LL),
        (commandCodeSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__DeleteContinueData(commandCodeSortInfo, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FD6BA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FD6BA = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantFilterSelectMenu(Instance, v13, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40FD6BC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantListViewManager_EndCloseSelectSortKind__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FD6BC = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantSortSelectMenu(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ServantListViewManager__GetAmountSortValue(
        ServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
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

  if ( (byte_40FD6C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v6);
    byte_40FD6C1 = 1;
  }
  itemList = this->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      ++v10;
      if ( ServantListViewItem__get_SvtId(v14, 0LL) == svtId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B170D4();
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  signed __int64 size; // x22
  int64_t v9; // x21
  unsigned __int64 v10; // x23
  ListViewItem_o *v11; // x8
  __int64 v12; // x11
  __int64 v13; // x11
  ServantListViewItem_o *v14; // x0

  if ( (byte_40FD6C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v6);
    byte_40FD6C2 = 1;
  }
  itemList = this->fields.itemList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      ++v10;
      if ( ServantListViewItem__get_CommandCodeId(v14, 0LL) == commandCodeId )
        ++v9;
      if ( (__int64)v10 >= size )
        return v9;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_20:
    sub_B170D4();
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

  if ( (byte_40FD6B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v5);
    byte_40FD6B1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    sub_B170D4();
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


bool __fastcall ServantListViewManager__GetSwapChoiceList(
        ServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v29; // w25
  ListViewItem_o *v30; // x0
  __int64 v31; // x9
  ListViewItem_c *klass; // x8
  __int128 v33; // q0
  __int128 *v34; // x0
  int64_t sortValue0; // x8
  __int128 v36; // q0
  int64_t v37; // x0
  const MethodInfo_2F164A0 *v38; // x2
  int64_t v39; // x1
  System_Collections_Generic_List_long__o *v40; // x0
  __int128 byval_arg; // q0
  __int128 *v42; // x0
  __int128 v43; // q0
  int64_t v44; // x0
  System_Int64_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int64_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  bool result; // w0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  ServantListViewManager_o *v66; // x0
  ListViewObject_o *v67; // x1
  ListViewItem_o *v68; // x2
  const MethodInfo *v69; // x3
  __int128 v71[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v72[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v73[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v74[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v75; // [xsp+90h] [xbp-80h]
  __int128 v76; // [xsp+A0h] [xbp-70h]

  if ( (byte_40FD6B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v14);
    byte_40FD6B3 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        goto LABEL_46;
      v31 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (ServantListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != ServantListViewItem_TypeInfo )
      {
        sub_B173C8(v30);
        ServantListViewManager__SetObjectItem(v66, v67, v68, v69);
        return result;
      }
      klass = v30[1].klass;
      if ( klass && BYTE1(v30[2].fields.sortValue0B) )
      {
        if ( !BYTE3(v30[2].klass) )
        {
          byval_arg = (__int128)klass->_1.byval_arg;
          v75 = *(_OWORD *)&klass->_1.name;
          v76 = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v42 = v73;
          v73[0] = v75;
          v73[1] = v76;
LABEL_35:
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v42,
                  0LL);
          if ( !v15 )
            goto LABEL_46;
          v38 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v39 = v44;
          v40 = v15;
          goto LABEL_37;
        }
        v33 = (__int128)klass->_1.byval_arg;
        v75 = *(_OWORD *)&klass->_1.name;
        v76 = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v74;
        v74[0] = v75;
        v74[1] = v76;
      }
      else
      {
        sortValue0 = v30[1].fields.sortValue0;
        if ( !sortValue0 || !BYTE1(v30[2].fields.sortValue0B) )
          goto LABEL_38;
        if ( !BYTE3(v30[2].klass) )
        {
          v43 = *(_OWORD *)(sortValue0 + 32);
          v75 = *(_OWORD *)(sortValue0 + 16);
          v76 = v43;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v42 = v71;
          v71[0] = v75;
          v71[1] = v76;
          goto LABEL_35;
        }
        v36 = *(_OWORD *)(sortValue0 + 32);
        v75 = *(_OWORD *)(sortValue0 + 16);
        v76 = v36;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v72;
        v72[0] = v75;
        v72[1] = v76;
      }
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v34,
              0LL);
      if ( !v20 )
        goto LABEL_46;
      v38 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
      v39 = v37;
      v40 = v20;
LABEL_37:
      System_Collections_Generic_List_long___Add(v40, v39, v38);
LABEL_38:
      if ( (int)++v29 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v15 || !v20 )
LABEL_46:
    sub_B170D4();
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *choiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, 0LL, v21, v22, v23, v24, v25, v26);
    *unchoiceList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, 0LL, v60, v61, v62, v63, v64, v65);
    return 0;
  }
  else
  {
    v45 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v45;
    sub_B16F98((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
    v52 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unchoiceList = v52;
    sub_B16F98((BattleServantConfConponent_o *)unchoiceList, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    return 1;
  }
}


bool __fastcall ServantListViewManager__GetSwapLockList(
        ServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_long__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x19
  int size; // w24
  unsigned int v29; // w25
  ListViewItem_o *v30; // x0
  __int64 v31; // x9
  ListViewItem_c *klass; // x8
  __int128 v33; // q0
  __int128 *v34; // x0
  int64_t sortValue0; // x8
  __int128 v36; // q0
  int64_t v37; // x0
  const MethodInfo_2F164A0 *v38; // x2
  int64_t v39; // x1
  System_Collections_Generic_List_long__o *v40; // x0
  __int128 byval_arg; // q0
  __int128 *v42; // x0
  __int128 v43; // q0
  int64_t v44; // x0
  System_Int64_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int64_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  ServantListViewManager_o *v66; // x0
  System_Int64_array **v67; // x1
  System_Int64_array **v68; // x2
  const MethodInfo *v69; // x3
  __int128 v71[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v72[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v73[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v74[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v75; // [xsp+90h] [xbp-80h]
  __int128 v76; // [xsp+A0h] [xbp-70h]

  if ( (byte_40FD6B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v14);
    byte_40FD6B2 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_46;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( itemList->fields._size <= v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = itemList->fields._items->m_Items[v29];
      if ( !v30 )
        goto LABEL_46;
      v31 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (ServantListViewItem_c *)v30->klass->_2.typeHierarchy[v31 - 1] != ServantListViewItem_TypeInfo )
      {
        sub_B173C8(v30);
        return ServantListViewManager__GetSwapChoiceList(v66, v67, v68, v69);
      }
      klass = v30[1].klass;
      if ( klass && LOBYTE(v30[2].fields.sortValue0B) )
      {
        if ( !BYTE2(v30[2].klass) )
        {
          byval_arg = (__int128)klass->_1.byval_arg;
          v75 = *(_OWORD *)&klass->_1.name;
          v76 = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v42 = v73;
          v73[0] = v75;
          v73[1] = v76;
LABEL_35:
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v42,
                  0LL);
          if ( !v15 )
            goto LABEL_46;
          v38 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v39 = v44;
          v40 = v15;
          goto LABEL_37;
        }
        v33 = (__int128)klass->_1.byval_arg;
        v75 = *(_OWORD *)&klass->_1.name;
        v76 = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v74;
        v74[0] = v75;
        v74[1] = v76;
      }
      else
      {
        sortValue0 = v30[1].fields.sortValue0;
        if ( !sortValue0 || !LOBYTE(v30[2].fields.sortValue0B) )
          goto LABEL_38;
        if ( !BYTE2(v30[2].klass) )
        {
          v43 = *(_OWORD *)(sortValue0 + 32);
          v75 = *(_OWORD *)(sortValue0 + 16);
          v76 = v43;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v42 = v71;
          v71[0] = v75;
          v71[1] = v76;
          goto LABEL_35;
        }
        v36 = *(_OWORD *)(sortValue0 + 32);
        v75 = *(_OWORD *)(sortValue0 + 16);
        v76 = v36;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v72;
        v72[0] = v75;
        v72[1] = v76;
      }
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v34,
              0LL);
      if ( !v20 )
        goto LABEL_46;
      v38 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
      v39 = v37;
      v40 = v20;
LABEL_37:
      System_Collections_Generic_List_long___Add(v40, v39, v38);
LABEL_38:
      if ( (int)++v29 >= size )
        break;
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_46;
    }
  }
  if ( !v15 || !v20 )
LABEL_46:
    sub_B170D4();
  if ( v20->fields._size + v15->fields._size < 1 )
  {
    *lockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)lockList, 0LL, v21, v22, v23, v24, v25, v26);
    *unlockList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, 0LL, v60, v61, v62, v63, v64, v65);
    return 0;
  }
  else
  {
    v45 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v45;
    sub_B16F98((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
    v52 = System_Collections_Generic_List_long___ToArray(
            v20,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    *unlockList = v52;
    sub_B16F98((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    return 1;
  }
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0
  ListViewSort_o *servantEquipSortInfo; // x0
  ListViewSort_o *commandCodeSortInfo; // x0

  if ( (byte_40FD6AB & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_TypeInfo, v1);
    byte_40FD6AB = 1;
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
        (servantEquipSortInfo = ServantListViewManager_TypeInfo->static_fields->servantEquipSortInfo) == 0LL)
    || (ListViewSort__InitLoad(servantEquipSortInfo, 0LL),
        (commandCodeSortInfo = ServantListViewManager_TypeInfo->static_fields->commandCodeSortInfo) == 0LL) )
  {
    sub_B170D4();
  }
  ListViewSort__InitLoad(commandCodeSortInfo, 0LL);
}


void __fastcall ServantListViewManager__JumpItemUserId(
        ServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
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

  if ( (byte_40FD6B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userSvtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v7);
    byte_40FD6B8 = 1;
  }
  if ( userSvtId >= 1 )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_20;
    size = itemList->fields._size;
    if ( (int)size >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v15, 0LL) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)this, v11->fields.index, 0LL);
        }
        if ( (__int64)++v10 >= size )
          return;
        itemList = this->fields.itemList;
      }
      while ( itemList );
LABEL_20:
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v15; // x0
  UserCommandCodeMaster_o *v16; // x22
  WebViewManager_o *v17; // x0
  UserDeckMaster_o *v18; // x23
  int64_t UserId; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  int64_t List; // x0
  UserServantEntity_array *v25; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  signed __int64 size; // x25
  il2cpp_array_size_t v28; // w27
  Il2CppClass **v29; // x26
  Il2CppClass *v30; // x8
  System_Int32_array ***v31; // x26
  Il2CppClass *v32; // t1
  Il2CppType byval_arg; // q0
  int64_t v34; // x21
  unsigned __int64 v35; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x23
  ServantListViewItem_o *v37; // x23
  __int64 v38; // x10
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v40; // q0
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  unsigned int v47; // w27
  int64_t v48; // x26
  __int64 v49; // x8
  System_Int32_array ***v50; // x26
  __int64 v51; // t1
  __int128 v52; // q0
  int64_t v53; // x0
  int64_t v54; // x22
  unsigned __int64 v55; // x21
  struct System_Collections_Generic_List_ListViewItem__o *v56; // x23
  ServantListViewItem_o *v57; // x23
  __int64 v58; // x10
  struct UserCommandCodeEntity_o *userCommandCodeEntity; // x8
  __int128 v60; // q0
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  unsigned __int64 v67; // x22
  struct System_Collections_Generic_List_ListViewItem__o *v68; // x20
  ListViewItem_o *v69; // x20
  __int64 v70; // x10
  UnityEngine_Object_o *viewObject; // x21
  ListViewObject_o *v72; // x0
  __int64 v74; // [xsp+10h] [xbp-120h]
  int64_t v75; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v76; // [xsp+18h] [xbp-118h]
  __int64 v77; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-68h] BYREF
  System_Int64_array *svtIdList; // [xsp+D0h] [xbp-60h] BYREF

  if ( (byte_40FD6AF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, isIconSizeChange);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FD6AF = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_98;
  v16 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v15,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_98;
  v18 = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v17,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v18 )
    goto LABEL_98;
  UserDeckMaster__getPartyList(v18, &svtIdList, &equipIdList, UserId, 0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v16 )
        goto LABEL_98;
      List = (int64_t)UserCommandCodeMaster__getList(v16, 0LL);
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
      v25 = ServantEquipList;
      List = 0LL;
      goto LABEL_22;
    default:
      List = 0LL;
      break;
  }
  v25 = 0LL;
LABEL_22:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_98;
  size = itemList->fields._size;
  if ( v25 )
  {
    v74 = *(_QWORD *)&v25->max_length;
    if ( (int)v74 >= 1 )
    {
      if ( (_DWORD)v74 )
      {
        v28 = 0;
        v76 = v25;
        while ( 1 )
        {
          v29 = &v25->obj.klass + (int)v28;
          v32 = v29[4];
          v31 = (System_Int32_array ***)(v29 + 4);
          v30 = v32;
          if ( !v32 )
            goto LABEL_98;
          byval_arg = v30->_1.byval_arg;
          *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&v30->_1.name;
          *(Il2CppType *)&v82.fields.fakeValue = byval_arg;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v81 = v82;
          List = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v81, 0LL);
          if ( (int)size >= 1 )
          {
            v34 = List;
            v35 = 0LL;
            while ( 1 )
            {
              v36 = this->fields.itemList;
              if ( !v36 )
                goto LABEL_98;
              if ( v35 >= (unsigned int)v36->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v37 = (ServantListViewItem_o *)v36->fields._items->m_Items[v35];
              if ( !v37 )
                goto LABEL_98;
              v38 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
                || (ServantListViewItem_c *)v37->klass->_2.typeHierarchy[v38 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userSvtEntity = v37->fields.userSvtEntity;
              if ( userSvtEntity )
              {
                v40 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v82.fields.fakeValue = v40;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v80 = v82;
                List = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v80, 0LL);
                if ( List == v34 )
                  break;
              }
              if ( (__int64)++v35 >= size )
                goto LABEL_49;
            }
            if ( v28 >= v76->max_length )
              goto LABEL_80;
            v46 = *v31;
            v37->fields.userSvtEntity = (struct UserServantEntity_o *)*v31;
            sub_B16F98((BattleServantConfConponent_o *)&v37->fields.userSvtEntity, v46, v21, v41, v42, v43, v44, v45);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v37, 0LL);
              ServantListViewItem__ModifyChoiceItem(v37, 0LL);
            }
          }
LABEL_49:
          v25 = v76;
          if ( (int)++v28 >= (int)v74 )
            goto LABEL_81;
          if ( v28 >= v76->max_length )
            goto LABEL_80;
        }
      }
      goto LABEL_80;
    }
  }
  else if ( List )
  {
    v77 = *(_QWORD *)(List + 24);
    if ( (int)v77 >= 1 )
    {
      if ( (_DWORD)v77 )
      {
        v47 = 0;
        v75 = List;
        while ( 1 )
        {
          v48 = List + 8LL * (int)v47;
          v51 = *(_QWORD *)(v48 + 32);
          v50 = (System_Int32_array ***)(v48 + 32);
          v49 = v51;
          if ( !v51 )
            break;
          v52 = *(_OWORD *)(v49 + 32);
          *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)(v49 + 16);
          *(_OWORD *)&v82.fields.fakeValue = v52;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v79 = v82;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v79, 0LL);
          if ( (int)size >= 1 )
          {
            v54 = v53;
            v55 = 0LL;
            while ( 1 )
            {
              v56 = this->fields.itemList;
              if ( !v56 )
                goto LABEL_98;
              if ( v55 >= (unsigned int)v56->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v57 = (ServantListViewItem_o *)v56->fields._items->m_Items[v55];
              if ( !v57 )
                goto LABEL_98;
              v58 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v58
                || (ServantListViewItem_c *)v57->klass->_2.typeHierarchy[v58 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_98;
              }
              userCommandCodeEntity = v57->fields.userCommandCodeEntity;
              if ( userCommandCodeEntity )
              {
                v60 = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.fakeValue;
                *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)&userCommandCodeEntity->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v82.fields.fakeValue = v60;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v78 = v82;
                List = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v78, 0LL);
                if ( List == v54 )
                  break;
              }
              if ( (__int64)++v55 >= size )
                goto LABEL_78;
            }
            if ( v47 >= *(_DWORD *)(v75 + 24) )
              goto LABEL_80;
            v66 = *v50;
            v57->fields.userCommandCodeEntity = (struct UserCommandCodeEntity_o *)*v50;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v57->fields.userCommandCodeEntity,
              v66,
              v21,
              v61,
              v62,
              v63,
              v64,
              v65);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem(v57, 0LL);
              ServantListViewItem__ModifyChoiceItem(v57, 0LL);
            }
          }
LABEL_78:
          List = v75;
          if ( (int)++v47 >= (int)v77 )
            goto LABEL_81;
          if ( v47 >= *(_DWORD *)(v75 + 24) )
            goto LABEL_80;
        }
LABEL_98:
        sub_B170D4();
      }
LABEL_80:
      sub_B17100(List, v20, v21);
      sub_B170A0();
    }
  }
LABEL_81:
  if ( (int)size >= 1 && isIconSizeChange )
  {
    v67 = 0LL;
    while ( 1 )
    {
      v68 = this->fields.itemList;
      if ( !v68 )
        goto LABEL_98;
      if ( v67 >= (unsigned int)v68->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v69 = v68->fields._items->m_Items[v67];
      if ( v69 )
      {
        v70 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v69->klass->_2.bitflags2 + 1) >= (unsigned int)v70
          && (ServantListViewItem_c *)v69->klass->_2.typeHierarchy[v70 - 1] == ServantListViewItem_TypeInfo )
        {
          viewObject = (UnityEngine_Object_o *)v69->fields.viewObject;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality(viewObject, 0LL, 0LL) )
          {
            v72 = v69->fields.viewObject;
            if ( !v72 )
              goto LABEL_98;
            ListViewObject__SetItemSeed(v72, v69, this->fields.seed, 0LL);
          }
        }
      }
      if ( (__int64)++v67 >= size )
        return;
    }
  }
}


void __fastcall ServantListViewManager__OnClickBonusFilterKind(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  if ( (byte_40FD6BF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD6BF = 1;
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
      sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  int32_t v14; // w1
  ListViewSort_o *v15; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v16; // x22

  if ( (byte_40FD6B9 & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantListViewManager_EndSelectFilterKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD6B9 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8,
                                                        v9,
                                                        v10);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        if ( kind == 1 )
          v14 = 5;
        else
          v14 = 6;
        CommonUI__OpenServantFilterSelectMenu_18244592(Instance, v14, sort, (ListViewManager_o *)this, v13, -1, 0LL);
        return;
      }
    }
    else
    {
      v15 = this->fields.sort;
      v16 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                        v7,
                                                        v8,
                                                        v9,
                                                        v10);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu(Instance, 0, v15, v16, -1, 0LL);
        return;
      }
    }
    sub_B170D4();
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    ServantListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
  }
}


void __fastcall ServantListViewManager__OnClickSortAscendingOrder(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8

  if ( (byte_40FD6BD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD6BD = 1;
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
      sub_B170D4();
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
  __int64 v12; // x3
  __int64 v13; // x4
  ServantSortSelectMenu_CallbackFunc_o *v14; // x22
  int v15; // w8
  int32_t v16; // w1

  if ( (byte_40FD6BB & 1) == 0 )
  {
    sub_B16FFC(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantListViewManager_EndSelectSortKind__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FD6BB = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v14 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B170CC(
                                                    ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B170D4();
    if ( kind == 3 )
      v15 = 6;
    else
      v15 = 4;
    if ( kind )
      v16 = v15;
    else
      v16 = 3;
    CommonUI__OpenServantSortSelectMenu(v9, v16, sort, 0, v14, 0LL);
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
  int32_t Index; // w2

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98(
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
      sub_B170D4();
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
  struct UIScrollView_o *v13; // x0
  struct UIScrollView_o *v14; // x0
  UIScrollView_o *v15; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FD6B7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD6B7 = 1;
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
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
        v14 = this->fields.scrollView;
        if ( v14 )
        {
          if ( (((__int64 (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))v14->klass->vtable._6_get_shouldMoveVertically.method)(
                  v14,
                  v14->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_15;
          v15 = this->fields.scrollView;
          if ( v15 )
          {
            UIScrollView__UpdatePosition(v15, 0LL);
LABEL_15:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
            if ( callbackFunc2 )
              System_Action__Invoke(callbackFunc2, 0LL);
            return;
          }
        }
      }
      sub_B170D4();
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
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD6B5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_ServantListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40FD6B5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_31576736(
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
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FD6B6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_ServantListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40FD6B6 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantListViewObject__Init(
        (ServantListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


void __fastcall ServantListViewManager__SaveSortInfo(ServantListViewManager_o *this, const MethodInfo *method)
{
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8

  if ( (byte_40FD6B0 & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_TypeInfo, method);
    byte_40FD6B0 = 1;
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
    sub_B170D4();
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8
  bool v7; // w1

  if ( (byte_40FD6C0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD6C0 = 1;
  }
  bonusFilterKindButton = (UnityEngine_Object_o *)this->fields.bonusFilterKindButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bonusFilterKindButton, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.bonusFilterKindButton;
    if ( v4 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
      sort = this->fields.sort;
      if ( sort )
      {
        if ( sort->fields.isBonusKind )
        {
          v7 = this->fields.kind != 3;
          if ( gameObject )
          {
LABEL_11:
            UnityEngine_GameObject__SetActive(gameObject, v7, 0LL);
            return;
          }
        }
        else
        {
          v7 = 0;
          if ( gameObject )
            goto LABEL_11;
        }
      }
    }
    sub_B170D4();
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.bonusEventIds,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.servantFilterIds = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.servantFilterIds, 0LL, v21, v22, v23, v24, v25, v26);
    return;
  }
  kind = this->fields.kind;
  if ( kind )
  {
    if ( kind != 1 )
      goto LABEL_9;
    servantEquipFilterEventIdList = setupInfo->fields.servantEquipFilterEventIdList;
    this->fields.bonusEventIds = servantEquipFilterEventIdList;
    sub_B16F98(
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
    sub_B16F98(
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
  sub_B16F98(
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
      sub_B170D4();
  }
  v29->fields.isBonusKind = (char)servantFilterIds;
}


void __fastcall ServantListViewManager__SetBonusFilterKind(ServantListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_B170D4();
  if ( sort->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(sort, this->fields.bonusEventIds, this->fields.servantFilterIds, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall ServantListViewManager__SetFilterButtonImage(ServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  bool v6; // w0
  System_String_o **v7; // x8

  if ( (byte_40FD6C3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16927/*"btn_filter_on"*/, method);
    sub_B16FFC(&StringLiteral_16926/*"btn_filter"*/, v3);
    byte_40FD6C3 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite, v6 = ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL), !filterSprite) )
  {
    sub_B170D4();
  }
  v7 = (System_String_o **)&StringLiteral_16926/*"btn_filter"*/;
  if ( !v6 )
    v7 = (System_String_o **)&StringLiteral_16927/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v7, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_31576552(this, mode, v10);
}


void __fastcall ServantListViewManager__SetMode_31576552(
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
  ServantListViewManager__RequestListObject_31576736(this, v6, v5);
}


void __fastcall ServantListViewManager__SetMode_31576680(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantListViewManager__SetMode_31576552(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__SetObjectItem(
        ServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  if ( (byte_40FD6B4 & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewObject_TypeInfo, obj);
    byte_40FD6B4 = 1;
  }
  if ( !obj
    || (v6 = *(&ServantListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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
  System_String_o *SortKindButtonText; // x0
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  UISprite_o *sortExplanationSprite; // x0
  System_String_o **v17; // x8
  struct ListViewSort_o *v18; // x8
  UISprite_o *v19; // x0
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v21; // x9
  System_String_o **v22; // x10
  UISprite_o *v23; // x0
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  System_String_o **v26; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  struct ListViewSort_o *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *BonusKind2Text_30244736; // x0

  if ( (byte_40FD6BE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16955/*"btn_sort_up"*/, v3);
    sub_B16FFC(&StringLiteral_17038/*"btn_txt_up"*/, v4);
    sub_B16FFC(&StringLiteral_16995/*"btn_txt_new"*/, v5);
    sub_B16FFC(&StringLiteral_16985/*"btn_txt_down"*/, v6);
    sub_B16FFC(&StringLiteral_17002/*"btn_txt_old"*/, v7);
    sub_B16FFC(&StringLiteral_16952/*"btn_sort_down"*/, v8);
    byte_40FD6BE = 1;
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
    SortKindButtonText = ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v11 )
      goto LABEL_44;
    UILabel__set_text(v11, SortKindButtonText, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL) )
  {
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_44;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sortExplanationSprite = this->fields.sortExplanationSprite;
      if ( !sortExplanationSprite )
        goto LABEL_44;
      v17 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17002/*"btn_txt_old"*/ : &StringLiteral_16995/*"btn_txt_new"*/);
      UISprite__set_spriteName(sortExplanationSprite, *v17, 0LL);
      v18 = this->fields.sort;
      if ( !v18 )
        goto LABEL_44;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_44;
      isAscendingOrder = v18->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
      v22 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
    }
    else
    {
      v23 = this->fields.sortExplanationSprite;
      if ( !v23 )
        goto LABEL_44;
      v24 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17038/*"btn_txt_up"*/ : &StringLiteral_16985/*"btn_txt_down"*/);
      UISprite__set_spriteName(v23, *v24, 0LL);
      v25 = this->fields.sort;
      if ( !v25 )
        goto LABEL_44;
      v19 = this->fields.sortOrderSprite;
      if ( !v19 )
        goto LABEL_44;
      isAscendingOrder = v25->fields.isAscendingOrder;
      v21 = (System_String_o **)&StringLiteral_16955/*"btn_sort_up"*/;
      v22 = (System_String_o **)&StringLiteral_16952/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v26 = v21;
    else
      v26 = v22;
    UISprite__set_spriteName(v19, *v26, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    v28 = this->fields.sort;
    if ( !v28 )
      goto LABEL_44;
    if ( v28->fields.isBonusKind )
    {
      v29 = this->fields.bonusFilterKindLabel;
      BonusKind2Text_30244736 = ListViewSort__GetBonusKind2Text_30244736(
                                  v28,
                                  this->fields.bonusEventIds,
                                  this->fields.servantFilterIds,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, BonusKind2Text_30244736, 0LL);
        return;
      }
LABEL_44:
      sub_B170D4();
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v11; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int64_t pushUserSvtId; // x21
  Il2CppObject *current; // x20
  __int64 v15; // x9
  Il2CppClass *klass; // x8
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

  if ( (byte_40FD6C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&ServantListViewItem_TypeInfo, v9);
    byte_40FD6C4 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (v11 = SelfUserGame, (itemList = this->fields.itemList) == 0LL) )
    sub_B170D4();
  pushUserSvtId = v11->fields.pushUserSvtId;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v26.fields.current = (Il2CppObject *)v25.fields.fakeValue;
  *(_OWORD *)&v26.fields.list = *(_OWORD *)&v25.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v26.fields.current;
    if ( !v26.fields.current )
      goto LABEL_31;
    v15 = *(&ServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (ServantListViewItem_c *)v26.fields.current->klass->_2.typeHierarchy[v15 - 1] != ServantListViewItem_TypeInfo )
    {
      sub_B173C8(v26.fields.current);
LABEL_31:
      sub_B170D4();
    }
    klass = v26.fields.current[7].klass;
    if ( !klass )
    {
      BYTE6(v26.fields.current[14].klass) = 0;
LABEL_25:
      v22 = 1;
      goto LABEL_26;
    }
    byval_arg = klass->_1.byval_arg;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v25.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v24 = v25;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v24, 0LL) == pushUserSvtId;
    if ( !isPushMode )
      goto LABEL_25;
    v18 = (UserServantEntity_o *)current[7].klass;
    if ( !v18 )
      sub_B170D4();
    if ( UserServantEntity__IsLeave(v18, 0LL) )
      goto LABEL_23;
    v19 = (UserServantEntity_o *)current[7].klass;
    if ( !v19 )
      sub_B170D4();
    if ( UserServantEntity__IsEventJoin(v19, 0LL) )
      goto LABEL_23;
    v20 = (UserServantEntity_o *)current[7].klass;
    if ( !v20 )
      sub_B170D4();
    if ( UserServantEntity__IsCombineMaterial(v20, 0LL) )
      goto LABEL_23;
    v21 = (UserServantEntity_o *)current[7].klass;
    if ( !v21 )
      sub_B170D4();
    if ( UserServantEntity__IsStatusUp(v21, 0LL) )
    {
LABEL_23:
      v22 = 0;
    }
    else
    {
      v23 = (UserServantEntity_o *)current[7].klass;
      if ( !v23 )
        sub_B170D4();
      v22 = !UserServantEntity__IsMaterialTd(v23, 0LL);
    }
LABEL_26:
    HIBYTE(current[14].klass) = v22;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_40FD6A6 & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD6A6 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD6A8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD6A8 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  ServantListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FD6AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD6AD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (ServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)current,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)ServantListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v14;
}


System_Collections_Generic_List_ServantListViewObject__o *__fastcall ServantListViewManager__get_ObjectList(
        ServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FD6AC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FD6AC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantListViewObject__o *)v14;
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

  if ( (byte_40FD6A7 & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FD6A7 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FD6A9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FD6A9 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantListViewManager__DeleteContinueData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager_CallbackFunc___ctor(
        ServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7636 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ServantListViewManager_ResultKind_TypeInfo, v9);
    byte_40F7636 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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