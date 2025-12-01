void WaveBattleWaveServantInfoItem___ctor(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void WaveBattleWaveServantInfoItem__Awake(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  ;
}


void WaveBattleWaveServantInfoItem__EndCloseShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      8,
      (unsigned int)this->fields.partyIdx,
      callbackFunc->fields.method);
}


void WaveBattleWaveServantInfoItem__EndShowEquip(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC31EE & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC31EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void WaveBattleWaveServantInfoItem__EndShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CC31EC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__);
    byte_4CC31EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_1C71608(v7, v8);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void WaveBattleWaveServantInfoItem__OnClickEquip(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.partyIdx,
      callbackFunc->fields.method);
}


void WaveBattleWaveServantInfoItem__OnClickServant(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.partyIdx,
      callbackFunc->fields.method);
}


// attributes: thunk
void WaveBattleWaveServantInfoItem__OnLongPressEquip(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem__OpenEquipDetail(this, method);
}


// attributes: thunk
void WaveBattleWaveServantInfoItem__OnLongPressServant(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem__OpenServantDetail(this, method);
}


void WaveBattleWaveServantInfoItem__OpenEquipDetail(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  __int64 v4; // x8
  _QWORD *v5; // x8
  __int64 v6; // x8
  bool v7; // w0
  _QWORD *v8; // x8
  bool v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  _QWORD *v11; // x8
  __int64 v12; // x8
  int64_t v13; // x21
  CommonUI_o *v14; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22
  _QWORD *v16; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4CC31ED & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C713B0(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    byte_4CC31ED = 1;
  }
  entity = 0;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_26;
  if ( !monitor[3] )
    goto LABEL_22;
  v4 = monitor[5];
  if ( !v4 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_27;
  if ( *(__int64 *)(v4 + 32) > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
    v5 = v2[7].monitor;
    if ( !v5 )
      goto LABEL_26;
    v6 = v5[5];
    if ( !v6 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v6 + 24) )
      goto LABEL_27;
    if ( !this )
      goto LABEL_26;
    v7 = DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *(_QWORD *)(v6 + 32),
           (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v8 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    v9 = v7;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C713C8(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
    if ( v9 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v11 = v2[7].monitor;
      if ( !v11 )
        goto LABEL_26;
      v12 = v11[5];
      if ( !v12 )
        goto LABEL_26;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v13 = *(_QWORD *)(v12 + 32);
        v14 = (CommonUI_o *)this;
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v15, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0);
        if ( v14 )
        {
          CommonUI__OpenServantEquipStatusDialog(v14, 11, v13, 1, v15, 0, 0, 0);
          return;
        }
LABEL_26:
        sub_1C71608(this, method);
      }
LABEL_27:
      sub_1C71610(this);
    }
  }
  else
  {
LABEL_22:
    v16 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C713C8(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v16, v16[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
}


void WaveBattleWaveServantInfoItem__OpenServantDetail(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  _QWORD *v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  void *v9; // x8
  System_Int64_array *v10; // x22
  Il2CppObject *v11; // x21
  QuestRestrictionInfo_o *klass; // x23
  CommonUI_o *v13; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v14; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4CC31EB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_WaveBattleWaveServantInfoItem_EndShowServant__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C713B0(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
    byte_4CC31EB = 1;
  }
  entity = 0;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_20;
  if ( monitor[3] )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
    v4 = v2[7].monitor;
    if ( !v4 || !this )
      goto LABEL_20;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v4[3],
           (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0) )
          goto LABEL_12;
        v7 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C713C8(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = v2[7].monitor;
        if ( v9 )
        {
          v10 = (System_Int64_array *)*((_QWORD *)v9 + 5);
          v11 = entity;
          klass = (QuestRestrictionInfo_o *)v2[8].klass;
          v13 = (CommonUI_o *)this;
          v14 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C715FC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v14,
            v2,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0);
          if ( v13 )
          {
            CommonUI__OpenServantStatusDialog_31451696(
              v13,
              1,
              (UserServantEntity_o *)v11,
              v10,
              klass,
              v14,
              1,
              0,
              0,
              0,
              0,
              0);
            return;
          }
        }
      }
LABEL_20:
      sub_1C71608(this, method);
    }
  }
LABEL_12:
  v5 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveServantInfoItem__SetBlank(
        WaveBattleWaveServantInfoItem_o *this,
        bool isSelectWaveFlag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantSetSprite; // x0
  UISprite_o *v6; // x20
  struct DeckServantData_o *servantData; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  GrandQuestFolderBoardItem_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v10; // x0
  __int64 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Int64_array *v18; // x8

  if ( (byte_4CC31E9 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&StringLiteral_19689/*"formation_select_small"*/);
    byte_4CC31E9 = 1;
  }
  servantSetSprite = (UnityEngine_Component_o *)this->fields.servantSetSprite;
  if ( !servantSetSprite )
    goto LABEL_22;
  servantSetSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantSetSprite, 0);
  if ( !servantSetSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSetSprite, 1, 0);
  if ( !isSelectWaveFlag )
  {
    servantSetSprite = (UnityEngine_Component_o *)this->fields.servantSetSprite;
    if ( !servantSetSprite )
      goto LABEL_22;
    servantSetSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantSetSprite, 0);
    if ( !servantSetSprite )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSetSprite, 1, 0);
    v6 = this->fields.servantSetSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    servantSetSprite = (UnityEngine_Component_o *)AtlasManager__SetPartyOrganizationImage(
                                                    v6,
                                                    (System_String_o *)StringLiteral_19689/*"formation_select_small"*/,
                                                    0);
  }
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_22;
  p_userSvtEquipIds = (GrandQuestFolderBoardItem_o *)&servantData->fields.userSvtEquipIds;
  userSvtEquipIds = servantData->fields.userSvtEquipIds;
  servantData->fields.userSvtId = 0;
  if ( !userSvtEquipIds || !userSvtEquipIds->max_length )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = sub_1C71458(long___TypeInfo, (unsigned int)v10->static_fields->SvtEquipMax);
    p_userSvtEquipIds->klass = (GrandQuestFolderBoardItem_c *)v11;
    sub_1C71354(p_userSvtEquipIds, v11, v12, v13, v14, v15, v16, v17);
    servantData = this->fields.servantData;
    if ( !servantData )
      goto LABEL_22;
  }
  v18 = servantData->fields.userSvtEquipIds;
  if ( !v18 )
    goto LABEL_22;
  if ( !LODWORD(v18->max_length) )
    sub_1C71610(servantSetSprite);
  v18->m_Items[0] = 0;
  servantSetSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantSetSprite
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)servantSetSprite, 0),
        (servantSetSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon) == 0) )
  {
LABEL_22:
    sub_1C71608(servantSetSprite, isSelectWaveFlag);
  }
  ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)servantSetSprite, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveServantInfoItem__SetItem(
        WaveBattleWaveServantInfoItem_o *this,
        int32_t idx,
        DeckServantData_o *servantData,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *callback,
        bool isInterruption,
        bool isSelectWaveFlag,
        const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem_o *v16; // x19
  DeckServantData_o *v17; // x0
  struct DeckServantData_o **p_servantData; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UISprite_o *numberSprite; // x26
  System_String_o *v38; // x0
  Il2CppObject *Master_object; // x25
  const MethodInfo *userSvtId; // x2
  UserServantCollectionMaster_o *v41; // x26
  const MethodInfo *v42; // x4
  struct DeckServantData_o *v43; // x21
  struct System_Int64_array *v44; // x8
  GrandQuestFolderBoardItem_o *v45; // x21
  struct System_Int64_array *v46; // t1
  il2cpp_array_size_t v47; // x9
  int64_t v48; // x2
  char v49; // w8
  struct DeckServantData_o *v50; // x8
  struct DeckServantData_o *v51; // x23
  struct System_Int64_array *v52; // x8
  GrandQuestFolderBoardItem_o *p_userSvtEquipIds; // x23
  struct System_Int64_array *userSvtEquipIds; // t1
  il2cpp_array_size_t max_length; // x9
  int64_t v56; // x2
  bool v57; // w23
  BalanceConfig_c *v58; // x0
  __int64 v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct System_Int64_array *v66; // x9
  BalanceConfig_c *v67; // x0
  __int64 v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct System_Int64_array *v75; // x8
  const MethodInfo *v76; // x4
  Il2CppObject *v77; // x21
  UserServantCollectionEntity_o *v78; // x22
  UILabel_o *maskServantLabel; // x20
  Il2CppObject *v80; // [xsp+8h] [xbp-88h] BYREF
  UserServantCollectionEntity_o *v81; // [xsp+10h] [xbp-80h] BYREF
  Il2CppObject *v82; // [xsp+18h] [xbp-78h] BYREF
  int v83; // [xsp+24h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v16 = this;
  if ( (byte_4CC31E8 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&UserServantEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_15499/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C713B0(&StringLiteral_21632/*"member_txt_"*/);
    byte_4CC31E8 = 1;
  }
  entity = 0;
  v83 = 0;
  v81 = 0;
  v82 = 0;
  v80 = 0;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_84;
  v17 = DeckServantData__Clone(servantData, 0);
  v16->fields.servantData = v17;
  p_servantData = &v16->fields.servantData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->fields.servantData, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v16->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v16->fields.callbackFunc = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->fields.callbackFunc, (int32_t)callback, v31, v32, v33, v34, v35, v36);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantLabel;
  if ( !this )
    goto LABEL_84;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipObj;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipLabel;
  if ( !this )
    goto LABEL_84;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
  numberSprite = v16->fields.numberSprite;
  v83 = idx + 1;
  v38 = System_Int32__ToString((int32_t)&v83, 0);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_64031724(
                                              (System_String_o *)StringLiteral_21632/*"member_txt_"*/,
                                              v38,
                                              0);
  if ( !numberSprite )
    goto LABEL_84;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_84;
  userSvtId = (const MethodInfo *)(*p_servantData)->fields.userSvtId;
  v41 = (UserServantCollectionMaster_o *)this;
  if ( (__int64)userSvtId < 1 )
    goto LABEL_40;
  if ( !Master_object )
    goto LABEL_84;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              (int64_t)userSvtId,
                                              (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_40:
    if ( isInterruption )
    {
      v50 = *p_servantData;
      if ( !*p_servantData )
        goto LABEL_84;
      if ( v50->fields.userSvtId >= 1 && v50->fields.svtId >= 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CC112A )
        {
          sub_1C713B0(&NetworkManager_TypeInfo);
          byte_4CC112A = 1;
        }
        this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
        }
        if ( !*p_servantData || !v41 )
          goto LABEL_84;
        if ( UserServantCollectionMaster__TryGetEntity(
               v41,
               &v81,
               this[1].fields.classCompatibilityIcon[1].fields.m_CachedPtr,
               (*p_servantData)->fields.svtId,
               0) )
        {
          this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
          if ( !this )
            goto LABEL_84;
          this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
          if ( !this )
            goto LABEL_84;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          v51 = *p_servantData;
          if ( !*p_servantData )
            goto LABEL_84;
          userSvtEquipIds = v51->fields.userSvtEquipIds;
          p_userSvtEquipIds = (GrandQuestFolderBoardItem_o *)&v51->fields.userSvtEquipIds;
          v52 = userSvtEquipIds;
          if ( userSvtEquipIds && (max_length = v52->max_length) != 0 )
          {
            if ( !(_DWORD)max_length )
              goto LABEL_85;
            v56 = v52->m_Items[0];
            if ( v56 < 1 )
            {
              v57 = 0;
            }
            else
            {
              if ( !Master_object )
                goto LABEL_84;
              v57 = !DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       &v82,
                       v56,
                       (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            }
          }
          else
          {
            v67 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v67 = BalanceConfig_TypeInfo;
            }
            v68 = sub_1C71458(long___TypeInfo, (unsigned int)v67->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (GrandQuestFolderBoardItem_c *)v68;
            sub_1C71354(p_userSvtEquipIds, v68, v69, v70, v71, v72, v73, v74);
            if ( !*p_servantData )
              goto LABEL_84;
            v75 = (*p_servantData)->fields.userSvtEquipIds;
            if ( !v75 )
              goto LABEL_84;
            if ( !LODWORD(v75->max_length) )
              goto LABEL_85;
            v57 = 0;
            v75->m_Items[0] = 0;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
          if ( !this )
            goto LABEL_84;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &v80,
                 servantData->fields.userSvtId,
                 (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
          {
            v77 = v80;
          }
          else
          {
            v78 = v81;
            v77 = (Il2CppObject *)sub_1C715FC(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_43445644((UserServantEntity_o *)v77, v78, 1, 0);
          }
          entity = v77;
          WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)v77, classIds, v57, v76);
          goto LABEL_75;
        }
      }
    }
LABEL_50:
    WaveBattleWaveServantInfoItem__SetBlank(v16, isSelectWaveFlag, userSvtId);
    goto LABEL_80;
  }
  if ( !isInterruption )
  {
    this = (WaveBattleWaveServantInfoItem_o *)entity;
    if ( !entity )
      goto LABEL_84;
    if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0) )
      goto LABEL_50;
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_84;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v43 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_84;
  v46 = v43->fields.userSvtEquipIds;
  v45 = (GrandQuestFolderBoardItem_o *)&v43->fields.userSvtEquipIds;
  v44 = v46;
  if ( !v46 || (v47 = v44->max_length) == 0 )
  {
    v58 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v58 = BalanceConfig_TypeInfo;
    }
    v59 = sub_1C71458(long___TypeInfo, (unsigned int)v58->static_fields->SvtEquipMax);
    v45->klass = (GrandQuestFolderBoardItem_c *)v59;
    sub_1C71354(v45, v59, v60, v61, v62, v63, v64, v65);
LABEL_54:
    if ( !*p_servantData )
      goto LABEL_84;
    v66 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v66 )
      goto LABEL_84;
    if ( LODWORD(v66->max_length) )
    {
      v49 = 0;
      v66->m_Items[0] = 0;
      goto LABEL_58;
    }
LABEL_85:
    sub_1C71610(this);
  }
  if ( !(_DWORD)v47 )
    goto LABEL_85;
  v48 = v44->m_Items[0];
  if ( v48 < 1 )
  {
    v49 = 0;
    goto LABEL_58;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v82,
                                              v48,
                                              (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v49 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_54;
LABEL_58:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v49 & 1, v42);
  this = (WaveBattleWaveServantInfoItem_o *)entity;
  if ( !entity )
    goto LABEL_84;
  if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0) )
  {
LABEL_75:
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      maskServantLabel = v16->fields.maskServantLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15499/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
      if ( maskServantLabel )
      {
        UILabel__set_text(maskServantLabel, (System_String_o *)this, 0);
        goto LABEL_80;
      }
    }
LABEL_84:
    sub_1C71608(this, *(_QWORD *)&idx);
  }
LABEL_80:
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_84;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void WaveBattleWaveServantInfoItem__SetServant(
        WaveBattleWaveServantInfoItem_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int32_array *classIds,
        bool isSetEquip,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  void *LevelMax; // x0
  __int64 v11; // x1
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  Il2CppObject *Master_object; // x22
  struct DeckServantData_o *v15; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v17; // x23
  UserServantEntity_o *v18; // x22
  UISprite_o *maskEquipSprite; // x22
  UILabel_o *maskEquipLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4CC31EA & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&IconLabelInfo_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&UserServantEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_15497/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C713B0(&StringLiteral_20482/*"img_frames_mask14"*/);
    byte_4CC31EA = 1;
  }
  entity = 0;
  v9 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  if ( !userServantEntity )
    goto LABEL_36;
  lv = userServantEntity->fields.lv;
  LevelMax = (void *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v9 )
    goto LABEL_36;
  IconLabelInfo__Set_41192248(v9, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0);
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_36;
  LevelMax = this->fields.servantFaceIcon;
  if ( !LevelMax )
    goto LABEL_36;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)LevelMax,
    userServantEntity,
    servantData->fields.userSvtEquipIds,
    this->fields.questRestrictionInfo,
    v9,
    0,
    0,
    0,
    0,
    0);
  if ( isSetEquip )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    LevelMax = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      LevelMax = NetworkManager_TypeInfo;
    }
    v15 = this->fields.servantData;
    if ( !v15 )
      goto LABEL_36;
    svtEquipIds = v15->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_36;
    if ( !LODWORD(svtEquipIds->max_length) )
      sub_1C71610(LevelMax);
    if ( !Master_object )
      goto LABEL_36;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(*((_QWORD *)LevelMax + 23) + 64LL),
           svtEquipIds->m_Items[0],
           0) )
    {
      v17 = entity;
      v18 = (UserServantEntity_o *)sub_1C715FC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43445644(v18, v17, 0, 0);
      LevelMax = this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v18, 0);
        LevelMax = this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_20482/*"img_frames_mask14"*/, 0);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_15497/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0);
            goto LABEL_29;
          }
        }
      }
LABEL_36:
      sub_1C71608(LevelMax, v11);
    }
  }
LABEL_29:
  LevelMax = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)LevelMax,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v23;
  *(_QWORD *)&v26.fields.fakeValue = v22;
  LevelMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v26, 0);
  if ( !v24 )
    goto LABEL_36;
  LevelMax = DataMasterBase_object__object__int___GetEntity(
               v24,
               (int32_t)LevelMax,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LevelMax || !this->fields.classCompatibilityIcon )
    goto LABEL_36;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    *((_DWORD *)LevelMax + 20),
    classIds,
    0,
    0);
}


void WaveBattleWaveServantInfoItem__add_callbackFunc(
        WaveBattleWaveServantInfoItem_o *this,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveServantInfoItem_o *v11; // x0
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC31E6 & 1) == 0 )
  {
    sub_1C713B0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_4CC31E6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v8->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C719A4(v8);
  WaveBattleWaveServantInfoItem__remove_callbackFunc(v11, v12, v13);
}


void WaveBattleWaveServantInfoItem__remove_callbackFunc(
        WaveBattleWaveServantInfoItem_o *this,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveServantInfoItem_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC31E7 & 1) == 0 )
  {
    sub_1C713B0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_4CC31E7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v8->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C719A4(v8);
  WaveBattleWaveServantInfoItem__Awake(v11, v12);
}


void WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA1F30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA1ED8;
}


System_IAsyncResult_o *WaveBattleWaveServantInfoItem_CallbackFunc__BeginInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = n;
  v12 = result;
  if ( (byte_4CC31EF & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4CC31EF = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    this->fields.method);
}