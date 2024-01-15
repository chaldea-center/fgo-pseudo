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

  if ( (byte_40FA587 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17083/*"buttontxt_synthesis"*/, *(_QWORD *)&stateType);
    sub_B16FFC(&StringLiteral_17081/*"buttontxt_notsynthesis"*/, v6);
    byte_40FA587 = 1;
  }
  v7 = &StringLiteral_17083/*"buttontxt_synthesis"*/;
  if ( stateType == 2 && isExceedMax )
    v7 = &StringLiteral_17081/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommandCardExceedControl__GetCommandCardParam(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8

  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  if ( !baseUserServantCommandCardEntity )
    return 0;
  commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  if ( commandCardParam->max_length <= cardIndex )
  {
    sub_B17100(this, *(_QWORD *)&cardIndex, method);
    sub_B170A0();
  }
  return commandCardParam->m_Items[cardIndex + 1];
}


int32_t __fastcall CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UserCommandCodeMaster_o *userCommandCodeMaster; // x0
  UserServantEntity_o *Entity; // x0
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_40FA58D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FA58D = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)userCommandCodeMaster,
                   userCommandCodeId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  v9 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
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

  if ( (byte_40FA585 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_B16FFC(&StringLiteral_3207/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/, v10);
    sub_B16FFC(&StringLiteral_3208/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/, v11);
    sub_B16FFC(&StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    sub_B16FFC(&StringLiteral_3214/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v14);
    sub_B16FFC(&StringLiteral_3213/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/, v15);
    byte_40FA585 = 1;
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
        v16 = &StringLiteral_3214/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
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
          v16 = &StringLiteral_3207/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = &StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/;
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_3213/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v16, 0LL);
    case 0:
LABEL_6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_3208/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
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
  WebViewManager_o *Instance; // x0
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  BalanceConfig_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v20; // x20
  int32_t v21; // w23
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_40FA590 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA590 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_25;
  v11 = UserId;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v13;
  *(_QWORD *)&v24.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  v15 = (BalanceConfig_c *)UserServantCommandCardMaster__TryGetEntity(
                             MasterData_WarQuestSelectionMaster,
                             &entity,
                             v11,
                             v14,
                             0LL);
  if ( ((unsigned __int8)v15 & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_25:
    sub_B170D4();
  commandCardParam = entity->fields.commandCardParam;
  if ( commandCardParam )
  {
    max_length = commandCardParam->max_length;
    if ( max_length < 1 )
      return 1;
    v20 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v20 >= max_length )
      {
        sub_B17100(v15, v16, v17);
        sub_B170A0();
      }
      v15 = BalanceConfig_TypeInfo;
      v21 = commandCardParam->m_Items[v20 + 1];
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      if ( v21 < v15->static_fields->CommandCardParamUpMax )
        break;
      max_length = commandCardParam->max_length;
      if ( (int)++v20 >= max_length )
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t v15; // w20
  BalanceConfig_c *v16; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v20; // x1
  struct UserServantCommandCardEntity_o *v21; // x8
  CommandCardRankParamMaster_o *v22; // x20
  struct System_Int32_array *v23; // x21
  int32_t v24; // w1
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w21
  WebViewManager_o *v27; // x0
  UserItemMaster_o *v28; // x20
  struct System_Int32_array *v29; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA58E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA58E = 1;
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
      v15 = commandCardParam->m_Items[(int)CardIndex + 1];
      v16 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( v15 >= v16->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !*(_QWORD *)&ExceedItemIds_k__BackingField->max_length )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v21 = this->fields.baseUserServantCommandCardEntity;
  v22 = (CommandCardRankParamMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( v21 )
  {
    v23 = v21->fields.commandCardParam;
    CardIndex = CommandCardExceedControl__get_CardIndex(this, v20);
    if ( !v23 )
      goto LABEL_38;
    if ( (unsigned int)CardIndex >= v23->max_length )
      goto LABEL_39;
    v24 = v23->m_Items[(int)CardIndex + 1];
    if ( !v22 )
      goto LABEL_38;
  }
  else
  {
    v24 = 0;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_38;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v22, v24, v14);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_38;
  v28 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v27,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  CardIndex = NetworkManager__get_UserId(0LL);
  v29 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v29 )
LABEL_38:
    sub_B170D4();
  if ( !v29->max_length )
  {
LABEL_39:
    sub_B17100(CardIndex, v13, v14);
    sub_B170A0();
  }
  if ( !v28 )
    goto LABEL_38;
  if ( !UserItemMaster__TryGetEntity(v28, &entity, CardIndex, v29->m_Items[1], 0LL) )
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v13; // x20
  struct System_Int32_array *commandCardParam; // x21
  __int64 CardIndex; // x0
  __int64 v16; // x1
  int32_t v17; // w19
  BalanceConfig_c *v18; // x0

  if ( (byte_40FA58F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA58F = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v13 = (CommandCardRankParamMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    CardIndex = CommandCardExceedControl__get_CardIndex(this, v10);
    if ( commandCardParam )
    {
      if ( (unsigned int)CardIndex >= commandCardParam->max_length )
      {
        sub_B17100(CardIndex, v16, v11);
        sub_B170A0();
      }
      v17 = commandCardParam->m_Items[(int)CardIndex + 1];
      if ( v13 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B170D4();
  }
  v17 = 0;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
LABEL_13:
  CommandCardRankParamMaster__GetRankParamEntity(v13, v17, v11);
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  return v17 >= v18->static_fields->CommandCardParamUpMax;
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

  if ( (byte_40FA586 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_B16FFC(&StringLiteral_3209/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/, v4);
    sub_B16FFC(&StringLiteral_3211/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FA586 = 1;
  }
  if ( stateType == 4 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = &StringLiteral_3211/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  if ( !stateType )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = &StringLiteral_3209/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
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


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CommandCardExceedControl__GetUserCommandCodeId(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v5; // x8

  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    return 0LL;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    sub_B17100(this, *(_QWORD *)&cardIndex, method);
    sub_B170A0();
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  UnityEngine_Object_o *charaGraphTexture; // x20
  UnityEngine_Component_o **p_charaGraphTexture; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FA583 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA583 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
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
    p_charaGraphTexture = (UnityEngine_Component_o **)&this->fields.charaGraphTexture;
    if ( *p_charaGraphTexture )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraphTexture, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      *p_charaGraphTexture = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_charaGraphTexture, 0LL, v13, v14, v15, v16, v17, v18);
      return;
    }
LABEL_13:
    sub_B170D4();
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
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v27; // w22
  Il2CppClass **v28; // x8
  CombineCommandCardComponent_o *v29; // x20
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_userCommandCodeMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FA582 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA582 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCardEntity,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCommandCard = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_B16F98(
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
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
      {
        sub_B17100(v22, v23, v24);
        sub_B170A0();
      }
      v28 = &commandCardComponents->obj.klass + (int)v27;
      v29 = (CombineCommandCardComponent_o *)v28[4];
      if ( !v29 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v28[4], 0, 0LL);
      CombineCommandCardComponent__SetCommandCardEnable(v29, 0, 0LL);
      max_length = commandCardComponents->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B16F98(p_userCommandCodeMaster, MasterData_WarQuestSelectionMaster, v33, v34, v35, v36, v37, v38);
  }
}


void __fastcall CommandCardExceedControl__InitExceedItem(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetSelectInfoBase; // x0
  UnityEngine_GameObject_o *exceedItemBase; // x0

  targetSelectInfoBase = this->fields.targetSelectInfoBase;
  if ( !targetSelectInfoBase
    || (UnityEngine_GameObject__SetActive(targetSelectInfoBase, 1, 0LL),
        (exceedItemBase = this->fields.exceedItemBase) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(exceedItemBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0
  UILabel_o *userQpLabel; // x0
  UILabel_o *requiredQpLabel; // x0

  if ( (byte_40FA581 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FA581 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (userQpLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(userQpLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (requiredQpLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CommandCardExceedControl__OnClickCombine(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct CombineCommandCardComponent_o *selectedCommandCard; // x8
  CommandCardExceedConfirmDialog_o *commandCardExceedConfirmDialog; // x20
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x21
  BattleCommandData_o *data; // x22
  int32_t CardIndex; // w0
  const MethodInfo *v9; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  int32_t v14; // w24
  int64_t v15; // x23
  int32_t v16; // w0
  const MethodInfo *v17; // x7

  if ( (byte_40FA592 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA592 = 1;
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
  CardIndex = CommandCardExceedControl__get_CardIndex(this, v3);
  UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, CardIndex, v9);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_11;
  if ( !ExceedItemIds_k__BackingField->max_length )
  {
    sub_B17100(UserCommandCodeId, v11, v12);
    sub_B170A0();
  }
  v14 = ExceedItemIds_k__BackingField->m_Items[1];
  v15 = UserCommandCodeId;
  v16 = CommandCardExceedControl__get_CardIndex(this, v11);
  if ( !commandCardExceedConfirmDialog )
LABEL_11:
    sub_B170D4();
  CommandCardExceedConfirmDialog__Open(
    commandCardExceedConfirmDialog,
    baseUserServantCommandCardEntity,
    data,
    v15,
    v14,
    v16,
    this->fields.onRequestCombine,
    v17);
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
    sub_B170D4();
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantLimitImageMaster_o *v14; // x22
  int32_t v15; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v18; // w21
  UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40FA58A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA58A = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v14 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v13;
    *(_QWORD *)&v27.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
    if ( !v14 )
      goto LABEL_18;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   v14,
                                   v15,
                                   CardImageLimitCount,
                                   0LL);
    charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
    v18 = ServantImageLimitSealAfter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_charaGraphTexture = &this->fields.charaGraphTexture;
    if ( UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
    {
      TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v18,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_26882832;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.charaGraphTexture,
        (System_Int32_array **)TexturePrefab_26882832,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      return;
    }
    if ( !*p_charaGraphTexture )
LABEL_18:
      sub_B170D4();
    UICharaGraphTexture__SetCharacter_35080076(*p_charaGraphTexture, userServantEntity, v18, 0LL, 0, 0LL);
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
  __int64 v22; // x2
  struct System_String_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct System_String_array *v31; // x20
  __int64 v32; // x21
  __int64 v33; // x22
  int32_t v34; // w0
  struct UserServantEntity_o *v35; // x8
  int32_t v36; // w21
  int32_t v37; // w22
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_array *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_40FA58B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, onAssetLoadEnd);
    sub_B16FFC(&AssetManager_TypeInfo, v10);
    sub_B16FFC(&Method_CommandCardExceedControl_SetCommandCards__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v13);
    sub_B16FFC(&string___TypeInfo, v14);
    byte_40FA58B = 1;
  }
  baseServantAssets = this->fields.baseServantAssets;
  if ( baseServantAssets )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_29955940(baseServantAssets, 0LL);
    this->fields.baseServantAssets = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseServantAssets, 0LL, v16, v17, v18, v19, v20, v21);
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
    sub_B170D4();
  }
  this->fields.onAssetLoadEnd = onAssetLoadEnd;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd,
    (System_Int32_array **)onAssetLoadEnd,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v23 = (struct System_String_array *)sub_B17014(string___TypeInfo, 1LL, v22);
  this->fields.baseServantAssets = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseServantAssets,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v31 = this->fields.baseServantAssets;
  v33 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v33;
  *(_QWORD *)&v53.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
  v35 = this->fields.baseUserServantEntity;
  if ( !v35 )
    goto LABEL_27;
  v36 = v34;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35->fields.limitCount, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v36, v37, 0LL);
  if ( !v31 )
    goto LABEL_27;
  v46 = (System_Int32_array **)CommandCardLoadFolderName;
  if ( CommandCardLoadFolderName )
  {
    CommandCardLoadFolderName = (System_String_o *)sub_B170BC(
                                                     CommandCardLoadFolderName,
                                                     v31->obj.klass->_1.element_class);
    if ( !CommandCardLoadFolderName )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v31->max_length )
  {
    sub_B17100(CommandCardLoadFolderName, v39, v40);
    sub_B170A0();
  }
  v31->m_Items[0] = (System_String_o *)v46;
  sub_B16F98((BattleServantConfConponent_o *)v31->m_Items, v46, v40, v41, v42, v43, v44, v45);
  v47 = this->fields.baseServantAssets;
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(v47, v52, 1, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onRequestCombine,
    (System_Int32_array **)onRequestCombine,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommandCardExceedControl__SetCombineButtonState(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isEnable,
        bool isExceedMax,
        const MethodInfo *method)
{
  struct UICommonButton_o *combineButton; // x0
  __int64 v9; // x1
  CommandCardExceedControl_o *v10; // x0
  UISprite_o *combineTextImage; // x22
  const MethodInfo *v12; // x3
  System_String_o *CombineButtonLabelText; // x0
  struct UISprite_o *v14; // x0

  combineButton = this->fields.combineButton;
  if ( !combineButton
    || (!isEnable ? (v9 = 3LL) : (v9 = 0LL),
        (v10 = (CommandCardExceedControl_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer, const MethodInfo *))combineButton->klass->vtable._14_SetState.method)(
                                               combineButton,
                                               v9,
                                               1LL,
                                               combineButton->klass->vtable._15_OnPress.methodPtr,
                                               method),
         combineTextImage = this->fields.combineTextImage,
         CombineButtonLabelText = CommandCardExceedControl__GetCombineButtonLabelText(v10, stateType, isExceedMax, v12),
         !combineTextImage)
     || (UISprite__set_spriteName(combineTextImage, CombineButtonLabelText, 0LL),
         (v14 = this->fields.combineTextImage) == 0LL)) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v14->klass->vtable._33_MakePixelPerfect.method)(
    v14,
    v14->klass->vtable._34_get_minWidth.methodPtr);
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
  struct UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t CommandCardLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t v17; // w0
  int32_t ServantImageLimitSealAfter; // w22
  WebViewManager_o *v19; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x23
  int32_t v21; // w0
  WarEntity_o *Entity; // x23
  WebViewManager_o *v23; // x0
  WarQuestSelectionMaster_o *v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v33; // x24
  unsigned __int64 max_length; // x9
  __int64 v35; // x10
  unsigned __int64 v36; // x11
  int32_t v37; // w26
  CombineCommandCardComponent_o *v38; // x25
  System_Int32_array **gameObject; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t v46; // w28
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  BattleCommandData_o *v51; // x27
  const MethodInfo *v52; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v54; // x2
  int32_t CommandCodeId; // w28
  const MethodInfo *v56; // x2
  int32_t CommandCardParam; // w0
  System_Action_o *onAssetLoadEnd; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_40FA58C & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA58C = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v11;
  *(_QWORD *)&v59.fields.fakeValue = v12;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 v17,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_31;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v19,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  *(_QWORD *)&v60.fields.currentCryptoKey = v11;
  *(_QWORD *)&v60.fields.fakeValue = v12;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
  if ( !v20
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v20,
                   v21,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v23,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___),
        (commandCardComponents = this->fields.commandCardComponents) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  v33 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v33 >= (int)max_length )
      break;
    if ( !Entity )
      goto LABEL_31;
    v35 = *(_QWORD *)&Entity[1].fields.id;
    if ( !v35 )
      break;
    v36 = *(unsigned int *)(v35 + 24);
    if ( (__int64)v33 >= (int)v36 )
      break;
    if ( v33 >= v36 )
      goto LABEL_35;
    v37 = *(_DWORD *)(v35 + 4 * v33 + 32);
    if ( (unsigned int)(v37 - 1) <= 2 )
    {
      if ( v33 >= max_length )
      {
LABEL_35:
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      v38 = commandCardComponents->m_Items[v33];
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v38 )
        goto LABEL_31;
      v38->fields.target = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B16F98((BattleServantConfConponent_o *)&v38->fields.target, gameObject, v40, v41, v42, v43, v44, v45);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v61.fields.currentCryptoKey = v11;
      *(_QWORD *)&v61.fields.fakeValue = v12;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
      v51 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v47, v48, v49, v50);
      BattleCommandData___ctor_18691260(v51, v37, v46, ServantImageLimitSealAfter, 0, 0LL);
      if ( !v51 )
        goto LABEL_31;
      v51->fields.markindex = v33;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v33, v52);
      CommandCodeId = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v54);
      CommandCardParam = CommandCardExceedControl__GetCommandCardParam(this, v33, v56);
      v51->fields.commandCodeId = CommandCodeId;
      v51->fields.commandCardParam = CommandCardParam;
      v51->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v38, v51, UserCommandCodeId, CommandCardParam, 1, 1, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v33;
    if ( !commandCardComponents )
      goto LABEL_31;
  }
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd, 0LL, v26, v27, v28, v29, v30, v31);
    System_Action__Invoke(onAssetLoadEnd, 0LL);
  }
}


void __fastcall CommandCardExceedControl__SetEventDelegate(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UICommonButton_o *combineButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *v18; // x20
  EventDelegate_Callback_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct UITouchPress_o *v24; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v26; // x21
  UnityEngine_GameObject_o *helpBtn; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventDelegate__o *v33; // x20
  EventDelegate_Callback_o *v34; // x21

  if ( (byte_40FA580 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_CombineMenuControl_OnLongPushListView__, v6);
    sub_B16FFC(&Method_CommandCardExceedControl_OnClickCombine__, v7);
    sub_B16FFC(&EventDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v9);
    byte_40FA580 = 1;
  }
  combineButton = this->fields.combineButton;
  if ( !combineButton )
    goto LABEL_12;
  onClick = combineButton->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, method, v2, v3, v4);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)this, Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(onClick, v12, 0LL);
  baseServantTouchPress = this->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_12;
  v18 = baseServantTouchPress->fields.onClick;
  v19 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v13, v14, v15, v16);
  EventDelegate_Callback___ctor(v19, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  EventDelegate__Set_29416612(v18, v19, 0LL);
  v24 = this->fields.baseServantTouchPress;
  if ( !v24
    || (onLongPress = v24->fields.onLongPress,
        v26 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v20, v21, v22, v23),
        EventDelegate_Callback___ctor(v26, (Il2CppObject *)this, Method_CombineMenuControl_OnLongPushListView__, 0LL),
        EventDelegate__Set_29416612(onLongPress, v26, 0LL),
        (helpBtn = this->fields.helpBtn) == 0LL)
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    helpBtn,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  v33 = *(System_Collections_Generic_List_EventDelegate__o **)&Component_srcLineSprite->fields.mcTo.fields.y;
  v34 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v29, v30, v31, v32);
  EventDelegate_Callback___ctor(
    v34,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_29416612(v33, v34, 0LL);
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
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v13; // x1
  int32_t qp; // w21
  CommandCardRankParamEntity_o *CardIndex; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x5
  int32_t useQp; // w24
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v24; // x24
  struct System_Int32_array *commandCardParam; // x25
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w1
  UILabel_o *detailLabel; // x25
  System_String_o *DetailLabelText; // x0
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v32; // x0
  const MethodInfo *v33; // x2
  System_String_o *TargetSelectInfoLabelText; // x0
  UILabel_o *userQpLabel; // x22
  System_String_o *NumberFormat; // x0
  UILabel_o *requiredQpLabel; // x22
  System_String_o *v38; // x1
  UIWidget_o *v39; // x22
  int v40; // s0
  const MethodInfo *v44; // x2

  if ( (byte_40FA584 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, *(_QWORD *)&stateType);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FA584 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_34:
    sub_B170D4();
  qp = SelfUserGame->fields.qp;
  CardIndex = (CommandCardRankParamEntity_o *)CommandCardExceedControl__get_CardIndex(this, v13);
  if ( ((unsigned int)CardIndex & 0x80000000) != 0
    || (CardIndex = (CommandCardRankParamEntity_o *)CommandCardExceedControl__GetIsExceedMax(this, v16),
        ((unsigned __int8)CardIndex & 1) != 0) )
  {
    useQp = 0;
    goto LABEL_16;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v24 = (CommandCardRankParamMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    v26 = CommandCardExceedControl__get_CardIndex(this, v21);
    if ( !commandCardParam )
      goto LABEL_34;
    if ( (unsigned int)v26 >= commandCardParam->max_length )
    {
      sub_B17100(v26, v27, v22);
      sub_B170A0();
    }
    v28 = commandCardParam->m_Items[(int)v26 + 1];
    if ( !v24 )
      goto LABEL_34;
  }
  else
  {
    v28 = 0;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_34;
  }
  CardIndex = CommandCardRankParamMaster__GetRankParamEntity(v24, v28, v22);
  if ( !CardIndex )
    goto LABEL_34;
  useQp = CardIndex->fields.useQp;
LABEL_16:
  detailLabel = this->fields.detailLabel;
  DetailLabelText = CommandCardExceedControl__GetDetailLabelText(
                      (CommandCardExceedControl_o *)CardIndex,
                      stateType,
                      isItemEnough,
                      isExceedMax,
                      qp >= useQp,
                      v17);
  if ( !detailLabel )
    goto LABEL_34;
  UILabel__set_text(detailLabel, DetailLabelText, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  TargetSelectInfoLabelText = CommandCardExceedControl__GetTargetSelectInfoLabelText(v32, stateType, v33);
  if ( !targetSelectInfoLabel )
    goto LABEL_34;
  UILabel__set_text(targetSelectInfoLabel, TargetSelectInfoLabelText, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(qp, 0LL);
  if ( !userQpLabel )
    goto LABEL_34;
  UILabel__set_text(userQpLabel, NumberFormat, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( useQp <= 0 )
  {
    v38 = (System_String_o *)StringLiteral_1/*""*/;
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
    v38 = LocalizationManager__GetNumberFormat(useQp, 0LL);
    if ( !requiredQpLabel )
      goto LABEL_34;
  }
  UILabel__set_text(requiredQpLabel, v38, 0LL);
  v39 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( qp < useQp )
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_red(0LL);
    if ( !v39 )
      goto LABEL_34;
  }
  else
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
    if ( !v39 )
      goto LABEL_34;
  }
  UIWidget__set_color(v39, *(UnityEngine_Color_o *)&v40, 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v44);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetSelectedFrameActive(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  __int64 v5; // x20
  int max_length; // w9
  CombineCommandCardComponent_o *v8; // x0

  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&cardIndex, method);
      sub_B170A0();
    }
    v8 = commandCardComponents->m_Items[v5];
    if ( v8 )
    {
      CombineCommandCardComponent__SetSelectedSprite(v8, cardIndex == (_DWORD)v5, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
      ++v5;
      if ( commandCardComponents )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall CommandCardExceedControl__SetUseItemTitle(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *useItemTitleSelect; // x0
  UnityEngine_GameObject_o *v8; // x0

  useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal
    || (gameObject = UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, stateType != 2, 0LL),
        (useItemTitleSelect = (UnityEngine_Component_o *)this->fields.useItemTitleSelect) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(useItemTitleSelect, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, stateType == 2, 0LL);
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
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  int v15; // w23
  _BOOL4 v16; // w22
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-50h]

  if ( (byte_40FA588 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    byte_40FA588 = 1;
  }
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  if ( selectedUserServantEntity )
  {
    if ( *p_baseUserServantEntity )
    {
      v11 = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v11;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v27 = v28;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v27, 0LL);
      v13 = *p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        sub_B170D4();
      v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v14;
      v15 = 0;
      v16 = v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL);
    }
    else
    {
      v15 = 0;
      v16 = 0;
    }
  }
  else
  {
    v16 = 0;
    v15 = 1;
  }
  this->fields.baseUserServantEntity = selectedUserServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
    (System_Int32_array **)selectedUserServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v17);
  CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v18);
  if ( v16 | v15 )
  {
    this->fields.selectedCommandCard = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v19, v20, v21, v22, v23, v24);
    CommandCardExceedControl__InitExceedItem(this, v25);
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
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  int64_t v14; // x22
  int32_t v15; // w0
  WebViewManager_o *v16; // x0
  UserServantCommandCodeMaster_o *v17; // x21
  int64_t v18; // x0
  __int64 v19; // x8
  int64_t v20; // x20
  int32_t v21; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40FA589 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, userServantEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA589 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v14 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v13;
    *(_QWORD *)&v22.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    UserServantCommandCardMaster__TryGetEntity(
      MasterData_WarQuestSelectionMaster,
      &this->fields.baseUserServantCommandCardEntity,
      v14,
      v15,
      0LL);
    v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v16
      || (v17 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)v16,
                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v18 = NetworkManager__get_UserId(0LL),
          v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v20 = v18,
          *(_QWORD *)&v23.fields.currentCryptoKey = v19,
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL),
          !v17) )
    {
LABEL_16:
      sub_B170D4();
    }
    UserServantCommandCodeMaster__TryGetEntity(v17, &this->fields.baseUserServantCommandCodeEntity, v20, v21, 0LL);
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
  BattleCommandComponent_o *v4; // x0

  if ( (byte_40FA591 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA591 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v4 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v4 )
    sub_B170D4();
  return BattleCommandComponent__getMarkIndex(v4, 0LL);
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
  sub_B16F98(
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
  BattleCommandComponent_o **p_selectedCommandCard; // x21
  int64_t MarkIndex; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  struct CombineCommandCardComponent_o *v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_GameObject_o *targetSelectInfoBase; // x0
  UnityEngine_GameObject_o *exceedItemBase; // x0
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_array *EntityList; // x22
  WebViewManager_o *v31; // x0
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v34; // w20
  __int64 v35; // x2
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v37; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v39; // x1
  struct System_Int32_array *v40; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int max_length; // w10
  __int64 v49; // x8
  ItemEntity_o *v50; // x10
  struct System_Int32_array *v51; // x11
  char *v52; // x11
  int32_t useItemNum; // w22
  WebViewManager_o *v54; // x0
  UserItemMaster_o *v55; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v57; // x4
  bool v58; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  __int64 v60; // x27
  int v61; // w9
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v64; // w1
  struct System_Int32_array *v65; // x8
  struct System_Int32_array *v66; // x8
  struct LimitCntUpItemComponent_array *v67; // x8
  LimitCntUpItemComponent_o *v68; // x24
  struct System_Int32_array *v69; // x8
  const MethodInfo *v70; // x4
  bool v71; // w2
  UserGameEntity_o *SelfUserGame; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FA593 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&cardIndex);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    byte_40FA593 = 1;
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
    p_selectedCommandCard = (BattleCommandComponent_o **)&this->fields.selectedCommandCard;
    MarkIndex = UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL);
    if ( (MarkIndex & 1) == 0 )
      goto LABEL_13;
    if ( !*p_selectedCommandCard )
      goto LABEL_82;
    MarkIndex = BattleCommandComponent__getMarkIndex(*p_selectedCommandCard, 0LL);
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
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.selectedCommandCard,
          (System_Int32_array **)v24,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        CommandCardExceedControl__SetSelectedFrameActive(this, cardIndex, v25);
        targetSelectInfoBase = this->fields.targetSelectInfoBase;
        if ( !targetSelectInfoBase )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
        exceedItemBase = this->fields.exceedItemBase;
        if ( !exceedItemBase )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive(exceedItemBase, 1, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_82;
        MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_82;
        EntityList = ItemMaster__GetEntityList(MasterData_WarQuestSelectionMaster, 25, 0LL);
        v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v31 )
          goto LABEL_82;
        MarkIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v31,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v34 = 0;
          if ( !MarkIndex )
            goto LABEL_82;
          goto LABEL_26;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_82;
        if ( commandCardParam->max_length > cardIndex )
        {
          v34 = commandCardParam->m_Items[cardIndex + 1];
          if ( !MarkIndex )
            goto LABEL_82;
LABEL_26:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)MarkIndex,
                              v34,
                              (const MethodInfo *)v17);
          v37 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v37 = BalanceConfig_TypeInfo;
          }
          CommandCardParamUpMax = v37->static_fields->CommandCardParamUpMax;
          if ( EntityList )
          {
            v39 = *(_QWORD *)&EntityList->max_length;
            if ( v39 )
            {
              v40 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, v39, v35);
              p_ExceedItemIds_k__BackingField = &this->fields._ExceedItemIds_k__BackingField;
              this->fields._ExceedItemIds_k__BackingField = v40;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields._ExceedItemIds_k__BackingField,
                (System_Int32_array **)v40,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v49 = 0LL;
                while ( (unsigned int)v49 < max_length )
                {
                  v50 = EntityList->m_Items[v49];
                  if ( !v50 )
                    goto LABEL_82;
                  v51 = *p_ExceedItemIds_k__BackingField;
                  if ( !*p_ExceedItemIds_k__BackingField )
                    goto LABEL_82;
                  if ( (unsigned int)v49 >= v51->max_length )
                    goto LABEL_83;
                  v52 = (char *)v51 + 4 * v49++;
                  *((_DWORD *)v52 + 8) = v50->fields.id;
                  max_length = EntityList->max_length;
                  if ( (int)v49 >= max_length )
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
          v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v54 )
          {
            v55 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v54,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
              if ( !v55 )
                goto LABEL_82;
              MarkIndex = UserItemMaster__TryGetEntity(
                            v55,
                            &entity,
                            MarkIndex,
                            ExceedItemIds_k__BackingField->m_Items[1],
                            0LL);
              if ( (MarkIndex & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_82;
                v58 = entity->fields.num >= useItemNum;
              }
              else
              {
                v58 = 0;
              }
              exceedItemComponents = this->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v60 = 0LL;
                while ( 1 )
                {
                  v61 = exceedItemComponents->max_length;
                  if ( (int)v60 >= v61 )
                    break;
                  if ( (unsigned int)v60 >= v61 )
                    goto LABEL_83;
                  v62 = (UnityEngine_Component_o *)exceedItemComponents->m_Items[v60];
                  if ( !v62 )
                    goto LABEL_82;
                  gameObject = UnityEngine_Component__get_gameObject(v62, 0LL);
                  if ( v34 < CommandCardParamUpMax )
                  {
                    v65 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v65 )
                      goto LABEL_82;
                    v64 = (int)v60 < (signed int)v65->max_length;
                    if ( !gameObject )
                      goto LABEL_82;
                  }
                  else
                  {
                    v64 = 0;
                    if ( !gameObject )
                      goto LABEL_82;
                  }
                  UnityEngine_GameObject__SetActive(gameObject, v64, 0LL);
                  v66 = this->fields._ExceedItemIds_k__BackingField;
                  if ( !v66 )
                    goto LABEL_82;
                  if ( (int)v60 < (signed int)v66->max_length )
                  {
                    v67 = this->fields.exceedItemComponents;
                    if ( !v67 )
                      goto LABEL_82;
                    if ( (unsigned int)v60 >= v67->max_length )
                      goto LABEL_83;
                    v68 = v67->m_Items[v60];
                    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    }
                    MarkIndex = NetworkManager__get_UserId(0LL);
                    v69 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v69 )
                      goto LABEL_82;
                    if ( (unsigned int)v60 >= v69->max_length )
                      goto LABEL_83;
                    if ( !v68 )
                      goto LABEL_82;
                    LimitCntUpItemComponent__setLimitUpItemInfo(v68, MarkIndex, v69->m_Items[v60 + 1], useItemNum, 0LL);
                  }
                  exceedItemComponents = this->fields.exceedItemComponents;
                  ++v60;
                  if ( !exceedItemComponents )
                    goto LABEL_82;
                }
                CommandCardExceedControl__SetInfoMessageLabels(this, 2, v58, v34 >= CommandCardParamUpMax, v57);
                v71 = 0;
                if ( v34 >= CommandCardParamUpMax || !v58 || this->fields.baseUserServantEntity == 0LL )
                  goto LABEL_80;
                SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
                if ( SelfUserGame && RankParamEntity )
                {
                  v71 = SelfUserGame->fields.qp >= RankParamEntity->fields.useQp;
LABEL_80:
                  CommandCardExceedControl__SetCombineButtonState(this, 2, v71, v34 >= CommandCardParamUpMax, v70);
                  return;
                }
              }
            }
          }
LABEL_82:
          sub_B170D4();
        }
      }
LABEL_83:
      sub_B17100(MarkIndex, v16, v17);
      sub_B170A0();
    }
  }
}