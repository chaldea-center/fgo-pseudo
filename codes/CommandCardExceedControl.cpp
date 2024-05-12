void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


System_String_o *__fastcall CommandCardExceedControl__GetCombineButtonLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isExceedMax,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_438DF1E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17492/*"buttontxt_synthesis"*/);
    sub_B775C4(&StringLiteral_17489/*"buttontxt_notsynthesis"*/);
    byte_438DF1E = 1;
  }
  v6 = &StringLiteral_17492/*"buttontxt_synthesis"*/;
  if ( stateType == 2 && isExceedMax )
    v6 = &StringLiteral_17489/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v6;
}


BattleCommandData_array *__fastcall CommandCardExceedControl__GetCommandCardDataEachServantId(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x27
  unsigned __int64 v6; // x22
  ImageLimitCount_c **v7; // x26
  const MethodInfo_2D1653C **v8; // x28
  const MethodInfo_1D183F0 **v9; // x21
  __int64 baseUserServantEntity; // x0
  int32_t v11; // w23
  int32_t CommandCardLimitCount; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w24
  int32_t ServantImageLimitSealAfter; // w25
  __int64 v15; // x8
  int32_t v16; // w9
  const MethodInfo_1D183F0 **v17; // x19
  const MethodInfo_2D1653C **v18; // x21
  ImageLimitCount_c **v19; // x28
  int32_t v20; // w26
  BattleCommandData_o *v21; // x24
  const MethodInfo *v22; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v33; // x0
  __int64 v34; // x0
  BattleCommandData_o **m_Items; // [xsp+0h] [xbp-70h]
  BattleCommandData_array *v36; // [xsp+10h] [xbp-60h]

  if ( (byte_438DF2D & 1) == 0 )
  {
    sub_B775C4(&BattleCommandData___TypeInfo);
    sub_B775C4(&BattleCommandData_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF2D = 1;
  }
  v36 = (BattleCommandData_array *)sub_B775DC(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
  if ( this->fields.transformTotal >= 1 )
  {
    v5 = 0LL;
    v6 = 0LL;
    m_Items = v36->m_Items;
    v7 = &ImageLimitCount_TypeInfo;
    v8 = (const MethodInfo_2D1653C **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    v9 = (const MethodInfo_1D183F0 **)&Method_DataManager_GetMasterData_ServantLimitImageMaster___;
    while ( 1 )
    {
      baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                                (UserServantEntity_o *)baseUserServantEntity,
                                v6,
                                0LL);
      if ( !this->fields.baseUserServantEntity )
        break;
      v11 = baseUserServantEntity;
      CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
      if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v7)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v7);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance(*v8);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)baseUserServantEntity,
                                         *v9);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v11,
                                     LimitCountByImageLimitCostumeIn,
                                     0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance(*v8);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)baseUserServantEntity,
                                         v11,
                                         (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !baseUserServantEntity )
        break;
      v15 = *(_QWORD *)(baseUserServantEntity + 144);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 24);
        if ( v16 > cardIndex )
        {
          if ( v16 <= (unsigned int)cardIndex )
            goto LABEL_26;
          v17 = v9;
          v18 = v8;
          v19 = v7;
          v20 = *(_DWORD *)(v15 + 4LL * cardIndex + 32);
          v21 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_19072172(v21, v20, v11, ServantImageLimitSealAfter, 0, 0LL);
          if ( !v21 )
            break;
          v21->fields.markindex = cardIndex;
          UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, cardIndex, v22);
          v21->fields.userCommandCodeId = UserCommandCodeId;
          v21->fields.commandCodeId = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v24);
          baseUserServantEntity = CommandCardExceedControl__GetCommandCardParam(this, cardIndex, v25);
          v21->fields.commandCardParam = baseUserServantEntity;
          if ( !v36 )
            break;
          baseUserServantEntity = sub_B77684(v21, v36->obj.klass->_1.element_class);
          if ( !baseUserServantEntity )
          {
            v34 = sub_B776BC(0LL);
            sub_B77668(v34, 0LL);
          }
          if ( v6 >= v36->max_length )
          {
LABEL_26:
            v33 = sub_B776C8(baseUserServantEntity);
            sub_B77668(v33, 0LL);
          }
          v7 = v19;
          v8 = v18;
          m_Items[v6] = v21;
          sub_B77560(
            (BattleServantConfConponent_o *)&m_Items[v5],
            (System_Int32_array **)v21,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          v9 = v17;
        }
      }
      ++v6;
      ++v5;
      if ( (__int64)v6 >= this->fields.transformTotal )
        return v36;
    }
    sub_B7769C(baseUserServantEntity, v4);
  }
  return v36;
}


int32_t __fastcall CommandCardExceedControl__GetCommandCardParam(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  __int64 v6; // x0

  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  if ( !baseUserServantCommandCardEntity )
    return 0;
  commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  if ( commandCardParam->max_length <= cardIndex )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  return commandCardParam->m_Items[cardIndex + 1];
}


int32_t __fastcall CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *userCommandCodeMaster; // x0
  __int64 v6; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_438DF24 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438DF24 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(userCommandCodeMaster, userCommandCodeId, (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B7769C(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v6 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9, 0LL);
}


System_String_o *__fastcall CommandCardExceedControl__GetDetailLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        bool isQpEnough,
        const MethodInfo *method)
{
  __int64 *v10; // x8

  if ( (byte_438DF1C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3341/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/);
    sub_B775C4(&StringLiteral_3342/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/);
    sub_B775C4(&StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_3348/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/);
    sub_B775C4(&StringLiteral_3347/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/);
    byte_438DF1C = 1;
  }
  switch ( stateType )
  {
    case 4:
      goto LABEL_6;
    case 2:
      if ( isExceedMax )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v10 = &StringLiteral_3348/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
      }
      else if ( isItemEnough )
      {
        if ( isQpEnough )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v10 = &StringLiteral_3341/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v10 = &StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/;
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v10 = &StringLiteral_3347/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v10, 0LL);
    case 0:
LABEL_6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_3342/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v10, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall CommandCardExceedControl__GetIsAllParamMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int64_t v7; // x19
  __int64 v8; // x21
  __int64 v9; // x22
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v12; // x20
  int32_t v13; // w23
  __int64 v15; // x0
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_438DF27 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF27 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_25;
  v7 = Instance;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v17, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Instance = UserServantCommandCardMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               v7,
               (int)Instance,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_25:
    sub_B7769C(Instance, v4);
  commandCardParam = entity->fields.commandCardParam;
  if ( commandCardParam )
  {
    max_length = commandCardParam->max_length;
    if ( max_length < 1 )
      return 1;
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
      {
        v15 = sub_B776C8(Instance);
        sub_B77668(v15, 0LL);
      }
      Instance = (int64_t)BalanceConfig_TypeInfo;
      v13 = commandCardParam->m_Items[v12 + 1];
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v13 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
        break;
      max_length = commandCardParam->max_length;
      if ( (int)++v12 >= max_length )
        return 1;
    }
  }
  return 0;
}


bool __fastcall CommandCardExceedControl__GetIsCombineEnable(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v4; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x20
  int64_t CardIndex; // x0
  int32_t v8; // w20
  BalanceConfig_c *v9; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct UserServantCommandCardEntity_o *v14; // x8
  CommandCardRankParamMaster_o *v15; // x20
  struct System_Int32_array *v16; // x21
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *v20; // x8
  __int64 v22; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438DF25 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF25 = 1;
  }
  entity = 0LL;
  if ( !this->fields.baseUserServantEntity )
    return 0;
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL) )
    return 0;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    if ( commandCardParam )
    {
      CardIndex = CommandCardExceedControl__get_CardIndex(this, v4);
      if ( (unsigned int)CardIndex >= commandCardParam->max_length )
        goto LABEL_39;
      v8 = commandCardParam->m_Items[(int)CardIndex + 1];
      v9 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v8 >= v9->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !*(_QWORD *)&ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  CardIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)CardIndex,
                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v14 = this->fields.baseUserServantCommandCardEntity;
  v15 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v14 )
  {
    v16 = v14->fields.commandCardParam;
    CardIndex = CommandCardExceedControl__get_CardIndex(this, v12);
    if ( !v16 )
      goto LABEL_38;
    if ( (unsigned int)CardIndex >= v16->max_length )
      goto LABEL_39;
    v11 = (unsigned int)v16->m_Items[(int)CardIndex + 1];
    if ( !v15 )
      goto LABEL_38;
  }
  else
  {
    v11 = 0LL;
    if ( !CardIndex )
      goto LABEL_38;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v15, v11, v13);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)CardIndex,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  CardIndex = NetworkManager__get_UserId(0LL);
  v20 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v20 )
LABEL_38:
    sub_B7769C(CardIndex, v11);
  if ( !v20->max_length )
  {
LABEL_39:
    v22 = sub_B776C8(CardIndex);
    sub_B77668(v22, 0LL);
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  CardIndex = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, CardIndex, v20->m_Items[1], 0LL);
  if ( (CardIndex & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_38;
  return entity->fields.num >= useItemNum;
}


bool __fastcall CommandCardExceedControl__GetIsExceedMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v4; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v9; // x20
  struct System_Int32_array *commandCardParam; // x21
  int32_t v11; // w19
  BalanceConfig_c *v12; // x0
  __int64 v14; // x0

  if ( (byte_438DF26 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF26 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v4) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v9 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v6);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
      {
        v14 = sub_B776C8(Instance);
        sub_B77668(v14, 0LL);
      }
      v11 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v9 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B7769C(Instance, v6);
  }
  v11 = 0;
  if ( !Instance )
    goto LABEL_19;
LABEL_13:
  CommandCardRankParamMaster__GetRankParamEntity(v9, v11, v7);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  return v11 >= v12->static_fields->CommandCardParamUpMax;
}


System_String_o *__fastcall CommandCardExceedControl__GetTargetSelectInfoLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_438DF1D & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3343/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/);
    sub_B775C4(&StringLiteral_3345/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DF1D = 1;
  }
  if ( stateType == 4 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = &StringLiteral_3345/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  if ( !stateType )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = &StringLiteral_3343/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall CommandCardExceedControl__GetTutorialOpenType(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  return 59;
}


int64_t __fastcall CommandCardExceedControl__GetUserCommandCodeId(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v5; // x8
  __int64 v7; // x0

  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    return 0LL;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    v7 = sub_B776C8(this);
    sub_B77668(v7, 0LL);
  }
  v5 = userCommandCodeIds->m_Items[cardIndex];
  return v5 & ~(v5 >> 63);
}


void __fastcall CommandCardExceedControl__Init(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  BaseDialog_o *commandCardExceedConfirmDialog; // x0

  CommandCardExceedControl__SetEventDelegate(this, method);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  CommandCardExceedControl__InitTransformInfo(this, v3);
  CommandCardExceedControl__InitBaseServant(this, v4);
  CommandCardExceedControl__InitCommandCard(this, v5);
  CommandCardExceedControl__InitExceedItem(this, v6);
  CommandCardExceedControl__InitLabel(this, v7);
  CommandCardExceedControl__SetCombineButtonState(this, 0, 0, 0, v8);
  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog )
    sub_B7769C(0LL, v9);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
}


void __fastcall CommandCardExceedControl__InitBaseServant(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  UnityEngine_Object_o *charaGraphTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438DF1A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DF1A = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  baseSelectInfoObject = this->fields.baseSelectInfoObject;
  if ( !baseSelectInfoObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(baseSelectInfoObject, 1, 0LL);
  charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
  {
    baseSelectInfoObject = (UnityEngine_GameObject_o *)this->fields.charaGraphTexture;
    if ( baseSelectInfoObject )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)baseSelectInfoObject,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
      this->fields.charaGraphTexture = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.charaGraphTexture, 0LL, v13, v14, v15, v16, v17, v18);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B7769C(baseSelectInfoObject, v9);
  }
}


void __fastcall CommandCardExceedControl__InitCommandCard(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WebViewManager_o *Instance; // x0
  __int64 v22; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v25; // w22
  Il2CppClass **v26; // x8
  CombineCommandCardComponent_o *v27; // x20
  BattleServantConfConponent_o *p_userCommandCodeMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0

  if ( (byte_438DF19 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF19 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCardEntity,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCommandCard = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCodeEntity,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_13;
  max_length = commandCardComponents->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        v36 = sub_B776C8(Instance);
        sub_B77668(v36, 0LL);
      }
      v26 = &commandCardComponents->obj.klass + (int)v25;
      v27 = (CombineCommandCardComponent_o *)v26[4];
      if ( !v27 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v26[4], 0, 0LL);
      CombineCommandCardComponent__SetCommandCardEnable(v27, 0, 0LL);
      max_length = commandCardComponents->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_B7769C(Instance, v22);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B77560(p_userCommandCodeMaster, MasterData_WarQuestSelectionMaster, v30, v31, v32, v33, v34, v35);
  }
}


void __fastcall CommandCardExceedControl__InitExceedItem(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetSelectInfoBase; // x0

  targetSelectInfoBase = this->fields.targetSelectInfoBase;
  if ( !targetSelectInfoBase
    || (UnityEngine_GameObject__SetActive(targetSelectInfoBase, 1, 0LL),
        (targetSelectInfoBase = this->fields.exceedItemBase) == 0LL) )
  {
    sub_B7769C(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_438DF18 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DF18 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_B7769C(detailLabel, method);
  }
  UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CommandCardExceedControl__InitTransformInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t TransformCount; // w0

  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton
    || (UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL),
        (cardSwitchButton = (UnityEngine_GameObject_o *)this->fields.servantName) == 0LL)
    || (cardSwitchButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cardSwitchButton, 0LL)) == 0LL )
  {
    sub_B7769C(cardSwitchButton, method);
  }
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  this->fields.displayTransformIndex = 0;
  if ( baseUserServantEntity )
    TransformCount = UserServantEntity__GetTransformCount(baseUserServantEntity, 1, 0LL);
  else
    TransformCount = 1;
  this->fields.transformTotal = TransformCount;
}


void __fastcall CommandCardExceedControl__OnClickCombine(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *commandCardExceedConfirmDialog; // x20
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x21
  const MethodInfo *v5; // x1
  int32_t CardIndex; // w0
  const MethodInfo *v7; // x2
  BattleCommandData_array *CommandCardDataEachServantId; // x22
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  const MethodInfo *v11; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v13; // x1
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  int32_t v15; // w24
  int64_t v16; // x23
  const MethodInfo *v17; // x7
  __int64 v18; // x0

  if ( (byte_438DF29 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438DF29 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  commandCardExceedConfirmDialog = this->fields.commandCardExceedConfirmDialog;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  CardIndex = CommandCardExceedControl__get_CardIndex(this, v5);
  CommandCardDataEachServantId = CommandCardExceedControl__GetCommandCardDataEachServantId(this, CardIndex, v7);
  v10 = CommandCardExceedControl__get_CardIndex(this, v9);
  UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v10, v11);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_10;
  if ( !ExceedItemIds_k__BackingField->max_length )
  {
    v18 = sub_B776C8(UserCommandCodeId);
    sub_B77668(v18, 0LL);
  }
  v15 = ExceedItemIds_k__BackingField->m_Items[1];
  v16 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v13);
  if ( !commandCardExceedConfirmDialog )
LABEL_10:
    sub_B7769C(UserCommandCodeId, v13);
  CommandCardExceedConfirmDialog__Open(
    commandCardExceedConfirmDialog,
    baseUserServantCommandCardEntity,
    CommandCardDataEachServantId,
    v16,
    v15,
    UserCommandCodeId,
    this->fields.onRequestCombine,
    v17);
}


void __fastcall CommandCardExceedControl__OnClickSwitchButton(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  const MethodInfo *v5; // x4
  const MethodInfo *v6; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  bool v8; // w1
  UnityEngine_Object_o *selectedCommandCard; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *v12; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438DF2C & 1) == 0 )
  {
    sub_B775C4(&Method_CommandCardExceedControl_OnClickSwitchButton__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DF2C = 1;
  }
  transformInfo = 0LL;
  this->fields.displayTransformIndex = (this->fields.displayTransformIndex + 1) % this->fields.transformTotal;
  CommandCardExceedControl__SetCommandCards(this, method);
  if ( this->fields.transformTotal > 1 )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_26;
    baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                     baseUserServantEntity,
                                                     &transformInfo,
                                                     this->fields.displayTransformIndex,
                                                     0LL);
    if ( !transformInfo )
      goto LABEL_26;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.servantName;
    if ( !baseUserServantEntity )
      goto LABEL_26;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  if ( this->fields.displayTransformIndex >= 1 )
  {
    CommandCardExceedControl__InitExceedItem(this, v3);
    CommandCardExceedControl__SetCombineButtonState(this, 0, 0, 0, v5);
    CommandCardExceedControl__SetInfoMessageLabels(this, 0, 0, 0, v6);
    baseUserServantEntity = (UserServantEntity_o *)this->fields.useItemTitleNormal;
    if ( baseUserServantEntity )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL);
      baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( baseUserServantEntity )
      {
        baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL);
        if ( baseUserServantEntity )
        {
          v8 = 0;
          goto LABEL_23;
        }
      }
    }
    goto LABEL_26;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.selectedCommandCard;
    if ( !baseUserServantEntity )
      goto LABEL_26;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0LL);
    CommandCardExceedControl__SetCommandCardDisplay(this, MarkIndex, v11);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.useItemTitleNormal;
  if ( !baseUserServantEntity
    || (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v12, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_26:
    sub_B7769C(baseUserServantEntity, v3);
  }
  v8 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v8, 0LL);
  v13 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 75) & 2) != 0 )
    v13 = (_QWORD *)sub_B775CC(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v14 = (System_Reflection_MethodBase_o *)sub_B775A8(v13, v13[3]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
}


void __fastcall CommandCardExceedControl__RefreshInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  BaseDialog_o *commandCardExceedConfirmDialog; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog )
    sub_B7769C(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v12);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0LL, v13);
}


void __fastcall CommandCardExceedControl__SetBaseServantCardImage(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x23
  __int64 v9; // x24
  ServantLimitImageMaster_o *v10; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v13; // w21
  struct UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_31047328; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_438DF21 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF21 = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)baseSelectInfoObject,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v10 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v9;
    *(_QWORD *)&v22.fields.fakeValue = v8;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                         v22,
                                                         0LL);
    if ( !v10 )
      goto LABEL_18;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   v10,
                                   (int32_t)baseSelectInfoObject,
                                   CardImageLimitCount,
                                   0LL);
    charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
    v13 = ServantImageLimitSealAfter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_charaGraphTexture = &this->fields.charaGraphTexture;
    if ( UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
    {
      TexturePrefab_31047328 = CharaGraphManager__CreateTexturePrefab_31047328(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v13,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_31047328;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.charaGraphTexture,
        (System_Int32_array **)TexturePrefab_31047328,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      return;
    }
    baseSelectInfoObject = (UnityEngine_GameObject_o *)*p_charaGraphTexture;
    if ( !*p_charaGraphTexture )
LABEL_18:
      sub_B7769C(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_36683416(
      (UICharaGraphTexture_o *)baseSelectInfoObject,
      userServantEntity,
      v13,
      0LL,
      0,
      0LL);
  }
  else
  {
    CommandCardExceedControl__InitBaseServant(this, (const MethodInfo *)userServantEntity);
  }
}


void __fastcall CommandCardExceedControl__SetBaseServantCommandCardList(
        CommandCardExceedControl_o *this,
        System_Action_o *onAssetLoadEnd,
        const MethodInfo *method)
{
  System_String_array *assetList; // x22
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 transformTotal; // x1
  UnityEngine_Component_o *useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *v29; // x20
  unsigned __int64 v30; // x21
  __int64 v31; // x25
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v33; // w22
  __int64 v34; // x23
  __int64 v35; // x24
  int32_t v36; // w23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x22
  System_Action_o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_438DF22 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_CommandCardExceedControl_SetCommandCards__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    byte_438DF22 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_24411040(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.assetList, 0LL, v6, v7, v8, v9, v10, v11);
  }
  CommandCardExceedControl__InitTransformInfo(this, (const MethodInfo *)onAssetLoadEnd);
  useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL);
  useItemTitleNormal = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !useItemTitleNormal )
    goto LABEL_41;
  useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL);
  if ( !useItemTitleNormal )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.onAssetLoadEnd = onAssetLoadEnd;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd,
      (System_Int32_array **)onAssetLoadEnd,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    transformTotal = (unsigned int)this->fields.transformTotal;
    if ( (int)transformTotal > 1 )
    {
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.cardSwitchButton;
      if ( !useItemTitleNormal )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_41;
      useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL);
      if ( !useItemTitleNormal )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
      if ( !useItemTitleNormal )
        goto LABEL_41;
      useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                        (UserServantEntity_o *)useItemTitleNormal,
                                                        &transformInfo,
                                                        this->fields.displayTransformIndex,
                                                        0LL);
      if ( !transformInfo )
        goto LABEL_41;
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_41;
      UILabel__set_text((UILabel_o *)useItemTitleNormal, transformInfo->fields.titleText, 0LL);
      transformTotal = (unsigned int)this->fields.transformTotal;
    }
    v22 = (struct System_String_array *)sub_B775DC(string___TypeInfo, transformTotal);
    this->fields.assetList = v22;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.assetList,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v30 = 0LL;
      v31 = 32LL;
      while ( 1 )
      {
        useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !useItemTitleNormal )
          break;
        useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                          (UserServantEntity_o *)useItemTitleNormal,
                                                          v30,
                                                          0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v33 = (int)useItemTitleNormal;
        v35 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v34 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = v35;
        *(_QWORD *)&v48.fields.fakeValue = v34;
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v48, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        useItemTitleNormal = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                          v33,
                                                          v36,
                                                          0LL);
        if ( !v29 )
          break;
        v43 = (System_Int32_array **)useItemTitleNormal;
        if ( useItemTitleNormal )
        {
          useItemTitleNormal = (UnityEngine_Component_o *)sub_B77684(
                                                            useItemTitleNormal,
                                                            v29->obj.klass->_1.element_class);
          if ( !useItemTitleNormal )
          {
            v46 = sub_B776BC(0LL);
            sub_B77668(v46, 0LL);
          }
        }
        if ( v30 >= v29->max_length )
        {
          v45 = sub_B776C8(useItemTitleNormal);
          sub_B77668(v45, 0LL);
        }
        *(Il2CppClass **)((char *)&v29->obj.klass + v31) = (Il2CppClass *)v43;
        sub_B77560((BattleServantConfConponent_o *)((char *)v29 + v31), v43, v37, v38, v39, v40, v41, v42);
        v29 = this->fields.assetList;
        ++v30;
        v31 += 8LL;
        if ( (__int64)v30 >= this->fields.transformTotal )
          goto LABEL_35;
      }
LABEL_41:
      sub_B7769C(useItemTitleNormal, transformTotal);
    }
LABEL_35:
    v44 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_24408996(v29, v44, 1, 0LL);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, v15);
    if ( !onAssetLoadEnd )
      goto LABEL_41;
    System_Action__Invoke(onAssetLoadEnd, 0LL);
  }
}


void __fastcall CommandCardExceedControl__SetCallbacks(
        CommandCardExceedControl_o *this,
        System_Action_int__o *onRequestCombine,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onRequestCombine = onRequestCombine;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onRequestCombine,
    (System_Int32_array **)onRequestCombine,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetCombineButtonState(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isEnable,
        bool isExceedMax,
        const MethodInfo *method)
{
  System_String_o *combineButton; // x0
  __int64 v9; // x1
  CommandCardExceedControl_o *v10; // x0
  UISprite_o *combineTextImage; // x22
  const MethodInfo *v12; // x3

  combineButton = (System_String_o *)this->fields.combineButton;
  if ( !combineButton
    || (!isEnable ? (v9 = 3LL) : (v9 = 0LL),
        (v10 = (CommandCardExceedControl_o *)((__int64 (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer, const MethodInfo *))combineButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
                                               combineButton,
                                               v9,
                                               1LL,
                                               combineButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr,
                                               method),
         combineTextImage = this->fields.combineTextImage,
         combineButton = CommandCardExceedControl__GetCombineButtonLabelText(v10, stateType, isExceedMax, v12),
         !combineTextImage)
     || (UISprite__set_spriteName(combineTextImage, combineButton, 0LL),
         (combineButton = (System_String_o *)this->fields.combineTextImage) == 0LL)) )
  {
    sub_B7769C(combineButton, *(_QWORD *)&stateType);
  }
  ((void (__fastcall *)(System_String_o *, void *))combineButton->klass[1]._1.typeMetadataHandle)(
    combineButton,
    combineButton->klass[1]._1.interopData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetCommandCardDisplay(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t v8; // w20
  CommandCardExceedControl_o *v9; // x19
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  int32_t max_length; // w9
  System_Int32_array **v12; // x1
  const MethodInfo *v13; // x2
  ItemEntity_array *EntityList; // x22
  const MethodInfo *v15; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v18; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v20; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v22; // x1
  System_Int32_array **v23; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int v31; // w10
  __int64 v32; // x8
  ItemEntity_o *v33; // x10
  struct System_Int32_array *v34; // x11
  __int64 v35; // x11
  int32_t v36; // w22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v39; // x4
  bool v40; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  __int64 v42; // x27
  int v43; // w9
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  struct LimitCntUpItemComponent_array *v46; // x8
  LimitCntUpItemComponent_o *v47; // x24
  struct System_Int32_array *v48; // x8
  const MethodInfo *v49; // x4
  bool v50; // w2
  __int64 v51; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = cardIndex;
  v9 = this;
  if ( (byte_438DF2B & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (CommandCardExceedControl_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF2B = 1;
  }
  entity = 0LL;
  if ( (v8 & 0x80000000) == 0 )
  {
    commandCardComponents = v9->fields.commandCardComponents;
    if ( !commandCardComponents )
      goto LABEL_74;
    max_length = commandCardComponents->max_length;
    if ( max_length > v8 )
    {
      if ( max_length <= (unsigned int)v8 )
        goto LABEL_75;
      v12 = (System_Int32_array **)commandCardComponents->m_Items[v8];
      v9->fields.selectedCommandCard = (struct CombineCommandCardComponent_o *)v12;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->fields.selectedCommandCard,
        v12,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      CommandCardExceedControl__SetSelectedFrameActive(v9, v8, v13);
      this = (CommandCardExceedControl_o *)v9->fields.targetSelectInfoBase;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CommandCardExceedControl_o *)v9->fields.exceedItemBase;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (CommandCardExceedControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( this )
            {
              EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0LL);
              this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (CommandCardExceedControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
                baseUserServantCommandCardEntity = v9->fields.baseUserServantCommandCardEntity;
                if ( baseUserServantCommandCardEntity )
                {
                  commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
                  if ( !commandCardParam )
                    goto LABEL_74;
                  if ( commandCardParam->max_length <= v8 )
                  {
LABEL_75:
                    v51 = sub_B776C8(this);
                    sub_B77668(v51, 0LL);
                  }
                  v18 = commandCardParam->m_Items[v8 + 1];
                  if ( !this )
                    goto LABEL_74;
                }
                else
                {
                  v18 = 0;
                  if ( !this )
                    goto LABEL_74;
                }
                RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                                    (CommandCardRankParamMaster_o *)this,
                                    v18,
                                    v15);
                v20 = BalanceConfig_TypeInfo;
                if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v20 = BalanceConfig_TypeInfo;
                }
                CommandCardParamUpMax = v20->static_fields->CommandCardParamUpMax;
                if ( EntityList )
                {
                  v22 = *(_QWORD *)&EntityList->max_length;
                  if ( v22 )
                  {
                    v23 = (System_Int32_array **)sub_B775DC(int___TypeInfo, v22);
                    p_ExceedItemIds_k__BackingField = &v9->fields._ExceedItemIds_k__BackingField;
                    v9->fields._ExceedItemIds_k__BackingField = (struct System_Int32_array *)v23;
                    sub_B77560(
                      (BattleServantConfConponent_o *)&v9->fields._ExceedItemIds_k__BackingField,
                      v23,
                      v25,
                      v26,
                      v27,
                      v28,
                      v29,
                      v30);
                    v31 = EntityList->max_length;
                    if ( v31 >= 1 )
                    {
                      v32 = 0LL;
                      while ( (unsigned int)v32 < v31 )
                      {
                        v33 = EntityList->m_Items[v32];
                        if ( !v33 )
                          goto LABEL_74;
                        v34 = *p_ExceedItemIds_k__BackingField;
                        if ( !*p_ExceedItemIds_k__BackingField )
                          goto LABEL_74;
                        if ( (unsigned int)v32 >= v34->max_length )
                          goto LABEL_75;
                        v35 = (__int64)v34 + 4 * v32++;
                        *(_DWORD *)(v35 + 32) = v33->fields.id;
                        v31 = EntityList->max_length;
                        if ( (int)v32 >= v31 )
                          goto LABEL_30;
                      }
                      goto LABEL_75;
                    }
                  }
                }
LABEL_30:
                v36 = RankParamEntity ? RankParamEntity->fields.useItemNum : 0;
                this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)this,
                                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  this = (CommandCardExceedControl_o *)NetworkManager__get_UserId(0LL);
                  ExceedItemIds_k__BackingField = v9->fields._ExceedItemIds_k__BackingField;
                  if ( ExceedItemIds_k__BackingField )
                  {
                    if ( !ExceedItemIds_k__BackingField->max_length )
                      goto LABEL_75;
                    if ( !MasterData_WarQuestSelectionMaster )
                      goto LABEL_74;
                    this = (CommandCardExceedControl_o *)UserItemMaster__TryGetEntity(
                                                           MasterData_WarQuestSelectionMaster,
                                                           &entity,
                                                           (int64_t)this,
                                                           ExceedItemIds_k__BackingField->m_Items[1],
                                                           0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_74;
                      v40 = entity->fields.num >= v36;
                    }
                    else
                    {
                      v40 = 0;
                    }
                    exceedItemComponents = v9->fields.exceedItemComponents;
                    if ( exceedItemComponents )
                    {
                      v42 = 0LL;
                      while ( 1 )
                      {
                        v43 = exceedItemComponents->max_length;
                        if ( (int)v42 >= v43 )
                          break;
                        if ( (unsigned int)v42 >= v43 )
                          goto LABEL_75;
                        this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v42];
                        if ( !this )
                          goto LABEL_74;
                        this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
                        if ( v18 < CommandCardParamUpMax )
                        {
                          v44 = v9->fields._ExceedItemIds_k__BackingField;
                          if ( !v44 )
                            goto LABEL_74;
                          *(_QWORD *)&cardIndex = (int)v42 < (signed int)v44->max_length;
                          if ( !this )
                            goto LABEL_74;
                        }
                        else
                        {
                          *(_QWORD *)&cardIndex = 0LL;
                          if ( !this )
                            goto LABEL_74;
                        }
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0LL);
                        v45 = v9->fields._ExceedItemIds_k__BackingField;
                        if ( !v45 )
                          goto LABEL_74;
                        if ( (int)v42 < (signed int)v45->max_length )
                        {
                          v46 = v9->fields.exceedItemComponents;
                          if ( !v46 )
                            goto LABEL_74;
                          if ( (unsigned int)v42 >= v46->max_length )
                            goto LABEL_75;
                          v47 = v46->m_Items[v42];
                          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !NetworkManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          }
                          this = (CommandCardExceedControl_o *)NetworkManager__get_UserId(0LL);
                          v48 = v9->fields._ExceedItemIds_k__BackingField;
                          if ( !v48 )
                            goto LABEL_74;
                          if ( (unsigned int)v42 >= v48->max_length )
                            goto LABEL_75;
                          if ( !v47 )
                            goto LABEL_74;
                          LimitCntUpItemComponent__setLimitUpItemInfo(
                            v47,
                            (int64_t)this,
                            v48->m_Items[v42 + 1],
                            v36,
                            0LL);
                        }
                        exceedItemComponents = v9->fields.exceedItemComponents;
                        ++v42;
                        if ( !exceedItemComponents )
                          goto LABEL_74;
                      }
                      CommandCardExceedControl__SetInfoMessageLabels(v9, 2, v40, v18 >= CommandCardParamUpMax, v39);
                      v50 = 0;
                      if ( v18 >= CommandCardParamUpMax || !v40 || v9->fields.baseUserServantEntity == 0LL )
                        goto LABEL_72;
                      this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0LL);
                      if ( this && RankParamEntity )
                      {
                        v50 = this->fields.displayTransformIndex >= RankParamEntity->fields.useQp;
LABEL_72:
                        CommandCardExceedControl__SetCombineButtonState(v9, 2, v50, v18 >= CommandCardParamUpMax, v49);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_74:
      sub_B7769C(this, *(_QWORD *)&cardIndex);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t v4; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w21
  UserServantEntity_o *v8; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v11; // s1
  int v12; // s0
  int v13; // s2
  struct UIGrid_o *cardBaseGrid; // x8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v22; // x23
  unsigned __int64 max_length; // x9
  __int64 v24; // x10
  unsigned __int64 v25; // x11
  int32_t v26; // w26
  CombineCommandCardComponent_o *v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  BattleCommandData_o *v34; // x25
  const MethodInfo *v35; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v37; // x2
  int32_t CommandCodeId; // w27
  const MethodInfo *v39; // x2
  int32_t CommandCardParam; // w0
  int v41; // s0
  System_Action_o *onAssetLoadEnd; // x20
  __int64 v46; // x0

  if ( (byte_438DF23 & 1) == 0 )
  {
    sub_B775C4(&BattleCommandData_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF23 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_33;
  baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantId(
                                                   baseUserServantEntity,
                                                   this->fields.displayTransformIndex,
                                                   0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_33;
  v4 = (int)baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_33;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_33;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v4,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_33;
  baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)baseUserServantEntity,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_33;
  baseUserServantEntity = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)baseUserServantEntity,
                                                   v4,
                                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.cardBaseGrid )
    goto LABEL_33;
  v8 = baseUserServantEntity;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.cardBaseGrid, 0LL);
  transformTotal = this->fields.transformTotal;
  v11 = -15.5;
  if ( transformTotal > 1 )
    v11 = -18.0;
  v13 = 0;
  v12 = dword_332F77C[transformTotal > 1];
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v11 - 1), 0LL);
  cardBaseGrid = this->fields.cardBaseGrid;
  if ( !cardBaseGrid
    || (LODWORD(cardBaseGrid->fields.cellHeight) = dword_332F784[this->fields.transformTotal > 1],
        (baseUserServantEntity = (UserServantEntity_o *)this->fields.cardBaseGrid) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))baseUserServantEntity->klass[1]._1.namespaze)(
                                                         baseUserServantEntity,
                                                         baseUserServantEntity->klass[1]._1.byval_arg.data),
        (commandCardComponents = this->fields.commandCardComponents) == 0LL) )
  {
LABEL_33:
    sub_B7769C(baseUserServantEntity, method);
  }
  v22 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v22 >= (int)max_length )
      break;
    if ( !v8 )
      goto LABEL_33;
    v24 = *(_QWORD *)&v8->fields.commandCardLimitCount.fields.currentCryptoKey;
    if ( !v24 )
      break;
    v25 = *(unsigned int *)(v24 + 24);
    if ( (__int64)v22 >= (int)v25 )
      break;
    if ( v22 >= v25 )
      goto LABEL_37;
    v26 = *(_DWORD *)(v24 + 4 * v22 + 32);
    if ( (unsigned int)(v26 - 1) <= 2 )
    {
      if ( v22 >= max_length )
      {
LABEL_37:
        v46 = sub_B776C8(baseUserServantEntity);
        sub_B77668(v46, 0LL);
      }
      v27 = commandCardComponents->m_Items[v22];
      baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !v27 )
        goto LABEL_33;
      v27->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_B77560(
        (BattleServantConfConponent_o *)&v27->fields.target,
        (System_Int32_array **)baseUserServantEntity,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_19072172(v34, v26, v4, ServantImageLimitSealAfter, 0, 0LL);
      if ( !v34 )
        goto LABEL_33;
      v34->fields.markindex = v22;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v22, v35);
      CommandCodeId = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v37);
      CommandCardParam = CommandCardExceedControl__GetCommandCardParam(this, v22, v39);
      v34->fields.commandCodeId = CommandCodeId;
      v34->fields.commandCardParam = CommandCardParam;
      v34->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v27, v34, UserCommandCodeId, CommandCardParam, 1, 1, 0LL);
      if ( this->fields.displayTransformIndex <= 0 )
        *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
      else
        *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_gray(0LL);
      CombineCommandCardComponent__SetColor(v27, *(UnityEngine_Color_o *)&v41, 0LL);
      CombineCommandCardComponent__SetLayout(v27, this->fields.positionOffsetY, this->fields.scaleOffset, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v22;
    if ( !commandCardComponents )
      goto LABEL_33;
  }
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd, 0LL, v15, v16, v17, v18, v19, v20);
    System_Action__Invoke(onAssetLoadEnd, 0LL);
  }
}


void __fastcall CommandCardExceedControl__SetEventDelegate(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  CommandCardExceedControl_o *v2; // x19
  struct UICommonButton_o *combineButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v5; // x21
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *v7; // x20
  EventDelegate_Callback_o *v8; // x21
  struct UITouchPress_o *v9; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v11; // x21
  System_Collections_Generic_List_EventDelegate__o *v12; // x20
  EventDelegate_Callback_o *v13; // x21

  v2 = this;
  if ( (byte_438DF17 & 1) == 0 )
  {
    sub_B775C4(&EventDelegate_Callback_TypeInfo);
    sub_B775C4(&Method_CombineMenuControl_OnLongPushListView__);
    sub_B775C4(&Method_CommandCardExceedControl_OnClickCombine__);
    sub_B775C4(&EventDelegate_TypeInfo);
    this = (CommandCardExceedControl_o *)sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_438DF17 = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_12;
  onClick = combineButton->fields.onClick;
  v5 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  this = (CommandCardExceedControl_o *)EventDelegate__Set_30349648(onClick, v5, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_12;
  v7 = baseServantTouchPress->fields.onClick;
  v8 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v8, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_30349648(v7, v8, 0LL);
  v9 = v2->fields.baseServantTouchPress;
  if ( !v9
    || (onLongPress = v9->fields.onLongPress,
        v11 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v11, (Il2CppObject *)v2, Method_CombineMenuControl_OnLongPushListView__, 0LL),
        EventDelegate__Set_30349648(onLongPress, v11, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_12:
    sub_B7769C(this, method);
  }
  v12 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.displayTransformIndex;
  v13 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_30349648(v12, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetInfoMessageLabels(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        const MethodInfo *method)
{
  void *SelfUserGame; // x0
  MethodInfo *v10; // x1
  int32_t v11; // w21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x5
  int32_t v14; // w24
  UILabel_o *detailLabel; // x25
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v17; // x0
  const MethodInfo *v18; // x2
  UILabel_o *userQpLabel; // x22
  UILabel_o *requiredQpLabel; // x22
  UIWidget_o *v21; // x22
  int v22; // s0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v30; // x24
  struct System_Int32_array *commandCardParam; // x25
  __int64 v32; // x0

  if ( (byte_438DF1B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DF1B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_35:
    sub_B7769C(SelfUserGame, v10);
  v11 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v10);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v12),
        ((unsigned __int8)SelfUserGame & 1) != 0)
    || this->fields.displayTransformIndex )
  {
    v14 = 0;
    goto LABEL_8;
  }
  SelfUserGame = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_35;
  SelfUserGame = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v30 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v27);
    if ( !commandCardParam )
      goto LABEL_35;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
    {
      v32 = sub_B776C8(SelfUserGame);
      sub_B77668(v32, 0LL);
    }
    v10 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame + 1];
    if ( !v30 )
      goto LABEL_35;
  }
  else
  {
    v10 = 0LL;
    if ( !SelfUserGame )
      goto LABEL_35;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v30, (int32_t)v10, v28);
  if ( !SelfUserGame )
    goto LABEL_35;
  v14 = *((_DWORD *)SelfUserGame + 11);
LABEL_8:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = CommandCardExceedControl__GetDetailLabelText(
                   (CommandCardExceedControl_o *)SelfUserGame,
                   stateType,
                   isItemEnough,
                   isExceedMax,
                   v11 >= v14,
                   v13);
  if ( !detailLabel )
    goto LABEL_35;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v17, stateType, v18);
  if ( !targetSelectInfoLabel )
    goto LABEL_35;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__GetNumberFormat(v11, 0LL);
  if ( !userQpLabel )
    goto LABEL_35;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v14 <= 0 )
  {
    v10 = (MethodInfo *)StringLiteral_1/*""*/;
    if ( !requiredQpLabel )
      goto LABEL_35;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__GetNumberFormat(v14, 0LL);
    v10 = (MethodInfo *)SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_35;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v10, 0LL);
  v21 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( v11 < v14 )
  {
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_red(0LL);
    if ( !v21 )
      goto LABEL_35;
  }
  else
  {
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
    if ( !v21 )
      goto LABEL_35;
  }
  UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v22, 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetSelectedFrameActive(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  CommandCardExceedControl_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9
  __int64 v8; // x0

  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
LABEL_7:
    sub_B7769C(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
    this = (CommandCardExceedControl_o *)commandCardComponents->m_Items[v5];
    if ( this )
    {
      CombineCommandCardComponent__SetSelectedSprite(
        (CombineCommandCardComponent_o *)this,
        cardIndex == (_DWORD)v5,
        0LL);
      commandCardComponents = v4->fields.commandCardComponents;
      ++v5;
      if ( commandCardComponents )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetUseItemTitle(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *useItemTitleNormal; // x0

  useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal
    || (useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType != 2, 0LL),
        (useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleSelect) == 0LL)
    || (useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL)) == 0LL )
  {
    sub_B7769C(useItemTitleNormal, *(_QWORD *)&stateType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType == 2, 0LL);
}


void __fastcall CommandCardExceedControl__SetUserServant(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *selectedUserServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  __int128 v11; // q1
  int64_t v12; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q0
  int v16; // w23
  _BOOL4 v17; // w22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-50h]

  if ( (byte_438DF1F & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438DF1F = 1;
  }
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  if ( selectedUserServantEntity )
  {
    if ( *p_baseUserServantEntity )
    {
      v11 = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v11;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v28 = v29;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v28, 0LL);
      v14 = *p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        sub_B7769C(v12, v13);
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v15;
      v16 = 0;
      v17 = v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v27, 0LL);
    }
    else
    {
      v16 = 0;
      v17 = 0;
    }
  }
  else
  {
    v17 = 0;
    v16 = 1;
  }
  this->fields.baseUserServantEntity = selectedUserServantEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
    (System_Int32_array **)selectedUserServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v18);
  CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v19);
  if ( v17 | v16 )
  {
    this->fields.selectedCommandCard = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v20, v21, v22, v23, v24, v25);
    CommandCardExceedControl__InitExceedItem(this, v26);
  }
}


void __fastcall CommandCardExceedControl__SetUserServantCommandCard(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  int64_t v11; // x22
  UserServantCommandCodeMaster_o *v12; // x21
  int64_t v13; // x0
  __int64 v14; // x8
  int64_t v15; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_438DF20 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF20 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v11 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = v10;
    *(_QWORD *)&v16.fields.fakeValue = v9;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    UserServantCommandCardMaster__TryGetEntity(
      MasterData_WarQuestSelectionMaster,
      &this->fields.baseUserServantCommandCardEntity,
      v11,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v12 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v13 = NetworkManager__get_UserId(0LL),
          v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v15 = v13,
          *(_QWORD *)&v17.fields.currentCryptoKey = v14,
          Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v17, 0LL),
          !v12) )
    {
LABEL_16:
      sub_B7769C(Instance, v6);
    }
    UserServantCommandCodeMaster__TryGetEntity(
      v12,
      &this->fields.baseUserServantCommandCodeEntity,
      v15,
      (int)Instance,
      0LL);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, (const MethodInfo *)userServantEntity);
  }
}


UserServantEntity_o *__fastcall CommandCardExceedControl__get_BaseSelectedUserServantEntity(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseUserServantEntity;
}


int32_t __fastcall CommandCardExceedControl__get_CardIndex(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectedCommandCard; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_438DF28 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DF28 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_B7769C(0LL, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0LL);
}


System_Int32_array *__fastcall CommandCardExceedControl__get_ExceedItemIds(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields._ExceedItemIds_k__BackingField;
}


void __fastcall CommandCardExceedControl__set_ExceedItemIds(
        CommandCardExceedControl_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ExceedItemIds_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._ExceedItemIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommandCardExceedControl__touchCommandCard(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_Object_o *selectedCommandCard; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  BattleCommandComponent_o *v10; // x0

  if ( (byte_438DF2A & 1) == 0 )
  {
    sub_B775C4(&Method_CommandCardExceedControl_touchCommandCard__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438DF2A = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( this->fields.displayTransformIndex < 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
        goto LABEL_18;
      v10 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
      if ( !v10 )
        sub_B7769C(0LL, v8);
      if ( BattleCommandComponent__getMarkIndex(v10, 0LL) != cardIndex )
LABEL_18:
        CommandCardExceedControl__SetCommandCardDisplay(this, cardIndex, v9);
    }
    else
    {
      v5 = Method_CommandCardExceedControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B775CC(Method_CommandCardExceedControl_touchCommandCard__);
      v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
    }
  }
}