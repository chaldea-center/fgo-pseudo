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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  __int64 *v9; // x8

  if ( (byte_42E8BBB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17362/*"buttontxt_synthesis"*/, stateType, isExceedMax, method);
    sub_B5D5C4(&StringLiteral_17359/*"buttontxt_notsynthesis"*/, v6, v7, v8);
    byte_42E8BBB = 1;
  }
  v9 = &StringLiteral_17362/*"buttontxt_synthesis"*/;
  if ( stateType == 2 && isExceedMax )
    v9 = &StringLiteral_17359/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v9;
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return commandCardParam->m_Items[cardIndex + 1];
}


int32_t __fastcall CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *userCommandCodeMaster; // x0
  __int64 v10; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42E8BC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42E8BC1 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(userCommandCodeMaster, userCommandCodeId, (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B5D69C(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v10 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
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
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  __int64 *v28; // x8

  if ( (byte_42E8BB9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stateType, isItemEnough, isExceedMax);
    sub_B5D5C4(&StringLiteral_3281/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_3282/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3288/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3287/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/, v25, v26, v27);
    byte_42E8BB9 = 1;
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
        v28 = &StringLiteral_3288/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
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
          v28 = &StringLiteral_3281/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v28 = &StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/;
        }
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = &StringLiteral_3287/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v28, 0LL);
    case 0:
LABEL_6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = &StringLiteral_3282/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v28, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall CommandCardExceedControl__GetIsAllParamMax(CommandCardExceedControl_o *this, const MethodInfo *method)
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
  int64_t Instance; // x0
  __int64 v18; // x1
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int64_t v21; // x19
  __int64 v22; // x21
  __int64 v23; // x22
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v26; // x20
  int32_t v27; // w23
  __int64 v29; // x0
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42E8BC4 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E8BC4 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_25;
  v21 = Instance;
  v23 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v23;
  *(_QWORD *)&v31.fields.fakeValue = v22;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Instance = UserServantCommandCardMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               v21,
               (int)Instance,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_25:
    sub_B5D69C(Instance, v18);
  commandCardParam = entity->fields.commandCardParam;
  if ( commandCardParam )
  {
    max_length = commandCardParam->max_length;
    if ( max_length < 1 )
      return 1;
    v26 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= max_length )
      {
        v29 = sub_B5D6C8(Instance);
        sub_B5D668(v29, 0LL);
      }
      Instance = (int64_t)BalanceConfig_TypeInfo;
      v27 = commandCardParam->m_Items[v26 + 1];
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v27 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 700LL) )
        break;
      max_length = commandCardParam->max_length;
      if ( (int)++v26 >= max_length )
        return 1;
    }
  }
  return 0;
}


bool __fastcall CommandCardExceedControl__GetIsCombineEnable(
        CommandCardExceedControl_o *this,
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
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v21; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x20
  int64_t CardIndex; // x0
  int32_t v25; // w20
  BalanceConfig_c *v26; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  struct UserServantCommandCardEntity_o *v31; // x8
  CommandCardRankParamMaster_o *v32; // x20
  struct System_Int32_array *v33; // x21
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int32_array *v37; // x8
  __int64 v39; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8BC2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E8BC2 = 1;
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
      CardIndex = CommandCardExceedControl__get_CardIndex(this, v21);
      if ( (unsigned int)CardIndex >= commandCardParam->max_length )
        goto LABEL_39;
      v25 = commandCardParam->m_Items[(int)CardIndex + 1];
      v26 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      if ( v25 >= v26->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !*(_QWORD *)&ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  CardIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)CardIndex,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v31 = this->fields.baseUserServantCommandCardEntity;
  v32 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v31 )
  {
    v33 = v31->fields.commandCardParam;
    CardIndex = CommandCardExceedControl__get_CardIndex(this, v29);
    if ( !v33 )
      goto LABEL_38;
    if ( (unsigned int)CardIndex >= v33->max_length )
      goto LABEL_39;
    v28 = (unsigned int)v33->m_Items[(int)CardIndex + 1];
    if ( !v32 )
      goto LABEL_38;
  }
  else
  {
    v28 = 0LL;
    if ( !CardIndex )
      goto LABEL_38;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v32, v28, v30);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)CardIndex,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  CardIndex = NetworkManager__get_UserId(0LL);
  v37 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v37 )
LABEL_38:
    sub_B5D69C(CardIndex, v28);
  if ( !v37->max_length )
  {
LABEL_39:
    v39 = sub_B5D6C8(CardIndex);
    sub_B5D668(v39, 0LL);
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  CardIndex = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, CardIndex, v37->m_Items[1], 0LL);
  if ( (CardIndex & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_38;
  return entity->fields.num >= useItemNum;
}


bool __fastcall CommandCardExceedControl__GetIsExceedMax(CommandCardExceedControl_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v15; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v20; // x20
  struct System_Int32_array *commandCardParam; // x21
  int32_t v22; // w19
  BalanceConfig_c *v23; // x0
  __int64 v25; // x0

  if ( (byte_42E8BC3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8BC3 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v15) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v20 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v17);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
      {
        v25 = sub_B5D6C8(Instance);
        sub_B5D668(v25, 0LL);
      }
      v22 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v20 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B5D69C(Instance, v17);
  }
  v22 = 0;
  if ( !Instance )
    goto LABEL_19;
LABEL_13:
  CommandCardRankParamMaster__GetRankParamEntity(v20, v22, v18);
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  return v22 >= v23->static_fields->CommandCardParamUpMax;
}


System_String_o *__fastcall CommandCardExceedControl__GetTargetSelectInfoLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
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
  __int64 *v14; // x8

  if ( (byte_42E8BBA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stateType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3283/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3285/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E8BBA = 1;
  }
  if ( stateType == 4 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_3285/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( !stateType )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_3283/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
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
    sub_B5D69C(0LL, v8);
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

  if ( (byte_42E8BB7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8BB7 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      p_charaGraphTexture->klass = 0LL;
      sub_B5D560(p_charaGraphTexture, 0LL, v14, v15, v16, v17, v18, v19);
      return;
    }
LABEL_13:
    sub_B5D69C(baseSelectInfoObject, v9);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WebViewManager_o *Instance; // x0
  __int64 v25; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v28; // w22
  Il2CppClass **v29; // x8
  CombineCommandCardComponent_o *v30; // x20
  BattleServantConfConponent_o *p_userCommandCodeMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0

  if ( (byte_42E8BB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8BB6 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCardEntity,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCommandCard = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantCommandCodeEntity,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_13;
  max_length = commandCardComponents->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= max_length )
      {
        v39 = sub_B5D6C8(Instance);
        sub_B5D668(v39, 0LL);
      }
      v29 = &commandCardComponents->obj.klass + (int)v28;
      v30 = (CombineCommandCardComponent_o *)v29[4];
      if ( !v30 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v29[4], 0, 0LL);
      CombineCommandCardComponent__SetCommandCardEnable(v30, 0, 0LL);
      max_length = commandCardComponents->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_B5D69C(Instance, v25);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B5D560(p_userCommandCodeMaster, MasterData_WarQuestSelectionMaster, v33, v34, v35, v36, v37, v38);
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
    sub_B5D69C(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *detailLabel; // x0

  if ( (byte_42E8BB5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E8BB5 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_B5D69C(detailLabel, method);
  }
  UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CommandCardExceedControl__OnClickCombine(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v6; // x1
  struct CombineCommandCardComponent_o *selectedCommandCard; // x8
  CommandCardExceedConfirmDialog_o *commandCardExceedConfirmDialog; // x20
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x21
  BattleCommandData_o *data; // x22
  int32_t CardIndex; // w0
  const MethodInfo *v12; // x2
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  int32_t v14; // w24
  int64_t v15; // x23
  const MethodInfo *v16; // x7
  __int64 v17; // x0

  if ( (byte_42E8BC6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BC6 = 1;
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
  CardIndex = CommandCardExceedControl__get_CardIndex(this, v6);
  UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, CardIndex, v12);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_11;
  if ( !ExceedItemIds_k__BackingField->max_length )
  {
    v17 = sub_B5D6C8(UserCommandCodeId);
    sub_B5D668(v17, 0LL);
  }
  v14 = ExceedItemIds_k__BackingField->m_Items[1];
  v15 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v6);
  if ( !commandCardExceedConfirmDialog )
LABEL_11:
    sub_B5D69C(UserCommandCodeId, v6);
  CommandCardExceedConfirmDialog__Open(
    commandCardExceedConfirmDialog,
    baseUserServantCommandCardEntity,
    data,
    v15,
    v14,
    UserCommandCodeId,
    this->fields.onRequestCombine,
    v16);
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
    sub_B5D69C(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v12);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0LL, v13);
}


void __fastcall CommandCardExceedControl__SetBaseServantCardImage(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
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
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  ServantLimitImageMaster_o *v20; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v23; // w21
  struct UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26715804; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_42E8BBE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      (_DWORD)userServantEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8BBE = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_18;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)baseSelectInfoObject,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v20 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v19;
    *(_QWORD *)&v32.fields.fakeValue = v18;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         v32,
                                                         0LL);
    if ( !v20 )
      goto LABEL_18;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   v20,
                                   (int32_t)baseSelectInfoObject,
                                   CardImageLimitCount,
                                   0LL);
    charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
    v23 = ServantImageLimitSealAfter;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_charaGraphTexture = &this->fields.charaGraphTexture;
    if ( UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
    {
      TexturePrefab_26715804 = CharaGraphManager__CreateTexturePrefab_26715804(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v23,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_26715804;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.charaGraphTexture,
        (System_Int32_array **)TexturePrefab_26715804,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      return;
    }
    baseSelectInfoObject = (UnityEngine_GameObject_o *)*p_charaGraphTexture;
    if ( !*p_charaGraphTexture )
LABEL_18:
      sub_B5D69C(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_35988116(
      (UICharaGraphTexture_o *)baseSelectInfoObject,
      userServantEntity,
      v23,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_String_array *baseServantAssets; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v40; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct System_String_array *v42; // x20
  __int64 v43; // x21
  __int64 v44; // x22
  struct UserServantEntity_o *v45; // x8
  int32_t v46; // w21
  int32_t v47; // w22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x21
  System_String_array *v55; // x20
  System_Action_o *v56; // x21
  __int64 v57; // x0
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_42E8BBF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)onAssetLoadEnd, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_CommandCardExceedControl_SetCommandCards__, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&string___TypeInfo, v22, v23, v24);
    byte_42E8BBF = 1;
  }
  baseServantAssets = this->fields.baseServantAssets;
  if ( baseServantAssets )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30666128(baseServantAssets, 0LL);
    this->fields.baseServantAssets = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseServantAssets, 0LL, v26, v27, v28, v29, v30, v31);
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
    sub_B5D69C(CommandCardLoadFolderName, v40);
  }
  this->fields.onAssetLoadEnd = onAssetLoadEnd;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd,
    (System_Int32_array **)onAssetLoadEnd,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v32 = (struct System_String_array *)sub_B5D5DC(string___TypeInfo, 1LL);
  this->fields.baseServantAssets = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseServantAssets,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v42 = this->fields.baseServantAssets;
  v44 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v44;
  *(_QWORD *)&v59.fields.fakeValue = v43;
  CommandCardLoadFolderName = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v59,
                                                   0LL);
  v45 = this->fields.baseUserServantEntity;
  if ( !v45 )
    goto LABEL_27;
  v46 = (int)CommandCardLoadFolderName;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45->fields.limitCount, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v46, v47, 0LL);
  if ( !v42 )
    goto LABEL_27;
  v54 = (System_Int32_array **)CommandCardLoadFolderName;
  if ( CommandCardLoadFolderName )
  {
    CommandCardLoadFolderName = (System_String_o *)sub_B5D684(
                                                     CommandCardLoadFolderName,
                                                     v42->obj.klass->_1.element_class);
    if ( !CommandCardLoadFolderName )
    {
      v58 = sub_B5D6BC(0LL);
      sub_B5D668(v58, 0LL);
    }
  }
  if ( !v42->max_length )
  {
    v57 = sub_B5D6C8(CommandCardLoadFolderName);
    sub_B5D668(v57, 0LL);
  }
  v42->m_Items[0] = (System_String_o *)v54;
  sub_B5D560((BattleServantConfConponent_o *)v42->m_Items, v54, v48, v49, v50, v51, v52, v53);
  v55 = this->fields.baseServantAssets;
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(v55, v56, 1, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(combineButton, *(_QWORD *)&stateType);
  }
  ((void (__fastcall *)(System_String_o *, void *))combineButton->klass[1]._1.typeMetadataHandle)(
    combineButton,
    combineButton->klass[1]._1.interopData);
}


void __fastcall CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
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
  UserServantEntity_o *baseUserServantEntity; // x0
  __int64 v27; // x20
  __int64 v28; // x21
  int32_t CommandCardLimitCount; // w22
  int32_t LimitCountByImageLimitCostumeIn; // w22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t ServantImageLimitSealAfter; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x23
  WarEntity_o *Entity; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v42; // x24
  unsigned __int64 max_length; // x9
  __int64 v44; // x10
  unsigned __int64 v45; // x11
  int32_t v46; // w26
  CombineCommandCardComponent_o *v47; // x25
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t v54; // w28
  BattleCommandData_o *v55; // x27
  const MethodInfo *v56; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v58; // x2
  int32_t CommandCodeId; // w28
  const MethodInfo *v60; // x2
  int32_t CommandCardParam; // w0
  System_Action_o *onAssetLoadEnd; // x20
  __int64 v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_42E8BC0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E8BC0 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_31;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(baseUserServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)baseUserServantEntity,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v27;
  *(_QWORD *)&v64.fields.fakeValue = v28;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v64,
                                                   0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)baseUserServantEntity,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_31;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)baseUserServantEntity,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  *(_QWORD *)&v65.fields.currentCryptoKey = v27;
  *(_QWORD *)&v65.fields.fakeValue = v28;
  baseUserServantEntity = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v65,
                                                   0LL);
  if ( !v33
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v33,
                   (int32_t)baseUserServantEntity,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (baseUserServantEntity = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)baseUserServantEntity,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___),
        (commandCardComponents = this->fields.commandCardComponents) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(baseUserServantEntity, method);
  }
  v42 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v42 >= (int)max_length )
      break;
    if ( !Entity )
      goto LABEL_31;
    v44 = *(_QWORD *)&Entity[1].fields.id;
    if ( !v44 )
      break;
    v45 = *(unsigned int *)(v44 + 24);
    if ( (__int64)v42 >= (int)v45 )
      break;
    if ( v42 >= v45 )
      goto LABEL_35;
    v46 = *(_DWORD *)(v44 + 4 * v42 + 32);
    if ( (unsigned int)(v46 - 1) <= 2 )
    {
      if ( v42 >= max_length )
      {
LABEL_35:
        v63 = sub_B5D6C8(baseUserServantEntity);
        sub_B5D668(v63, 0LL);
      }
      v47 = commandCardComponents->m_Items[v42];
      baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !v47 )
        goto LABEL_31;
      v47->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v47->fields.target,
        (System_Int32_array **)baseUserServantEntity,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v66.fields.currentCryptoKey = v27;
      *(_QWORD *)&v66.fields.fakeValue = v28;
      v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
      v55 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_18880712(v55, v46, v54, ServantImageLimitSealAfter, 0, 0LL);
      if ( !v55 )
        goto LABEL_31;
      v55->fields.markindex = v42;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v42, v56);
      CommandCodeId = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v58);
      CommandCardParam = CommandCardExceedControl__GetCommandCardParam(this, v42, v60);
      v55->fields.commandCodeId = CommandCodeId;
      v55->fields.commandCardParam = CommandCardParam;
      v55->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v47, v55, UserCommandCodeId, CommandCardParam, 1, 1, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v42;
    if ( !commandCardComponents )
      goto LABEL_31;
  }
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.onAssetLoadEnd, 0LL, v35, v36, v37, v38, v39, v40);
    System_Action__Invoke(onAssetLoadEnd, 0LL);
  }
}


void __fastcall CommandCardExceedControl__SetEventDelegate(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommandCardExceedControl_o *v4; // x19
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
  struct UICommonButton_o *combineButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v19; // x21
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *v21; // x20
  EventDelegate_Callback_o *v22; // x21
  struct UITouchPress_o *v23; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v25; // x21
  System_Collections_Generic_List_EventDelegate__o *v26; // x20
  EventDelegate_Callback_o *v27; // x21

  v4 = this;
  if ( (byte_42E8BB4 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CombineMenuControl_OnLongPushListView__, v5, v6, v7);
    sub_B5D5C4(&Method_CommandCardExceedControl_OnClickCombine__, v8, v9, v10);
    sub_B5D5C4(&EventDelegate_TypeInfo, v11, v12, v13);
    this = (CommandCardExceedControl_o *)sub_B5D5C4(
                                           &Method_UnityEngine_GameObject_GetComponent_UICommonButton___,
                                           v14,
                                           v15,
                                           v16);
    byte_42E8BB4 = 1;
  }
  combineButton = v4->fields.combineButton;
  if ( !combineButton )
    goto LABEL_12;
  onClick = combineButton->fields.onClick;
  v19 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v19, (Il2CppObject *)v4, Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  this = (CommandCardExceedControl_o *)EventDelegate__Set_29826436(onClick, v19, 0LL);
  baseServantTouchPress = v4->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_12;
  v21 = baseServantTouchPress->fields.onClick;
  v22 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v22, (Il2CppObject *)v4, (intptr_t)v4->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_29826436(v21, v22, 0LL);
  v23 = v4->fields.baseServantTouchPress;
  if ( !v23
    || (onLongPress = v23->fields.onLongPress,
        v25 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v25, (Il2CppObject *)v4, Method_CombineMenuControl_OnLongPushListView__, 0LL),
        EventDelegate__Set_29826436(onLongPress, v25, 0LL),
        (this = (CommandCardExceedControl_o *)v4->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  v26 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields._targetType_k__BackingField;
  v27 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v27,
    (Il2CppObject *)v4,
    (intptr_t)v4->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_29826436(v26, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetInfoMessageLabels(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  void *SelfUserGame; // x0
  MethodInfo *v19; // x1
  int32_t v20; // w21
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x5
  int32_t v23; // w24
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v27; // x24
  struct System_Int32_array *commandCardParam; // x25
  UILabel_o *detailLabel; // x25
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v31; // x0
  const MethodInfo *v32; // x2
  UILabel_o *userQpLabel; // x22
  UILabel_o *requiredQpLabel; // x22
  UIWidget_o *v35; // x22
  int v36; // s0
  const MethodInfo *v40; // x2
  __int64 v41; // x0

  if ( (byte_42E8BB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, stateType, isItemEnough, isExceedMax);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42E8BB8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_34:
    sub_B5D69C(SelfUserGame, v19);
  v20 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v19);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v21),
        ((unsigned __int8)SelfUserGame & 1) != 0) )
  {
    v23 = 0;
    goto LABEL_16;
  }
  SelfUserGame = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_34;
  SelfUserGame = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v27 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v24);
    if ( !commandCardParam )
      goto LABEL_34;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
    {
      v41 = sub_B5D6C8(SelfUserGame);
      sub_B5D668(v41, 0LL);
    }
    v19 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame + 1];
    if ( !v27 )
      goto LABEL_34;
  }
  else
  {
    v19 = 0LL;
    if ( !SelfUserGame )
      goto LABEL_34;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v27, (int32_t)v19, v25);
  if ( !SelfUserGame )
    goto LABEL_34;
  v23 = *((_DWORD *)SelfUserGame + 11);
LABEL_16:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = CommandCardExceedControl__GetDetailLabelText(
                   (CommandCardExceedControl_o *)SelfUserGame,
                   stateType,
                   isItemEnough,
                   isExceedMax,
                   v20 >= v23,
                   v22);
  if ( !detailLabel )
    goto LABEL_34;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v31, stateType, v32);
  if ( !targetSelectInfoLabel )
    goto LABEL_34;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__GetNumberFormat(v20, 0LL);
  if ( !userQpLabel )
    goto LABEL_34;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v23 <= 0 )
  {
    v19 = (MethodInfo *)StringLiteral_1/*""*/;
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
    SelfUserGame = LocalizationManager__GetNumberFormat(v23, 0LL);
    v19 = (MethodInfo *)SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_34;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v19, 0LL);
  v35 = (UIWidget_o *)this->fields.requiredQpLabel;
  if ( v20 < v23 )
  {
    *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_red(0LL);
    if ( !v35 )
      goto LABEL_34;
  }
  else
  {
    *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
    if ( !v35 )
      goto LABEL_34;
  }
  UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v40);
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
    sub_B5D69C(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
    sub_B5D69C(useItemTitleNormal, *(_QWORD *)&stateType);
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

  if ( (byte_42E8BBC & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      (_DWORD)selectedUserServantEntity,
      (_DWORD)method,
      v3);
    byte_42E8BBC = 1;
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
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
      v14 = *p_baseUserServantEntity;
      if ( !*p_baseUserServantEntity )
        sub_B5D69C(v12, v13);
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v27.fields.fakeValue = v15;
      v16 = 0;
      v17 = v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v27, 0LL);
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
  sub_B5D560(
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectedCommandCard, 0LL, v20, v21, v22, v23, v24, v25);
    CommandCardExceedControl__InitExceedItem(this, v26);
  }
}


void __fastcall CommandCardExceedControl__SetUserServantCommandCard(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
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
  WebViewManager_o *Instance; // x0
  __int64 v19; // x1
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v22; // x23
  __int64 v23; // x24
  int64_t v24; // x22
  UserServantCommandCodeMaster_o *v25; // x21
  int64_t v26; // x0
  __int64 v27; // x8
  int64_t v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E8BBD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantCommandCardMaster___,
      (_DWORD)userServantEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E8BBD = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v24 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v23;
    *(_QWORD *)&v29.fields.fakeValue = v22;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    UserServantCommandCardMaster__TryGetEntity(
      MasterData_WarQuestSelectionMaster,
      &this->fields.baseUserServantCommandCardEntity,
      v24,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v25 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v26 = NetworkManager__get_UserId(0LL),
          v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v30.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v28 = v26,
          *(_QWORD *)&v30.fields.currentCryptoKey = v27,
          Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL),
          !v25) )
    {
LABEL_16:
      sub_B5D69C(Instance, v19);
    }
    UserServantCommandCodeMaster__TryGetEntity(
      v25,
      &this->fields.baseUserServantCommandCodeEntity,
      v28,
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *selectedCommandCard; // x20
  __int64 v6; // x1
  BattleCommandComponent_o *v7; // x0

  if ( (byte_42E8BC5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BC5 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v7 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v7 )
    sub_B5D69C(0LL, v6);
  return BattleCommandComponent__getMarkIndex(v7, 0LL);
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
  sub_B5D560(
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Object_o *selectedCommandCard; // x22
  struct CombineCommandCardComponent_o **p_selectedCommandCard; // x21
  int64_t MarkIndex; // x0
  _BOOL8 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  struct CombineCommandCardComponent_o *v41; // x1
  const MethodInfo *v42; // x2
  ItemEntity_array *EntityList; // x22
  const MethodInfo *v44; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v47; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v49; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v51; // x1
  struct System_Int32_array *v52; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int max_length; // w10
  __int64 v61; // x8
  ItemEntity_o *v62; // x10
  struct System_Int32_array *v63; // x11
  char *v64; // x11
  int32_t useItemNum; // w22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v68; // x4
  bool v69; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  __int64 v71; // x27
  int v72; // w9
  struct System_Int32_array *v73; // x8
  struct System_Int32_array *v74; // x8
  struct LimitCntUpItemComponent_array *v75; // x8
  LimitCntUpItemComponent_o *v76; // x24
  struct System_Int32_array *v77; // x8
  const MethodInfo *v78; // x4
  bool v79; // w2
  __int64 v80; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8BC7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, cardIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SoundManager_TypeInfo, v27, v28, v29);
    byte_42E8BC7 = 1;
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
        v41 = commandCardComponents->m_Items[cardIndex];
        this->fields.selectedCommandCard = v41;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.selectedCommandCard,
          (System_Int32_array **)v41,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        CommandCardExceedControl__SetSelectedFrameActive(this, cardIndex, v42);
        MarkIndex = (int64_t)this->fields.targetSelectInfoBase;
        if ( !MarkIndex )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, 0, 0LL);
        MarkIndex = (int64_t)this->fields.exceedItemBase;
        if ( !MarkIndex )
          goto LABEL_82;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, 1, 0LL);
        MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !MarkIndex )
          goto LABEL_82;
        MarkIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)MarkIndex,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !MarkIndex )
          goto LABEL_82;
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)MarkIndex, 25, 0LL);
        MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !MarkIndex )
          goto LABEL_82;
        MarkIndex = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)MarkIndex,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v47 = 0;
          if ( !MarkIndex )
            goto LABEL_82;
          goto LABEL_26;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_82;
        if ( commandCardParam->max_length > cardIndex )
        {
          v47 = commandCardParam->m_Items[cardIndex + 1];
          if ( !MarkIndex )
            goto LABEL_82;
LABEL_26:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)MarkIndex,
                              v47,
                              v44);
          v49 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v49 = BalanceConfig_TypeInfo;
          }
          CommandCardParamUpMax = v49->static_fields->CommandCardParamUpMax;
          if ( EntityList )
          {
            v51 = *(_QWORD *)&EntityList->max_length;
            if ( v51 )
            {
              v52 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, v51);
              p_ExceedItemIds_k__BackingField = &this->fields._ExceedItemIds_k__BackingField;
              this->fields._ExceedItemIds_k__BackingField = v52;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields._ExceedItemIds_k__BackingField,
                (System_Int32_array **)v52,
                v54,
                v55,
                v56,
                v57,
                v58,
                v59);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v61 = 0LL;
                while ( (unsigned int)v61 < max_length )
                {
                  v62 = EntityList->m_Items[v61];
                  if ( !v62 )
                    goto LABEL_82;
                  v63 = *p_ExceedItemIds_k__BackingField;
                  if ( !*p_ExceedItemIds_k__BackingField )
                    goto LABEL_82;
                  if ( (unsigned int)v61 >= v63->max_length )
                    goto LABEL_83;
                  v64 = (char *)v63 + 4 * v61++;
                  *((_DWORD *)v64 + 8) = v62->fields.id;
                  max_length = EntityList->max_length;
                  if ( (int)v61 >= max_length )
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
          MarkIndex = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( MarkIndex )
          {
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)MarkIndex,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                v69 = entity->fields.num >= useItemNum;
              }
              else
              {
                v69 = 0;
              }
              exceedItemComponents = this->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v71 = 0LL;
                while ( 1 )
                {
                  v72 = exceedItemComponents->max_length;
                  if ( (int)v71 >= v72 )
                    break;
                  if ( (unsigned int)v71 >= v72 )
                    goto LABEL_83;
                  MarkIndex = (int64_t)exceedItemComponents->m_Items[v71];
                  if ( !MarkIndex )
                    goto LABEL_82;
                  MarkIndex = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MarkIndex, 0LL);
                  if ( v47 < CommandCardParamUpMax )
                  {
                    v73 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v73 )
                      goto LABEL_82;
                    v33 = (int)v71 < (signed int)v73->max_length;
                    if ( !MarkIndex )
                      goto LABEL_82;
                  }
                  else
                  {
                    v33 = 0LL;
                    if ( !MarkIndex )
                      goto LABEL_82;
                  }
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MarkIndex, v33, 0LL);
                  v74 = this->fields._ExceedItemIds_k__BackingField;
                  if ( !v74 )
                    goto LABEL_82;
                  if ( (int)v71 < (signed int)v74->max_length )
                  {
                    v75 = this->fields.exceedItemComponents;
                    if ( !v75 )
                      goto LABEL_82;
                    if ( (unsigned int)v71 >= v75->max_length )
                      goto LABEL_83;
                    v76 = v75->m_Items[v71];
                    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    }
                    MarkIndex = NetworkManager__get_UserId(0LL);
                    v77 = this->fields._ExceedItemIds_k__BackingField;
                    if ( !v77 )
                      goto LABEL_82;
                    if ( (unsigned int)v71 >= v77->max_length )
                      goto LABEL_83;
                    if ( !v76 )
                      goto LABEL_82;
                    LimitCntUpItemComponent__setLimitUpItemInfo(v76, MarkIndex, v77->m_Items[v71 + 1], useItemNum, 0LL);
                  }
                  exceedItemComponents = this->fields.exceedItemComponents;
                  ++v71;
                  if ( !exceedItemComponents )
                    goto LABEL_82;
                }
                CommandCardExceedControl__SetInfoMessageLabels(this, 2, v69, v47 >= CommandCardParamUpMax, v68);
                v79 = 0;
                if ( v47 >= CommandCardParamUpMax || !v69 || this->fields.baseUserServantEntity == 0LL )
                  goto LABEL_80;
                MarkIndex = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( MarkIndex && RankParamEntity )
                {
                  v79 = *(_DWORD *)(MarkIndex + 96) >= RankParamEntity->fields.useQp;
LABEL_80:
                  CommandCardExceedControl__SetCombineButtonState(this, 2, v79, v47 >= CommandCardParamUpMax, v78);
                  return;
                }
              }
            }
          }
LABEL_82:
          sub_B5D69C(MarkIndex, v33);
        }
      }
LABEL_83:
      v80 = sub_B5D6C8(MarkIndex);
      sub_B5D668(v80, 0LL);
    }
  }
}