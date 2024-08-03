void __fastcall ServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  ListViewSort_o *v12; // x19
  struct ServantListViewManager_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  ListViewSort_o *v18; // x19
  struct ServantListViewManager_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49F887B & 1) == 0 )
  {
    sub_1B640C8(&ListViewSort_TypeInfo, v1);
    sub_1B640C8(&ServantListViewManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_12558/*"Servant1"*/, v4);
    sub_1B640C8(&StringLiteral_12560/*"Servant4"*/, v5);
    sub_1B640C8(&StringLiteral_12559/*"Servant2"*/, v6);
    byte_49F887B = 1;
  }
  v7 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_40426136(v7, (System_String_o *)StringLiteral_12558/*"Servant1"*/, 3, 0, 0LL);
  ServantListViewManager_TypeInfo->static_fields->servantSortInfo = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ServantListViewManager_TypeInfo->static_fields, (int32_t)v7, v8, v9);
  v12 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v10, v11);
  ListViewSort___ctor_40426136(v12, (System_String_o *)StringLiteral_12559/*"Servant2"*/, 3, 0, 0LL);
  static_fields = ServantListViewManager_TypeInfo->static_fields;
  static_fields->servantEquipSortInfo = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->servantEquipSortInfo, (int32_t)v12, v14, v15);
  v18 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v16, v17);
  ListViewSort___ctor_40426136(v18, (System_String_o *)StringLiteral_12560/*"Servant4"*/, 2, 0, 0LL);
  v19 = ServantListViewManager_TypeInfo->static_fields;
  v19->commandCodeSortInfo = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->commandCodeSortInfo, (int32_t)v18, v20, v21);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_seed, (int32_t)smallSizeSeed, v2, v3);
  }
  sort = this->fields.sort;
  if ( !sort
    || (sort->fields.iconScaleKind = this->fields.scaleType,
        ListViewSort__Save(sort, 0LL),
        ServantListViewManager__ModifyList(this, 1, v10),
        ServantListViewManager__SetMode_32353900(this, 2, v11),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (sort = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
    sub_1B64324(sort);
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  int64_t v32; // x21
  int CommandCodeFrameMax; // w20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x23
  ServantListViewManager_c *v37; // x8
  __int64 v38; // x26
  struct ListViewSort_o **p_servantSortInfo; // x8
  struct ListViewSort_o *v40; // x1
  int v41; // w8
  int64_t v42; // x22
  __int64 v43; // x1
  BalanceConfig_c *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  ServantListViewManager_c *v47; // x8
  struct ListViewSort_o *commandCodeSortInfo; // x1
  int32_t v49; // w2
  int32_t v50; // w3
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
  __int64 v61; // x24
  __int64 v62; // x22
  __int64 v63; // x28
  UserServantEntity_o *v64; // x24
  System_Int64_array *v65; // x25
  System_Int64_array *v66; // x26
  ServantListViewItem_o *v67; // x23
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  Il2CppObject *v74; // x21
  __int64 v75; // x2
  __int64 v76; // x19
  __int64 v77; // x21
  UserCommandCodeEntity_o *v78; // x24
  System_Int64_array *v79; // x25
  ServantListViewItem_o *v80; // x23
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
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
  __int64 v98; // [xsp+0h] [xbp-A0h]
  __int64 v99; // [xsp+10h] [xbp-90h]
  int v101; // [xsp+20h] [xbp-80h] BYREF
  int v102; // [xsp+24h] [xbp-7Ch] BYREF
  System_Int64_array *userCommandCodeIdList; // [xsp+28h] [xbp-78h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49F8864 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v14);
    sub_1B640C8(&ServantListViewManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/, v17);
    sub_1B640C8(&StringLiteral_3698/*"COMMAND_CODE_EMPTY"*/, v18);
    sub_1B640C8(&StringLiteral_11480/*"SERVANT_ALL_EMPTY"*/, v19);
    sub_1B640C8(&StringLiteral_11546/*"SERVANT_EQUIP_TAKE"*/, v20);
    sub_1B640C8(&StringLiteral_3717/*"COMMAND_CODE_TAKE"*/, v21);
    sub_1B640C8(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v22);
    sub_1B640C8(&StringLiteral_11894/*"SERVANT_TAKE"*/, v23);
    sub_1B640C8(&StringLiteral_1/*""*/, v24);
    sub_1B640C8(&StringLiteral_12321/*"SUM_INFO"*/, v25);
    byte_49F8864 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  userCommandCodeIdList = 0LL;
  this->fields.kind = kind;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  v29 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  switch ( kind )
  {
    case 3:
      if ( !v29 )
        goto LABEL_105;
      Instance = (int64_t)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v29, 0LL);
      if ( !SelfUserGame )
        goto LABEL_105;
      v42 = Instance;
      if ( !byte_49F7B7B )
      {
        sub_1B640C8(&BalanceConfig_TypeInfo, v43);
        byte_49F7B7B = 1;
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
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMAND_CODE_TAKE"*/, 0LL);
      v47 = ServantListViewManager_TypeInfo;
      v38 = StringLiteral_3698/*"COMMAND_CODE_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v47 = ServantListViewManager_TypeInfo;
      }
      commandCodeSortInfo = v47->static_fields->commandCodeSortInfo;
      this->fields.sort = commandCodeSortInfo;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)commandCodeSortInfo, v45, v46);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_105;
      v32 = 0LL;
      v41 = 3;
      goto LABEL_36;
    case 1:
      if ( !MasterData_object )
        goto LABEL_105;
      Instance = (int64_t)UserServantMaster__getServantEquipList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_105;
      v32 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtEquipKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SERVANT_EQUIP_TAKE"*/, 0LL);
      v51 = ServantListViewManager_TypeInfo;
      v38 = StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v51 = ServantListViewManager_TypeInfo;
      }
      servantEquipSortInfo = v51->static_fields->servantEquipSortInfo;
      this->fields.sort = servantEquipSortInfo;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)servantEquipSortInfo, v49, v50);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_105;
      v42 = 0LL;
      v41 = 1;
      goto LABEL_36;
    case 0:
      if ( !MasterData_object )
        goto LABEL_105;
      Instance = (int64_t)UserServantMaster__getKeepServantList((UserServantMaster_o *)MasterData_object, 0LL);
      if ( !SelfUserGame )
        goto LABEL_105;
      v32 = Instance;
      CommandCodeFrameMax = SelfUserGame->fields.svtKeep;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_TAKE"*/, 0LL);
      v37 = ServantListViewManager_TypeInfo;
      v38 = StringLiteral_11520/*"SERVANT_EQUIP_EMPTY"*/;
      if ( !ServantListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantListViewManager_TypeInfo);
        v37 = ServantListViewManager_TypeInfo;
      }
      p_servantSortInfo = &v37->static_fields->servantSortInfo;
      v40 = *p_servantSortInfo;
      this->fields.sort = *p_servantSortInfo;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v40, v34, v35);
      Instance = (int64_t)this->fields.sort;
      if ( !Instance )
        goto LABEL_105;
      v41 = 0;
      v42 = 0LL;
LABEL_36:
      *(_DWORD *)(Instance + 128) = v41;
      ListViewSort__Load((ListViewSort_o *)Instance, 0LL);
      goto LABEL_38;
  }
  CommandCodeFrameMax = 0;
  v42 = 0LL;
  v36 = (System_String_o *)StringLiteral_1/*""*/;
  v38 = StringLiteral_11480/*"SERVANT_ALL_EMPTY"*/;
  v32 = 0LL;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)normalSizeSeed, v30, v31);
LABEL_46:
  infoTitleLabel = (UnityEngine_Object_o *)this->fields.infoTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoTitleLabel, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.infoTitleLabel;
    if ( !Instance )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)Instance, v36, 0LL);
  }
  if ( !v32 )
  {
    if ( !v42 )
    {
      LODWORD(v61) = 0;
      goto LABEL_87;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_105;
    v74 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v99 = v38;
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v74 )
      goto LABEL_105;
    UserServantCommandCodeMaster__getAttachList(
      (UserServantCommandCodeMaster_o *)v74,
      &userCommandCodeIdList,
      Instance,
      0LL);
    v76 = *(_QWORD *)(v42 + 24);
    if ( (int)v76 >= 1 )
    {
      if ( (unsigned int)*(_QWORD *)(v42 + 24) )
      {
        v77 = 0LL;
        do
        {
          v78 = *(UserCommandCodeEntity_o **)(v42 + 32 + 8 * v77);
          v79 = userCommandCodeIdList;
          v80 = (ServantListViewItem_o *)sub_1B64314(ServantListViewItem_TypeInfo, v59, v75);
          ServantListViewItem___ctor_32335092(v80, v77, v78, v79, 0LL);
          Instance = (int64_t)this->fields.itemList;
          if ( !Instance )
            goto LABEL_105;
          v83 = *(_QWORD *)(Instance + 16);
          v84 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v83 )
            goto LABEL_105;
          v85 = *(int *)(Instance + 24);
          if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v80,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v86 = v83 + 8 * v85;
            *(_DWORD *)(Instance + 24) = v85 + 1;
            *(_QWORD *)(v86 + 32) = v80;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 32), (int32_t)v80, v81, v82);
          }
          if ( (unsigned int)v76 - 1LL == v77 )
            goto LABEL_84;
        }
        while ( ++v77 < (unsigned __int64)*(unsigned int *)(v42 + 24) );
      }
LABEL_83:
      sub_1B6432C(v58, v59);
    }
LABEL_84:
    LODWORD(v61) = v76;
LABEL_85:
    v38 = v99;
    goto LABEL_87;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  v57 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v99 = v38;
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v57 )
    goto LABEL_105;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v57, &svtIdList, &equipIdList, Instance, 0LL);
  v61 = *(_QWORD *)(v32 + 24);
  if ( (int)v61 < 1 )
    goto LABEL_85;
  v98 = *(_QWORD *)(v32 + 24);
  if ( !(_DWORD)v98 )
    goto LABEL_83;
  v62 = 0LL;
  v63 = (unsigned int)*(_QWORD *)(v32 + 24) - 1LL;
  while ( 1 )
  {
    v64 = *(UserServantEntity_o **)(v32 + 32 + 8 * v62);
    v66 = equipIdList;
    v65 = svtIdList;
    v67 = (ServantListViewItem_o *)sub_1B64314(ServantListViewItem_TypeInfo, v59, v60);
    ServantListViewItem___ctor(v67, v62, v64, v65, v66, setupInfo, 0LL);
    Instance = (int64_t)this->fields.itemList;
    if ( !Instance )
      goto LABEL_105;
    v70 = *(_QWORD *)(Instance + 16);
    v71 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++*(_DWORD *)(Instance + 28);
    if ( !v70 )
      goto LABEL_105;
    v72 = *(int *)(Instance + 24);
    if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v67,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = v70 + 8 * v72;
      *(_DWORD *)(Instance + 24) = v72 + 1;
      *(_QWORD *)(v73 + 32) = v67;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v73 + 32), (int32_t)v67, v68, v69);
    }
    if ( v63 == v62 )
      break;
    if ( ++v62 >= (unsigned __int64)*(unsigned int *)(v32 + 24) )
      goto LABEL_83;
  }
  v38 = v99;
  LODWORD(v61) = v98;
LABEL_87:
  infoDataLabel = (UnityEngine_Object_o *)this->fields.infoDataLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoDataLabel, 0LL, 0LL) )
  {
    v88 = this->fields.infoDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SUM_INFO"*/, 0LL);
    v102 = v61;
    v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
    v101 = CommandCodeFrameMax;
    v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
    Instance = (int64_t)System_String__Format_61389768(v89, v90, v91, 0LL);
    if ( !v88 )
      goto LABEL_105;
    UILabel__set_text(v88, (System_String_o *)Instance, 0LL);
  }
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (int)v61 >= 1 )
    v93 = (System_String_o *)StringLiteral_11717/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v93 = (System_String_o *)v38;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v95 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (int64_t)LocalizationManager__Get(v93, 0LL);
    if ( v95 )
    {
      UILabel__set_text(v95, (System_String_o *)Instance, 0LL);
      goto LABEL_104;
    }
LABEL_105:
    sub_1B64324(Instance);
  }
LABEL_104:
  ServantListViewManager__SetBonusFilterInfo(this, setupInfo, v94);
  ServantListViewManager__SetBonusFilterButton(this, v96);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ServantListViewManager__SetFilterButtonImage(this, v97);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall ServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_49F8860 & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_TypeInfo, v1);
    byte_49F8860 = 1;
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
    sub_1B64324(servantSortInfo);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49F8870 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F8870 = 1;
  }
  if ( isDecide )
  {
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    ServantListViewManager__SetFilterButtonImage(this, v7);
    ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
    sub_1B64324(v12);
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)Instance, v11, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49F8872 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantListViewManager_EndCloseSelectSortKind__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F8872 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantListViewManager_EndCloseSelectSortKind__, 0LL);
  if ( !Instance )
    sub_1B64324(v11);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, v10, 0LL);
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

  if ( (byte_49F8877 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v6);
    byte_49F8877 = 1;
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
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( ServantListViewItem__get_SvtId((ServantListViewItem_o *)itemList, 0LL) == svtId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B64324(itemList);
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

  if ( (byte_49F8878 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v6);
    byte_49F8878 = 1;
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
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( ServantListViewItem__get_CommandCodeId((ServantListViewItem_o *)itemList, 0LL) == commandCodeId )
        ++v10;
      if ( size == v9 )
        return v10;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    }
    while ( itemList );
LABEL_13:
    sub_1B64324(itemList);
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

  if ( (byte_49F8867 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v5);
    byte_49F8867 = 1;
  }
  result = (ServantListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1B64324(0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x9
  __int64 v25; // x8
  __int128 v26; // q0
  __int128 *v27; // x0
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x8
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  __int128 v37; // q0
  __int128 *v38; // x0
  __int128 v39; // q0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  int v43; // w21
  System_Int64_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Int64_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w1
  System_Int64_array **v51; // x0
  bool result; // w0
  ServantListViewManager_o *v53; // x0
  ListViewObject_o *v54; // x1
  ListViewItem_o *v55; // x2
  const MethodInfo *v56; // x3
  __int128 v57[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v58[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v59[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v60[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v61; // [xsp+90h] [xbp-80h]
  __int128 v62; // [xsp+A0h] [xbp-70h]

  if ( (byte_49F8869 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, choiceList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v14);
    byte_49F8869 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     choiceList,
                                                     unchoiceList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v53 = (ServantListViewManager_o *)sub_1B645E4(itemList);
        ServantListViewManager__SetObjectItem(v53, v54, v55, v56);
        return result;
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 265) )
      {
        if ( *(_BYTE *)(itemList + 227) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          v61 = *(_OWORD *)(v25 + 16);
          v62 = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v60;
          v60[0] = v61;
          v60[1] = v62;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v27,
                       0LL);
          if ( !v18 )
            goto LABEL_48;
          items = v18->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v18->fields._size;
          v33 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v35 = v31[4];
            v36 = v18;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v33,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v35 + 192) + 112LL));
            goto LABEL_39;
          }
          v34 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          goto LABEL_36;
        }
        v37 = *(_OWORD *)(v25 + 32);
        v61 = *(_OWORD *)(v25 + 16);
        v62 = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v59;
        v59[0] = v61;
        v59[1] = v62;
      }
      else
      {
        v28 = *(_QWORD *)(itemList + 144);
        if ( !v28 || !*(_BYTE *)(itemList + 265) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 227) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          v61 = *(_OWORD *)(v28 + 16);
          v62 = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v58;
          v58[0] = v61;
          v58[1] = v62;
          goto LABEL_21;
        }
        v39 = *(_OWORD *)(v28 + 32);
        v61 = *(_OWORD *)(v28 + 16);
        v62 = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v57;
        v57[0] = v61;
        v57[1] = v62;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v38,
                   0LL);
      if ( !v15 )
        goto LABEL_48;
      v40 = v15->fields._items;
      v41 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v40 )
        goto LABEL_48;
      v42 = v15->fields._size;
      v33 = itemList;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        v35 = v41[4];
        v36 = v15;
        goto LABEL_38;
      }
      v34 = &v40->obj.klass + v42;
      v15->fields._size = v42 + 1;
LABEL_36:
      v34[4] = (Il2CppClass *)v33;
LABEL_39:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v15 || !v18 )
LABEL_48:
    sub_1B64324(itemList);
  v43 = v18->fields._size + v15->fields._size;
  if ( v43 < 1 )
  {
    *choiceList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, 0, v19, v20);
    v51 = unchoiceList;
    v50 = 0;
    *unchoiceList = 0LL;
  }
  else
  {
    v44 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *choiceList = v44;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)choiceList, (int32_t)v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v50 = (int)v47;
    *unchoiceList = v47;
    v51 = unchoiceList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v51, v50, v48, v49);
  return v43 > 0;
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_long__o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int64_t itemList; // x0
  int v22; // w25
  int32_t v23; // w24
  __int64 methodPtr_low; // x9
  __int64 v25; // x8
  __int128 v26; // q0
  __int128 *v27; // x0
  __int64 v28; // x8
  __int128 v29; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x8
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  __int128 v37; // q0
  __int128 *v38; // x0
  __int128 v39; // q0
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  int v43; // w21
  System_Int64_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Int64_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w1
  System_Int64_array **v51; // x0
  ServantListViewManager_o *v53; // x0
  System_Int64_array **v54; // x1
  System_Int64_array **v55; // x2
  const MethodInfo *v56; // x3
  __int128 v57[2]; // [xsp+10h] [xbp-100h] BYREF
  __int128 v58[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v59[2]; // [xsp+50h] [xbp-C0h] BYREF
  __int128 v60[2]; // [xsp+70h] [xbp-A0h] BYREF
  __int128 v61; // [xsp+90h] [xbp-80h]
  __int128 v62; // [xsp+A0h] [xbp-70h]

  if ( (byte_49F8868 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, lockList);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v11);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v14);
    byte_49F8868 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     lockList,
                                                     unlockList);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v16, v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = (int64_t)this->fields.itemList;
  if ( !itemList )
    goto LABEL_48;
  v22 = *(_DWORD *)(itemList + 24);
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      itemList = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)itemList,
                            v23,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        goto LABEL_48;
      methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)itemList + 304LL) < (unsigned int)methodPtr_low
        || *(ServantListViewItem_c **)(*(_QWORD *)(*(_QWORD *)itemList + 200LL) + 8 * methodPtr_low - 8) != ServantListViewItem_TypeInfo )
      {
        v53 = (ServantListViewManager_o *)sub_1B645E4(itemList);
        return ServantListViewManager__GetSwapChoiceList(v53, v54, v55, v56);
      }
      v25 = *(_QWORD *)(itemList + 112);
      if ( v25 && *(_BYTE *)(itemList + 264) )
      {
        if ( *(_BYTE *)(itemList + 226) )
        {
          v26 = *(_OWORD *)(v25 + 32);
          v61 = *(_OWORD *)(v25 + 16);
          v62 = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v60;
          v60[0] = v61;
          v60[1] = v62;
LABEL_21:
          itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v27,
                       0LL);
          if ( !v18 )
            goto LABEL_48;
          items = v18->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_48;
          size = v18->fields._size;
          v33 = itemList;
          if ( (unsigned int)size >= items->max_length )
          {
            v35 = v31[4];
            v36 = v18;
LABEL_38:
            System_Collections_Generic_List_long___AddWithResize(
              v36,
              v33,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v35 + 192) + 112LL));
            goto LABEL_39;
          }
          v34 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          goto LABEL_36;
        }
        v37 = *(_OWORD *)(v25 + 32);
        v61 = *(_OWORD *)(v25 + 16);
        v62 = v37;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v59;
        v59[0] = v61;
        v59[1] = v62;
      }
      else
      {
        v28 = *(_QWORD *)(itemList + 144);
        if ( !v28 || !*(_BYTE *)(itemList + 264) )
          goto LABEL_39;
        if ( *(_BYTE *)(itemList + 226) )
        {
          v29 = *(_OWORD *)(v28 + 32);
          v61 = *(_OWORD *)(v28 + 16);
          v62 = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v58;
          v58[0] = v61;
          v58[1] = v62;
          goto LABEL_21;
        }
        v39 = *(_OWORD *)(v28 + 32);
        v61 = *(_OWORD *)(v28 + 16);
        v62 = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v57;
        v57[0] = v61;
        v57[1] = v62;
      }
      itemList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v38,
                   0LL);
      if ( !v15 )
        goto LABEL_48;
      v40 = v15->fields._items;
      v41 = Method_System_Collections_Generic_List_long__Add__;
      ++v15->fields._version;
      if ( !v40 )
        goto LABEL_48;
      v42 = v15->fields._size;
      v33 = itemList;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        v35 = v41[4];
        v36 = v15;
        goto LABEL_38;
      }
      v34 = &v40->obj.klass + v42;
      v15->fields._size = v42 + 1;
LABEL_36:
      v34[4] = (Il2CppClass *)v33;
LABEL_39:
      if ( v22 == ++v23 )
        break;
      itemList = (int64_t)this->fields.itemList;
      if ( !itemList )
        goto LABEL_48;
    }
  }
  if ( !v15 || !v18 )
LABEL_48:
    sub_1B64324(itemList);
  v43 = v18->fields._size + v15->fields._size;
  if ( v43 < 1 )
  {
    *lockList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, 0, v19, v20);
    v51 = unlockList;
    v50 = 0;
    *unlockList = 0LL;
  }
  else
  {
    v44 = System_Collections_Generic_List_long___ToArray(
            v15,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    *lockList = v44;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lockList, (int32_t)v44, v45, v46);
    v47 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    v50 = (int)v47;
    *unlockList = v47;
    v51 = unlockList;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v51, v50, v48, v49);
  return v43 > 0;
}


void __fastcall ServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x0

  if ( (byte_49F8861 & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_TypeInfo, v1);
    byte_49F8861 = 1;
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
    sub_1B64324(servantSortInfo);
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

  if ( (byte_49F886E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, userSvtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v7);
    byte_49F886E = 1;
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
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL) == userSvtId )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v11->fields._items), 0LL);
        }
        if ( size == ++v10 )
          return;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      }
      while ( itemList );
LABEL_17:
      sub_1B64324(itemList);
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
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x23
  __int64 v17; // x1
  int32_t kind; // w8
  UserServantEntity_array *ServantEquipList; // x0
  UserServantEntity_array *v20; // x9
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w26
  il2cpp_array_size_t v23; // w28
  Il2CppClass **v24; // x22
  Il2CppClass *v25; // x8
  struct System_Collections_Generic_List_Thread__o **v26; // x22
  Il2CppClass *v27; // t1
  Il2CppType byval_arg; // q0
  DataManager_o *v29; // x21
  int32_t v30; // w24
  DataManager_o *v31; // x23
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // x8
  __int128 v34; // q0
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Collections_Generic_List_Thread__o *v37; // x1
  unsigned int v38; // w28
  DataManager_c **v39; // x21
  DataManager_c *v40; // x8
  struct System_Exception_o **v41; // x21
  DataManager_c *v42; // t1
  Il2CppType v43; // q0
  int64_t v44; // x0
  DataManager_o *v45; // x22
  int32_t v46; // w24
  DataManager_o *v47; // x23
  __int64 v48; // x10
  struct System_Exception_o *writeMasterDataThreadException; // x8
  __int128 v50; // q0
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Exception_o *v53; // x1
  int32_t v54; // w20
  Il2CppObject *Item; // x0
  ListViewItem_o *v56; // x21
  __int64 v57; // x10
  UnityEngine_Object_o *monitor; // x22
  __int64 v60; // [xsp+10h] [xbp-120h]
  DataManager_o *v61; // [xsp+10h] [xbp-120h]
  UserServantEntity_array *v62; // [xsp+18h] [xbp-118h]
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // [xsp+18h] [xbp-118h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+A0h] [xbp-90h]
  System_Int64_array *equipIdList; // [xsp+C0h] [xbp-70h] BYREF
  System_Int64_array *svtIdList; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_49F8865 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, isIconSizeChange);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserDeckMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F8865 = 1;
  }
  equipIdList = 0LL;
  svtIdList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v15 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v16 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v16 )
    goto LABEL_86;
  UserDeckMaster__getPartyList((UserDeckMaster_o *)v16, &svtIdList, &equipIdList, (int64_t)Instance, 0LL);
  kind = this->fields.kind;
  switch ( kind )
  {
    case 3:
      if ( !v15 )
        goto LABEL_86;
      Instance = (DataManager_o *)UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)v15, 0LL);
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
      v20 = ServantEquipList;
      Instance = 0LL;
      goto LABEL_21;
    default:
      Instance = 0LL;
      break;
  }
  v20 = 0LL;
LABEL_21:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_86;
  size = itemList->fields._size;
  if ( v20 )
  {
    v60 = *(_QWORD *)&v20->max_length;
    if ( (int)v60 >= 1 )
    {
      if ( (_DWORD)v60 )
      {
        v23 = 0;
        v62 = v20;
        while ( 1 )
        {
          v24 = &v20->obj.klass + (int)v23;
          v27 = v24[4];
          v26 = (struct System_Collections_Generic_List_Thread__o **)(v24 + 4);
          v25 = v27;
          if ( !v27 )
            goto LABEL_86;
          byval_arg = v25->_1.byval_arg;
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v25->_1.name;
          *(Il2CppType *)&v68.fields.fakeValue = byval_arg;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v67 = v68;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v67, 0LL);
          if ( size >= 1 )
          {
            v29 = Instance;
            v30 = 0;
            while ( 1 )
            {
              Instance = (DataManager_o *)this->fields.itemList;
              if ( !Instance )
                goto LABEL_86;
              Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)Instance,
                                            v30,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_86;
              v31 = Instance;
              methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
                || (ServantListViewItem_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_86;
              }
              masterLoadThreads = Instance->fields.masterLoadThreads;
              if ( masterLoadThreads )
              {
                v34 = *(_OWORD *)&masterLoadThreads->fields._syncRoot;
                *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&masterLoadThreads->fields._items;
                *(_OWORD *)&v68.fields.fakeValue = v34;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v66 = v68;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                              &v66,
                                              0LL);
                if ( Instance == v29 )
                  break;
              }
              if ( size == ++v30 )
                goto LABEL_44;
            }
            if ( v23 >= v62->max_length )
              goto LABEL_71;
            v37 = *v26;
            v31->fields.masterLoadThreads = *v26;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.masterLoadThreads, (int32_t)v37, v35, v36);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v31, 0LL);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v31, 0LL);
            }
          }
LABEL_44:
          v20 = v62;
          if ( ++v23 == (_DWORD)v60 )
            goto LABEL_72;
          if ( v23 >= v62->max_length )
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
        v38 = 0;
        v61 = Instance;
        while ( 1 )
        {
          v39 = &Instance->klass + (int)v38;
          v42 = v39[4];
          v41 = (struct System_Exception_o **)(v39 + 4);
          v40 = v42;
          if ( !v42 )
            break;
          v43 = v40->_1.byval_arg;
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&v40->_1.name;
          *(Il2CppType *)&v68.fields.fakeValue = v43;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v65 = v68;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v65, 0LL);
          if ( size >= 1 )
          {
            v45 = (DataManager_o *)v44;
            v46 = 0;
            while ( 1 )
            {
              Instance = (DataManager_o *)this->fields.itemList;
              if ( !Instance )
                goto LABEL_86;
              Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)Instance,
                                            v46,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !Instance )
                goto LABEL_86;
              v47 = Instance;
              v48 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)v48
                || (ServantListViewItem_c *)Instance->klass->_2.typeHierarchy[v48 - 1] != ServantListViewItem_TypeInfo )
              {
                goto LABEL_86;
              }
              writeMasterDataThreadException = Instance->fields.writeMasterDataThreadException;
              if ( writeMasterDataThreadException )
              {
                v50 = *(_OWORD *)&writeMasterDataThreadException->fields._data;
                *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&writeMasterDataThreadException->fields._className;
                *(_OWORD *)&v68.fields.fakeValue = v50;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v64 = v68;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                              &v64,
                                              0LL);
                if ( Instance == v45 )
                  break;
              }
              if ( size == ++v46 )
                goto LABEL_69;
            }
            if ( v38 >= LODWORD(v61->fields.m_CancellationTokenSource) )
              goto LABEL_71;
            v53 = *v41;
            v47->fields.writeMasterDataThreadException = *v41;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v47->fields.writeMasterDataThreadException,
              (int32_t)v53,
              v51,
              v52);
            if ( !isIconSizeChange )
            {
              ServantListViewItem__ModifyLockItem((ServantListViewItem_o *)v47, 0LL);
              ServantListViewItem__ModifyChoiceItem((ServantListViewItem_o *)v47, 0LL);
            }
          }
LABEL_69:
          Instance = v61;
          if ( ++v38 == (_DWORD)m_CancellationTokenSource )
            goto LABEL_72;
          if ( v38 >= LODWORD(v61->fields.m_CancellationTokenSource) )
            goto LABEL_71;
        }
LABEL_86:
        sub_1B64324(Instance);
      }
LABEL_71:
      sub_1B6432C(Instance, v17);
    }
  }
LABEL_72:
  if ( size >= 1 && isIconSizeChange )
  {
    v54 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_86;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               v54,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( Item )
      {
        v56 = (ListViewItem_o *)Item;
        v57 = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)v57
          && (ServantListViewItem_c *)Item->klass->_2.typeHierarchy[v57 - 1] == ServantListViewItem_TypeInfo )
        {
          monitor = (UnityEngine_Object_o *)Item[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
          {
            Instance = (DataManager_o *)v56->fields.viewObject;
            if ( !Instance )
              goto LABEL_86;
            ListViewObject__SetItemSeed((ListViewObject_o *)Instance, v56, this->fields.seed, 0LL);
          }
        }
      }
      if ( size == ++v54 )
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
  ListViewSort_o *sort; // x0

  if ( (byte_49F8875 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantListViewManager_OnClickBonusFilterKind__, method);
    byte_49F8875 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickBonusFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantListViewManager_OnClickBonusFilterKind__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  ListViewSort_o *sort; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v13; // x22
  __int64 v14; // x0
  int32_t v15; // w1
  ListViewSort_o *v16; // x21
  ServantFilterSelectMenu_CallbackFunc_o *v17; // x22

  if ( (byte_49F886F & 1) == 0 )
  {
    sub_1B640C8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ServantListViewManager_EndSelectFilterKind__, v3);
    sub_1B640C8(&Method_ServantListViewManager_OnClickFilterKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F886F = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantListViewManager_OnClickFilterKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_ServantListViewManager_OnClickFilterKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( kind )
    {
      sort = this->fields.sort;
      v13 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
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
          v15 = 5;
        else
          v15 = 6;
        CommonUI__OpenServantFilterSelectMenu_30352028(
          (CommonUI_o *)Instance,
          v15,
          sort,
          (ListViewManager_o *)this,
          v13,
          -1,
          0LL);
        return;
      }
    }
    else
    {
      v16 = this->fields.sort;
      v17 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                        ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                        v9,
                                                        v10);
      ServantFilterSelectMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_ServantListViewManager_EndSelectFilterKind__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantFilterSelectMenu((CommonUI_o *)Instance, 0, v16, v17, -1, 0LL);
        return;
      }
    }
    sub_1B64324(v14);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v6);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_49F8873 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantListViewManager_OnClickSortAscendingOrder__, method);
    byte_49F8873 = 1;
  }
  if ( this->fields.isInput )
  {
    v3 = Method_ServantListViewManager_OnClickSortAscendingOrder__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantListViewManager_OnClickSortAscendingOrder__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_1B64324(v5);
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
  __int64 v12; // x1
  __int64 v13; // x2
  ServantSortSelectMenu_CallbackFunc_o *v14; // x22
  __int64 v15; // x0
  int v16; // w8
  int32_t v17; // w1

  if ( (byte_49F8871 & 1) == 0 )
  {
    sub_1B640C8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_ServantListViewManager_EndSelectSortKind__, v3);
    sub_1B640C8(&Method_ServantListViewManager_OnClickSortKind__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F8871 = 1;
  }
  if ( this->fields.isInput )
  {
    v6 = Method_ServantListViewManager_OnClickSortKind__;
    if ( (*((_BYTE *)Method_ServantListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_ServantListViewManager_OnClickSortKind__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    kind = this->fields.kind;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v11 = (CommonUI_o *)Instance;
    v14 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B64314(ServantSortSelectMenu_CallbackFunc_TypeInfo, v12, v13);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v11 )
      sub_1B64324(v15);
    if ( kind == 3 )
      v16 = 6;
    else
      v16 = 4;
    if ( kind )
      v17 = v16;
    else
      v17 = 3;
    CommonUI__OpenServantSortSelectMenu(v11, v17, sort, 0, v14, 0LL);
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
  unsigned int Index; // w0

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj )
      sub_1B64324(v6);
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
  int32_t v7; // w2
  int32_t v8; // w3
  UIScrollView_o *v9; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_49F886D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F886D = 1;
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
      v9 = this->fields.scrollView;
      if ( v9 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._8_UpdateScrollbars.method)(
          v9,
          1LL,
          v9->klass->vtable._9_SetDragAmount.methodPtr);
        v9 = this->fields.scrollView;
        if ( v9 )
        {
          if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_shouldMoveVertically.method)(
                  v9,
                  v9->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
            goto LABEL_14;
          v9 = this->fields.scrollView;
          if ( v9 )
          {
            UIScrollView__UpdatePosition(v9, 0LL);
LABEL_14:
            callbackFunc2 = this->fields.callbackFunc2;
            this->fields.callbackFunc2 = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v7, v8);
            if ( callbackFunc2 )
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
                callbackFunc2->fields.original_method_info,
                *(_QWORD *)&callbackFunc2->fields.extra_arg);
            return;
          }
        }
      }
      sub_1B64324(v9);
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F886B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_ServantListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F886B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      ServantListViewObject__Init_32355076((ServantListViewObject_o *)current, mode, v19, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListViewManager__RequestListObject_32354048(
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F886C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_ServantListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F886C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      ServantListViewObject__Init_32355160((ServantListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantListViewObject__Dispose__);
  }
}


void __fastcall ServantListViewManager__SaveSortInfo(ServantListViewManager_o *this, const MethodInfo *method)
{
  ServantListViewManager_c *v2; // x0
  ListViewSort_o *servantSortInfo; // x8
  __int64 v4; // x0
  ListViewSort_o *servantEquipSortInfo; // x8
  ListViewSort_o *commandCodeSortInfo; // x8

  if ( (byte_49F8866 & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_TypeInfo, method);
    byte_49F8866 = 1;
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
    sub_1B64324(v4);
  }
}


void __fastcall ServantListViewManager__SetBonusFilterButton(ServantListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusFilterKindButton; // x20
  UnityEngine_Component_o *gameObject; // x0
  struct ListViewSort_o *sort; // x8
  bool v6; // w1

  if ( (byte_49F8876 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8876 = 1;
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
          v6 = this->fields.kind != 3;
          if ( gameObject )
          {
LABEL_10:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v6, 0LL);
            return;
          }
        }
        else
        {
          v6 = 0;
          if ( gameObject )
            goto LABEL_10;
        }
      }
    }
    sub_1B64324(gameObject);
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
    sub_1B6406C(
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
    sub_1B64324(sort);
  }
  this->fields.alignedBonusFilterInfos = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.alignedBonusFilterInfos, 0, (int32_t)method, v3);
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

  if ( (byte_49F8879 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17441/*"btn_filter_on"*/, method);
    sub_1B640C8(&StringLiteral_17440/*"btn_filter"*/, v3);
    byte_49F8879 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_1B64324(sort);
  }
  v6 = (System_String_o **)&StringLiteral_17440/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_17441/*"btn_filter_on"*/;
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantListViewManager__SetMode_32353900(this, mode, v6);
}


void __fastcall ServantListViewManager__SetMode_32353900(
        ServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( (unsigned int)(mode - 1) <= 2 )
    ServantListViewManager__RequestListObject_32354048(this, mode + 1, v5);
}


void __fastcall ServantListViewManager__SetMode_32353996(
        ServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantListViewManager__SetMode_32353900(this, mode, v6);
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
  if ( (byte_49F886A & 1) == 0 )
  {
    this = (ServantListViewManager_o *)sub_1B640C8(&ServantListViewObject_TypeInfo, obj);
    byte_49F886A = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ServantListViewObject__Init_32353776((ServantListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
  System_String_o **v17; // x9
  System_String_o **v18; // x10
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v22; // x20

  if ( (byte_49F8874 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17471/*"btn_sort_up"*/, v3);
    sub_1B640C8(&StringLiteral_17558/*"btn_txt_up"*/, v4);
    sub_1B640C8(&StringLiteral_17514/*"btn_txt_new"*/, v5);
    sub_1B640C8(&StringLiteral_17504/*"btn_txt_down"*/, v6);
    sub_1B640C8(&StringLiteral_17521/*"btn_txt_old"*/, v7);
    sub_1B640C8(&StringLiteral_17468/*"btn_sort_down"*/, v8);
    byte_49F8874 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_41;
    v11 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0LL);
    if ( !v11 )
      goto LABEL_41;
    UILabel__set_text(v11, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v13 = this->fields.sort;
    if ( !v13 )
      goto LABEL_41;
    sortKind = v13->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v15 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17521/*"btn_txt_old"*/ : &StringLiteral_17514/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
      v18 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_41;
      v19 = (System_String_o **)(v13->fields.isAscendingOrder ? &StringLiteral_17558/*"btn_txt_up"*/ : &StringLiteral_17504/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v19, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_41;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_41;
      v17 = (System_String_o **)&StringLiteral_17471/*"btn_sort_up"*/;
      v18 = (System_String_o **)&StringLiteral_17468/*"btn_sort_down"*/;
    }
    if ( v16->fields.isAscendingOrder )
      v20 = v17;
    else
      v20 = v18;
    UISprite__set_spriteName((UISprite_o *)sort, *v20, 0LL);
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
      v22 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusFilterButtonText(
                                 sort,
                                 this->fields.alignedBonusFilterInfos,
                                 0,
                                 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_41:
      sub_1B64324(sort);
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
  System_Collections_Generic_List_object__o *v11; // x8
  System_Collections_Generic_List_object__c *klass; // x23
  Il2CppObject *v13; // x26
  Il2CppObject *v14; // x28
  __int64 v15; // x0
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x9
  Il2CppClass *v18; // x8
  Il2CppType byval_arg; // q0
  UserServantEntity_o *v20; // x0
  _BOOL4 IsLeave; // w8
  bool v22; // w8
  Il2CppObject *v23; // x29
  UserServantEntity_o *v24; // x0
  _BOOL8 IsEventJoin; // x0
  UserServantEntity_o *v26; // x0
  UserServantEntity_o *v27; // x0
  UserServantEntity_o *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49F887A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, isPushMode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&ServantListViewItem_TypeInfo, v9);
    byte_49F887A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  SelfUserGame = (System_Collections_Generic_List_object__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v11 = SelfUserGame, (SelfUserGame = (System_Collections_Generic_List_object__o *)this->fields.itemList) == 0LL) )
  {
    sub_1B64324(SelfUserGame);
  }
  klass = v11[3].klass;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    SelfUserGame,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v13 = 0LL;
  v14 = 0LL;
  *(_OWORD *)&v31.fields._list = *(_OWORD *)&v30.fields.currentCryptoKey;
  v31.fields._current = (Il2CppObject *)v30.fields.fakeValue;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v15 & 1) == 0 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      goto LABEL_40;
    methodPtr_low = LOBYTE(ServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v31.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ServantListViewItem_c *)v31.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantListViewItem_TypeInfo )
    {
      v15 = sub_1B645E4(v31.fields._current);
LABEL_40:
      sub_1B64324(v15);
    }
    v18 = v31.fields._current[7].klass;
    if ( !v18 )
    {
      BYTE6(v31.fields._current[14].klass) = 0;
      goto LABEL_20;
    }
    byval_arg = v18->_1.byval_arg;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v18->_1.name;
    *(Il2CppType *)&v30.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v29 = v30;
    BYTE6(current[14].klass) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v29, 0LL) == (_QWORD)klass;
    if ( isPushMode )
    {
      v20 = (UserServantEntity_o *)current[7].klass;
      if ( !v20 )
        sub_1B64324(0LL);
      IsLeave = UserServantEntity__IsLeave(v20, 0LL);
      if ( !IsLeave )
        v13 = current;
      if ( IsLeave )
      {
        v22 = 0;
        v23 = current;
      }
      else
      {
        v24 = (UserServantEntity_o *)current[7].klass;
        if ( !v24 )
          sub_1B64324(0LL);
        IsEventJoin = UserServantEntity__IsEventJoin(v24, 0LL);
        if ( IsEventJoin )
          v23 = v14;
        else
          v23 = v13;
        if ( IsEventJoin )
        {
          v22 = 0;
          v23 = current;
        }
        else
        {
          v26 = (UserServantEntity_o *)current[7].klass;
          if ( !v26 )
            sub_1B64324(0LL);
          IsEventJoin = UserServantEntity__IsCombineMaterial(v26, 0LL);
          if ( IsEventJoin )
          {
            v22 = 0;
            v23 = v13;
          }
          else
          {
            v27 = (UserServantEntity_o *)current[7].klass;
            if ( !v27 )
              sub_1B64324(0LL);
            IsEventJoin = UserServantEntity__IsStatusUp(v27, 0LL);
            if ( IsEventJoin )
            {
              v22 = 0;
            }
            else
            {
              v28 = (UserServantEntity_o *)current[7].klass;
              if ( !v28 )
                sub_1B64324(0LL);
              IsEventJoin = UserServantEntity__IsMaterialTd(v28, 0LL);
              v22 = !IsEventJoin;
            }
          }
          v14 = current;
        }
        if ( !v23 )
          sub_1B64324(IsEventJoin);
      }
      HIBYTE(v23[14].klass) = v22;
    }
    else
    {
LABEL_20:
      HIBYTE(current[14].klass) = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_49F885C & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F885C = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F885E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F885E = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1B645E4(v7);
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F8863 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F8863 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)ServantListViewObject__GetItem((ServantListViewObject_o *)Component_object, v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v12 )
            sub_1B64324(v22);
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v22);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F8862 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F8862 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantListViewObject___);
      v19 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_49F885D & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F885D = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F885F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F885F = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7708;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A76B0;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49F887C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&ServantListViewManager_ResultKind_TypeInfo, v9);
    byte_49F887C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(ServantListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall ServantListViewManager_CallbackFunc__EndInvoke(
        ServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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