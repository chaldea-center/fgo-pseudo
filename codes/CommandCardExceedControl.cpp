void CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5ACCA & 1) == 0 )
  {
    sub_1C3E564(&CombineMenuControl_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C5ACCA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.orObjectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.orObjectList, (int32_t)v3, v4, v5);
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


System_String_o *CommandCardExceedControl__GetCombineButtonLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isExceedMax,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_4C5ACBB & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17687/*"buttontxt_synthesis"*/);
    sub_1C3E564(&StringLiteral_17684/*"buttontxt_notsynthesis"*/);
    byte_4C5ACBB = 1;
  }
  if ( stateType != 2 || !isExceedMax )
    v6 = &StringLiteral_17687/*"buttontxt_synthesis"*/;
  else
    v6 = &StringLiteral_17684/*"buttontxt_notsynthesis"*/;
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
  __int64 v8; // x27
  unsigned __int64 v9; // x22
  __int64 baseUserServantEntity; // x0
  int32_t v11; // w23
  int32_t CommandCardLimitCount; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w24
  int32_t ServantImageLimitSealAfter; // w25
  __int64 v15; // x8
  int32_t v16; // w9
  BattleCommandData_o *v17; // x24
  const MethodInfo *v18; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v20; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v25; // x0
  __int64 v26; // [xsp+8h] [xbp-78h]
  int32_t type; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C5ACC9 & 1) == 0 )
  {
    sub_1C3E564(&BattleCommandData___TypeInfo);
    sub_1C3E564(&BattleCommandData_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5ACC9 = 1;
  }
  v5 = sub_1C3E60C(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
  v7 = (unsigned int *)v5;
  if ( this->fields.transformTotal >= 1 )
  {
    v8 = 0;
    v9 = 0;
    v26 = v5 + 32;
    while ( 1 )
    {
      baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                                (UserServantEntity_o *)baseUserServantEntity,
                                v9,
                                0);
      if ( !this->fields.baseUserServantEntity )
        break;
      v11 = baseUserServantEntity;
      CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v11,
                                     LimitCountByImageLimitCostumeIn,
                                     0);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v11,
                                         (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !baseUserServantEntity )
        break;
      v15 = *(_QWORD *)(baseUserServantEntity + 144);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 24);
        if ( v16 > cardIndex )
        {
          if ( v16 <= (unsigned int)cardIndex )
            goto LABEL_29;
          type = *(_DWORD *)(v15 + 4LL * cardIndex + 32);
          v17 = (BattleCommandData_o *)sub_1C3E7B0(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_46651164(v17, type, v11, ServantImageLimitSealAfter, 0, -1, 0);
          if ( !v17 )
            break;
          v17->fields.markindex = cardIndex;
          v17->fields.servantCardIdsIndex = cardIndex;
          UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, cardIndex, v18);
          v17->fields.userCommandCodeId = UserCommandCodeId;
          baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v20);
          v17->fields.commandCodeId = baseUserServantEntity;
          baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
          if ( baseUserServantCommandCardEntity )
          {
            baseUserServantCommandCardEntity = (struct UserServantCommandCardEntity_o *)baseUserServantCommandCardEntity->fields.commandCardParam;
            if ( baseUserServantCommandCardEntity )
            {
              if ( LODWORD(baseUserServantCommandCardEntity->fields.userId.fields.hiddenValue) <= cardIndex )
                goto LABEL_29;
              LODWORD(baseUserServantCommandCardEntity) = *((_DWORD *)&baseUserServantCommandCardEntity->fields.userId.fields.fakeValue
                                                          + cardIndex);
            }
          }
          v17->fields.commandCardParam = (int)baseUserServantCommandCardEntity;
          if ( !v7 )
            break;
          baseUserServantEntity = sub_1C3E6A0(v17, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
          if ( !baseUserServantEntity )
          {
            v25 = sub_1C3E7E4(0);
            sub_1C3E68C(v25, 0);
          }
          if ( v9 >= v7[6] )
LABEL_29:
            sub_1C3E7C8(baseUserServantEntity, v6);
          *(_QWORD *)(v26 + 8 * v9) = v17;
          sub_1C3E508((CGThumbnailListItem_o *)(v26 + v8), (int32_t)v17, v22, v23);
        }
      }
      ++v9;
      v8 += 8;
      if ( (__int64)v9 >= this->fields.transformTotal )
        return (BattleCommandData_array *)v7;
    }
    sub_1C3E7C0(baseUserServantEntity, v6);
  }
  return (BattleCommandData_array *)v7;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C8(this, *(_QWORD *)&cardIndex);
  return commandCardParam->m_Items[cardIndex];
}


int32_t CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userCommandCodeMaster; // x0
  __int64 v6; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C5ACC0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5ACC0 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v6 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v9, 0);
}


System_String_o *CommandCardExceedControl__GetDetailLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        bool isQpEnough,
        const MethodInfo *method)
{
  __int64 *v10; // x8

  if ( (byte_4C5ACB9 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3636/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/);
    sub_1C3E564(&StringLiteral_3637/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/);
    sub_1C3E564(&StringLiteral_12192/*"SHORT_QP_INFO_MSG"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_3643/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/);
    sub_1C3E564(&StringLiteral_3642/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/);
    byte_4C5ACB9 = 1;
  }
  switch ( stateType )
  {
    case 4:
      goto LABEL_6;
    case 2:
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( isExceedMax )
        {
LABEL_12:
          v10 = &StringLiteral_3643/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v10, 0);
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( isExceedMax )
          goto LABEL_12;
      }
      if ( isItemEnough )
      {
        if ( isQpEnough )
          v10 = &StringLiteral_3636/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        else
          v10 = &StringLiteral_12192/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        v10 = &StringLiteral_3642/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v10, 0);
    case 0:
LABEL_6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_3637/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v10, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool CommandCardExceedControl__GetIsAllParamMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int64_t v9; // x19
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v12; // x20
  int32_t v13; // w23
  int32_t v14; // w9
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C5ACC3 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5ACC3 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_28;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  v9 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v17, 0);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = (DataManager_o *)UserServantCommandCardMaster__TryGetEntity(
                                (UserServantCommandCardMaster_o *)MasterData_object,
                                &entity,
                                v9,
                                (int)Instance,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_28:
    sub_1C3E7C0(Instance, v4);
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  max_length = commandCardParam->max_length;
  if ( max_length < 1 )
    return 1;
  v12 = 0;
  do
  {
    if ( (unsigned int)v12 >= max_length )
      sub_1C3E7C8(Instance, v4);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v13 = commandCardParam->m_Items[v12];
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 772LL);
    if ( v13 < v14 )
      break;
    max_length = commandCardParam->max_length;
    ++v12;
  }
  while ( (int)v12 < max_length );
  return v13 >= v14;
}


bool CommandCardExceedControl__GetIsCombineEnable(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v4; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x20
  DataManager_o *CardIndex; // x0
  __int64 v8; // x1
  int32_t v9; // w20
  BalanceConfig_c *v10; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v12; // x1
  struct UserServantCommandCardEntity_o *v13; // x8
  CommandCardRankParamMaster_o *v14; // x20
  struct System_Int32_array *v15; // x22
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w22
  struct System_Int32_array *v19; // x23
  il2cpp_array_size_t max_length; // x8
  UserItemMaster_o *v21; // x19
  int32_t v22; // w24
  unsigned __int64 v23; // x25
  int32_t v24; // w21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C5ACC1 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5ACC1 = 1;
  }
  entity = 0;
  if ( !this->fields.baseUserServantEntity )
    return 0;
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0, 0) )
    return 0;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    if ( commandCardParam )
    {
      CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v4);
      if ( (unsigned int)CardIndex >= LODWORD(commandCardParam->max_length) )
        goto LABEL_45;
      v9 = commandCardParam->m_Items[(int)CardIndex];
      v10 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      if ( v9 >= v10->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_44;
  CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                 CardIndex,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v13 = this->fields.baseUserServantCommandCardEntity;
  v14 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v13 )
  {
    v15 = v13->fields.commandCardParam;
    CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v12);
    if ( !v15 )
      goto LABEL_44;
    if ( (unsigned int)CardIndex >= LODWORD(v15->max_length) )
LABEL_45:
      sub_1C3E7C8(CardIndex, v8);
    v8 = (unsigned int)v15->m_Items[(int)CardIndex];
    if ( !v14 )
      goto LABEL_44;
  }
  else
  {
    v8 = 0;
    if ( !CardIndex )
      goto LABEL_44;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v14, v8, 0);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex
    || (CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                       CardIndex,
                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___),
        (v19 = this->fields._ExceedItemIds_k__BackingField) == 0) )
  {
LABEL_44:
    sub_1C3E7C0(CardIndex, v8);
  }
  max_length = v19->max_length;
  if ( (int)max_length >= 1 )
  {
    v21 = (UserItemMaster_o *)CardIndex;
    v22 = 0;
    v23 = 0;
    while ( v23 < (unsigned int)max_length )
    {
      v24 = v19->m_Items[v23];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_44;
      CardIndex = (DataManager_o *)UserItemMaster__TryGetEntity(
                                     v21,
                                     &entity,
                                     *(_QWORD *)(*(_QWORD *)&CardIndex[1].fields._DispLog + 64LL),
                                     v24,
                                     0);
      if ( entity )
        v22 += entity->fields.num;
      LODWORD(max_length) = v19->max_length;
      if ( (__int64)++v23 >= (int)max_length )
        return v22 >= useItemNum;
    }
    goto LABEL_45;
  }
  v22 = 0;
  return v22 >= useItemNum;
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
  BalanceConfig_c *v11; // x0

  if ( (byte_4C5ACC2 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5ACC2 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0, 0)
    || CommandCardExceedControl__get_CardIndex(this, v4) < 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v8 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v6);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= LODWORD(commandCardParam->max_length) )
        sub_1C3E7C8(Instance, v6);
      v10 = commandCardParam->m_Items[(int)Instance];
      if ( v8 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C3E7C0(Instance, v6);
  }
  v10 = 0;
  if ( !Instance )
    goto LABEL_17;
LABEL_12:
  CommandCardRankParamMaster__GetRankParamEntity(v8, v10, 0);
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return v10 >= v11->static_fields->CommandCardParamUpMax;
}


System_String_o *CommandCardExceedControl__GetTargetSelectInfoLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4C5ACBA & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3638/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/);
    sub_1C3E564(&StringLiteral_3640/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5ACBA = 1;
  }
  if ( stateType == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_3640/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( !stateType )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_3638/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t CommandCardExceedControl__GetTutorialOpenType(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  return 59;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C8(this, *(_QWORD *)&cardIndex);
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
    sub_1C3E7C0(commandCardExceedConfirmDialog, v9);
  }
  BaseDialog__Init(commandCardExceedConfirmDialog, 0);
}


void CommandCardExceedControl__InitBaseServant(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  UnityEngine_Object_o *charaGraphTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5ACB7 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5ACB7 = 1;
  }
  this->fields.baseUserServantEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  baseSelectInfoObject = this->fields.baseSelectInfoObject;
  if ( !baseSelectInfoObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(baseSelectInfoObject, 1, 0);
  charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraphTexture, 0, 0) )
  {
    baseSelectInfoObject = (UnityEngine_GameObject_o *)this->fields.charaGraphTexture;
    if ( baseSelectInfoObject )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)baseSelectInfoObject,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(gameObject, 0);
      this->fields.charaGraphTexture = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.charaGraphTexture, 0, v9, v10);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(baseSelectInfoObject, v5);
  }
}


void CommandCardExceedControl__InitCommandCard(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v14; // w22
  CombineCommandCardComponent_o *v15; // x20
  const MethodInfo *v16; // x2
  CGThumbnailListItem_o *p_userCommandCodeMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C5ACB6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5ACB6 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseUserServantCommandCardEntity, 0, v2, v3);
  this->fields.selectedCommandCard = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectedCommandCard, 0, v5, v6);
  this->fields.baseUserServantCommandCodeEntity = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.baseUserServantCommandCodeEntity, 0, v7, v8);
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_13;
  max_length = commandCardComponents->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C3E7C8(Instance, v10);
      v15 = commandCardComponents->m_Items[v14];
      if ( !v15 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)Instance,
        v15->fields.selectedSprite,
        0,
        v11);
      CombineCommandCardComponent__SetCommandCardEnable(v15, 0, v16);
      max_length = commandCardComponents->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_1C3E7C0(Instance, v10);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (CGThumbnailListItem_o *)&this->fields.userCommandCodeMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C3E508(p_userCommandCodeMaster, (int32_t)MasterData_object, v19, v20);
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
    sub_1C3E7C0(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0);
}


void CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_4C5ACB5 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5ACB5 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (detailLabel = this->fields.userQpLabel) == 0)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (detailLabel = this->fields.requiredQpLabel) == 0) )
  {
    sub_1C3E7C0(detailLabel, method);
  }
  UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void CommandCardExceedControl__InitTransformInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t TransformCount; // w1

  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton
    || (UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0),
        (cardSwitchButton = (UnityEngine_GameObject_o *)this->fields.servantName) == 0)
    || (cardSwitchButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cardSwitchButton, 0)) == 0 )
  {
    sub_1C3E7C0(cardSwitchButton, method);
  }
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  TransformCount = 1;
  this->fields.displayTransformIndex = 0;
  if ( baseUserServantEntity )
    TransformCount = UserServantEntity__GetTransformCount(baseUserServantEntity, 1, 0);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0);
}


void CommandCardExceedControl__OnClickCombine(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  CommandCardExceedConfirmDialog_o *v8; // x20
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x21
  int32_t CardIndex; // w0
  const MethodInfo *v11; // x2
  BattleCommandData_array *CommandCardDataEachServantId; // x22
  const MethodInfo *v13; // x1
  int32_t v14; // w0
  const MethodInfo *v15; // x2
  int64_t UserCommandCodeId; // x0
  System_Int32_array *v17; // x23
  int64_t v18; // x24
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x7

  if ( (byte_4C5ACC5 & 1) == 0 )
  {
    sub_1C3E564(&Method_CommandCardExceedControl_OnClickCombine__);
    byte_4C5ACC5 = 1;
  }
  v3 = Method_CommandCardExceedControl_OnClickCombine__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_CommandCardExceedControl_OnClickCombine__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_11;
  v8 = SLODWORD(ExceedItemIds_k__BackingField->max_length) >= 2
     ? this->fields.commandCardExceedAddConfirmDialog
     : this->fields.commandCardExceedConfirmDialog;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  CardIndex = CommandCardExceedControl__get_CardIndex(this, v6);
  CommandCardDataEachServantId = CommandCardExceedControl__GetCommandCardDataEachServantId(this, CardIndex, v11);
  v14 = CommandCardExceedControl__get_CardIndex(this, v13);
  UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v14, v15);
  v17 = this->fields._ExceedItemIds_k__BackingField;
  v18 = UserCommandCodeId;
  v5 = CommandCardExceedControl__get_CardIndex(this, v19);
  if ( !v8 )
LABEL_11:
    sub_1C3E7C0(v5, v6);
  CommandCardExceedConfirmDialog__Open(
    v8,
    baseUserServantCommandCardEntity,
    CommandCardDataEachServantId,
    v18,
    v17,
    v5,
    this->fields.onRequestCombine,
    v20);
}


void CommandCardExceedControl__OnClickSwitchButton(CommandCardExceedControl_o *this, const MethodInfo *method)
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

  if ( (byte_4C5ACC8 & 1) == 0 )
  {
    sub_1C3E564(&Method_CommandCardExceedControl_OnClickSwitchButton__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5ACC8 = 1;
  }
  transformInfo = 0;
  this->fields.displayTransformIndex = (this->fields.displayTransformIndex + 1) % this->fields.transformTotal;
  CommandCardExceedControl__SetCommandCards(this, method);
  if ( this->fields.transformTotal > 1 )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_25;
    baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                     baseUserServantEntity,
                                                     &transformInfo,
                                                     this->fields.displayTransformIndex,
                                                     0);
    if ( !transformInfo )
      goto LABEL_25;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.servantName;
    if ( !baseUserServantEntity )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0);
  }
  if ( this->fields.displayTransformIndex >= 1 )
  {
    CommandCardExceedControl__InitExceedItem(this, v3);
    CommandCardExceedControl__SetCombineButtonState(this, 0, 0, 0, v5);
    CommandCardExceedControl__SetInfoMessageLabels(this, 0, 0, 0, v6);
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
          v8 = 0;
          goto LABEL_22;
        }
      }
    }
    goto LABEL_25;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectedCommandCard, 0, 0) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.selectedCommandCard;
    if ( !baseUserServantEntity )
      goto LABEL_25;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0);
    CommandCardExceedControl__SetCommandCardDisplay(this, MarkIndex, v11);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.useItemTitleNormal;
  if ( !baseUserServantEntity
    || (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v12, 0)) == 0)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0)) == 0 )
  {
LABEL_25:
    sub_1C3E7C0(baseUserServantEntity, v3);
  }
  v8 = 1;
LABEL_22:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v8, 0);
  v13 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C3E57C(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C3E548(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
}


void CommandCardExceedControl__RefreshInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  BaseDialog_o *commandCardExceedConfirmDialog; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog
    || (BaseDialog__Init(commandCardExceedConfirmDialog, 0),
        (commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedAddConfirmDialog) == 0) )
  {
    sub_1C3E7C0(commandCardExceedConfirmDialog, method);
  }
  BaseDialog__Init(commandCardExceedConfirmDialog, 0);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectedCommandCard, 0, v6, v7);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v8);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0, v9);
}


void CommandCardExceedControl__SetBaseServantCardImage(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  struct UICharaGraphTexture_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      sub_1C3E7C0(0, userServantEntity);
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0);
    v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(CommandCardExceedControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                           this,
                                           this->fields.charaGraphTexture,
                                           userServantEntity,
                                           this->klass->vtable._7_SetCharaGraph.method);
    this->fields.charaGraphTexture = v6;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.charaGraphTexture, (int32_t)v6, v7, v8);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 transformTotal; // x1
  UnityEngine_Component_o *useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_array *v17; // x20
  unsigned __int64 v18; // x21
  __int64 v19; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v21; // w22
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t v24; // w23
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C5ACBE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_CommandCardExceedControl_SetCommandCards__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    byte_4C5ACBE = 1;
  }
  transformInfo = 0;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40590132(assetList, 0);
    this->fields.assetList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetList, 0, v6, v7);
  }
  CommandCardExceedControl__InitTransformInfo(this, (const MethodInfo *)onAssetLoadEnd);
  useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject(useItemTitleNormal, 0);
  useItemTitleNormal = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !useItemTitleNormal )
    goto LABEL_35;
  useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0);
  if ( !useItemTitleNormal )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.onAssetLoadEnd = onAssetLoadEnd;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onAssetLoadEnd, (int32_t)onAssetLoadEnd, v12, v13);
    transformTotal = (unsigned int)this->fields.transformTotal;
    if ( (int)transformTotal > 1 )
    {
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.cardSwitchButton;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0);
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                        (UserServantEntity_o *)useItemTitleNormal,
                                                        &transformInfo,
                                                        this->fields.displayTransformIndex,
                                                        0);
      if ( !transformInfo )
        goto LABEL_35;
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UILabel__set_text((UILabel_o *)useItemTitleNormal, transformInfo->fields.titleText, 0);
      transformTotal = (unsigned int)this->fields.transformTotal;
    }
    v14 = (struct System_String_array *)sub_1C3E60C(string___TypeInfo, transformTotal);
    this->fields.assetList = v14;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetList, (int32_t)v14, v15, v16);
    v17 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v18 = 0;
      v19 = 32;
      while ( 1 )
      {
        useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !useItemTitleNormal )
          break;
        useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                          (UserServantEntity_o *)useItemTitleNormal,
                                                          v18,
                                                          0);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v21 = (int)useItemTitleNormal;
        v23 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v22 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = v23;
        *(_QWORD *)&v29.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v29, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        useItemTitleNormal = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                          v21,
                                                          v24,
                                                          0);
        if ( !v17 )
          break;
        if ( v18 >= LODWORD(v17->max_length) )
          sub_1C3E7C8(useItemTitleNormal, transformTotal);
        *(Il2CppClass **)((char *)&v17->obj.klass + v19) = (Il2CppClass *)useItemTitleNormal;
        sub_1C3E508((CGThumbnailListItem_o *)((char *)v17 + v19), (int32_t)useItemTitleNormal, v25, v26);
        v17 = this->fields.assetList;
        ++v18;
        v19 += 8;
        if ( (__int64)v18 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1C3E7C0(useItemTitleNormal, transformTotal);
    }
LABEL_30:
    v27 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_40587784(v17, v27, 1, 0);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, v11);
    if ( !onAssetLoadEnd )
      goto LABEL_35;
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
  const MethodInfo *v3; // x3

  this->fields.onRequestCombine = onRequestCombine;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onRequestCombine, (int32_t)onRequestCombine, (int32_t)method, v3);
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
    sub_1C3E7C0(combineButton, *(_QWORD *)&stateType);
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
  int32_t v3; // w20
  CommandCardExceedControl_o *v4; // x19
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  const MethodInfo *v6; // x3
  int32_t v7; // w21
  int32_t m_CancellationTokenSource; // w2
  Il2CppObject *Item; // x22
  int v10; // w8
  struct CombineCommandCardComponent_array *v11; // x8
  struct CombineCommandCardComponent_o *v12; // x1
  const MethodInfo *v13; // x2
  ItemEntity_array *EntityList; // x21
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v17; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x23
  BalanceConfig_c *v19; // x8
  int32_t CommandCardParamUpMax; // w27
  System_Collections_Generic_List_int__o *v21; // x23
  int max_length; // w8
  unsigned int i; // w26
  Il2CppClass **v24; // x22
  Il2CppClass *v25; // x8
  char *v26; // x22
  Il2CppClass *v27; // t1
  CommandCardExceedControl_o *v28; // x24
  int v29; // w8
  int v30; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  System_Int32_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t useItemNum; // w21
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x25
  il2cpp_array_size_t v39; // x8
  UserItemMaster_o *v40; // x22
  int32_t v41; // w29
  unsigned __int64 v42; // x26
  int32_t v43; // w24
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  int v45; // w23
  int v46; // w9
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *v48; // x8
  struct LimitCntUpItemComponent_array *v49; // x8
  LimitCntUpItemComponent_o *v50; // x24
  struct System_Int32_array *v51; // x8
  struct System_Int32_array *v52; // x8
  UnityEngine_Object_o *orGameObject; // x24
  struct System_Int32_array *v54; // x8
  Il2CppObject *v55; // x24
  CommandCardExceedControl_o *v56; // x24
  struct LimitCntUpItemComponent_array *v57; // x8
  CommandCardExceedControl_o *v58; // x25
  struct LimitCntUpItemComponent_array *v59; // x8
  CommandCardExceedControl_o *v60; // x25
  CommandCardExceedControl_o *v61; // x25
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v65; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v67; // x8
  const MethodInfo *v68; // x4
  const MethodInfo *v69; // x4
  bool v70; // w2
  struct UIGrid_o *exceedItemGrid; // x0
  CommandCardRankParamEntity_o *v72; // [xsp+0h] [xbp-70h]
  __int64 v73; // [xsp+0h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = cardIndex;
  v4 = this;
  if ( (byte_4C5ACC7 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (CommandCardExceedControl_o *)sub_1C3E564(&StringLiteral_24653/*"validClassIds"*/);
    byte_4C5ACC7 = 1;
  }
  entity = 0;
  if ( v3 < 0 )
    return;
  commandCardComponents = v4->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_145;
  if ( SLODWORD(commandCardComponents->max_length) <= v3 )
    return;
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0);
  this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
  if ( !this )
    goto LABEL_145;
  v7 = 0;
  while ( 1 )
  {
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( v7 >= m_CancellationTokenSource )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v7,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)Item, 0);
    this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
    if ( this )
    {
      this = (CommandCardExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             v7,
                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
              v7,
              0,
              (const MethodInfo_37B51E4 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
            this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
            ++v7;
            if ( this )
              continue;
          }
        }
      }
    }
    goto LABEL_145;
  }
  v10 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v10;
  if ( m_CancellationTokenSource >= 1 )
    System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
  v11 = v4->fields.commandCardComponents;
  if ( !v11 )
    goto LABEL_145;
  if ( LODWORD(v11->max_length) <= v3 )
    goto LABEL_146;
  v12 = v11->m_Items[v3];
  v4->fields.selectedCommandCard = v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.selectedCommandCard, (int32_t)v12, m_CancellationTokenSource, v6);
  CommandCardExceedControl__SetSelectedFrameActive(v4, v3, v13);
  this = (CommandCardExceedControl_o *)v4->fields.targetSelectInfoBase;
  if ( !this )
    goto LABEL_145;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CommandCardExceedControl_o *)v4->fields.exceedItemBase;
  if ( !this )
    goto LABEL_145;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_145;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_145;
  EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0);
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_145;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = v4->fields.baseUserServantCommandCardEntity;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    if ( !commandCardParam )
      goto LABEL_145;
    if ( LODWORD(commandCardParam->max_length) <= v3 )
      goto LABEL_146;
    v17 = commandCardParam->m_Items[v3];
    if ( !this )
      goto LABEL_145;
  }
  else
  {
    v17 = 0;
    if ( !this )
      goto LABEL_145;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity((CommandCardRankParamMaster_o *)this, v17, 0);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  CommandCardParamUpMax = v19->static_fields->CommandCardParamUpMax;
  if ( EntityList && EntityList->max_length )
  {
    v72 = RankParamEntity;
    v21 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
    max_length = EntityList->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; (int)i < max_length; ++i )
      {
        if ( i >= max_length )
          goto LABEL_146;
        v24 = &EntityList->obj.klass + (int)i;
        v27 = v24[4];
        v26 = (char *)(v24 + 4);
        v25 = v27;
        if ( !v27 )
          goto LABEL_145;
        this = (CommandCardExceedControl_o *)v25->_1.typeMetadataHandle;
        if ( !this )
          goto LABEL_145;
        this = (CommandCardExceedControl_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                               (Il2CppObject *)StringLiteral_24653/*"validClassIds"*/,
                                               (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v4->fields.baseUserServantEntity )
          {
            if ( i >= LODWORD(EntityList->max_length) )
              goto LABEL_146;
            if ( !*(_QWORD *)v26 )
              goto LABEL_145;
            this = (CommandCardExceedControl_o *)EntityScriptUtil__GetIntArray(
                                                   *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v26 + 104LL),
                                                   (System_String_o *)StringLiteral_24653/*"validClassIds"*/,
                                                   0,
                                                   0);
            if ( !v4->fields.baseUserServantEntity )
              goto LABEL_145;
            v28 = this;
            this = (CommandCardExceedControl_o *)UserServantEntity__getSvtClassId(
                                                   v4->fields.baseUserServantEntity,
                                                   0,
                                                   0,
                                                   0);
            if ( !v28 )
              goto LABEL_145;
            v29 = (int)v28->fields.m_CancellationTokenSource;
            if ( v29 >= 1 )
            {
              v30 = 0;
              while ( v29 != v30 )
              {
                if ( (_DWORD)this == *((_DWORD *)&v28->fields.combineRootComponent + v30) )
                  goto LABEL_53;
                if ( v29 == ++v30 )
                  goto LABEL_60;
              }
LABEL_146:
              sub_1C3E7C8(this, *(_QWORD *)&cardIndex);
            }
          }
        }
        else
        {
LABEL_53:
          if ( i >= LODWORD(EntityList->max_length) )
            goto LABEL_146;
          if ( !*(_QWORD *)v26 )
            goto LABEL_145;
          if ( !v21 )
            goto LABEL_145;
          *(_QWORD *)&cardIndex = *(unsigned int *)(*(_QWORD *)v26 + 16LL);
          items = v21->fields._items;
          v32 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !items )
            goto LABEL_145;
          size = v21->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              cardIndex,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = size + 1;
            items->m_Items[size] = cardIndex;
          }
        }
LABEL_60:
        max_length = EntityList->max_length;
      }
    }
    if ( v21 )
    {
      v34 = System_Collections_Generic_List_int___ToArray(
              v21,
              (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
      v4->fields._ExceedItemIds_k__BackingField = v34;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._ExceedItemIds_k__BackingField, (int32_t)v34, v35, v36);
      RankParamEntity = v72;
      goto LABEL_63;
    }
LABEL_145:
    sub_1C3E7C0(this, *(_QWORD *)&cardIndex);
  }
LABEL_63:
  if ( RankParamEntity )
  {
    useItemNum = RankParamEntity->fields.useItemNum;
    RankParamEntity = (CommandCardRankParamEntity_o *)RankParamEntity->fields.useQp;
  }
  else
  {
    useItemNum = 0;
  }
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_145;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
  ExceedItemIds_k__BackingField = v4->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_145;
  v39 = ExceedItemIds_k__BackingField->max_length;
  v73 = (__int64)RankParamEntity;
  if ( (int)v39 >= 1 )
  {
    v40 = (UserItemMaster_o *)this;
    v41 = 0;
    v42 = 0;
    while ( v42 < (unsigned int)v39 )
    {
      v43 = ExceedItemIds_k__BackingField->m_Items[v42];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      }
      if ( !v40 )
        goto LABEL_145;
      this = (CommandCardExceedControl_o *)UserItemMaster__TryGetEntity(
                                             v40,
                                             &entity,
                                             *(_QWORD *)&this->fields.detailLabel->fields.updateAnchors,
                                             v43,
                                             0);
      if ( entity )
        v41 += entity->fields.num;
      LODWORD(v39) = ExceedItemIds_k__BackingField->max_length;
      if ( (__int64)++v42 >= (int)v39 )
        goto LABEL_83;
    }
    goto LABEL_146;
  }
  v41 = 0;
LABEL_83:
  exceedItemComponents = v4->fields.exceedItemComponents;
  if ( !exceedItemComponents )
    goto LABEL_145;
  v45 = 0;
  while ( 1 )
  {
    v46 = exceedItemComponents->max_length;
    if ( v45 >= v46 )
      break;
    if ( v45 >= (unsigned int)v46 )
      goto LABEL_146;
    this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v45];
    if ( !this )
      goto LABEL_145;
    this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v17 < CommandCardParamUpMax )
    {
      v47 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v47 )
        goto LABEL_145;
      *(_QWORD *)&cardIndex = v45 < SLODWORD(v47->max_length);
    }
    else
    {
      *(_QWORD *)&cardIndex = 0;
    }
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0);
    v48 = v4->fields._ExceedItemIds_k__BackingField;
    if ( !v48 )
      goto LABEL_145;
    if ( v17 < CommandCardParamUpMax && v45 < SLODWORD(v48->max_length) )
    {
      v49 = v4->fields.exceedItemComponents;
      if ( !v49 )
        goto LABEL_145;
      if ( (unsigned int)v45 >= LODWORD(v49->max_length) )
        goto LABEL_146;
      v50 = v49->m_Items[v45];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      }
      v51 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v51 )
        goto LABEL_145;
      if ( (unsigned int)v45 >= LODWORD(v51->max_length) )
        goto LABEL_146;
      if ( !v50 )
        goto LABEL_145;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v50,
        *(_QWORD *)&this->fields.detailLabel->fields.updateAnchors,
        v51->m_Items[v45],
        useItemNum,
        0);
      v52 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v52 )
        goto LABEL_145;
      if ( (unsigned int)v45 >= LODWORD(v52->max_length) )
        goto LABEL_146;
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v4, v52->m_Items[v45], useItemNum, 0);
      orGameObject = (UnityEngine_Object_o *)v4->fields.orGameObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (CommandCardExceedControl_o *)UnityEngine_Object__op_Implicit(orGameObject, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v54 = v4->fields._ExceedItemIds_k__BackingField;
        if ( !v54 )
          goto LABEL_145;
        if ( v45 < LODWORD(v54->max_length) - 1 )
        {
          v55 = (Il2CppObject *)v4->fields.orGameObject;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommandCardExceedControl_o *)UnityEngine_Object__Instantiate_object_(
                                                 v55,
                                                 (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !this )
            goto LABEL_145;
          v56 = this;
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
          v57 = v4->fields.exceedItemComponents;
          if ( !v57 )
            goto LABEL_145;
          if ( (unsigned int)v45 >= LODWORD(v57->max_length) )
            goto LABEL_146;
          v58 = this;
          this = (CommandCardExceedControl_o *)v57->m_Items[v45];
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
          if ( !v58 )
            goto LABEL_145;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v58, (UnityEngine_Transform_o *)this, 0);
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v56, 0);
          v59 = v4->fields.exceedItemComponents;
          if ( !v59 )
            goto LABEL_145;
          if ( (unsigned int)v45 >= LODWORD(v59->max_length) )
            goto LABEL_146;
          v60 = this;
          this = (CommandCardExceedControl_o *)v59->m_Items[v45];
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Transform__GetSiblingIndex(
                                                 (UnityEngine_Transform_o *)this,
                                                 0);
          if ( !v60 )
            goto LABEL_145;
          UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)v60, (_DWORD)this + 1, 0);
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v56, 0);
          v61 = this;
          if ( !byte_4C506A6 )
          {
            this = (CommandCardExceedControl_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A6 = 1;
          }
          if ( !v61 )
            goto LABEL_145;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v61,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v56, 1, 0);
          this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
          if ( !this )
            goto LABEL_145;
          m_CachedPtr = this->fields.m_CachedPtr;
          v65 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_145;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v56,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v67 + 32) = v56;
            sub_1C3E508((CGThumbnailListItem_o *)(v67 + 32), (int32_t)v56, v62, v63);
          }
        }
      }
    }
    exceedItemComponents = v4->fields.exceedItemComponents;
    ++v45;
    if ( !exceedItemComponents )
      goto LABEL_145;
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0);
  CommandCardExceedControl__SetInfoMessageLabels(v4, 2, v41 >= useItemNum, v17 >= CommandCardParamUpMax, v68);
  v70 = 0;
  if ( v17 < CommandCardParamUpMax && v41 >= useItemNum && v4->fields.baseUserServantEntity )
  {
    this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0);
    if ( !this )
      goto LABEL_145;
    v70 = (__int64)this->fields.menuListCtr >= v73;
  }
  CommandCardExceedControl__SetCombineButtonState(v4, 2, v70, v17 >= CommandCardParamUpMax, v69);
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
  int32_t v4; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w21
  __int64 v8; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float v10; // s1 OVERLAPPED
  float v11; // s0
  int v12; // s2
  __int64 v13; // x11
  float v14; // s0
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v16; // x23
  unsigned __int64 max_length_low; // x9
  __int64 v18; // x10
  unsigned __int64 v19; // x11
  int32_t v20; // w26
  CombineCommandCardComponent_o *v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattleCommandData_o *v24; // x25
  const MethodInfo *v25; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x6
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v31; // w3
  const MethodInfo *v32; // x1
  float v33; // s3 OVERLAPPED
  float v34; // s0
  float v35; // s1
  float v36; // s2
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_4C5ACBF & 1) == 0 )
  {
    sub_1C3E564(&BattleCommandData_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5ACBF = 1;
  }
  baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_45;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_45;
  v4 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_45;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_45;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v4,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_45;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_45;
  baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v4,
                                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.cardBaseGrid )
    goto LABEL_45;
  v8 = baseUserServantEntity;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.cardBaseGrid, 0);
  v10 = -18.0;
  if ( this->fields.transformTotal > 1 )
  {
    v11 = -270.0;
  }
  else
  {
    v10 = -15.5;
    v11 = -258.0;
  }
  v12 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v10 - 1), 0);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_45;
  v13 = *(_QWORD *)baseUserServantEntity;
  v14 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v14 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v14;
  baseUserServantEntity = (*(__int64 (**)(void))(v13 + 440))();
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_45;
  v16 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(commandCardComponents->max_length);
    if ( (__int64)v16 >= (int)max_length_low )
      break;
    if ( !v8 )
      goto LABEL_45;
    v18 = *(_QWORD *)(v8 + 144);
    if ( !v18 )
      break;
    v19 = *(unsigned int *)(v18 + 24);
    if ( (__int64)v16 >= (int)v19 )
      break;
    if ( v16 >= v19 )
      goto LABEL_46;
    v20 = *(_DWORD *)(v18 + 4 * v16 + 32);
    if ( (unsigned int)(v20 - 1) <= 2 )
    {
      if ( v16 >= max_length_low )
        goto LABEL_46;
      v21 = commandCardComponents->m_Items[v16];
      baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !v21 )
        goto LABEL_45;
      v21->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.target, baseUserServantEntity, v22, v23);
      v24 = (BattleCommandData_o *)sub_1C3E7B0(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_46651164(v24, v20, v4, ServantImageLimitSealAfter, 0, -1, 0);
      if ( !v24 )
        goto LABEL_45;
      v24->fields.markindex = v16;
      v24->fields.servantCardIdsIndex = v16;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v16, v25);
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v27);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0 )
      {
        if ( v16 >= LODWORD(commandCardParam->max_length) )
LABEL_46:
          sub_1C3E7C8(baseUserServantEntity, method);
        v31 = commandCardParam->m_Items[v16];
      }
      else
      {
        v31 = 0;
      }
      v24->fields.commandCodeId = baseUserServantEntity;
      v24->fields.commandCardParam = v31;
      v24->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v21, v24, UserCommandCodeId, v31, 1, 1, v28);
      v33 = 1.0;
      if ( this->fields.displayTransformIndex <= 0 )
        v34 = 1.0;
      else
        v34 = 0.5;
      v35 = v34;
      v36 = v34;
      CombineCommandCardComponent__SetColor(v21, *(UnityEngine_Color_o *)(&v33 - 3), v32);
      CombineCommandCardComponent__SetLayout(v21, this->fields.positionOffsetY, this->fields.scaleOffset, v37);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v16;
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
    sub_1C3E7C0(baseUserServantEntity, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0);
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onAssetLoadEnd, 0, v38, v39);
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
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *v7; // x20
  EventDelegate_Callback_o *v8; // x21
  struct UITouchPress_o *v9; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v11; // x21
  System_Collections_Generic_List_EventDelegate__o *v12; // x20
  EventDelegate_Callback_o *v13; // x21

  v2 = this;
  if ( (byte_4C5ACB4 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_CombineMenuControl_OnLongPushListView__);
    sub_1C3E564(&Method_CommandCardExceedControl_OnClickCombine__);
    sub_1C3E564(&EventDelegate_TypeInfo);
    this = (CommandCardExceedControl_o *)sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4C5ACB4 = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v5 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, (intptr_t)Method_CommandCardExceedControl_OnClickCombine__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_49331860(onClick, v5, 0);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v7 = baseServantTouchPress->fields.onClick;
  v8 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v8, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._4_OnClickBase.method, 0);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_49331860(v7, v8, 0);
  v9 = v2->fields.baseServantTouchPress;
  if ( !v9
    || (onLongPress = v9->fields.onLongPress,
        v11 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v11,
          (Il2CppObject *)v2,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0),
        EventDelegate__Set_49331860(onLongPress, v11, 0),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_11:
    sub_1C3E7C0(this, method);
  }
  v12 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.positionOffsetY;
  v13 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v13, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.method, 0);
  EventDelegate__Set_49331860(v12, v13, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetInfoMessageLabels(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isItemEnough,
        bool isExceedMax,
        const MethodInfo *method)
{
  unsigned __int64 SelfUserGame; // x0
  unsigned __int64 v10; // x1
  int64_t v11; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x5
  int32_t v14; // w25
  UILabel_o *detailLabel; // x24
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v17; // x0
  const MethodInfo *v18; // x2
  UILabel_o *userQpLabel; // x23
  UILabel_o *requiredQpLabel; // x23
  float v21; // s1 OVERLAPPED
  float v22; // s0
  float v23; // s3
  float v24; // s2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v28; // x24
  struct System_Int32_array *commandCardParam; // x25

  if ( (byte_4C5ACB8 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5ACB8 = 1;
  }
  SelfUserGame = (unsigned __int64)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
LABEL_32:
    sub_1C3E7C0(SelfUserGame, v10);
  v11 = *(_QWORD *)(SelfUserGame + 96);
  SelfUserGame = CommandCardExceedControl__get_CardIndex(this, (const MethodInfo *)v10);
  if ( (SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = CommandCardExceedControl__GetIsExceedMax(this, v12), (SelfUserGame & 1) != 0)
    || this->fields.displayTransformIndex )
  {
    v14 = 0;
    goto LABEL_8;
  }
  SelfUserGame = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = (unsigned __int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)SelfUserGame,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v28 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = CommandCardExceedControl__get_CardIndex(this, v26);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= LODWORD(commandCardParam->max_length) )
      sub_1C3E7C8(SelfUserGame, v10);
    v10 = (unsigned int)commandCardParam->m_Items[(int)SelfUserGame];
    if ( !v28 )
      goto LABEL_32;
  }
  else
  {
    v10 = 0;
    if ( !SelfUserGame )
      goto LABEL_32;
  }
  SelfUserGame = (unsigned __int64)CommandCardRankParamMaster__GetRankParamEntity(v28, v10, 0);
  if ( !SelfUserGame )
    goto LABEL_32;
  v14 = *(_DWORD *)(SelfUserGame + 44);
LABEL_8:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = (unsigned __int64)CommandCardExceedControl__GetDetailLabelText(
                                     (CommandCardExceedControl_o *)SelfUserGame,
                                     stateType,
                                     isItemEnough,
                                     isExceedMax,
                                     v11 >= v14,
                                     v13);
  if ( !detailLabel )
    goto LABEL_32;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = (unsigned __int64)CommandCardExceedControl__GetTargetSelectInfoLabelText(v17, stateType, v18);
  if ( !targetSelectInfoLabel )
    goto LABEL_32;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0);
  userQpLabel = this->fields.userQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (unsigned __int64)LocalizationManager__GetNumberFormatLong(v11, 0);
  if ( !userQpLabel )
    goto LABEL_32;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v14 <= 0 )
  {
    v10 = StringLiteral_1/*""*/;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (unsigned __int64)LocalizationManager__GetNumberFormat(v14, 0);
    v10 = SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v10, 0);
  SelfUserGame = (unsigned __int64)this->fields.requiredQpLabel;
  v21 = 1.0;
  if ( v11 < v14 )
    v21 = 0.0;
  if ( !SelfUserGame )
    goto LABEL_32;
  v22 = 1.0;
  v23 = 1.0;
  v24 = v21;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)(&v21 - 1), 0);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v25);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedControl__SetSelectedFrameActive(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  __int64 v6; // x20
  int max_length; // w9
  CombineCommandCardComponent_o *v9; // x8

  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
LABEL_7:
    sub_1C3E7C0(this, *(_QWORD *)&cardIndex);
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C3E7C8(this, *(_QWORD *)&cardIndex);
    v9 = commandCardComponents->m_Items[v6];
    if ( v9 )
    {
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)this,
        v9->fields.selectedSprite,
        cardIndex == (_DWORD)v6,
        v3);
      commandCardComponents = this->fields.commandCardComponents;
      ++v6;
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
    sub_1C3E7C0(useItemTitleNormal, *(_QWORD *)&stateType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType == 2, 0);
}


void CommandCardExceedControl__SetUserServant(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *selectedUserServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int128 v6; // q1
  int64_t v7; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v10; // q0
  const MethodInfo *v11; // x1
  int v12; // w22
  int v13; // w23
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-50h]

  if ( (byte_4C5ACBC & 1) == 0 )
  {
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C5ACBC = 1;
  }
  if ( selectedUserServantEntity )
  {
    if ( !this->fields.baseUserServantEntity )
      goto LABEL_9;
    v6 = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v20 = v21;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v20, 0);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_1C3E7C0(v7, v8);
    v10 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v10;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v19, 0) )
    {
      CommandCardExceedControl__InitBaseServant(this, v11);
      v13 = 0;
      v12 = 1;
    }
    else
    {
LABEL_9:
      v12 = 0;
      v13 = 0;
    }
  }
  else
  {
    v12 = 0;
    v13 = 1;
  }
  this->fields.baseUserServantEntity = selectedUserServantEntity;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectedUserServantEntity,
    (int32_t)method,
    v3);
  CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v14);
  CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v15);
  if ( v13 | v12 )
  {
    this->fields.selectedCommandCard = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectedCommandCard, 0, v16, v17);
    CommandCardExceedControl__InitExceedItem(this, v18);
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
  }
}


void CommandCardExceedControl__SetUserServantCommandCard(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v8; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  int64_t userIdNumber; // x22
  Il2CppObject *v12; // x21
  NetworkManager_c *v13; // x0
  int64_t v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C5ACBD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5ACBD = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    userIdNumber = v8->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v15, 0);
    if ( !MasterData_object )
      goto LABEL_22;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      userIdNumber,
      (int)Instance,
      0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v12 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    v14 = v13->static_fields->userIdNumber;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                 userServantEntity->fields.svtId,
                                 0);
    if ( !v12 )
LABEL_22:
      sub_1C3E7C0(Instance, v6);
    UserServantCommandCodeMaster__TryGetEntity(
      (UserServantCommandCodeMaster_o *)v12,
      &this->fields.baseUserServantCommandCodeEntity,
      v14,
      (int)Instance,
      0);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, (const MethodInfo *)userServantEntity);
  }
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

  if ( (byte_4C5ACC4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5ACC4 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0, 0) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_1C3E7C0(0, v4);
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
  const MethodInfo *v3; // x3

  this->fields._ExceedItemIds_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ExceedItemIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CommandCardExceedControl__touchCommandCard(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  int32_t displayTransformIndex; // w21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UnityEngine_Object_o *selectedCommandCard; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  BattleCommandComponent_o *v11; // x0

  if ( (byte_4C5ACC6 & 1) == 0 )
  {
    sub_1C3E564(&Method_CommandCardExceedControl_touchCommandCard__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5ACC6 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    v6 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3E57C(Method_CommandCardExceedControl_touchCommandCard__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
    if ( displayTransformIndex < 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0, 0) )
        goto LABEL_14;
      v11 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
      if ( !v11 )
        sub_1C3E7C0(0, v9);
      if ( BattleCommandComponent__getMarkIndex(v11, 0) != cardIndex )
LABEL_14:
        CommandCardExceedControl__SetCommandCardDisplay(this, cardIndex, v10);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    }
  }
}