void CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1

  if ( (byte_593C87F & 1) == 0 )
  {
    sub_21FFC50(&CombineMenuControl_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_593C87F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.orObjectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.orObjectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, v10);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


System_String_o *CommandCardExceedControl__GetCombineButtonLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isExceedMax,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_593C86F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18410/*"buttontxt_synthesis"*/);
    sub_21FFC50(&StringLiteral_18407/*"buttontxt_notsynthesis"*/);
    byte_593C86F = 1;
  }
  if ( stateType == 2 && isExceedMax )
    v6 = &StringLiteral_18407/*"buttontxt_notsynthesis"*/;
  else
    v6 = &StringLiteral_18410/*"buttontxt_synthesis"*/;
  return (System_String_o *)*v6;
}


BattleCommandData_array *CommandCardExceedControl__GetCommandCardDataEachServantId(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned int *v7; // x21
  unsigned __int64 v8; // x27
  MissionNaviTransitionBoardItem_o *i; // x22
  __int64 baseUserServantEntity; // x0
  int32_t v11; // w23
  UserServantEntity_o *v12; // x25
  int32_t v13; // w24
  int32_t v14; // w1
  int32_t CommandCardLimitCountStageSealAfter; // w0
  __int64 v16; // x1
  int32_t v17; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w25
  __int64 v19; // x8
  int32_t v20; // w9
  BattleCommandData_o *v21; // x23
  const MethodInfo *v22; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int64_t v25; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v35; // x0
  int32_t type; // [xsp+Ch] [xbp-64h]

  if ( (byte_593C87D & 1) == 0 )
  {
    sub_21FFC50(&BattleCommandData___TypeInfo);
    sub_21FFC50(&BattleCommandData_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C87D = 1;
  }
  v5 = sub_21FFD10(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
  v7 = (unsigned int *)v5;
  if ( this->fields.transformTotal >= 1 )
  {
    v8 = 0;
    for ( i = (MissionNaviTransitionBoardItem_o *)(v5 + 32); ; i = (MissionNaviTransitionBoardItem_o *)((char *)i + 8) )
    {
      baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        break;
      v11 = UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)baseUserServantEntity, 0)
          ? ((int)v8 + this->fields.displayTransformIndex) % this->fields.transformTotal
          : v8;
      baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                                (UserServantEntity_o *)baseUserServantEntity,
                                v11,
                                0);
      v12 = this->fields.baseUserServantEntity;
      if ( !v12 )
        break;
      v13 = baseUserServantEntity;
      if ( UserServantEntity__get_IsSaveTransformServant(this->fields.baseUserServantEntity, 0) )
        v14 = v11;
      else
        v14 = -1;
      CommandCardLimitCountStageSealAfter = UserServantEntity__GetCommandCardLimitCountStageSealAfter(v12, v14, 0, 0);
      v17 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CommandCardLimitCountStageSealAfter, 0);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v17, 0);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v13,
                                         (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !baseUserServantEntity )
        break;
      v19 = *(_QWORD *)(baseUserServantEntity + 144);
      if ( v19 )
      {
        v20 = *(_DWORD *)(v19 + 24);
        if ( v20 > cardIndex )
        {
          if ( v20 <= (unsigned int)cardIndex )
            goto LABEL_39;
          type = *(_DWORD *)(v19 + 4LL * cardIndex + 32);
          v21 = (BattleCommandData_o *)sub_21FFEBC(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_53546516(v21, type, v13, LimitCountByImageLimitCostumeIn, 0, -1, 0);
          if ( !v21 )
            break;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          v21->fields.markindex = cardIndex;
          v21->fields.servantCardIdsIndex = cardIndex;
          if ( baseUserServantCommandCodeEntity
            && (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) != 0 )
          {
            if ( LODWORD(userCommandCodeIds->max_length) <= cardIndex )
              goto LABEL_39;
            v25 = userCommandCodeIds->m_Items[cardIndex] & ~(userCommandCodeIds->m_Items[cardIndex] >> 63);
          }
          else
          {
            v25 = 0;
          }
          v21->fields.userCommandCodeId = v25;
          baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, v25, v22);
          baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
          v21->fields.commandCodeId = baseUserServantEntity;
          if ( baseUserServantCommandCardEntity )
          {
            baseUserServantCommandCardEntity = (struct UserServantCommandCardEntity_o *)baseUserServantCommandCardEntity->fields.commandCardParam;
            if ( baseUserServantCommandCardEntity )
            {
              if ( LODWORD(baseUserServantCommandCardEntity->fields.userId.fields.hiddenValue) <= cardIndex )
                goto LABEL_39;
              LODWORD(baseUserServantCommandCardEntity) = *((_DWORD *)&baseUserServantCommandCardEntity->fields.userId.fields.fakeValue
                                                          + cardIndex);
            }
          }
          v21->fields.commandCardParam = (int)baseUserServantCommandCardEntity;
          if ( !v7 )
            break;
          baseUserServantEntity = sub_21FFDA4(v21, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
          if ( !baseUserServantEntity )
          {
            v35 = sub_21FFEF0(0, v27);
            sub_21FFD90(v35, 0);
          }
          if ( v8 >= v7[6] )
LABEL_39:
            sub_21FFED4(baseUserServantEntity);
          i->klass = (MissionNaviTransitionBoardItem_c *)v21;
          sub_21FFBF4(i, (int32_t)v21, v28, v29, v30, v31, v32, v33);
        }
      }
      if ( (__int64)++v8 >= this->fields.transformTotal )
        return (BattleCommandData_array *)v7;
    }
    sub_21FFECC(baseUserServantEntity, v6);
  }
  return (BattleCommandData_array *)v7;
}


int32_t CommandCardExceedControl__GetCommandCardParam(
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
  if ( LODWORD(commandCardParam->max_length) <= cardIndex )
    sub_21FFED4(this);
  return commandCardParam->m_Items[cardIndex];
}


int32_t CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userCommandCodeMaster; // x0
  void *monitor; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_593C874 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C874 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0 )
  {
    sub_21FFECC(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v7 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeId);
  *(_QWORD *)&v9.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CommandCardExceedControl__GetDetailLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        bool isQpEnough,
        const MethodInfo *method)
{
  __int64 *v10; // x8
  int v12; // w8

  if ( (byte_593C86D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3773/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/);
    sub_21FFC50(&StringLiteral_3774/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/);
    sub_21FFC50(&StringLiteral_12680/*"SHORT_QP_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_3780/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/);
    sub_21FFC50(&StringLiteral_3779/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/);
    byte_593C86D = 1;
  }
  switch ( stateType )
  {
    case 4:
      goto LABEL_28;
    case 2:
      v12 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( isExceedMax )
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
        v10 = &StringLiteral_3780/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
      }
      else if ( isItemEnough )
      {
        if ( isQpEnough )
        {
          if ( !v12 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
          v10 = &StringLiteral_3773/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        }
        else
        {
          if ( !v12 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
          v10 = &StringLiteral_12680/*"SHORT_QP_INFO_MSG"*/;
        }
      }
      else
      {
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
        v10 = &StringLiteral_3779/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v10, 0);
    case 0:
LABEL_28:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
      v10 = &StringLiteral_3774/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v10, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool CommandCardExceedControl__GetIsAllParamMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x9
  __int64 v7; // x21
  __int64 v8; // x22
  int64_t v9; // x19
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v12; // x20
  BalanceConfig_c *v13; // x0
  int32_t v14; // w23
  int32_t CommandCardParamUpMax; // w8
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_593C877 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C877 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_28;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  v9 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v18.fields.currentCryptoKey = v7;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = (DataManager_o *)UserServantCommandCardMaster__TryGetEntity(
                                (UserServantCommandCardMaster_o *)MasterData_object,
                                &entity,
                                v9,
                                (int)Instance,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_25:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  if ( !entity )
LABEL_28:
    sub_21FFECC(Instance, v4);
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_25;
  max_length = commandCardParam->max_length;
  if ( max_length < 1 )
  {
    LOBYTE(Instance) = 1;
  }
  else
  {
    v12 = 0;
    do
    {
      if ( (unsigned int)v12 >= max_length )
        sub_21FFED4(Instance);
      v13 = BalanceConfig_TypeInfo;
      v14 = commandCardParam->m_Items[v12];
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
        v13 = BalanceConfig_TypeInfo;
      }
      CommandCardParamUpMax = v13->static_fields->CommandCardParamUpMax;
      Instance = (DataManager_o *)(v14 >= CommandCardParamUpMax);
      if ( v14 < CommandCardParamUpMax )
        break;
      max_length = commandCardParam->max_length;
      ++v12;
    }
    while ( (int)v12 < max_length );
  }
  return (char)Instance;
}


bool CommandCardExceedControl__GetIsCombineEnable(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v5; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x20
  DataManager_o *CardIndex; // x0
  __int64 v9; // x1
  char *v10; // x8
  BalanceConfig_c *v11; // x0
  int32_t v12; // w20
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  struct UserServantCommandCardEntity_o *v16; // x8
  CommandCardRankParamMaster_o *v17; // x20
  struct System_Int32_array *v18; // x22
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w22
  struct System_Int32_array *v22; // x23
  il2cpp_array_size_t max_length; // x8
  UserItemMaster_o *v24; // x19
  int32_t v25; // w24
  unsigned __int64 v26; // x25
  int32_t v27; // w21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_593C875 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C875 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  entity = 0;
  if ( !baseUserServantEntity )
    return 0;
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0, 0) )
    return 0;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    if ( commandCardParam )
    {
      CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v5);
      if ( (unsigned int)CardIndex >= LODWORD(commandCardParam->max_length) )
        goto LABEL_45;
      v10 = (char *)commandCardParam + 4 * (int)CardIndex;
      v11 = BalanceConfig_TypeInfo;
      v12 = *((_DWORD *)v10 + 8);
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
        v11 = BalanceConfig_TypeInfo;
      }
      if ( v12 >= v11->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_44;
  CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                 CardIndex,
                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v16 = this->fields.baseUserServantCommandCardEntity;
  v17 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v16 )
  {
    v18 = v16->fields.commandCardParam;
    CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v15);
    if ( !v18 )
      goto LABEL_44;
    if ( (unsigned int)CardIndex >= LODWORD(v18->max_length) )
LABEL_45:
      sub_21FFED4(CardIndex);
    v14 = (unsigned int)v18->m_Items[(int)CardIndex];
    if ( !v17 )
      goto LABEL_44;
  }
  else
  {
    v14 = 0;
    if ( !CardIndex )
      goto LABEL_44;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v17, v14, 0);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex
    || (CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                       CardIndex,
                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___),
        (v22 = this->fields._ExceedItemIds_k__BackingField) == 0) )
  {
LABEL_44:
    sub_21FFECC(CardIndex, v14);
  }
  max_length = v22->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = (UserItemMaster_o *)CardIndex;
    v25 = 0;
    v26 = 0;
    while ( v26 < (unsigned int)max_length )
    {
      v27 = v22->m_Items[v26];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
        CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v24 )
        goto LABEL_44;
      CardIndex = (DataManager_o *)UserItemMaster__TryGetEntity(
                                     v24,
                                     &entity,
                                     *(_QWORD *)(*(_QWORD *)&CardIndex[1].fields._DispLog + 64LL),
                                     v27,
                                     0);
      if ( entity )
        v25 += entity->fields.num;
      LODWORD(max_length) = v22->max_length;
      if ( (__int64)++v26 >= (int)max_length )
        return v25 >= useItemNum;
    }
    goto LABEL_45;
  }
  v25 = 0;
  return v25 >= useItemNum;
}


bool CommandCardExceedControl__GetIsExceedMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v8; // x20
  struct System_Int32_array *commandCardParam; // x21
  int32_t v10; // w19
  __int64 v11; // x1
  BalanceConfig_c *v12; // x0

  if ( (byte_593C876 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C876 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0, 0)
    || CommandCardExceedControl__get_CardIndex(this, v4) < 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v8 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v6);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= LODWORD(commandCardParam->max_length) )
        sub_21FFED4(Instance);
      v10 = commandCardParam->m_Items[(int)Instance];
      if ( v8 )
        goto LABEL_12;
    }
LABEL_17:
    sub_21FFECC(Instance, v6);
  }
  v10 = 0;
  if ( !Instance )
    goto LABEL_17;
LABEL_12:
  CommandCardRankParamMaster__GetRankParamEntity(v8, v10, 0);
  v12 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
    v12 = BalanceConfig_TypeInfo;
  }
  return v10 >= v12->static_fields->CommandCardParamUpMax;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CommandCardExceedControl__GetTargetSelectInfoLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_593C86E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3775/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/);
    sub_21FFC50(&StringLiteral_3777/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C86E = 1;
  }
  if ( stateType == 4 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    v4 = &StringLiteral_3777/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( !stateType )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    v4 = &StringLiteral_3775/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t CommandCardExceedControl__GetTutorialOpenType(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  return 59;
}


int64_t CommandCardExceedControl__GetUserCommandCodeId(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v5; // x8

  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    return 0;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0;
  if ( LODWORD(userCommandCodeIds->max_length) <= cardIndex )
    sub_21FFED4(this);
  v5 = userCommandCodeIds->m_Items[cardIndex];
  return v5 & ~(v5 >> 63);
}


void CommandCardExceedControl__Init(CommandCardExceedControl_o *this, const MethodInfo *method)
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
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  CommandCardExceedControl__InitTransformInfo(this, v3);
  CommandCardExceedControl__InitBaseServant(this, v4);
  CommandCardExceedControl__InitCommandCard(this, v5);
  CommandCardExceedControl__InitExceedItem(this, v6);
  CommandCardExceedControl__InitLabel(this, v7);
  CommandCardExceedControl__SetCombineButtonState(this, 0, 0, 0, v8);
  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog
    || (BaseDialog__Init(commandCardExceedConfirmDialog, 0),
        (commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedAddConfirmDialog) == 0) )
  {
    sub_21FFECC(commandCardExceedConfirmDialog, v9);
  }
  BaseDialog__Init(commandCardExceedConfirmDialog, 0);
}


void CommandCardExceedControl__InitBaseServant(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *charaGraphTexture; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593C86B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C86B = 1;
  }
  this->fields.baseUserServantEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3, v4, v5, v6, v7);
  baseSelectInfoObject = this->fields.baseSelectInfoObject;
  if ( !baseSelectInfoObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(baseSelectInfoObject, 1, 0);
  charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Equality(charaGraphTexture, 0, 0) )
  {
    baseSelectInfoObject = (UnityEngine_GameObject_o *)this->fields.charaGraphTexture;
    if ( baseSelectInfoObject )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)baseSelectInfoObject,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      this->fields.charaGraphTexture = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraphTexture, 0, v15, v16, v17, v18, v19, v20);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_21FFECC(baseSelectInfoObject, v9);
  }
}


void CommandCardExceedControl__InitCommandCard(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  __int64 v25; // x22
  CombineCommandCardComponent_o *v26; // x20
  Il2CppObject *MasterData_object; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_593C86A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C86A = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantCommandCardEntity,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectedCommandCard = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectedCommandCard, 0, v9, v10, v11, v12, v13, v14);
  this->fields.baseUserServantCommandCodeEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantCommandCodeEntity,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_12;
  max_length = commandCardComponents->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
        sub_21FFED4(Instance);
      v26 = commandCardComponents->m_Items[v25];
      if ( !v26 )
        break;
      CombineCommandCardComponent__SetSelectedSprite(commandCardComponents->m_Items[v25], 0, 0);
      CombineCommandCardComponent__SetCommandCardEnable(v26, 0, 0);
      max_length = commandCardComponents->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_9;
    }
LABEL_12:
    sub_21FFECC(Instance, v22);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    this->fields.userCommandCodeMaster = (struct UserCommandCodeMaster_o *)MasterData_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userCommandCodeMaster,
      (int32_t)MasterData_object,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
}


void CommandCardExceedControl__InitExceedItem(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetSelectInfoBase; // x0

  targetSelectInfoBase = this->fields.targetSelectInfoBase;
  if ( !targetSelectInfoBase
    || (UnityEngine_GameObject__SetActive(targetSelectInfoBase, 1, 0),
        (targetSelectInfoBase = this->fields.exceedItemBase) == 0) )
  {
    sub_21FFECC(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0);
}


void CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_593C869 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C869 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (detailLabel = this->fields.userQpLabel) == 0)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (detailLabel = this->fields.requiredQpLabel) == 0) )
  {
    sub_21FFECC(detailLabel, method);
  }
  UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void CommandCardExceedControl__InitTransformInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *cardSwitchButton; // x0

  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton
    || (UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0),
        (cardSwitchButton = (UnityEngine_GameObject_o *)this->fields.transformSvtName) == 0)
    || (cardSwitchButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cardSwitchButton, 0)) == 0 )
  {
    sub_21FFECC(cardSwitchButton, method);
  }
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0);
  CombineMenuControl__SetTransformInfo((CombineMenuControl_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CommandCardExceedControl__IsTransformedServant(
        CommandCardExceedControl_o *this,
        int32_t displayIndex,
        const MethodInfo *method)
{
  CommandCardExceedControl_o *v4; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  bool v8; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_593C87E & 1) == 0 )
  {
    this = (CommandCardExceedControl_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C87E = 1;
  }
  if ( v4->fields._IsSaveTransformServant_k__BackingField )
  {
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_21FFECC(this, *(_QWORD *)&displayIndex);
    v6 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.currentCryptoKey;
    v7 = *(_QWORD *)&baseUserServantEntity->fields.transformVal.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&displayIndex);
    *(_QWORD *)&v10.fields.currentCryptoKey = v6;
    *(_QWORD *)&v10.fields.fakeValue = v7;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0) == displayIndex;
  }
  else
  {
    v8 = displayIndex <= 0 || !v4->fields._IsTransformServant_k__BackingField;
  }
  return !v8;
}


void CommandCardExceedControl__OnClickCombine(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x20
  CommandCardExceedConfirmDialog_o *commandCardExceedConfirmDialog; // x21
  int32_t CardIndex; // w0
  const MethodInfo *v11; // x2
  BattleCommandData_array *CommandCardDataEachServantId; // x22
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v18; // x8
  int64_t v19; // x23
  int32_t v20; // w0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  struct UserServantCommandCodeEntity_o *v24; // x8
  struct System_Int64_array *v25; // x8
  __int64 v26; // x8
  System_Int32_array *v27; // x24
  int32_t v28; // w26
  System_Action_int____o *onRequestCombine; // x25
  System_Action_o *v30; // x0
  intptr_t *v31; // x8
  System_Action_o *v32; // x27
  const MethodInfo *v33; // [xsp+0h] [xbp-60h]

  if ( (byte_593C879 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommandCardExceedControl_OnClickCombine__);
    sub_21FFC50(&Method_CommandCardExceedControl__OnClickCombine_b__71_0__);
    sub_21FFC50(&Method_CommandCardExceedControl__OnClickCombine_b__71_1__);
    byte_593C879 = 1;
  }
  if ( !this->fields.isProcessingButton )
  {
    this->fields.isProcessingButton = 1;
    v3 = Method_CommandCardExceedControl_OnClickCombine__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CommandCardExceedControl_OnClickCombine__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
    if ( !ExceedItemIds_k__BackingField )
      goto LABEL_23;
    baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
    if ( SLODWORD(ExceedItemIds_k__BackingField->max_length) < 2 )
    {
      commandCardExceedConfirmDialog = this->fields.commandCardExceedConfirmDialog;
      CardIndex = CommandCardExceedControl__get_CardIndex(this, v6);
      CommandCardDataEachServantId = CommandCardExceedControl__GetCommandCardDataEachServantId(this, CardIndex, v11);
      v14 = CommandCardExceedControl__get_CardIndex(this, v13);
      baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
      if ( !baseUserServantCommandCodeEntity
        || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0 )
      {
        v19 = 0;
        goto LABEL_17;
      }
      if ( (unsigned int)v14 < LODWORD(userCommandCodeIds->max_length) )
      {
        v18 = userCommandCodeIds->m_Items[(int)v14];
        v19 = v18 & ~(v18 >> 63);
LABEL_17:
        v27 = this->fields._ExceedItemIds_k__BackingField;
        v28 = CommandCardExceedControl__get_CardIndex(this, v15);
        onRequestCombine = this->fields.onRequestCombine;
        v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        v31 = &Method_CommandCardExceedControl__OnClickCombine_b__71_1__;
        goto LABEL_20;
      }
LABEL_24:
      sub_21FFED4(v14);
    }
    commandCardExceedConfirmDialog = this->fields.commandCardExceedAddConfirmDialog;
    v20 = CommandCardExceedControl__get_CardIndex(this, v6);
    CommandCardDataEachServantId = CommandCardExceedControl__GetCommandCardDataEachServantId(this, v20, v21);
    v14 = CommandCardExceedControl__get_CardIndex(this, v22);
    v24 = this->fields.baseUserServantCommandCodeEntity;
    if ( v24 && (v25 = v24->fields.userCommandCodeIds) != 0 )
    {
      if ( (unsigned int)v14 >= LODWORD(v25->max_length) )
        goto LABEL_24;
      v26 = v25->m_Items[(int)v14];
      v19 = v26 & ~(v26 >> 63);
    }
    else
    {
      v19 = 0;
    }
    v27 = this->fields._ExceedItemIds_k__BackingField;
    v28 = CommandCardExceedControl__get_CardIndex(this, v23);
    onRequestCombine = this->fields.onRequestCombine;
    v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v31 = &Method_CommandCardExceedControl__OnClickCombine_b__71_0__;
LABEL_20:
    v32 = v30;
    System_Action___ctor(v30, (Il2CppObject *)this, *v31, 0);
    if ( commandCardExceedConfirmDialog )
    {
      CommandCardExceedConfirmDialog__Open(
        commandCardExceedConfirmDialog,
        baseUserServantCommandCardEntity,
        CommandCardDataEachServantId,
        v19,
        v27,
        v28,
        onRequestCombine,
        v32,
        v33);
      return;
    }
LABEL_23:
    sub_21FFECC(v5, v6);
  }
}


void CommandCardExceedControl__OnClickSwitchButton(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  _BOOL4 IsSaveTransformServant_k__BackingField; // w8
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t v5; // w2
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  int32_t v10; // w2
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v12; // x9
  float *v13; // x10
  float *v14; // x11
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  bool v20; // w1
  UnityEngine_Object_o *selectedCommandCard; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *v24; // x0
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  TransformServantInfo_o *v27; // [xsp+8h] [xbp-28h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C87C & 1) == 0 )
  {
    sub_21FFC50(&Method_CommandCardExceedControl_OnClickSwitchButton__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C87C = 1;
  }
  IsSaveTransformServant_k__BackingField = this->fields._IsSaveTransformServant_k__BackingField;
  transformInfo = 0;
  v27 = 0;
  if ( IsSaveTransformServant_k__BackingField )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    v5 = this->fields.displayTransformIndex ^ 1;
    this->fields.displayTransformIndex = v5;
    if ( !baseUserServantEntity )
      goto LABEL_38;
    baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                     baseUserServantEntity,
                                                     &transformInfo,
                                                     v5,
                                                     0);
    if ( !transformInfo )
      goto LABEL_38;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformSvtName;
    if ( !baseUserServantEntity )
      goto LABEL_38;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0);
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformSvtName;
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
      p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_38;
    }
    else
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
      p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_38;
    }
    v29.fields.a = *p_a;
    v29.fields.b = *p_b;
    v29.fields.g = *p_g;
    v29.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)baseUserServantEntity, v29, 0);
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformBgSprite;
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
      v12 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      v13 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
      v14 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_38;
    }
    else
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
      v12 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
      v13 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
      v14 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
      if ( !baseUserServantEntity )
        goto LABEL_38;
    }
    v30.fields.a = *v14;
    v30.fields.b = *v13;
    v30.fields.g = *v12;
    v30.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)baseUserServantEntity, v30, 0);
  }
  else if ( this->fields._IsTransformServant_k__BackingField )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    v10 = (this->fields.displayTransformIndex + 1) % this->fields.transformTotal;
    this->fields.displayTransformIndex = v10;
    if ( !baseUserServantEntity )
      goto LABEL_38;
    baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                     baseUserServantEntity,
                                                     &v27,
                                                     v10,
                                                     0);
    if ( !v27 )
      goto LABEL_38;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.transformSvtName;
    if ( !baseUserServantEntity )
      goto LABEL_38;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, v27->fields.titleText, 0);
  }
  CommandCardExceedControl__SetCommandCards(this, method);
  if ( CommandCardExceedControl__IsTransformedServant(this, this->fields.displayTransformIndex, v15) )
  {
    CommandCardExceedControl__InitExceedItem(this, v16);
    CommandCardExceedControl__SetCombineButtonState(this, 4, 0, 0, v17);
    CommandCardExceedControl__SetInfoMessageLabels(this, 4, 0, 0, v18);
    baseUserServantEntity = (UserServantEntity_o *)this->fields.useItemTitleNormal;
    if ( baseUserServantEntity )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0);
      baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(gameObject, 0);
      if ( baseUserServantEntity )
      {
        baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0);
        if ( baseUserServantEntity )
        {
          v20 = 0;
          goto LABEL_35;
        }
      }
    }
LABEL_38:
    sub_21FFECC(baseUserServantEntity, method);
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(selectedCommandCard, 0, 0) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.selectedCommandCard;
    if ( !baseUserServantEntity )
      goto LABEL_38;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0);
    CommandCardExceedControl__SetCommandCardDisplay(this, MarkIndex, v23);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.useItemTitleNormal;
  if ( !baseUserServantEntity )
    goto LABEL_38;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0);
  baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v24, 0);
  if ( !baseUserServantEntity )
    goto LABEL_38;
  baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)baseUserServantEntity,
                                                   0);
  if ( !baseUserServantEntity )
    goto LABEL_38;
  v20 = 1;
LABEL_35:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v20, 0);
  v25 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_21FFC68(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
}


void CommandCardExceedControl__RefreshInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  BaseDialog_o *commandCardExceedConfirmDialog; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog
    || (BaseDialog__Init(commandCardExceedConfirmDialog, 0),
        (commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedAddConfirmDialog) == 0) )
  {
    sub_21FFECC(commandCardExceedConfirmDialog, method);
  }
  BaseDialog__Init(commandCardExceedConfirmDialog, 0);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectedCommandCard, 0, v6, v7, v8, v9, v10, v11);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v12);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0, v13);
}


void CommandCardExceedControl__SetBaseServantCardImage(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  struct UICharaGraphTexture_o *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      sub_21FFECC(0, userServantEntity);
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0);
    v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(CommandCardExceedControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                           this,
                                           this->fields.charaGraphTexture,
                                           userServantEntity,
                                           this->klass->vtable._7_SetCharaGraph.method);
    this->fields.charaGraphTexture = v6;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.charaGraphTexture,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  else
  {
    CommandCardExceedControl__InitBaseServant(this, 0);
  }
}


void CommandCardExceedControl__SetBaseServantCommandCardList(
        CommandCardExceedControl_o *this,
        System_Action_o *onAssetLoadEnd,
        const MethodInfo *method)
{
  System_String_array *assetList; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Component_o *useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  float *v26; // x11
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v28; // x10
  float *v29; // x9
  struct System_String_array *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  unsigned __int64 v37; // x20
  __int64 v38; // x27
  struct System_String_array *v39; // x28
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v41; // w21
  __int64 v42; // x22
  __int64 v43; // x23
  __int64 v44; // x1
  int32_t v45; // w22
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_array *v52; // x20
  System_Action_o *v53; // x21
  __int64 v54; // x1
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C872 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CommandCardExceedControl_SetCommandCards__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    byte_593C872 = 1;
  }
  assetList = this->fields.assetList;
  transformInfo = 0;
  if ( assetList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, onAssetLoadEnd);
    AssetManager__releaseAssetStorage_47474708(assetList, 0);
    this->fields.assetList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, 0, v6, v7, v8, v9, v10, v11);
  }
  CommandCardExceedControl__InitTransformInfo(this, (const MethodInfo *)onAssetLoadEnd);
  useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject(useItemTitleNormal, 0);
  useItemTitleNormal = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !useItemTitleNormal )
    goto LABEL_47;
  useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0);
  if ( !useItemTitleNormal )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.onAssetLoadEnd = onAssetLoadEnd;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onAssetLoadEnd,
      (int32_t)onAssetLoadEnd,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( this->fields._IsTransformServant_k__BackingField )
    {
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.cardSwitchButton;
      if ( !useItemTitleNormal )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.transformSvtName;
      if ( !useItemTitleNormal )
        goto LABEL_47;
      useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0);
      if ( !useItemTitleNormal )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
      if ( !useItemTitleNormal )
        goto LABEL_47;
      useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                        (UserServantEntity_o *)useItemTitleNormal,
                                                        &transformInfo,
                                                        this->fields.displayTransformIndex,
                                                        0);
      if ( !transformInfo )
        goto LABEL_47;
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.transformSvtName;
      if ( !useItemTitleNormal )
        goto LABEL_47;
      UILabel__set_text((UILabel_o *)useItemTitleNormal, transformInfo->fields.titleText, 0);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.transformSvtName;
      if ( this->fields._IsSaveTransformServant_k__BackingField )
      {
        if ( this->fields.displayTransformIndex <= 0 )
        {
          p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
          p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
          p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
          p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
          if ( !useItemTitleNormal )
            goto LABEL_47;
        }
        else
        {
          p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
          p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
          p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
          p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
          if ( !useItemTitleNormal )
            goto LABEL_47;
        }
        v57.fields.a = *p_a;
        v57.fields.b = *p_b;
        v57.fields.g = *p_g;
        v57.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
        UIWidget__set_color((UIWidget_o *)useItemTitleNormal, v57, 0);
        useItemTitleNormal = (UnityEngine_Component_o *)this->fields.transformBgSprite;
        if ( this->fields.displayTransformIndex <= 0 )
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
          v29 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
          v28 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
          v26 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
          if ( !useItemTitleNormal )
            goto LABEL_47;
        }
        else
        {
          p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
          v29 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
          v28 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
          v26 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
          if ( !useItemTitleNormal )
            goto LABEL_47;
        }
      }
      else
      {
        if ( !useItemTitleNormal )
          goto LABEL_47;
        UIWidget__set_color((UIWidget_o *)useItemTitleNormal, this->fields._CondTitleLabelColor_k__BackingField, 0);
        useItemTitleNormal = (UnityEngine_Component_o *)this->fields.transformBgSprite;
        if ( !useItemTitleNormal )
          goto LABEL_47;
        v26 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
        p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
        v28 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
        v29 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      }
      v58.fields.a = *v26;
      v58.fields.b = *v28;
      v58.fields.g = *v29;
      v58.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
      UIWidget__set_color((UIWidget_o *)useItemTitleNormal, v58, 0);
    }
    v30 = (struct System_String_array *)sub_21FFD10(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v30;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, (int32_t)v30, v31, v32, v33, v34, v35, v36);
    if ( this->fields.transformTotal >= 1 )
    {
      v37 = 0;
      v38 = 32;
      while ( 1 )
      {
        useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !useItemTitleNormal )
          break;
        v39 = this->fields.assetList;
        useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                          (UserServantEntity_o *)useItemTitleNormal,
                                                          v37,
                                                          0);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v41 = (int)useItemTitleNormal;
        v42 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v43 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
        *(_QWORD *)&v56.fields.currentCryptoKey = v42;
        *(_QWORD *)&v56.fields.fakeValue = v43;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v56, 0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v44);
        useItemTitleNormal = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                          v41,
                                                          v45,
                                                          0);
        if ( !v39 )
          break;
        if ( v37 >= LODWORD(v39->max_length) )
          sub_21FFED4(useItemTitleNormal);
        *(Il2CppClass **)((char *)&v39->obj.klass + v38) = (Il2CppClass *)useItemTitleNormal;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v39 + v38),
          (int32_t)useItemTitleNormal,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        ++v37;
        v38 += 8;
        if ( (__int64)v37 >= this->fields.transformTotal )
          goto LABEL_44;
      }
LABEL_47:
      sub_21FFECC(useItemTitleNormal, v12);
    }
LABEL_44:
    v52 = this->fields.assetList;
    v53 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v54);
    AssetManager__loadAssetStorage_47472372(v52, v53, 1, 0);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, v15);
    if ( !onAssetLoadEnd )
      goto LABEL_47;
    ((void (__fastcall *)(intptr_t, intptr_t))onAssetLoadEnd->fields.invoke_impl)(
      onAssetLoadEnd->fields.method_code,
      onAssetLoadEnd->fields.method);
  }
}


void CommandCardExceedControl__SetCallbacks(
        CommandCardExceedControl_o *this,
        System_Action_int____o *onRequestCombine,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onRequestCombine = onRequestCombine;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onRequestCombine,
    (int32_t)onRequestCombine,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetCombineButtonState(
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
    || (!isEnable ? (v9 = 3) : (v9 = 0),
        (v10 = (CommandCardExceedControl_o *)((__int64 (__fastcall *)(System_String_o *, __int64, __int64, const MethodInfo *, const MethodInfo *))combineButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
                                               combineButton,
                                               v9,
                                               1,
                                               combineButton->klass->vtable._14_System_IConvertible_ToInt16.method,
                                               method),
         combineTextImage = this->fields.combineTextImage,
         combineButton = CommandCardExceedControl__GetCombineButtonLabelText(v10, stateType, isExceedMax, v12),
         !combineTextImage)
     || (UISprite__set_spriteName(combineTextImage, combineButton, 0),
         (combineButton = (System_String_o *)this->fields.combineTextImage) == 0)) )
  {
    sub_21FFECC(combineButton, *(_QWORD *)&stateType);
  }
  ((void (__fastcall *)(System_String_o *, void *))combineButton->klass[1]._1.generic_class)(
    combineButton,
    combineButton->klass[1]._1.typeMetadataHandle);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetCommandCardDisplay(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  unsigned int v3; // w20
  CommandCardExceedControl_o *v4; // x19
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w21
  System_String_o *m_CancellationTokenSource_low; // x2
  __int64 v13; // x1
  Il2CppObject *Item; // x22
  int v15; // w8
  struct CombineCommandCardComponent_array *v16; // x8
  struct CombineCommandCardComponent_o *v17; // x1
  const MethodInfo *v18; // x2
  ItemEntity_array *EntityList; // x21
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v22; // w20
  __int64 v23; // x1
  CommandCardRankParamEntity_o *RankParamEntity; // x23
  BalanceConfig_c *v25; // x8
  int32_t CommandCardParamUpMax; // w27
  System_Collections_Generic_List_int__o *v27; // x23
  unsigned __int64 max_length_low; // x8
  unsigned __int64 i; // x25
  Il2CppClass **v30; // x22
  Il2CppClass *v31; // x8
  char *v32; // x22
  Il2CppClass *v33; // t1
  CommandCardExceedControl_o *v34; // x24
  int m_CancellationTokenSource; // w8
  int v36; // w10
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_Int32_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t useItemNum; // w21
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x25
  il2cpp_array_size_t max_length; // x8
  UserItemMaster_o *v50; // x22
  int32_t v51; // w29
  unsigned __int64 v52; // x26
  int32_t v53; // w24
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  int v55; // w23
  int v56; // w9
  struct System_Int32_array *v57; // x8
  struct System_Int32_array *v58; // x8
  struct LimitCntUpItemComponent_array *v59; // x8
  LimitCntUpItemComponent_o *v60; // x24
  struct System_Int32_array *v61; // x8
  struct System_Int32_array *v62; // x8
  __int64 v63; // x1
  UnityEngine_Object_o *orGameObject; // x24
  struct System_Int32_array *v65; // x8
  Il2CppObject *v66; // x24
  CommandCardExceedControl_o *v67; // x24
  struct LimitCntUpItemComponent_array *v68; // x8
  CommandCardExceedControl_o *v69; // x25
  struct LimitCntUpItemComponent_array *v70; // x8
  CommandCardExceedControl_o *v71; // x25
  CommandCardExceedControl_o *v72; // x25
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  intptr_t v82; // x8
  const MethodInfo *v83; // x4
  const MethodInfo *v84; // x4
  bool v85; // w2
  struct UIGrid_o *exceedItemGrid; // x0
  CommandCardRankParamEntity_o *v87; // [xsp+0h] [xbp-70h]
  int v88; // [xsp+0h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = cardIndex;
  v4 = this;
  if ( (byte_593C87B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CommandCardExceedControl_o *)sub_21FFC50(&StringLiteral_25939/*"validClassIds"*/);
    byte_593C87B = 1;
  }
  entity = 0;
  if ( (v3 & 0x80000000) != 0 )
    return;
  commandCardComponents = v4->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_136;
  if ( SLODWORD(commandCardComponents->max_length) <= (signed int)v3 )
    return;
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0);
  this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
  if ( !this )
    goto LABEL_136;
  v11 = 0;
  while ( 1 )
  {
    m_CancellationTokenSource_low = (System_String_o *)LODWORD(this->fields.m_CancellationTokenSource);
    if ( v11 >= (int)m_CancellationTokenSource_low )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v11,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)Item, 0);
    this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
    if ( this )
    {
      this = (CommandCardExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             v11,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this )
      {
        this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, 0, 0);
          this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
          if ( this )
          {
            System_Collections_Generic_List_object___set_Item(
              (System_Collections_Generic_List_object__o *)this,
              v11,
              0,
              (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
            this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
            ++v11;
            if ( this )
              continue;
          }
        }
      }
    }
    goto LABEL_136;
  }
  v15 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v15;
  if ( (int)m_CancellationTokenSource_low >= 1 )
    System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, (int32_t)m_CancellationTokenSource_low, 0);
  v16 = v4->fields.commandCardComponents;
  if ( !v16 )
    goto LABEL_136;
  if ( LODWORD(v16->max_length) <= v3 )
    goto LABEL_145;
  v17 = v16->m_Items[v3];
  v4->fields.selectedCommandCard = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.selectedCommandCard,
    (int32_t)v17,
    m_CancellationTokenSource_low,
    v6,
    v7,
    v8,
    v9,
    v10);
  CommandCardExceedControl__SetSelectedFrameActive(v4, v3, v18);
  this = (CommandCardExceedControl_o *)v4->fields.targetSelectInfoBase;
  if ( !this )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CommandCardExceedControl_o *)v4->fields.exceedItemBase;
  if ( !this )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_136;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_136;
  EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0);
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_136;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = v4->fields.baseUserServantCommandCardEntity;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    if ( !commandCardParam )
      goto LABEL_136;
    if ( LODWORD(commandCardParam->max_length) <= v3 )
      goto LABEL_145;
    v22 = commandCardParam->m_Items[v3];
    if ( !this )
      goto LABEL_136;
  }
  else
  {
    v22 = 0;
    if ( !this )
      goto LABEL_136;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity((CommandCardRankParamMaster_o *)this, v22, 0);
  v25 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
    v25 = BalanceConfig_TypeInfo;
  }
  CommandCardParamUpMax = v25->static_fields->CommandCardParamUpMax;
  if ( EntityList && EntityList->max_length )
  {
    v87 = RankParamEntity;
    v27 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
    max_length_low = LODWORD(EntityList->max_length);
    if ( (int)max_length_low >= 1 )
    {
      for ( i = 0; (int)i < (int)max_length_low; ++i )
      {
        if ( i >= max_length_low )
          goto LABEL_145;
        v30 = &EntityList->obj.klass + i;
        v33 = v30[4];
        v32 = (char *)(v30 + 4);
        v31 = v33;
        if ( !v33 )
          goto LABEL_136;
        this = (CommandCardExceedControl_o *)v31->_1.typeMetadataHandle;
        if ( !this )
          goto LABEL_136;
        this = (CommandCardExceedControl_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                               (Il2CppObject *)StringLiteral_25939/*"validClassIds"*/,
                                               (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v4->fields.baseUserServantEntity )
          {
            if ( i >= LODWORD(EntityList->max_length) )
              goto LABEL_145;
            if ( !*(_QWORD *)v32 )
              goto LABEL_136;
            this = (CommandCardExceedControl_o *)EntityScriptUtil__GetIntArray(
                                                   *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v32 + 104LL),
                                                   (System_String_o *)StringLiteral_25939/*"validClassIds"*/,
                                                   0,
                                                   0);
            if ( !v4->fields.baseUserServantEntity )
              goto LABEL_136;
            v34 = this;
            this = (CommandCardExceedControl_o *)UserServantEntity__getSvtClassId(
                                                   v4->fields.baseUserServantEntity,
                                                   0,
                                                   0,
                                                   0);
            if ( !v34 )
              goto LABEL_136;
            m_CancellationTokenSource = (int)v34->fields.m_CancellationTokenSource;
            if ( m_CancellationTokenSource >= 1 )
            {
              v36 = 0;
              while ( m_CancellationTokenSource != v36 )
              {
                if ( (_DWORD)this == *((_DWORD *)&v34->fields.combineRootComponent + v36) )
                  goto LABEL_53;
                if ( (m_CancellationTokenSource & ~(m_CancellationTokenSource >> 31)) == ++v36 )
                  goto LABEL_60;
              }
LABEL_145:
              sub_21FFED4(this);
            }
          }
        }
        else
        {
LABEL_53:
          if ( i >= LODWORD(EntityList->max_length) )
            goto LABEL_145;
          if ( !*(_QWORD *)v32 )
            goto LABEL_136;
          if ( !v27 )
            goto LABEL_136;
          items = v27->fields._items;
          *(_QWORD *)&cardIndex = *(unsigned int *)(*(_QWORD *)v32 + 16LL);
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++v27->fields._version;
          if ( !items )
            goto LABEL_136;
          size = v27->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v27,
              cardIndex,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v27->fields._size = size + 1;
            items->m_Items[size] = cardIndex;
          }
        }
LABEL_60:
        max_length_low = LODWORD(EntityList->max_length);
      }
    }
    if ( v27 )
    {
      v40 = System_Collections_Generic_List_int___ToArray(
              v27,
              (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      v4->fields._ExceedItemIds_k__BackingField = v40;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v4->fields._ExceedItemIds_k__BackingField,
        (int32_t)v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      RankParamEntity = v87;
      goto LABEL_63;
    }
LABEL_136:
    sub_21FFECC(this, *(_QWORD *)&cardIndex);
  }
LABEL_63:
  if ( RankParamEntity )
  {
    useItemNum = RankParamEntity->fields.useItemNum;
    LODWORD(RankParamEntity) = RankParamEntity->fields.useQp;
  }
  else
  {
    useItemNum = 0;
  }
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_136;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  ExceedItemIds_k__BackingField = v4->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_136;
  max_length = ExceedItemIds_k__BackingField->max_length;
  v88 = (int)RankParamEntity;
  if ( (int)max_length >= 1 )
  {
    v50 = (UserItemMaster_o *)this;
    v51 = 0;
    v52 = 0;
    while ( v52 < (unsigned int)max_length )
    {
      v53 = ExceedItemIds_k__BackingField->m_Items[v52];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
        this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      }
      if ( !v50 )
        goto LABEL_136;
      this = (CommandCardExceedControl_o *)UserItemMaster__TryGetEntity(
                                             v50,
                                             &entity,
                                             *(_QWORD *)(*(_QWORD *)&this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g
                                                       + 64LL),
                                             v53,
                                             0);
      if ( entity )
        v51 += entity->fields.num;
      LODWORD(max_length) = ExceedItemIds_k__BackingField->max_length;
      if ( (__int64)++v52 >= (int)max_length )
        goto LABEL_83;
    }
    goto LABEL_145;
  }
  v51 = 0;
LABEL_83:
  exceedItemComponents = v4->fields.exceedItemComponents;
  if ( !exceedItemComponents )
    goto LABEL_136;
  v55 = 0;
  while ( 1 )
  {
    v56 = exceedItemComponents->max_length;
    if ( v55 >= v56 )
      break;
    if ( v55 >= (unsigned int)v56 )
      goto LABEL_145;
    this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v55];
    if ( !this )
      goto LABEL_136;
    this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v22 < CommandCardParamUpMax )
    {
      v57 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v57 )
        goto LABEL_136;
      *(_QWORD *)&cardIndex = v55 < SLODWORD(v57->max_length);
    }
    else
    {
      *(_QWORD *)&cardIndex = 0;
    }
    if ( !this )
      goto LABEL_136;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0);
    v58 = v4->fields._ExceedItemIds_k__BackingField;
    if ( !v58 )
      goto LABEL_136;
    if ( v22 < CommandCardParamUpMax && v55 < SLODWORD(v58->max_length) )
    {
      v59 = v4->fields.exceedItemComponents;
      if ( !v59 )
        goto LABEL_136;
      if ( (unsigned int)v55 >= LODWORD(v59->max_length) )
        goto LABEL_145;
      v60 = v59->m_Items[v55];
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
        this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      }
      v61 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v61 )
        goto LABEL_136;
      if ( (unsigned int)v55 >= LODWORD(v61->max_length) )
        goto LABEL_145;
      if ( !v60 )
        goto LABEL_136;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v60,
        *(_QWORD *)(*(_QWORD *)&this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g + 64LL),
        v61->m_Items[v55],
        useItemNum,
        0);
      v62 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v62 )
        goto LABEL_136;
      if ( (unsigned int)v55 >= LODWORD(v62->max_length) )
        goto LABEL_145;
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v4, v62->m_Items[v55], useItemNum, 0);
      orGameObject = (UnityEngine_Object_o *)v4->fields.orGameObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
      this = (CommandCardExceedControl_o *)UnityEngine_Object__op_Implicit(orGameObject, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v65 = v4->fields._ExceedItemIds_k__BackingField;
        if ( !v65 )
          goto LABEL_136;
        if ( v55 < LODWORD(v65->max_length) - 1 )
        {
          v66 = (Il2CppObject *)v4->fields.orGameObject;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&cardIndex);
          this = (CommandCardExceedControl_o *)UnityEngine_Object__Instantiate_object_(
                                                 v66,
                                                 (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !this )
            goto LABEL_136;
          v67 = this;
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
          v68 = v4->fields.exceedItemComponents;
          if ( !v68 )
            goto LABEL_136;
          if ( (unsigned int)v55 >= LODWORD(v68->max_length) )
            goto LABEL_145;
          v69 = this;
          this = (CommandCardExceedControl_o *)v68->m_Items[v55];
          if ( !this )
            goto LABEL_136;
          this = (CommandCardExceedControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_136;
          this = (CommandCardExceedControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
          if ( !v69 )
            goto LABEL_136;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v69, (UnityEngine_Transform_o *)this, 0);
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0);
          v70 = v4->fields.exceedItemComponents;
          if ( !v70 )
            goto LABEL_136;
          if ( (unsigned int)v55 >= LODWORD(v70->max_length) )
            goto LABEL_145;
          v71 = this;
          this = (CommandCardExceedControl_o *)v70->m_Items[v55];
          if ( !this )
            goto LABEL_136;
          this = (CommandCardExceedControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_136;
          this = (CommandCardExceedControl_o *)UnityEngine_Transform__GetSiblingIndex(
                                                 (UnityEngine_Transform_o *)this,
                                                 0);
          if ( !v71 )
            goto LABEL_136;
          UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)v71, (_DWORD)this + 1, 0);
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0);
          v72 = this;
          if ( !byte_5931945 )
          {
            this = (CommandCardExceedControl_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931945 = 1;
          }
          if ( !v72 )
            goto LABEL_136;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v72,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v67, 1, 0);
          this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
          if ( !this )
            goto LABEL_136;
          m_CachedPtr = this->fields.m_CachedPtr;
          v80 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_136;
          v81 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v81 >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v67,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = m_CachedPtr + 8 * v81;
            LODWORD(this->fields.m_CancellationTokenSource) = v81 + 1;
            *(_QWORD *)(v82 + 32) = v67;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v82 + 32), (int32_t)v67, v73, v74, v75, v76, v77, v78);
          }
        }
      }
    }
    exceedItemComponents = v4->fields.exceedItemComponents;
    ++v55;
    if ( !exceedItemComponents )
      goto LABEL_136;
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0);
  CommandCardExceedControl__SetInfoMessageLabels(v4, 2, v51 >= useItemNum, v22 >= CommandCardParamUpMax, v83);
  v85 = 0;
  if ( v51 >= useItemNum && v4->fields.baseUserServantEntity && v22 < CommandCardParamUpMax )
  {
    this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0);
    if ( !this )
      goto LABEL_136;
    v85 = (__int64)this->fields.menuListCtr >= v88;
  }
  CommandCardExceedControl__SetCombineButtonState(v4, 2, v85, v22 >= CommandCardParamUpMax, v84);
  exceedItemGrid = v4->fields.exceedItemGrid;
  if ( exceedItemGrid )
    ((void (__fastcall *)(struct UIGrid_o *, const MethodInfo *))exceedItemGrid->klass->vtable._8_Reposition.methodPtr)(
      exceedItemGrid,
      exceedItemGrid->klass->vtable._8_Reposition.method);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 baseUserServantEntity; // x0
  UserServantEntity_o *v4; // x21
  int32_t v5; // w20
  int32_t displayTransformIndex; // w1
  int32_t CommandCardLimitCountStageSealAfter; // w0
  __int64 v8; // x1
  int32_t v9; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  __int64 v11; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float v13; // s1 OVERLAPPED
  float v14; // s0
  int v15; // s2
  float v16; // s0
  __int64 (*v17)(void); // x9
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v19; // x27
  unsigned __int64 max_length_low; // x9
  __int64 v21; // x10
  unsigned __int64 v22; // x11
  int32_t v23; // w25
  CombineCommandCardComponent_o *v24; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  BattleCommandData_o *v31; // x24
  const MethodInfo *v32; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int64_t v35; // x25
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v38; // w3
  const MethodInfo *v39; // x2
  bool v40; // zf
  float v41; // s3 OVERLAPPED
  float v42; // s0
  float v43; // s1
  float v44; // s2
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_593C873 & 1) == 0 )
  {
    sub_21FFC50(&BattleCommandData_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C873 = 1;
  }
  baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_45;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0);
  v4 = this->fields.baseUserServantEntity;
  if ( !v4 )
    goto LABEL_45;
  v5 = baseUserServantEntity;
  if ( UserServantEntity__get_IsSaveTransformServant(this->fields.baseUserServantEntity, 0) )
    displayTransformIndex = this->fields.displayTransformIndex;
  else
    displayTransformIndex = -1;
  CommandCardLimitCountStageSealAfter = UserServantEntity__GetCommandCardLimitCountStageSealAfter(
                                          v4,
                                          displayTransformIndex,
                                          0,
                                          0);
  v9 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CommandCardLimitCountStageSealAfter, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v8);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_45;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_45;
  baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v5,
                                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.cardBaseGrid )
    goto LABEL_45;
  v11 = baseUserServantEntity;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.cardBaseGrid, 0);
  v13 = -15.5;
  if ( this->fields._IsTransformServant_k__BackingField )
  {
    v13 = -18.0;
    v14 = -270.0;
  }
  else
  {
    v14 = -258.0;
  }
  v15 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v13 - 1), 0);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_45;
  v16 = 135.0;
  if ( !this->fields._IsTransformServant_k__BackingField )
    v16 = 130.0;
  v17 = *(__int64 (**)(void))(*(_QWORD *)baseUserServantEntity + 440LL);
  *(float *)(baseUserServantEntity + 48) = v16;
  baseUserServantEntity = v17();
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_45;
  v19 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(commandCardComponents->max_length);
    if ( (__int64)v19 >= (int)max_length_low )
      break;
    if ( !v11 )
      goto LABEL_45;
    v21 = *(_QWORD *)(v11 + 144);
    if ( !v21 )
      break;
    v22 = *(unsigned int *)(v21 + 24);
    if ( (__int64)v19 >= (int)v22 )
      break;
    if ( v19 >= v22 )
      goto LABEL_51;
    v23 = *(_DWORD *)(v21 + 4 * v19 + 32);
    if ( (unsigned int)(v23 - 1) <= 2 )
    {
      if ( v19 >= max_length_low )
        goto LABEL_51;
      v24 = commandCardComponents->m_Items[v19];
      baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !v24 )
        goto LABEL_45;
      v24->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v24->fields.target,
        baseUserServantEntity,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v31 = (BattleCommandData_o *)sub_21FFEBC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_53546516(v31, v23, v5, LimitCountByImageLimitCostumeIn, 0, -1, 0);
      if ( !v31 )
        goto LABEL_45;
      baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
      v31->fields.markindex = v19;
      v31->fields.servantCardIdsIndex = v19;
      if ( baseUserServantCommandCodeEntity
        && (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) != 0 )
      {
        if ( v19 >= LODWORD(userCommandCodeIds->max_length) )
          goto LABEL_51;
        v35 = userCommandCodeIds->m_Items[v19] & ~(userCommandCodeIds->m_Items[v19] >> 63);
      }
      else
      {
        v35 = 0;
      }
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, v35, v32);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0 )
      {
        if ( v19 >= LODWORD(commandCardParam->max_length) )
LABEL_51:
          sub_21FFED4(baseUserServantEntity);
        v38 = commandCardParam->m_Items[v19];
      }
      else
      {
        v38 = 0;
      }
      v31->fields.commandCodeId = baseUserServantEntity;
      v31->fields.commandCardParam = v38;
      v31->fields.userCommandCodeId = v35;
      CombineCommandCardComponent__DispCommandCard(v24, v31, v35, v38, 1, 1, 0);
      v40 = !CommandCardExceedControl__IsTransformedServant(this, this->fields.displayTransformIndex, v39);
      v41 = 1.0;
      if ( v40 )
        v42 = 1.0;
      else
        v42 = 0.5;
      v43 = v42;
      v44 = v42;
      CombineCommandCardComponent__SetColor(v24, *(UnityEngine_Color_o *)(&v41 - 3), 0);
      CombineCommandCardComponent__SetLayout(v24, this->fields.positionOffsetY, this->fields.scaleOffset, 0);
    }
    commandCardComponents = this->fields.commandCardComponents;
    ++v19;
    if ( !commandCardComponents )
      goto LABEL_45;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  baseUserServantEntity = (__int64)this->fields.itemLinkInfoListBtn;
  if ( !baseUserServantEntity
    || (baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseUserServantEntity,
                                           0)) == 0 )
  {
LABEL_45:
    sub_21FFECC(baseUserServantEntity, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0);
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onAssetLoadEnd, 0, v45, v46, v47, v48, v49, v50);
    ((void (__fastcall *)(intptr_t, intptr_t))onAssetLoadEnd->fields.invoke_impl)(
      onAssetLoadEnd->fields.method_code,
      onAssetLoadEnd->fields.method);
  }
}


void CommandCardExceedControl__SetEventDelegate(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  CommandCardExceedControl_o *v2; // x19
  struct UICommonButton_o *combineButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v5; // x21
  __int64 v6; // x1
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *v8; // x20
  EventDelegate_Callback_o *v9; // x21
  struct UITouchPress_o *v10; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v12; // x21
  System_Collections_Generic_List_EventDelegate__o *v13; // x20
  EventDelegate_Callback_o *v14; // x21

  v2 = this;
  if ( (byte_593C868 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_CombineMenuControl_OnLongPushListView__);
    sub_21FFC50(&Method_CommandCardExceedControl_OnClickCombine__);
    sub_21FFC50(&EventDelegate_TypeInfo);
    this = (CommandCardExceedControl_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_593C868 = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v5 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, (intptr_t)Method_CommandCardExceedControl_OnClickCombine__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v6);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_56117672(onClick, v5, 0);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v8 = baseServantTouchPress->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._4_OnClickBase.method, 0);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_56117672(v8, v9, 0);
  v10 = v2->fields.baseServantTouchPress;
  if ( !v10
    || (onLongPress = v10->fields.onLongPress,
        v12 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v12,
          (Il2CppObject *)v2,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0),
        EventDelegate__Set_56117672(onLongPress, v12, 0),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_11:
    sub_21FFECC(this, method);
  }
  v13 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.positionOffsetY;
  v14 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v14, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.method, 0);
  EventDelegate__Set_56117672(v13, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetInfoMessageLabels(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        const MethodInfo *method)
{
  void *SelfUserGame; // x0
  MethodInfo *v10; // x1
  int64_t v11; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x5
  const MethodInfo *v14; // x2
  int32_t v15; // w25
  UILabel_o *detailLabel; // x24
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  UILabel_o *userQpLabel; // x23
  __int64 v22; // x1
  UILabel_o *requiredQpLabel; // x23
  float v24; // s1 OVERLAPPED
  float v25; // s3
  float v26; // s0
  float v27; // s2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v31; // x24
  struct System_Int32_array *commandCardParam; // x25

  if ( (byte_593C86C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C86C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
LABEL_32:
    sub_21FFECC(SelfUserGame, v10);
  v11 = *((_QWORD *)SelfUserGame + 12);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v10);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v12),
        ((unsigned __int8)SelfUserGame & 1) != 0)
    || (SelfUserGame = (void *)CommandCardExceedControl__IsTransformedServant(
                                 this,
                                 this->fields.displayTransformIndex,
                                 v14),
        ((unsigned __int8)SelfUserGame & 1) != 0) )
  {
    v15 = 0;
    goto LABEL_8;
  }
  SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = DataManager__GetMasterData_object_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v31 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v29);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= LODWORD(commandCardParam->max_length) )
      sub_21FFED4(SelfUserGame);
    v10 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame];
    if ( !v31 )
      goto LABEL_32;
  }
  else
  {
    v10 = 0;
    if ( !SelfUserGame )
      goto LABEL_32;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v31, (int32_t)v10, 0);
  if ( !SelfUserGame )
    goto LABEL_32;
  v15 = *((_DWORD *)SelfUserGame + 11);
LABEL_8:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = CommandCardExceedControl__GetDetailLabelText(
                   (CommandCardExceedControl_o *)SelfUserGame,
                   stateType,
                   isItemEnough,
                   isExceedMax,
                   v11 >= v15,
                   v13);
  if ( !detailLabel )
    goto LABEL_32;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v18, stateType, v19);
  if ( !targetSelectInfoLabel )
    goto LABEL_32;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0);
  userQpLabel = this->fields.userQpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  SelfUserGame = LocalizationManager__GetNumberFormatLong(v11, 0);
  if ( !userQpLabel )
    goto LABEL_32;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v15 <= 0 )
  {
    v10 = (MethodInfo *)StringLiteral_1/*""*/;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    SelfUserGame = LocalizationManager__GetNumberFormat(v15, 0);
    v10 = (MethodInfo *)SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v10, 0);
  SelfUserGame = this->fields.requiredQpLabel;
  if ( !SelfUserGame )
    goto LABEL_32;
  v24 = 1.0;
  v25 = 1.0;
  if ( v11 < v15 )
    v24 = 0.0;
  v26 = 1.0;
  v27 = v24;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)(&v24 - 1), 0);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v28);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetSelectedFrameActive(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  CommandCardExceedControl_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
LABEL_7:
    sub_21FFECC(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_21FFED4(this);
    this = (CommandCardExceedControl_o *)commandCardComponents->m_Items[v5];
    if ( this )
    {
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)this, cardIndex == (_DWORD)v5, 0);
      commandCardComponents = v4->fields.commandCardComponents;
      ++v5;
      if ( commandCardComponents )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetUseItemTitle(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *useItemTitleNormal; // x0

  useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal
    || (useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType != 2, 0),
        (useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleSelect) == 0)
    || (useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0)) == 0 )
  {
    sub_21FFECC(useItemTitleNormal, *(_QWORD *)&stateType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType == 2, 0);
}


void CommandCardExceedControl__SetUserServant(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *selectedUserServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  __int128 v11; // q1
  int64_t v12; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-50h]

  if ( (byte_593C870 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593C870 = 1;
  }
  if ( selectedUserServantEntity )
  {
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    if ( !this->fields.baseUserServantEntity )
      goto LABEL_9;
    v11 = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v30.fields.fakeValue = v11;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    v29 = v30;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v29, 0);
    v14 = *p_baseUserServantEntity;
    if ( !*p_baseUserServantEntity )
      sub_21FFECC(v12, v13);
    v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v28.fields.fakeValue = v15;
    if ( v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v28, 0) )
    {
LABEL_9:
      this->fields.baseUserServantEntity = selectedUserServantEntity;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
        (int32_t)selectedUserServantEntity,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v17);
      CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v18);
      return;
    }
    CommandCardExceedControl__InitBaseServant(this, v16);
  }
  this->fields.baseUserServantEntity = selectedUserServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectedUserServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v19);
  CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v20);
  this->fields.selectedCommandCard = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectedCommandCard, 0, v21, v22, v23, v24, v25, v26);
  CommandCardExceedControl__InitExceedItem(this, v27);
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
}


void CommandCardExceedControl__SetUserServantCommandCard(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v9; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  int64_t userIdNumber; // x22
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  NetworkManager_c *v15; // x0
  int64_t v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_593C871 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C871 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v9 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
      v9 = NetworkManager_TypeInfo;
    }
    v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    userIdNumber = v9->static_fields->userIdNumber;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v17.fields.currentCryptoKey = v10;
    *(_QWORD *)&v17.fields.fakeValue = v11;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v17, 0);
    if ( !MasterData_object )
      goto LABEL_22;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      userIdNumber,
      (int)Instance,
      0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v14 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v15 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
      v15 = NetworkManager_TypeInfo;
    }
    v16 = v15->static_fields->userIdNumber;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                 userServantEntity->fields.svtId,
                                 0);
    if ( !v14 )
LABEL_22:
      sub_21FFECC(Instance, v6);
    UserServantCommandCodeMaster__TryGetEntity(
      (UserServantCommandCodeMaster_o *)v14,
      &this->fields.baseUserServantCommandCodeEntity,
      v16,
      (int)Instance,
      0);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, (const MethodInfo *)userServantEntity);
  }
}


void CommandCardExceedControl___OnClickCombine_b__71_0(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  this->fields.isProcessingButton = 0;
}


void CommandCardExceedControl___OnClickCombine_b__71_1(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  this->fields.isProcessingButton = 0;
}


UserServantEntity_o *CommandCardExceedControl__get_BaseSelectedUserServantEntity(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseUserServantEntity;
}


int32_t CommandCardExceedControl__get_CardIndex(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectedCommandCard; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_593C878 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C878 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0, 0) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_21FFECC(0, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0);
}


System_Int32_array *CommandCardExceedControl__get_ExceedItemIds(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields._ExceedItemIds_k__BackingField;
}


void CommandCardExceedControl__set_ExceedItemIds(
        CommandCardExceedControl_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ExceedItemIds_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ExceedItemIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommandCardExceedControl__touchCommandCard(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  bool IsTransformedServant; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *selectedCommandCard; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  BattleCommandComponent_o *v13; // x0

  if ( (byte_593C87A & 1) == 0 )
  {
    sub_21FFC50(&Method_CommandCardExceedControl_touchCommandCard__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C87A = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    IsTransformedServant = CommandCardExceedControl__IsTransformedServant(
                             this,
                             this->fields.displayTransformIndex,
                             method);
    v6 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( IsTransformedServant )
    {
      if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_21FFC68(Method_CommandCardExceedControl_touchCommandCard__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    }
    else
    {
      if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_21FFC68(Method_CommandCardExceedControl_touchCommandCard__);
      v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0, 0) )
        goto LABEL_16;
      v13 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
      if ( !v13 )
        sub_21FFECC(0, v11);
      if ( BattleCommandComponent__getMarkIndex(v13, 0) != cardIndex )
LABEL_16:
        CommandCardExceedControl__SetCommandCardDisplay(this, cardIndex, v12);
    }
  }
}