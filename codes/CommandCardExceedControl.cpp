void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall CommandCardExceedControl__CheckTutorial(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 59, 0LL, 0, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedControl__GetCombineButtonLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isExceedMax,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_41880D0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17149/*"buttontxt_synthesis"*/, *(_QWORD *)&stateType);
    sub_B2C35C(&StringLiteral_17147/*"buttontxt_notsynthesis"*/, v6);
    byte_41880D0 = 1;
  }
  v7 = &StringLiteral_17149/*"buttontxt_synthesis"*/;
  if ( stateType == 2 && isExceedMax )
    v7 = &StringLiteral_17147/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v7;
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  return commandCardParam->m_Items[cardIndex + 1];
}


int32_t __fastcall CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *userCommandCodeMaster; // x0
  __int64 v7; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_41880D6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_41880D6 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(userCommandCodeMaster, userCommandCodeId, (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B2C434(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v7 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedControl__GetDetailLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        bool isQpEnough,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 *v16; // x8

  if ( (byte_41880CE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_B2C35C(&StringLiteral_3216/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/, v10);
    sub_B2C35C(&StringLiteral_3217/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/, v11);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_3223/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v14);
    sub_B2C35C(&StringLiteral_3222/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/, v15);
    byte_41880CE = 1;
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
        v16 = &StringLiteral_3223/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
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
          v16 = &StringLiteral_3216/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/;
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_3222/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v16, 0LL);
    case 0:
LABEL_6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_3217/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v16, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall CommandCardExceedControl__GetIsAllParamMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Instance; // x0
  __int64 v8; // x1
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v16; // x20
  int32_t v17; // w23
  __int64 v19; // x0
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_41880D9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_41880D9 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_25;
  v11 = Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Instance = UserServantCommandCardMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               v11,
               (int)Instance,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_25:
    sub_B2C434(Instance, v8);
  commandCardParam = entity->fields.commandCardParam;
  if ( commandCardParam )
  {
    max_length = commandCardParam->max_length;
    if ( max_length < 1 )
      return 1;
    v16 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= max_length )
      {
        v19 = sub_B2C460(Instance);
        sub_B2C400(v19, 0LL);
      }
      Instance = (int64_t)BalanceConfig_TypeInfo;
      v17 = commandCardParam->m_Items[v16 + 1];
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v17 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
        break;
      max_length = commandCardParam->max_length;
      if ( (int)++v16 >= max_length )
        return 1;
    }
  }
  return 0;
}


bool __fastcall CommandCardExceedControl__GetIsCombineEnable(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v9; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x20
  int64_t CardIndex; // x0
  int32_t v13; // w20
  BalanceConfig_c *v14; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  struct UserServantCommandCardEntity_o *v19; // x8
  CommandCardRankParamMaster_o *v20; // x20
  struct System_Int32_array *v21; // x21
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *v25; // x8
  __int64 v27; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41880D7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_41880D7 = 1;
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
      CardIndex = CommandCardExceedControl__get_CardIndex(this, v9);
      if ( (unsigned int)CardIndex >= commandCardParam->max_length )
        goto LABEL_39;
      v13 = commandCardParam->m_Items[(int)CardIndex + 1];
      v14 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      if ( v13 >= v14->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !*(_QWORD *)&ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  CardIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)CardIndex,
                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v19 = this->fields.baseUserServantCommandCardEntity;
  v20 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v19 )
  {
    v21 = v19->fields.commandCardParam;
    CardIndex = CommandCardExceedControl__get_CardIndex(this, v17);
    if ( !v21 )
      goto LABEL_38;
    if ( (unsigned int)CardIndex >= v21->max_length )
      goto LABEL_39;
    v16 = (unsigned int)v21->m_Items[(int)CardIndex + 1];
    if ( !v20 )
      goto LABEL_38;
  }
  else
  {
    v16 = 0LL;
    if ( !CardIndex )
      goto LABEL_38;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v20, v16, v18);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)CardIndex,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  CardIndex = NetworkManager__get_UserId(0LL);
  v25 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v25 )
LABEL_38:
    sub_B2C434(CardIndex, v16);
  if ( !v25->max_length )
  {
LABEL_39:
    v27 = sub_B2C460(CardIndex);
    sub_B2C400(v27, 0LL);
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  CardIndex = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, CardIndex, v25->m_Items[1], 0LL);
  if ( (CardIndex & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_38;
  return entity->fields.num >= useItemNum;
}


bool __fastcall CommandCardExceedControl__GetIsExceedMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v7; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v12; // x20
  struct System_Int32_array *commandCardParam; // x21
  int32_t v14; // w19
  BalanceConfig_c *v15; // x0
  __int64 v17; // x0

  if ( (byte_41880D8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41880D8 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v7) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v12 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v9);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
      {
        v17 = sub_B2C460(Instance);
        sub_B2C400(v17, 0LL);
      }
      v14 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v12 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B2C434(Instance, v9);
  }
  v14 = 0;
  if ( !Instance )
    goto LABEL_19;
LABEL_13:
  CommandCardRankParamMaster__GetRankParamEntity(v12, v14, v10);
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  return v14 >= v15->static_fields->CommandCardParamUpMax;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedControl__GetTargetSelectInfoLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_41880CF & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_B2C35C(&StringLiteral_3218/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/, v4);
    sub_B2C35C(&StringLiteral_3220/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_41880CF = 1;
  }
  if ( stateType == 4 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = &StringLiteral_3220/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  if ( !stateType )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = &StringLiteral_3218/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
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
    sub_B2C434(0LL, v8);
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

  if ( (byte_41880CC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41880CC = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      p_charaGraphTexture->klass = 0LL;
      sub_B2C2F8(p_charaGraphTexture, 0LL, v14, v15, v16, v17, v18, v19);
      return;
    }
LABEL_13:
    sub_B2C434(baseSelectInfoObject, v9);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WebViewManager_o *Instance; // x0
  __int64 v23; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v26; // w22
  Il2CppClass **v27; // x8
  CombineCommandCardComponent_o *v28; // x20
  BattleServantConfConponent_o *p_userCommandCodeMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0

  if ( (byte_41880CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41880CB = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCardEntity,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCommandCard = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCodeEntity,
    0LL,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_13;
  max_length = commandCardComponents->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
        v37 = sub_B2C460(Instance);
        sub_B2C400(v37, 0LL);
      }
      v27 = &commandCardComponents->obj.klass + (int)v26;
      v28 = (CombineCommandCardComponent_o *)v27[4];
      if ( !v28 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v27[4], 0, 0LL);
      CombineCommandCardComponent__SetCommandCardEnable(v28, 0, 0LL);
      max_length = commandCardComponents->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_B2C434(Instance, v23);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_userCommandCodeMaster, MasterData_WarQuestSelectionMaster, v31, v32, v33, v34, v35, v36);
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
    sub_B2C434(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_41880CA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41880CA = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_B2C434(detailLabel, method);
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

  if ( (byte_41880DB & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41880DB = 1;
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
    v15 = sub_B2C460(UserCommandCodeId);
    sub_B2C400(v15, 0LL);
  }
  v12 = ExceedItemIds_k__BackingField->m_Items[1];
  v13 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v4);
  if ( !commandCardExceedConfirmDialog )
LABEL_11:
    sub_B2C434(UserCommandCodeId, v4);
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
    sub_B2C434(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v12);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0LL, v13);
}


void __fastcall CommandCardExceedControl__SetBaseServantCardImage(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitImageMaster_o *v13; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v16; // w21
  struct UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_25402508; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_41880D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_41880D3 = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)baseSelectInfoObject,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v13 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = v12;
    *(_QWORD *)&v25.fields.fakeValue = v11;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                         v25,
                                                         0LL);
    if ( !v13 )
      goto LABEL_18;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   v13,
                                   (int32_t)baseSelectInfoObject,
                                   CardImageLimitCount,
                                   0LL);
    charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
    v16 = ServantImageLimitSealAfter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_charaGraphTexture = &this->fields.charaGraphTexture;
    if ( UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
    {
      TexturePrefab_25402508 = CharaGraphManager__CreateTexturePrefab_25402508(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v16,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_25402508;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.charaGraphTexture,
        (System_Int32_array **)TexturePrefab_25402508,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      return;
    }
    baseSelectInfoObject = (UnityEngine_GameObject_o *)*p_charaGraphTexture;
    if ( !*p_charaGraphTexture )
LABEL_18:
      sub_B2C434(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_35719956(
      (UICharaGraphTexture_o *)baseSelectInfoObject,
      userServantEntity,
      v16,
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array *baseServantAssets; // x22
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
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v30; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct System_String_array *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  struct UserServantEntity_o *v35; // x8
  int32_t v36; // w21
  int32_t v37; // w22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array *v45; // x20
  System_Action_o *v46; // x21
  __int64 v47; // x0
  __int64 v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_41880D4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, onAssetLoadEnd);
    sub_B2C35C(&AssetManager_TypeInfo, v10);
    sub_B2C35C(&Method_CommandCardExceedControl_SetCommandCards__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v13);
    sub_B2C35C(&string___TypeInfo, v14);
    byte_41880D4 = 1;
  }
  baseServantAssets = this->fields.baseServantAssets;
  if ( baseServantAssets )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30161248(baseServantAssets, 0LL);
    this->fields.baseServantAssets = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseServantAssets, 0LL, v16, v17, v18, v19, v20, v21);
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
    sub_B2C434(CommandCardLoadFolderName, v30);
  }
  this->fields.onAssetLoadEnd = onAssetLoadEnd;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd,
    (System_Int32_array **)onAssetLoadEnd,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v22 = (struct System_String_array *)sub_B2C374(string___TypeInfo, 1LL);
  this->fields.baseServantAssets = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseServantAssets,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v32 = this->fields.baseServantAssets;
  v34 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v34;
  *(_QWORD *)&v49.fields.fakeValue = v33;
  CommandCardLoadFolderName = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v49,
                                                   0LL);
  v35 = this->fields.baseUserServantEntity;
  if ( !v35 )
    goto LABEL_27;
  v36 = (int)CommandCardLoadFolderName;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35->fields.limitCount, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v36, v37, 0LL);
  if ( !v32 )
    goto LABEL_27;
  v44 = (System_Int32_array **)CommandCardLoadFolderName;
  if ( CommandCardLoadFolderName )
  {
    CommandCardLoadFolderName = (System_String_o *)sub_B2C41C(
                                                     CommandCardLoadFolderName,
                                                     v32->obj.klass->_1.element_class);
    if ( !CommandCardLoadFolderName )
    {
      v48 = sub_B2C454(0LL);
      sub_B2C400(v48, 0LL);
    }
  }
  if ( !v32->max_length )
  {
    v47 = sub_B2C460(CommandCardLoadFolderName);
    sub_B2C400(v47, 0LL);
  }
  v32->m_Items[0] = (System_String_o *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)v32->m_Items, v44, v38, v39, v40, v41, v42, v43);
  v45 = this->fields.baseServantAssets;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(v45, v46, 1, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(combineButton, *(_QWORD *)&stateType);
  }
  ((void (__fastcall *)(System_String_o *, void *))combineButton->klass[1]._1.typeMetadataHandle)(
    combineButton,
    combineButton->klass[1]._1.interopData);
}


void __fastcall CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t CommandCardLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t ServantImageLimitSealAfter; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x23
  WarEntity_o *Entity; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v26; // x24
  unsigned __int64 max_length; // x9
  __int64 v28; // x10
  unsigned __int64 v29; // x11
  int32_t v30; // w26
  CombineCommandCardComponent_o *v31; // x25
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t v38; // w28
  BattleCommandData_o *v39; // x27
  const MethodInfo *v40; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v42; // x2
  int32_t CommandCodeId; // w28
  const MethodInfo *v44; // x2
  int32_t CommandCardParam; // w0
  System_Action_o *onAssetLoadEnd; // x20
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_41880D5 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41880D5 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_31;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(baseUserServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)baseUserServantEntity,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v11;
  *(_QWORD *)&v48.fields.fakeValue = v12;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v48,
                                                   0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)baseUserServantEntity,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_31;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)baseUserServantEntity,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  *(_QWORD *)&v49.fields.currentCryptoKey = v11;
  *(_QWORD *)&v49.fields.fakeValue = v12;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v49,
                                                   0LL);
  if ( !v17
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v17,
                   (int32_t)baseUserServantEntity,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)baseUserServantEntity,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___),
        (commandCardComponents = this->fields.commandCardComponents) == 0LL) )
  {
LABEL_31:
    sub_B2C434(baseUserServantEntity, method);
  }
  v26 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v26 >= (int)max_length )
      break;
    if ( !Entity )
      goto LABEL_31;
    v28 = *(_QWORD *)&Entity[1].fields.id;
    if ( !v28 )
      break;
    v29 = *(unsigned int *)(v28 + 24);
    if ( (__int64)v26 >= (int)v29 )
      break;
    if ( v26 >= v29 )
      goto LABEL_35;
    v30 = *(_DWORD *)(v28 + 4 * v26 + 32);
    if ( (unsigned int)(v30 - 1) <= 2 )
    {
      if ( v26 >= max_length )
      {
LABEL_35:
        v47 = sub_B2C460(baseUserServantEntity);
        sub_B2C400(v47, 0LL);
      }
      v31 = commandCardComponents->m_Items[v26];
      baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !v31 )
        goto LABEL_31;
      v31->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v31->fields.target,
        (System_Int32_array **)baseUserServantEntity,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v50.fields.currentCryptoKey = v11;
      *(_QWORD *)&v50.fields.fakeValue = v12;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v50, 0LL);
      v39 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_18363144(v39, v30, v38, ServantImageLimitSealAfter, 0, 0LL);
      if ( !v39 )
        goto LABEL_31;
      v39->fields.markindex = v26;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v26, v40);
      CommandCodeId = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v42);
      CommandCardParam = CommandCardExceedControl__GetCommandCardParam(this, v26, v44);
      v39->fields.commandCodeId = CommandCodeId;
      v39->fields.commandCardParam = CommandCardParam;
      v39->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v31, v39, UserCommandCodeId, CommandCardParam, 1, 1, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v26;
    if ( !commandCardComponents )
      goto LABEL_31;
  }
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd, 0LL, v19, v20, v21, v22, v23, v24);
    System_Action__Invoke(onAssetLoadEnd, 0LL);
  }
}


void __fastcall CommandCardExceedControl__SetEventDelegate(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  CommandCardExceedControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UICommonButton_o *combineButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v9; // x21
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *v11; // x20
  EventDelegate_Callback_o *v12; // x21
  struct UITouchPress_o *v13; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v15; // x21
  System_Collections_Generic_List_EventDelegate__o *v16; // x20
  EventDelegate_Callback_o *v17; // x21

  v2 = this;
  if ( (byte_41880C9 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&Method_CombineMenuControl_OnLongPushListView__, v3);
    sub_B2C35C(&Method_CommandCardExceedControl_OnClickCombine__, v4);
    sub_B2C35C(&EventDelegate_TypeInfo, v5);
    this = (CommandCardExceedControl_o *)sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    byte_41880C9 = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_12;
  onClick = combineButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  this = (CommandCardExceedControl_o *)EventDelegate__Set_29727552(onClick, v9, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_12;
  v11 = baseServantTouchPress->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_29727552(v11, v12, 0LL);
  v13 = v2->fields.baseServantTouchPress;
  if ( !v13
    || (onLongPress = v13->fields.onLongPress,
        v15 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v15, (Il2CppObject *)v2, Method_CombineMenuControl_OnLongPushListView__, 0LL),
        EventDelegate__Set_29727552(onLongPress, v15, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  v16 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields._targetType_k__BackingField;
  v17 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_29727552(v16, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetInfoMessageLabels(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *SelfUserGame; // x0
  MethodInfo *v13; // x1
  int32_t v14; // w21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x5
  int32_t v17; // w24
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v21; // x24
  struct System_Int32_array *commandCardParam; // x25
  UILabel_o *detailLabel; // x25
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v25; // x0
  const MethodInfo *v26; // x2
  UILabel_o *userQpLabel; // x22
  UILabel_o *requiredQpLabel; // x22
  UIWidget_o *v29; // x22
  int v30; // s0
  const MethodInfo *v34; // x2
  __int64 v35; // x0

  if ( (byte_41880CD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, *(_QWORD *)&stateType);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_41880CD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_34:
    sub_B2C434(SelfUserGame, v13);
  v14 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v13);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v15),
        ((unsigned __int8)SelfUserGame & 1) != 0) )
  {
    v17 = 0;
    goto LABEL_16;
  }
  SelfUserGame = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_34;
  SelfUserGame = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v21 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v18);
    if ( !commandCardParam )
      goto LABEL_34;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
    {
      v35 = sub_B2C460(SelfUserGame);
      sub_B2C400(v35, 0LL);
    }
    v13 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame + 1];
    if ( !v21 )
      goto LABEL_34;
  }
  else
  {
    v13 = 0LL;
    if ( !SelfUserGame )
      goto LABEL_34;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v21, (int32_t)v13, v19);
  if ( !SelfUserGame )
    goto LABEL_34;
  v17 = *((_DWORD *)SelfUserGame + 11);
LABEL_16:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = CommandCardExceedControl__GetDetailLabelText(
                   (CommandCardExceedControl_o *)SelfUserGame,
                   stateType,
                   isItemEnough,
                   isExceedMax,
                   v14 >= v17,
                   v16);
  if ( !detailLabel )
    goto LABEL_34;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v25, stateType, v26);
  if ( !targetSelectInfoLabel )
    goto LABEL_34;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__GetNumberFormat(v14, 0LL);
  if ( !userQpLabel )
    goto LABEL_34;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v17 <= 0 )
  {
    v13 = (MethodInfo *)StringLiteral_1/*""*/;
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
    SelfUserGame = LocalizationManager__GetNumberFormat(v17, 0LL);
    v13 = (MethodInfo *)SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_34;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v13, 0LL);
  v29 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( v14 < v17 )
  {
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_red(0LL);
    if ( !v29 )
      goto LABEL_34;
  }
  else
  {
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
    if ( !v29 )
      goto LABEL_34;
  }
  UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v30, 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v34);
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
    sub_B2C434(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
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
    sub_B2C434(useItemTitleNormal, *(_QWORD *)&stateType);
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

  if ( (byte_41880D1 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    byte_41880D1 = 1;
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
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL);
      v14 = *p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        sub_B2C434(v12, v13);
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v15;
      v16 = 0;
      v17 = v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v27, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v20, v21, v22, v23, v24, v25);
    CommandCardExceedControl__InitExceedItem(this, v26);
  }
}


void __fastcall CommandCardExceedControl__SetUserServantCommandCard(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  int64_t v15; // x22
  UserServantCommandCodeMaster_o *v16; // x21
  int64_t v17; // x0
  __int64 v18; // x8
  int64_t v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_41880D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, userServantEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41880D2 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v15 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v14;
    *(_QWORD *)&v20.fields.fakeValue = v13;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    UserServantCommandCardMaster__TryGetEntity(
      MasterData_WarQuestSelectionMaster,
      &this->fields.baseUserServantCommandCardEntity,
      v15,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v16 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v17 = NetworkManager__get_UserId(0LL),
          v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v21.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v19 = v17,
          *(_QWORD *)&v21.fields.currentCryptoKey = v18,
          Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL),
          !v16) )
    {
LABEL_16:
      sub_B2C434(Instance, v10);
    }
    UserServantCommandCodeMaster__TryGetEntity(
      v16,
      &this->fields.baseUserServantCommandCodeEntity,
      v19,
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

  if ( (byte_41880DA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41880DA = 1;
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
    sub_B2C434(0LL, v4);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ExceedItemIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__touchCommandCard(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *selectedCommandCard; // x22
  struct CombineCommandCardComponent_o **p_selectedCommandCard; // x21
  int64_t MarkIndex; // x0
  _BOOL8 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  struct CombineCommandCardComponent_o *v24; // x1
  const MethodInfo *v25; // x2
  ItemEntity_array *EntityList; // x22
  const MethodInfo *v27; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v30; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v32; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v34; // x1
  struct System_Int32_array *v35; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int max_length; // w10
  __int64 v44; // x8
  ItemEntity_o *v45; // x10
  struct System_Int32_array *v46; // x11
  char *v47; // x11
  int32_t useItemNum; // w22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v51; // x4
  bool v52; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  __int64 v54; // x27
  int v55; // w9
  struct System_Int32_array *v56; // x8
  struct System_Int32_array *v57; // x8
  struct LimitCntUpItemComponent_array *v58; // x8
  LimitCntUpItemComponent_o *v59; // x24
  struct System_Int32_array *v60; // x8
  const MethodInfo *v61; // x4
  bool v62; // w2
  __int64 v63; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41880DC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&cardIndex);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    byte_41880DC = 1;
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
        v24 = commandCardComponents->m_Items[cardIndex];
        this->fields.selectedCommandCard = v24;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.selectedCommandCard,
          (System_Int32_array **)v24,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        CommandCardExceedControl__SetSelectedFrameActive(this, cardIndex, v25);
        MarkIndex = (int64_t)this->fields.targetSelectInfoBase;
        if ( !MarkIndex )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, 0, 0LL);
        MarkIndex = (int64_t)this->fields.exceedItemBase;
        if ( !MarkIndex )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, 1, 0LL);
        MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !MarkIndex )
          goto LABEL_82;
        MarkIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)MarkIndex,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !MarkIndex )
          goto LABEL_82;
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)MarkIndex, 25, 0LL);
        MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !MarkIndex )
          goto LABEL_82;
        MarkIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)MarkIndex,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v30 = 0;
          if ( !MarkIndex )
            goto LABEL_82;
          goto LABEL_26;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_82;
        if ( commandCardParam->max_length > cardIndex )
        {
          v30 = commandCardParam->m_Items[cardIndex + 1];
          if ( !MarkIndex )
            goto LABEL_82;
LABEL_26:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)MarkIndex,
                              v30,
                              v27);
          v32 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v32 = BalanceConfig_TypeInfo;
          }
          CommandCardParamUpMax = v32->static_fields->CommandCardParamUpMax;
          if ( EntityList )
          {
            v34 = *(_QWORD *)&EntityList->max_length;
            if ( v34 )
            {
              v35 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, v34);
              p_ExceedItemIds_k__BackingField = &this->fields._ExceedItemIds_k__BackingField;
              this->fields._ExceedItemIds_k__BackingField = v35;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields._ExceedItemIds_k__BackingField,
                (System_Int32_array **)v35,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v44 = 0LL;
                while ( (unsigned int)v44 < max_length )
                {
                  v45 = EntityList->m_Items[v44];
                  if ( !v45 )
                    goto LABEL_82;
                  v46 = *p_ExceedItemIds_k__BackingField;
                  if ( !*p_ExceedItemIds_k__BackingField )
                    goto LABEL_82;
                  if ( (unsigned int)v44 >= v46->max_length )
                    goto LABEL_83;
                  v47 = (char *)v46 + 4 * v44++;
                  *((_DWORD *)v47 + 8) = v45->fields.id;
                  max_length = EntityList->max_length;
                  if ( (int)v44 >= max_length )
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
          MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( MarkIndex )
          {
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)MarkIndex,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                v52 = entity->fields.num >= useItemNum;
              }
              else
              {
                v52 = 0;
              }
              exceedItemComponents = this->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v54 = 0LL;
                while ( 1 )
                {
                  v55 = exceedItemComponents->max_length;
                  if ( (int)v54 >= v55 )
                    break;
                  if ( (unsigned int)v54 >= v55 )
                    goto LABEL_83;
                  MarkIndex = (int64_t)exceedItemComponents->m_Items[v54];
                  if ( !MarkIndex )
                    goto LABEL_82;
                  MarkIndex = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MarkIndex, 0LL);
                  if ( v30 < CommandCardParamUpMax )
                  {
                    v56 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v56 )
                      goto LABEL_82;
                    v16 = (int)v54 < (signed int)v56->max_length;
                    if ( !MarkIndex )
                      goto LABEL_82;
                  }
                  else
                  {
                    v16 = 0LL;
                    if ( !MarkIndex )
                      goto LABEL_82;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, v16, 0LL);
                  v57 = this->fields._ExceedItemIds_k__BackingField;
                  if ( !v57 )
                    goto LABEL_82;
                  if ( (int)v54 < (signed int)v57->max_length )
                  {
                    v58 = this->fields.exceedItemComponents;
                    if ( !v58 )
                      goto LABEL_82;
                    if ( (unsigned int)v54 >= v58->max_length )
                      goto LABEL_83;
                    v59 = v58->m_Items[v54];
                    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    }
                    MarkIndex = NetworkManager__get_UserId(0LL);
                    v60 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v60 )
                      goto LABEL_82;
                    if ( (unsigned int)v54 >= v60->max_length )
                      goto LABEL_83;
                    if ( !v59 )
                      goto LABEL_82;
                    LimitCntUpItemComponent__setLimitUpItemInfo(v59, MarkIndex, v60->m_Items[v54 + 1], useItemNum, 0LL);
                  }
                  exceedItemComponents = this->fields.exceedItemComponents;
                  ++v54;
                  if ( !exceedItemComponents )
                    goto LABEL_82;
                }
                CommandCardExceedControl__SetInfoMessageLabels(this, 2, v52, v30 >= CommandCardParamUpMax, v51);
                v62 = 0;
                if ( v30 >= CommandCardParamUpMax || !v52 || this->fields.baseUserServantEntity == 0LL )
                  goto LABEL_80;
                MarkIndex = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( MarkIndex && RankParamEntity )
                {
                  v62 = *(_DWORD *)(MarkIndex + 96) >= RankParamEntity->fields.useQp;
LABEL_80:
                  CommandCardExceedControl__SetCombineButtonState(this, 2, v62, v30 >= CommandCardParamUpMax, v61);
                  return;
                }
              }
            }
          }
LABEL_82:
          sub_B2C434(MarkIndex, v16);
        }
      }
LABEL_83:
      v63 = sub_B2C460(MarkIndex);
      sub_B2C400(v63, 0LL);
    }
  }
}