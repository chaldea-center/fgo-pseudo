void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall CommandCardExceedControl__CheckTutorial(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 59, 0LL, 0, 0, 0, 0, 0LL);
}


System_String_o *__fastcall CommandCardExceedControl__GetCombineButtonLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isExceedMax,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_42B00DA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17268/*"buttontxt_synthesis"*/);
    sub_B52984(&StringLiteral_17266/*"buttontxt_notsynthesis"*/);
    byte_42B00DA = 1;
  }
  v6 = &StringLiteral_17268/*"buttontxt_synthesis"*/;
  if ( stateType == 2 && isExceedMax )
    v6 = &StringLiteral_17266/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v6;
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
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
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

  if ( (byte_42B00E0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B00E0 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(userCommandCodeMaster, userCommandCodeId, (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B52A5C(userCommandCodeMaster, userCommandCodeId);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
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

  if ( (byte_42B00D8 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3248/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_3249/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_3255/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_3254/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/);
    byte_42B00D8 = 1;
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
        v10 = &StringLiteral_3255/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
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
          v10 = &StringLiteral_3248/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v10 = &StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/;
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v10 = &StringLiteral_3254/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v10, 0LL);
    case 0:
LABEL_6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_3249/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
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

  if ( (byte_42B00E3 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00E3 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL);
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
    sub_B52A5C(Instance, v4);
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
        v15 = sub_B52A88(Instance);
        sub_B52A28(v15, 0LL);
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

  if ( (byte_42B00E1 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00E1 = 1;
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
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  CardIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)CardIndex,
                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
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
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)CardIndex,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  CardIndex = NetworkManager__get_UserId(0LL);
  v20 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v20 )
LABEL_38:
    sub_B52A5C(CardIndex, v11);
  if ( !v20->max_length )
  {
LABEL_39:
    v22 = sub_B52A88(CardIndex);
    sub_B52A28(v22, 0LL);
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

  if ( (byte_42B00E2 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00E2 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
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
        v14 = sub_B52A88(Instance);
        sub_B52A28(v14, 0LL);
      }
      v11 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v9 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B52A5C(Instance, v6);
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

  if ( (byte_42B00D9 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3250/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/);
    sub_B52984(&StringLiteral_3252/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B00D9 = 1;
  }
  if ( stateType == 4 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = &StringLiteral_3252/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  if ( !stateType )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = &StringLiteral_3250/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
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
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
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
  const MethodInfo *v7; // x4
  __int64 v8; // x1
  BaseDialog_o *commandCardExceedConfirmDialog; // x0

  CommandCardExceedControl__SetEventDelegate(this, method);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  CommandCardExceedControl__InitBaseServant(this, v3);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  CommandCardExceedControl__InitLabel(this, v6);
  CommandCardExceedControl__SetCombineButtonState(this, 0, 0, 0, v7);
  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog )
    sub_B52A5C(0LL, v8);
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
  BattleServantConfConponent_o *p_charaGraphTexture; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42B00D6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00D6 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  baseSelectInfoObject = this->fields.baseSelectInfoObject;
  if ( !baseSelectInfoObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(baseSelectInfoObject, 1, 0LL);
  charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
  {
    p_charaGraphTexture = (BattleServantConfConponent_o *)&this->fields.charaGraphTexture;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)p_charaGraphTexture->klass;
    if ( p_charaGraphTexture->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)baseSelectInfoObject,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      p_charaGraphTexture->klass = 0LL;
      sub_B52920(p_charaGraphTexture, 0LL, v14, v15, v16, v17, v18, v19);
      return;
    }
LABEL_13:
    sub_B52A5C(baseSelectInfoObject, v9);
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

  if ( (byte_42B00D5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00D5 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCardEntity,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCommandCard = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_B52920(
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
        v36 = sub_B52A88(Instance);
        sub_B52A28(v36, 0LL);
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
    sub_B52A5C(Instance, v22);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B52920(p_userCommandCodeMaster, MasterData_WarQuestSelectionMaster, v30, v31, v32, v33, v34, v35);
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
    sub_B52A5C(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_42B00D4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B00D4 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_B52A5C(detailLabel, method);
  }
  UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CommandCardExceedControl__OnClickCombine(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v4; // x1
  struct CombineCommandCardComponent_o *selectedCommandCard; // x8
  CommandCardExceedConfirmDialog_o *commandCardExceedConfirmDialog; // x20
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x21
  BattleCommandData_o *data; // x22
  int32_t CardIndex; // w0
  const MethodInfo *v10; // x2
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  int32_t v12; // w24
  int64_t v13; // x23
  const MethodInfo *v14; // x7
  __int64 v15; // x0

  if ( (byte_42B00E5 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00E5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  selectedCommandCard = this->fields.selectedCommandCard;
  if ( !selectedCommandCard )
    goto LABEL_11;
  commandCardExceedConfirmDialog = this->fields.commandCardExceedConfirmDialog;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  data = selectedCommandCard->fields.data;
  CardIndex = CommandCardExceedControl__get_CardIndex(this, v4);
  UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, CardIndex, v10);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_11;
  if ( !ExceedItemIds_k__BackingField->max_length )
  {
    v15 = sub_B52A88(UserCommandCodeId);
    sub_B52A28(v15, 0LL);
  }
  v12 = ExceedItemIds_k__BackingField->m_Items[1];
  v13 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v4);
  if ( !commandCardExceedConfirmDialog )
LABEL_11:
    sub_B52A5C(UserCommandCodeId, v4);
  CommandCardExceedConfirmDialog__Open(
    commandCardExceedConfirmDialog,
    baseUserServantCommandCardEntity,
    data,
    v13,
    v12,
    UserCommandCodeId,
    this->fields.onRequestCombine,
    v14);
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
    sub_B52A5C(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
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
  struct UICharaGraphTexture_o *TexturePrefab_24904472; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42B00DD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00DD = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)baseSelectInfoObject,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
      TexturePrefab_24904472 = CharaGraphManager__CreateTexturePrefab_24904472(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v13,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_24904472;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.charaGraphTexture,
        (System_Int32_array **)TexturePrefab_24904472,
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
      sub_B52A5C(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_35944152(
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array *baseServantAssets; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v25; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct System_String_array *v27; // x20
  __int64 v28; // x21
  __int64 v29; // x22
  struct UserServantEntity_o *v30; // x8
  int32_t v31; // w21
  int32_t v32; // w22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x21
  System_String_array *v40; // x20
  System_Action_o *v41; // x21
  __int64 v42; // x0
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_42B00DE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CommandCardExceedControl_SetCommandCards__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    byte_42B00DE = 1;
  }
  baseServantAssets = this->fields.baseServantAssets;
  if ( baseServantAssets )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30368500(baseServantAssets, 0LL);
    this->fields.baseServantAssets = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.baseServantAssets, 0LL, v11, v12, v13, v14, v15, v16);
  }
  if ( !this->fields.baseUserServantEntity )
  {
    CommandCardExceedControl__InitCommandCard(this, (const MethodInfo *)onAssetLoadEnd);
    if ( onAssetLoadEnd )
    {
      System_Action__Invoke(onAssetLoadEnd, 0LL);
      return;
    }
LABEL_27:
    sub_B52A5C(CommandCardLoadFolderName, v25);
  }
  this->fields.onAssetLoadEnd = onAssetLoadEnd;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd,
    (System_Int32_array **)onAssetLoadEnd,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = (struct System_String_array *)sub_B5299C(string___TypeInfo, 1LL);
  this->fields.baseServantAssets = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseServantAssets,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v27 = this->fields.baseServantAssets;
  v29 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v29;
  *(_QWORD *)&v44.fields.fakeValue = v28;
  CommandCardLoadFolderName = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                   v44,
                                                   0LL);
  v30 = this->fields.baseUserServantEntity;
  if ( !v30 )
    goto LABEL_27;
  v31 = (int)CommandCardLoadFolderName;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v30->fields.limitCount, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v31, v32, 0LL);
  if ( !v27 )
    goto LABEL_27;
  v39 = (System_Int32_array **)CommandCardLoadFolderName;
  if ( CommandCardLoadFolderName )
  {
    CommandCardLoadFolderName = (System_String_o *)sub_B52A44(
                                                     CommandCardLoadFolderName,
                                                     v27->obj.klass->_1.element_class);
    if ( !CommandCardLoadFolderName )
    {
      v43 = sub_B52A7C(0LL);
      sub_B52A28(v43, 0LL);
    }
  }
  if ( !v27->max_length )
  {
    v42 = sub_B52A88(CommandCardLoadFolderName);
    sub_B52A28(v42, 0LL);
  }
  v27->m_Items[0] = (System_String_o *)v39;
  sub_B52920((BattleServantConfConponent_o *)v27->m_Items, v39, v33, v34, v35, v36, v37, v38);
  v40 = this->fields.baseServantAssets;
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30366456(v40, v41, 1, 0LL);
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
  sub_B52920(
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
    sub_B52A5C(combineButton, *(_QWORD *)&stateType);
  }
  ((void (__fastcall *)(System_String_o *, void *))combineButton->klass[1]._1.typeMetadataHandle)(
    combineButton,
    combineButton->klass[1]._1.interopData);
}


void __fastcall CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t CommandCardLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t ServantImageLimitSealAfter; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x23
  WarEntity_o *Entity; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v19; // x24
  unsigned __int64 max_length; // x9
  __int64 v21; // x10
  unsigned __int64 v22; // x11
  int32_t v23; // w26
  CombineCommandCardComponent_o *v24; // x25
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w28
  BattleCommandData_o *v32; // x27
  const MethodInfo *v33; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v35; // x2
  int32_t CommandCodeId; // w28
  const MethodInfo *v37; // x2
  int32_t CommandCardParam; // w0
  System_Action_o *onAssetLoadEnd; // x20
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42B00DF & 1) == 0 )
  {
    sub_B52984(&BattleCommandData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00DF = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_31;
  v4 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(baseUserServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)baseUserServantEntity,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v4;
  *(_QWORD *)&v41.fields.fakeValue = v5;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                   v41,
                                                   0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)baseUserServantEntity,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_31;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)baseUserServantEntity,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  *(_QWORD *)&v42.fields.currentCryptoKey = v4;
  *(_QWORD *)&v42.fields.fakeValue = v5;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                   v42,
                                                   0LL);
  if ( !v10
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v10,
                   (int32_t)baseUserServantEntity,
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)baseUserServantEntity,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___),
        (commandCardComponents = this->fields.commandCardComponents) == 0LL) )
  {
LABEL_31:
    sub_B52A5C(baseUserServantEntity, method);
  }
  v19 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( !Entity )
      goto LABEL_31;
    v21 = *(_QWORD *)&Entity[1].fields.id;
    if ( !v21 )
      break;
    v22 = *(unsigned int *)(v21 + 24);
    if ( (__int64)v19 >= (int)v22 )
      break;
    if ( v19 >= v22 )
      goto LABEL_35;
    v23 = *(_DWORD *)(v21 + 4 * v19 + 32);
    if ( (unsigned int)(v23 - 1) <= 2 )
    {
      if ( v19 >= max_length )
      {
LABEL_35:
        v40 = sub_B52A88(baseUserServantEntity);
        sub_B52A28(v40, 0LL);
      }
      v24 = commandCardComponents->m_Items[v19];
      baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !v24 )
        goto LABEL_31;
      v24->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_B52920(
        (BattleServantConfConponent_o *)&v24->fields.target,
        (System_Int32_array **)baseUserServantEntity,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v43.fields.currentCryptoKey = v4;
      *(_QWORD *)&v43.fields.fakeValue = v5;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
      v32 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_19012556(v32, v23, v31, ServantImageLimitSealAfter, 0, 0LL);
      if ( !v32 )
        goto LABEL_31;
      v32->fields.markindex = v19;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v19, v33);
      CommandCodeId = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v35);
      CommandCardParam = CommandCardExceedControl__GetCommandCardParam(this, v19, v37);
      v32->fields.commandCodeId = CommandCodeId;
      v32->fields.commandCardParam = CommandCardParam;
      v32->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v24, v32, UserCommandCodeId, CommandCardParam, 1, 1, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v19;
    if ( !commandCardComponents )
      goto LABEL_31;
  }
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd, 0LL, v12, v13, v14, v15, v16, v17);
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
  if ( (byte_42B00D3 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_CombineMenuControl_OnLongPushListView__);
    sub_B52984(&Method_CommandCardExceedControl_OnClickCombine__);
    sub_B52984(&EventDelegate_TypeInfo);
    this = (CommandCardExceedControl_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_42B00D3 = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_12;
  onClick = combineButton->fields.onClick;
  v5 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  this = (CommandCardExceedControl_o *)EventDelegate__Set_29653788(onClick, v5, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_12;
  v7 = baseServantTouchPress->fields.onClick;
  v8 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v8, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_29653788(v7, v8, 0LL);
  v9 = v2->fields.baseServantTouchPress;
  if ( !v9
    || (onLongPress = v9->fields.onLongPress,
        v11 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v11, (Il2CppObject *)v2, Method_CombineMenuControl_OnLongPushListView__, 0LL),
        EventDelegate__Set_29653788(onLongPress, v11, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_12:
    sub_B52A5C(this, method);
  }
  v12 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields._targetType_k__BackingField;
  v13 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_29653788(v12, v13, 0LL);
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
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v18; // x24
  struct System_Int32_array *commandCardParam; // x25
  UILabel_o *detailLabel; // x25
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v22; // x0
  const MethodInfo *v23; // x2
  UILabel_o *userQpLabel; // x22
  UILabel_o *requiredQpLabel; // x22
  UIWidget_o *v26; // x22
  int v27; // s0
  const MethodInfo *v31; // x2
  __int64 v32; // x0

  if ( (byte_42B00D7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B00D7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_34:
    sub_B52A5C(SelfUserGame, v10);
  v11 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v10);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v12),
        ((unsigned __int8)SelfUserGame & 1) != 0) )
  {
    v14 = 0;
    goto LABEL_16;
  }
  SelfUserGame = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_34;
  SelfUserGame = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v18 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v15);
    if ( !commandCardParam )
      goto LABEL_34;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
    {
      v32 = sub_B52A88(SelfUserGame);
      sub_B52A28(v32, 0LL);
    }
    v10 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame + 1];
    if ( !v18 )
      goto LABEL_34;
  }
  else
  {
    v10 = 0LL;
    if ( !SelfUserGame )
      goto LABEL_34;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v18, (int32_t)v10, v16);
  if ( !SelfUserGame )
    goto LABEL_34;
  v14 = *((_DWORD *)SelfUserGame + 11);
LABEL_16:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = CommandCardExceedControl__GetDetailLabelText(
                   (CommandCardExceedControl_o *)SelfUserGame,
                   stateType,
                   isItemEnough,
                   isExceedMax,
                   v11 >= v14,
                   v13);
  if ( !detailLabel )
    goto LABEL_34;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v22, stateType, v23);
  if ( !targetSelectInfoLabel )
    goto LABEL_34;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__GetNumberFormat(v11, 0LL);
  if ( !userQpLabel )
    goto LABEL_34;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v14 <= 0 )
  {
    v10 = (MethodInfo *)StringLiteral_1/*""*/;
    if ( !requiredQpLabel )
      goto LABEL_34;
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
      goto LABEL_34;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v10, 0LL);
  v26 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( v11 < v14 )
  {
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_red(0LL);
    if ( !v26 )
      goto LABEL_34;
  }
  else
  {
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
    if ( !v26 )
      goto LABEL_34;
  }
  UIWidget__set_color(v26, *(UnityEngine_Color_o *)&v27, 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v31);
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
    sub_B52A5C(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
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
    sub_B52A5C(useItemTitleNormal, *(_QWORD *)&stateType);
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

  if ( (byte_42B00DB & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00DB = 1;
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
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v28, 0LL);
      v14 = *p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        sub_B52A5C(v12, v13);
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v15;
      v16 = 0;
      v17 = v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v27, 0LL);
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
  sub_B52920(
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_42B00DC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00DC = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
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
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    UserServantCommandCardMaster__TryGetEntity(
      MasterData_WarQuestSelectionMaster,
      &this->fields.baseUserServantCommandCardEntity,
      v11,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v12 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v13 = NetworkManager__get_UserId(0LL),
          v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v15 = v13,
          *(_QWORD *)&v17.fields.currentCryptoKey = v14,
          Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v17, 0LL),
          !v12) )
    {
LABEL_16:
      sub_B52A5C(Instance, v6);
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

  if ( (byte_42B00E4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00E4 = 1;
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
    sub_B52A5C(0LL, v4);
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
  sub_B52920(
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
  UnityEngine_Object_o *selectedCommandCard; // x22
  struct CombineCommandCardComponent_o **p_selectedCommandCard; // x21
  int64_t MarkIndex; // x0
  _BOOL8 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  struct CombineCommandCardComponent_o *v16; // x1
  const MethodInfo *v17; // x2
  ItemEntity_array *EntityList; // x22
  const MethodInfo *v19; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v22; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v24; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v26; // x1
  struct System_Int32_array *v27; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int max_length; // w10
  __int64 v36; // x8
  ItemEntity_o *v37; // x10
  struct System_Int32_array *v38; // x11
  char *v39; // x11
  int32_t useItemNum; // w22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v43; // x4
  bool v44; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  __int64 v46; // x27
  int v47; // w9
  struct System_Int32_array *v48; // x8
  struct System_Int32_array *v49; // x8
  struct LimitCntUpItemComponent_array *v50; // x8
  LimitCntUpItemComponent_o *v51; // x24
  struct System_Int32_array *v52; // x8
  const MethodInfo *v53; // x4
  bool v54; // w2
  __int64 v55; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B00E6 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00E6 = 1;
  }
  entity = 0LL;
  if ( this->fields.baseUserServantEntity )
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
    p_selectedCommandCard = &this->fields.selectedCommandCard;
    MarkIndex = UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL);
    if ( (MarkIndex & 1) == 0 )
      goto LABEL_13;
    MarkIndex = (int64_t)*p_selectedCommandCard;
    if ( !*p_selectedCommandCard )
      goto LABEL_82;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)MarkIndex, 0LL);
    if ( (_DWORD)MarkIndex != cardIndex )
    {
LABEL_13:
      commandCardComponents = this->fields.commandCardComponents;
      if ( !commandCardComponents )
        goto LABEL_82;
      if ( commandCardComponents->max_length > cardIndex )
      {
        v16 = commandCardComponents->m_Items[cardIndex];
        this->fields.selectedCommandCard = v16;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.selectedCommandCard,
          (System_Int32_array **)v16,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        CommandCardExceedControl__SetSelectedFrameActive(this, cardIndex, v17);
        MarkIndex = (int64_t)this->fields.targetSelectInfoBase;
        if ( !MarkIndex )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, 0, 0LL);
        MarkIndex = (int64_t)this->fields.exceedItemBase;
        if ( !MarkIndex )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, 1, 0LL);
        MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !MarkIndex )
          goto LABEL_82;
        MarkIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)MarkIndex,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !MarkIndex )
          goto LABEL_82;
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)MarkIndex, 25, 0LL);
        MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !MarkIndex )
          goto LABEL_82;
        MarkIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)MarkIndex,
                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v22 = 0;
          if ( !MarkIndex )
            goto LABEL_82;
          goto LABEL_26;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_82;
        if ( commandCardParam->max_length > cardIndex )
        {
          v22 = commandCardParam->m_Items[cardIndex + 1];
          if ( !MarkIndex )
            goto LABEL_82;
LABEL_26:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)MarkIndex,
                              v22,
                              v19);
          v24 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v24 = BalanceConfig_TypeInfo;
          }
          CommandCardParamUpMax = v24->static_fields->CommandCardParamUpMax;
          if ( EntityList )
          {
            v26 = *(_QWORD *)&EntityList->max_length;
            if ( v26 )
            {
              v27 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, v26);
              p_ExceedItemIds_k__BackingField = &this->fields._ExceedItemIds_k__BackingField;
              this->fields._ExceedItemIds_k__BackingField = v27;
              sub_B52920(
                (BattleServantConfConponent_o *)&this->fields._ExceedItemIds_k__BackingField,
                (System_Int32_array **)v27,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v36 = 0LL;
                while ( (unsigned int)v36 < max_length )
                {
                  v37 = EntityList->m_Items[v36];
                  if ( !v37 )
                    goto LABEL_82;
                  v38 = *p_ExceedItemIds_k__BackingField;
                  if ( !*p_ExceedItemIds_k__BackingField )
                    goto LABEL_82;
                  if ( (unsigned int)v36 >= v38->max_length )
                    goto LABEL_83;
                  v39 = (char *)v38 + 4 * v36++;
                  *((_DWORD *)v39 + 8) = v37->fields.id;
                  max_length = EntityList->max_length;
                  if ( (int)v36 >= max_length )
                    goto LABEL_38;
                }
                goto LABEL_83;
              }
            }
          }
LABEL_38:
          if ( RankParamEntity )
            useItemNum = RankParamEntity->fields.useItemNum;
          else
            useItemNum = 0;
          MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( MarkIndex )
          {
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)MarkIndex,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            MarkIndex = NetworkManager__get_UserId(0LL);
            ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
            if ( ExceedItemIds_k__BackingField )
            {
              if ( !ExceedItemIds_k__BackingField->max_length )
                goto LABEL_83;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_82;
              MarkIndex = UserItemMaster__TryGetEntity(
                            MasterData_WarQuestSelectionMaster,
                            &entity,
                            MarkIndex,
                            ExceedItemIds_k__BackingField->m_Items[1],
                            0LL);
              if ( (MarkIndex & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_82;
                v44 = entity->fields.num >= useItemNum;
              }
              else
              {
                v44 = 0;
              }
              exceedItemComponents = this->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v46 = 0LL;
                while ( 1 )
                {
                  v47 = exceedItemComponents->max_length;
                  if ( (int)v46 >= v47 )
                    break;
                  if ( (unsigned int)v46 >= v47 )
                    goto LABEL_83;
                  MarkIndex = (int64_t)exceedItemComponents->m_Items[v46];
                  if ( !MarkIndex )
                    goto LABEL_82;
                  MarkIndex = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MarkIndex, 0LL);
                  if ( v22 < CommandCardParamUpMax )
                  {
                    v48 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v48 )
                      goto LABEL_82;
                    v8 = (int)v46 < (signed int)v48->max_length;
                    if ( !MarkIndex )
                      goto LABEL_82;
                  }
                  else
                  {
                    v8 = 0LL;
                    if ( !MarkIndex )
                      goto LABEL_82;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, v8, 0LL);
                  v49 = this->fields._ExceedItemIds_k__BackingField;
                  if ( !v49 )
                    goto LABEL_82;
                  if ( (int)v46 < (signed int)v49->max_length )
                  {
                    v50 = this->fields.exceedItemComponents;
                    if ( !v50 )
                      goto LABEL_82;
                    if ( (unsigned int)v46 >= v50->max_length )
                      goto LABEL_83;
                    v51 = v50->m_Items[v46];
                    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    }
                    MarkIndex = NetworkManager__get_UserId(0LL);
                    v52 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v52 )
                      goto LABEL_82;
                    if ( (unsigned int)v46 >= v52->max_length )
                      goto LABEL_83;
                    if ( !v51 )
                      goto LABEL_82;
                    LimitCntUpItemComponent__setLimitUpItemInfo(v51, MarkIndex, v52->m_Items[v46 + 1], useItemNum, 0LL);
                  }
                  exceedItemComponents = this->fields.exceedItemComponents;
                  ++v46;
                  if ( !exceedItemComponents )
                    goto LABEL_82;
                }
                CommandCardExceedControl__SetInfoMessageLabels(this, 2, v44, v22 >= CommandCardParamUpMax, v43);
                v54 = 0;
                if ( v22 >= CommandCardParamUpMax || !v44 || this->fields.baseUserServantEntity == 0LL )
                  goto LABEL_80;
                MarkIndex = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( MarkIndex && RankParamEntity )
                {
                  v54 = *(_DWORD *)(MarkIndex + 96) >= RankParamEntity->fields.useQp;
LABEL_80:
                  CommandCardExceedControl__SetCombineButtonState(this, 2, v54, v22 >= CommandCardParamUpMax, v53);
                  return;
                }
              }
            }
          }
LABEL_82:
          sub_B52A5C(MarkIndex, v8);
        }
      }
LABEL_83:
      v55 = sub_B52A88(MarkIndex);
      sub_B52A28(v55, 0LL);
    }
  }
}