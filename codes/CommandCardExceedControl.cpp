void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_48E5E2A & 1) == 0 )
  {
    sub_1B00CCC(&CombineMenuControl_TypeInfo, method);
    byte_48E5E2A = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
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

  if ( (byte_48E5E1A & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_17434/*"buttontxt_synthesis"*/, *(_QWORD *)&stateType);
    sub_1B00CCC(&StringLiteral_17431/*"buttontxt_notsynthesis"*/, v6);
    byte_48E5E1A = 1;
  }
  if ( stateType != 2 || !isExceedMax )
    v7 = &StringLiteral_17434/*"buttontxt_synthesis"*/;
  else
    v7 = &StringLiteral_17431/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v7;
}


// local variable allocation has failed, the output may be wrong!
BattleCommandData_array *__fastcall CommandCardExceedControl__GetCommandCardDataEachServantId(
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
  __int64 v11; // x0
  __int64 v12; // x1
  BattleCommandData_array *v13; // x21
  __int64 v14; // x27
  unsigned __int64 v15; // x22
  __int64 baseUserServantEntity; // x0
  int32_t v17; // w23
  int32_t CommandCardLimitCount; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w24
  int32_t ServantImageLimitSealAfter; // w25
  __int64 v21; // x8
  int32_t v22; // w9
  BattleCommandData_o *v23; // x24
  const MethodInfo *v24; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v26; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v31; // x0
  __int64 v32; // [xsp+8h] [xbp-78h]
  int32_t type; // [xsp+1Ch] [xbp-64h]

  if ( (byte_48E5E29 & 1) == 0 )
  {
    sub_1B00CCC(&BattleCommandData___TypeInfo, *(_QWORD *)&cardIndex);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_48E5E29 = 1;
  }
  v11 = sub_1B00D74(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
  v13 = (BattleCommandData_array *)v11;
  if ( this->fields.transformTotal >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v32 = v11 + 32;
    while ( 1 )
    {
      baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                                (UserServantEntity_o *)baseUserServantEntity,
                                v15,
                                0LL);
      if ( !this->fields.baseUserServantEntity )
        break;
      v17 = baseUserServantEntity;
      CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v17,
                                     LimitCountByImageLimitCostumeIn,
                                     0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v17,
                                         (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !baseUserServantEntity )
        break;
      v21 = *(_QWORD *)(baseUserServantEntity + 144);
      if ( v21 )
      {
        v22 = *(_DWORD *)(v21 + 24);
        if ( v22 > cardIndex )
        {
          if ( v22 <= (unsigned int)cardIndex )
            goto LABEL_29;
          type = *(_DWORD *)(v21 + 4LL * cardIndex + 32);
          v23 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_41719924(v23, type, v17, ServantImageLimitSealAfter, 0, -1, 0LL);
          if ( !v23 )
            break;
          v23->fields.markindex = cardIndex;
          v23->fields.servantCardIdsIndex = cardIndex;
          UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, cardIndex, v24);
          v23->fields.userCommandCodeId = UserCommandCodeId;
          baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v26);
          v23->fields.commandCodeId = baseUserServantEntity;
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
          v23->fields.commandCardParam = (int)baseUserServantCommandCardEntity;
          if ( !v13 )
            break;
          baseUserServantEntity = sub_1B00E08(v23, v13->obj.klass->_1.element_class);
          if ( !baseUserServantEntity )
          {
            v31 = sub_1B00F4C(0LL);
            sub_1B00DF4(v31, 0LL);
          }
          if ( v15 >= v13->max_length )
LABEL_29:
            sub_1B00F30(baseUserServantEntity, v12);
          *(_QWORD *)(v32 + 8 * v15) = v23;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + v14), (int32_t)v23, v28, v29);
        }
      }
      ++v15;
      v14 += 8LL;
      if ( (__int64)v15 >= this->fields.transformTotal )
        return v13;
    }
    sub_1B00F28(baseUserServantEntity, v12);
  }
  return v13;
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
    sub_1B00F30(this, *(_QWORD *)&cardIndex);
  return commandCardParam->m_Items[cardIndex + 1];
}


int32_t __fastcall CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *userCommandCodeMaster; // x0
  __int64 v7; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_48E5E20 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_48E5E20 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1B00F28(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v7 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v10, 0LL);
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

  if ( (byte_48E5E18 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1B00CCC(&StringLiteral_3669/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/, v10);
    sub_1B00CCC(&StringLiteral_3670/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/, v11);
    sub_1B00CCC(&StringLiteral_11919/*"SHORT_QP_INFO_MSG"*/, v12);
    sub_1B00CCC(&StringLiteral_1/*""*/, v13);
    sub_1B00CCC(&StringLiteral_3676/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v14);
    sub_1B00CCC(&StringLiteral_3675/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/, v15);
    byte_48E5E18 = 1;
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
          v16 = &StringLiteral_3676/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v16, 0LL);
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
          v16 = &StringLiteral_3669/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        else
          v16 = &StringLiteral_11919/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        v16 = &StringLiteral_3675/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v16, 0LL);
    case 0:
LABEL_6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = &StringLiteral_3670/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
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
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int64_t v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v16; // x20
  int32_t v17; // w23
  int32_t v18; // w9
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_48E5E23 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48E5E23 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v11 = Instance;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v21, 0LL);
  if ( !MasterData_object )
    goto LABEL_24;
  Instance = UserServantCommandCardMaster__TryGetEntity(
               (UserServantCommandCardMaster_o *)MasterData_object,
               &entity,
               v11,
               (int)Instance,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_24:
    sub_1B00F28(Instance, v8);
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  max_length = commandCardParam->max_length;
  if ( max_length < 1 )
    return 1;
  v16 = 0LL;
  do
  {
    if ( (unsigned int)v16 >= max_length )
      sub_1B00F30(Instance, v8);
    Instance = (int64_t)BalanceConfig_TypeInfo;
    v17 = commandCardParam->m_Items[v16 + 1];
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    v18 = *(_DWORD *)(*(_QWORD *)(Instance + 184) + 716LL);
    if ( v17 < v18 )
      break;
    max_length = commandCardParam->max_length;
    ++v16;
  }
  while ( (int)v16 < max_length );
  return v17 >= v18;
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
  int32_t v14; // w20
  BalanceConfig_c *v15; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v17; // x1
  struct UserServantCommandCardEntity_o *v18; // x8
  CommandCardRankParamMaster_o *v19; // x20
  struct System_Int32_array *v20; // x21
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w21
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *v24; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E5E21 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_48E5E21 = 1;
  }
  entity = 0LL;
  if ( !this->fields.baseUserServantEntity )
    return 0;
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        goto LABEL_36;
      v14 = commandCardParam->m_Items[(int)CardIndex + 1];
      v15 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      if ( v14 >= v15->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !*(_QWORD *)&ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_35;
  CardIndex = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)CardIndex,
                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v18 = this->fields.baseUserServantCommandCardEntity;
  v19 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v18 )
  {
    v20 = v18->fields.commandCardParam;
    CardIndex = CommandCardExceedControl__get_CardIndex(this, v17);
    if ( !v20 )
      goto LABEL_35;
    if ( (unsigned int)CardIndex >= v20->max_length )
      goto LABEL_36;
    v13 = (unsigned int)v20->m_Items[(int)CardIndex + 1];
    if ( !v19 )
      goto LABEL_35;
  }
  else
  {
    v13 = 0LL;
    if ( !CardIndex )
      goto LABEL_35;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v19, v13, 0LL);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)CardIndex,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  CardIndex = NetworkManager__get_UserId(0LL);
  v24 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v24 )
LABEL_35:
    sub_1B00F28(CardIndex, v13);
  if ( !v24->max_length )
LABEL_36:
    sub_1B00F30(CardIndex, v13);
  if ( !MasterData_object )
    goto LABEL_35;
  CardIndex = UserItemMaster__TryGetEntity(
                (UserItemMaster_o *)MasterData_object,
                &entity,
                CardIndex,
                v24->m_Items[1],
                0LL);
  if ( (CardIndex & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_35;
  return entity->fields.num >= useItemNum;
}


bool __fastcall CommandCardExceedControl__GetIsExceedMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v11; // x20
  struct System_Int32_array *commandCardParam; // x21
  int32_t v13; // w19
  BalanceConfig_c *v14; // x0

  if ( (byte_48E5E22 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48E5E22 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v7) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v11 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v9);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
        sub_1B00F30(Instance, v9);
      v13 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v11 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1B00F28(Instance, v9);
  }
  v13 = 0;
  if ( !Instance )
    goto LABEL_17;
LABEL_12:
  CommandCardRankParamMaster__GetRankParamEntity(v11, v13, 0LL);
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  return v13 >= v14->static_fields->CommandCardParamUpMax;
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

  if ( (byte_48E5E19 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1B00CCC(&StringLiteral_3671/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/, v4);
    sub_1B00CCC(&StringLiteral_3673/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/, v5);
    sub_1B00CCC(&StringLiteral_1/*""*/, v6);
    byte_48E5E19 = 1;
  }
  if ( stateType == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3673/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  if ( !stateType )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3671/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
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
    sub_1B00F30(this, *(_QWORD *)&cardIndex);
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
    sub_1B00F28(0LL, v9);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
}


void __fastcall CommandCardExceedControl__InitBaseServant(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  UnityEngine_Object_o *charaGraphTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_48E5E16 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E5E16 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  baseSelectInfoObject = this->fields.baseSelectInfoObject;
  if ( !baseSelectInfoObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(baseSelectInfoObject, 1, 0LL);
  charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
  {
    baseSelectInfoObject = (UnityEngine_GameObject_o *)this->fields.charaGraphTexture;
    if ( baseSelectInfoObject )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)baseSelectInfoObject,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
      this->fields.charaGraphTexture = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphTexture, 0, v9, v10);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B00F28(baseSelectInfoObject, v5);
  }
}


void __fastcall CommandCardExceedControl__InitCommandCard(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v14; // w22
  Il2CppClass **v15; // x8
  CombineCommandCardComponent_o *v16; // x20
  ServantStatusBattleListViewItem_o *p_userCommandCodeMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_48E5E15 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48E5E15 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCommandCardEntity, 0, v2, v3);
  this->fields.selectedCommandCard = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectedCommandCard, 0, v6, v7);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCommandCodeEntity, 0, v8, v9);
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
        sub_1B00F30(Instance, v11);
      v15 = &commandCardComponents->obj.klass + (int)v14;
      v16 = (CombineCommandCardComponent_o *)v15[4];
      if ( !v16 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v15[4], 0, 0LL);
      CombineCommandCardComponent__SetCommandCardEnable(v16, 0, 0LL);
      max_length = commandCardComponents->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_1B00F28(Instance, v11);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B00C70(p_userCommandCodeMaster, (int32_t)MasterData_object, v19, v20);
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
    sub_1B00F28(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_48E5E14 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E5E14 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_1B00F28(detailLabel, method);
  }
  UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall CommandCardExceedControl__InitTransformInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t TransformCount; // w1

  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton
    || (UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL),
        (cardSwitchButton = (UnityEngine_GameObject_o *)this->fields.servantName) == 0LL)
    || (cardSwitchButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cardSwitchButton, 0LL)) == 0LL )
  {
    sub_1B00F28(cardSwitchButton, method);
  }
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  TransformCount = 1;
  this->fields.displayTransformIndex = 0;
  if ( baseUserServantEntity )
    TransformCount = UserServantEntity__GetTransformCount(baseUserServantEntity, 1, 0LL);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
}


void __fastcall CommandCardExceedControl__OnClickCombine(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommandCardExceedConfirmDialog_o *commandCardExceedConfirmDialog; // x20
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x21
  const MethodInfo *v7; // x1
  int32_t CardIndex; // w0
  const MethodInfo *v9; // x2
  BattleCommandData_array *CommandCardDataEachServantId; // x22
  const MethodInfo *v11; // x1
  int32_t v12; // w0
  const MethodInfo *v13; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v15; // x1
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  int32_t v17; // w24
  int64_t v18; // x23
  const MethodInfo *v19; // x7

  if ( (byte_48E5E25 & 1) == 0 )
  {
    sub_1B00CCC(&Method_CommandCardExceedControl_OnClickCombine__, method);
    byte_48E5E25 = 1;
  }
  v3 = Method_CommandCardExceedControl_OnClickCombine__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_CommandCardExceedControl_OnClickCombine__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  commandCardExceedConfirmDialog = this->fields.commandCardExceedConfirmDialog;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  CardIndex = CommandCardExceedControl__get_CardIndex(this, v7);
  CommandCardDataEachServantId = CommandCardExceedControl__GetCommandCardDataEachServantId(this, CardIndex, v9);
  v12 = CommandCardExceedControl__get_CardIndex(this, v11);
  UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v12, v13);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_9;
  if ( !ExceedItemIds_k__BackingField->max_length )
    sub_1B00F30(UserCommandCodeId, v15);
  v17 = ExceedItemIds_k__BackingField->m_Items[1];
  v18 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v15);
  if ( !commandCardExceedConfirmDialog )
LABEL_9:
    sub_1B00F28(UserCommandCodeId, v15);
  CommandCardExceedConfirmDialog__Open(
    commandCardExceedConfirmDialog,
    baseUserServantCommandCardEntity,
    CommandCardDataEachServantId,
    v18,
    v17,
    UserCommandCodeId,
    this->fields.onRequestCombine,
    v19);
}


void __fastcall CommandCardExceedControl__OnClickSwitchButton(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  const MethodInfo *v6; // x4
  const MethodInfo *v7; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  bool v9; // w1
  UnityEngine_Object_o *selectedCommandCard; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_48E5E28 & 1) == 0 )
  {
    sub_1B00CCC(&Method_CommandCardExceedControl_OnClickSwitchButton__, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48E5E28 = 1;
  }
  transformInfo = 0LL;
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
                                                     0LL);
    if ( !transformInfo )
      goto LABEL_25;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.servantName;
    if ( !baseUserServantEntity )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  if ( this->fields.displayTransformIndex >= 1 )
  {
    CommandCardExceedControl__InitExceedItem(this, v4);
    CommandCardExceedControl__SetCombineButtonState(this, 0, 0, 0, v6);
    CommandCardExceedControl__SetInfoMessageLabels(this, 0, 0, 0, v7);
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
          v9 = 0;
          goto LABEL_22;
        }
      }
    }
    goto LABEL_25;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.selectedCommandCard;
    if ( !baseUserServantEntity )
      goto LABEL_25;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0LL);
    CommandCardExceedControl__SetCommandCardDisplay(this, MarkIndex, v12);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.useItemTitleNormal;
  if ( !baseUserServantEntity
    || (v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v13, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_25:
    sub_1B00F28(baseUserServantEntity, v4);
  }
  v9 = 1;
LABEL_22:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v9, 0LL);
  v14 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B00CE4(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
}


void __fastcall CommandCardExceedControl__RefreshInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  BaseDialog_o *commandCardExceedConfirmDialog; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog )
    sub_1B00F28(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectedCommandCard, 0, v6, v7);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v8);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0LL, v9);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitImageMaster_o *v13; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v16; // w21
  struct UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_36703060; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_48E5E1D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_48E5E1D = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseSelectInfoObject,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v13 = (ServantLimitImageMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v12;
    *(_QWORD *)&v21.fields.fakeValue = v11;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                         v21,
                                                         0LL);
    if ( !v13 )
      goto LABEL_16;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   v13,
                                   (int32_t)baseSelectInfoObject,
                                   CardImageLimitCount,
                                   0LL);
    charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
    v16 = ServantImageLimitSealAfter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_charaGraphTexture = &this->fields.charaGraphTexture;
    if ( UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
    {
      TexturePrefab_36703060 = CharaGraphManager__CreateTexturePrefab_36703060(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v16,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_36703060;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields.charaGraphTexture,
        (int32_t)TexturePrefab_36703060,
        v19,
        v20);
      return;
    }
    baseSelectInfoObject = (UnityEngine_GameObject_o *)*p_charaGraphTexture;
    if ( !*p_charaGraphTexture )
LABEL_16:
      sub_1B00F28(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_39541540(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array *assetList; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 transformTotal; // x1
  UnityEngine_Component_o *useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_String_array *v22; // x20
  unsigned __int64 v23; // x21
  __int64 v24; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v26; // w22
  __int64 v27; // x23
  __int64 v28; // x24
  int32_t v29; // w23
  int32_t v30; // w2
  int32_t v31; // w3
  System_Action_o *v32; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_48E5E1E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, onAssetLoadEnd);
    sub_1B00CCC(&AssetManager_TypeInfo, v5);
    sub_1B00CCC(&Method_CommandCardExceedControl_SetCommandCards__, v6);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1B00CCC(&string___TypeInfo, v9);
    byte_48E5E1E = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_36598596(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v11, v12);
  }
  CommandCardExceedControl__InitTransformInfo(this, (const MethodInfo *)onAssetLoadEnd);
  useItemTitleNormal = (UnityEngine_Component_o *)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL);
  useItemTitleNormal = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !useItemTitleNormal )
    goto LABEL_35;
  useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL);
  if ( !useItemTitleNormal )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.onAssetLoadEnd = onAssetLoadEnd;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.onAssetLoadEnd, (int32_t)onAssetLoadEnd, v17, v18);
    transformTotal = (unsigned int)this->fields.transformTotal;
    if ( (int)transformTotal > 1 )
    {
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.cardSwitchButton;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      useItemTitleNormal = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useItemTitleNormal, 0LL);
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                        (UserServantEntity_o *)useItemTitleNormal,
                                                        &transformInfo,
                                                        this->fields.displayTransformIndex,
                                                        0LL);
      if ( !transformInfo )
        goto LABEL_35;
      useItemTitleNormal = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UILabel__set_text((UILabel_o *)useItemTitleNormal, transformInfo->fields.titleText, 0LL);
      transformTotal = (unsigned int)this->fields.transformTotal;
    }
    v19 = (struct System_String_array *)sub_1B00D74(string___TypeInfo, transformTotal);
    this->fields.assetList = v19;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.assetList, (int32_t)v19, v20, v21);
    v22 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v23 = 0LL;
      v24 = 32LL;
      while ( 1 )
      {
        useItemTitleNormal = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !useItemTitleNormal )
          break;
        useItemTitleNormal = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                          (UserServantEntity_o *)useItemTitleNormal,
                                                          v23,
                                                          0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v26 = (int)useItemTitleNormal;
        v28 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v27 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v28;
        *(_QWORD *)&v34.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v34, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        useItemTitleNormal = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                          v26,
                                                          v29,
                                                          0LL);
        if ( !v22 )
          break;
        if ( v23 >= v22->max_length )
          sub_1B00F30(useItemTitleNormal, transformTotal);
        *(Il2CppClass **)((char *)&v22->obj.klass + v24) = (Il2CppClass *)useItemTitleNormal;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)((char *)v22 + v24), (int32_t)useItemTitleNormal, v30, v31);
        v22 = this->fields.assetList;
        ++v23;
        v24 += 8LL;
        if ( (__int64)v23 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1B00F28(useItemTitleNormal, transformTotal);
    }
LABEL_30:
    v32 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_36596448(v22, v32, 1, 0LL);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, v16);
    if ( !onAssetLoadEnd )
      goto LABEL_35;
    (*(void (__fastcall **)(_QWORD, _QWORD))((char *)&off_18 + (_QWORD)onAssetLoadEnd))(
      *(_QWORD *)((char *)&dword_40 + (_QWORD)onAssetLoadEnd),
      *(__int64 *)((char *)&qword_28 + (_QWORD)onAssetLoadEnd));
  }
}


void __fastcall CommandCardExceedControl__SetCallbacks(
        CommandCardExceedControl_o *this,
        System_Action_int__o *onRequestCombine,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.onRequestCombine = onRequestCombine;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.onRequestCombine,
    (int32_t)onRequestCombine,
    (int32_t)method,
    v3);
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
        (v10 = (CommandCardExceedControl_o *)((__int64 (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer, const MethodInfo *))combineButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
                                               combineButton,
                                               v9,
                                               1LL,
                                               combineButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr,
                                               method),
         combineTextImage = this->fields.combineTextImage,
         combineButton = CommandCardExceedControl__GetCombineButtonLabelText(v10, stateType, isExceedMax, v12),
         !combineTextImage)
     || (UISprite__set_spriteName(combineTextImage, combineButton, 0LL),
         (combineButton = (System_String_o *)this->fields.combineTextImage) == 0LL)) )
  {
    sub_1B00F28(combineButton, *(_QWORD *)&stateType);
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
  int32_t v3; // w3
  unsigned int v4; // w20
  CommandCardExceedControl_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned int max_length; // w9
  struct CombineCommandCardComponent_o *v14; // x1
  const MethodInfo *v15; // x2
  ItemEntity_array *EntityList; // x22
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v19; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v21; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v23; // x1
  __int64 v24; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  struct System_Int32_array *v29; // x10
  __int64 v30; // x9
  __int64 v31; // x11
  ItemEntity_o *v32; // x13
  int32_t v33; // w22
  Il2CppObject *MasterData_object; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v36; // x4
  bool v37; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  il2cpp_array_size_t v39; // w27
  il2cpp_array_size_t v40; // w9
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *v42; // x8
  struct LimitCntUpItemComponent_array *v43; // x8
  LimitCntUpItemComponent_o *v44; // x24
  struct System_Int32_array *v45; // x8
  const MethodInfo *v46; // x4
  bool v47; // w2
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v4 = cardIndex;
  v5 = this;
  if ( (byte_48E5E27 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, *(_QWORD *)&cardIndex);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v8);
    sub_1B00CCC(&int___TypeInfo, v9);
    sub_1B00CCC(&NetworkManager_TypeInfo, v10);
    this = (CommandCardExceedControl_o *)sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_48E5E27 = 1;
  }
  entity = 0LL;
  if ( (v4 & 0x80000000) == 0 )
  {
    commandCardComponents = v5->fields.commandCardComponents;
    if ( !commandCardComponents )
      goto LABEL_71;
    max_length = commandCardComponents->max_length;
    if ( (int)max_length > (int)v4 )
    {
      if ( max_length <= v4 )
        goto LABEL_72;
      v14 = commandCardComponents->m_Items[v4];
      v5->fields.selectedCommandCard = v14;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&v5->fields.selectedCommandCard,
        (int32_t)v14,
        (int32_t)method,
        v3);
      CommandCardExceedControl__SetSelectedFrameActive(v5, v4, v15);
      this = (CommandCardExceedControl_o *)v5->fields.targetSelectInfoBase;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CommandCardExceedControl_o *)v5->fields.exceedItemBase;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
            if ( this )
            {
              EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0LL);
              this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
                baseUserServantCommandCardEntity = v5->fields.baseUserServantCommandCardEntity;
                if ( baseUserServantCommandCardEntity )
                {
                  commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
                  if ( !commandCardParam )
                    goto LABEL_71;
                  if ( commandCardParam->max_length <= v4 )
LABEL_72:
                    sub_1B00F30(this, *(_QWORD *)&cardIndex);
                  v19 = commandCardParam->m_Items[v4 + 1];
                  if ( !this )
                    goto LABEL_71;
                }
                else
                {
                  v19 = 0;
                  if ( !this )
                    goto LABEL_71;
                }
                RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                                    (CommandCardRankParamMaster_o *)this,
                                    v19,
                                    0LL);
                v21 = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v21 = BalanceConfig_TypeInfo;
                }
                CommandCardParamUpMax = v21->static_fields->CommandCardParamUpMax;
                if ( EntityList )
                {
                  v23 = *(_QWORD *)&EntityList->max_length;
                  if ( v23 )
                  {
                    v24 = sub_1B00D74(int___TypeInfo, v23);
                    p_ExceedItemIds_k__BackingField = &v5->fields._ExceedItemIds_k__BackingField;
                    v5->fields._ExceedItemIds_k__BackingField = (struct System_Int32_array *)v24;
                    sub_1B00C70(
                      (ServantStatusBattleListViewItem_o *)&v5->fields._ExceedItemIds_k__BackingField,
                      v24,
                      v26,
                      v27);
                    v28 = EntityList->max_length;
                    if ( v28 >= 1 )
                    {
                      v29 = *p_ExceedItemIds_k__BackingField;
                      v30 = 0LL;
                      v31 = (__int64)&(*p_ExceedItemIds_k__BackingField)->m_Items[1];
                      while ( (unsigned int)v30 < v28 )
                      {
                        v32 = EntityList->m_Items[v30];
                        if ( !v32 || !v29 )
                          goto LABEL_71;
                        if ( (unsigned int)v30 >= v29->max_length )
                          goto LABEL_72;
                        *(_DWORD *)(v31 + 4 * v30++) = v32->fields.id;
                        if ( (int)v30 >= v28 )
                          goto LABEL_29;
                      }
                      goto LABEL_72;
                    }
                  }
                }
LABEL_29:
                v33 = RankParamEntity ? RankParamEntity->fields.useItemNum : 0;
                this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  this = (CommandCardExceedControl_o *)NetworkManager__get_UserId(0LL);
                  ExceedItemIds_k__BackingField = v5->fields._ExceedItemIds_k__BackingField;
                  if ( ExceedItemIds_k__BackingField )
                  {
                    if ( !ExceedItemIds_k__BackingField->max_length )
                      goto LABEL_72;
                    if ( !MasterData_object )
                      goto LABEL_71;
                    this = (CommandCardExceedControl_o *)UserItemMaster__TryGetEntity(
                                                           (UserItemMaster_o *)MasterData_object,
                                                           &entity,
                                                           (int64_t)this,
                                                           ExceedItemIds_k__BackingField->m_Items[1],
                                                           0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_71;
                      v37 = entity->fields.num >= v33;
                    }
                    else
                    {
                      v37 = 0;
                    }
                    exceedItemComponents = v5->fields.exceedItemComponents;
                    if ( exceedItemComponents )
                    {
                      v39 = 0;
                      while ( 1 )
                      {
                        v40 = exceedItemComponents->max_length;
                        if ( (int)v39 >= (int)v40 )
                          break;
                        if ( v39 >= v40 )
                          goto LABEL_72;
                        this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v39];
                        if ( !this )
                          goto LABEL_71;
                        this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
                        if ( v19 < CommandCardParamUpMax )
                        {
                          v41 = v5->fields._ExceedItemIds_k__BackingField;
                          if ( !v41 )
                            goto LABEL_71;
                          *(_QWORD *)&cardIndex = (int)v39 < (signed int)v41->max_length;
                        }
                        else
                        {
                          *(_QWORD *)&cardIndex = 0LL;
                        }
                        if ( !this )
                          goto LABEL_71;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0LL);
                        v42 = v5->fields._ExceedItemIds_k__BackingField;
                        if ( !v42 )
                          goto LABEL_71;
                        if ( (signed int)v39 < (signed int)v42->max_length )
                        {
                          v43 = v5->fields.exceedItemComponents;
                          if ( !v43 )
                            goto LABEL_71;
                          if ( v39 >= v43->max_length )
                            goto LABEL_72;
                          v44 = v43->m_Items[v39];
                          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                          this = (CommandCardExceedControl_o *)NetworkManager__get_UserId(0LL);
                          v45 = v5->fields._ExceedItemIds_k__BackingField;
                          if ( !v45 )
                            goto LABEL_71;
                          if ( v39 >= v45->max_length )
                            goto LABEL_72;
                          if ( !v44 )
                            goto LABEL_71;
                          LimitCntUpItemComponent__setLimitUpItemInfo(
                            v44,
                            (int64_t)this,
                            v45->m_Items[v39 + 1],
                            v33,
                            0LL);
                        }
                        exceedItemComponents = v5->fields.exceedItemComponents;
                        ++v39;
                        if ( !exceedItemComponents )
                          goto LABEL_71;
                      }
                      CommandCardExceedControl__SetInfoMessageLabels(v5, 2, v37, v19 >= CommandCardParamUpMax, v36);
                      v47 = 0;
                      if ( v19 >= CommandCardParamUpMax || !v37 || v5->fields.baseUserServantEntity == 0LL )
                        goto LABEL_69;
                      this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0LL);
                      if ( this && RankParamEntity )
                      {
                        v47 = SLODWORD(this->fields.positionOffsetY) >= RankParamEntity->fields.useQp;
LABEL_69:
                        CommandCardExceedControl__SetCombineButtonState(v5, 2, v47, v19 >= CommandCardParamUpMax, v46);
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
LABEL_71:
      sub_1B00F28(this, *(_QWORD *)&cardIndex);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 baseUserServantEntity; // x0
  int32_t v9; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w21
  __int64 v13; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v16; // s1
  float v17; // s0
  int v18; // s2
  __int64 v19; // x11
  float v20; // s0
  int32_t v21; // w2
  int32_t v22; // w3
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v24; // x23
  unsigned __int64 max_length; // x9
  __int64 v26; // x10
  unsigned __int64 v27; // x11
  int32_t v28; // w26
  CombineCommandCardComponent_o *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  BattleCommandData_o *v32; // x25
  const MethodInfo *v33; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v35; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v38; // w3
  float v39; // s3
  float v40; // s0
  float v41; // s1
  float v42; // s2
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_48E5E1F & 1) == 0 )
  {
    sub_1B00CCC(&BattleCommandData_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B00CCC(&ImageLimitCount_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_48E5E1F = 1;
  }
  baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_41;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_41;
  v9 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_41;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v9,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_41;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_41;
  baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v9,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.cardBaseGrid )
    goto LABEL_41;
  v13 = baseUserServantEntity;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.cardBaseGrid, 0LL);
  transformTotal = this->fields.transformTotal;
  v16 = -18.0;
  if ( transformTotal <= 1 )
    v16 = -15.5;
  v17 = transformTotal <= 1 ? -258.0 : -270.0;
  v18 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v16 - 1), 0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_41;
  v19 = *(_QWORD *)baseUserServantEntity;
  v20 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v20 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v20;
  baseUserServantEntity = (*(__int64 (**)(void))(v19 + 440))();
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
LABEL_41:
    sub_1B00F28(baseUserServantEntity, method);
  v24 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v24 >= (int)max_length )
      break;
    if ( !v13 )
      goto LABEL_41;
    v26 = *(_QWORD *)(v13 + 144);
    if ( !v26 )
      break;
    v27 = *(unsigned int *)(v26 + 24);
    if ( (__int64)v24 >= (int)v27 )
      break;
    if ( v24 >= v27 )
      goto LABEL_45;
    v28 = *(_DWORD *)(v26 + 4 * v24 + 32);
    if ( (unsigned int)(v28 - 1) <= 2 )
    {
      if ( v24 >= max_length )
        goto LABEL_45;
      v29 = commandCardComponents->m_Items[v24];
      baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v29 )
        goto LABEL_41;
      v29->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v29->fields.target, baseUserServantEntity, v30, v31);
      v32 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_41719924(v32, v28, v9, ServantImageLimitSealAfter, 0, -1, 0LL);
      if ( !v32 )
        goto LABEL_41;
      v32->fields.markindex = v24;
      v32->fields.servantCardIdsIndex = v24;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v24, v33);
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v35);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0LL )
      {
        if ( v24 >= commandCardParam->max_length )
LABEL_45:
          sub_1B00F30(baseUserServantEntity, method);
        v38 = commandCardParam->m_Items[v24 + 1];
      }
      else
      {
        v38 = 0;
      }
      v32->fields.commandCodeId = baseUserServantEntity;
      v32->fields.commandCardParam = v38;
      v32->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v29, v32, UserCommandCodeId, v38, 1, 1, 0LL);
      v39 = 1.0;
      if ( this->fields.displayTransformIndex <= 0 )
        v40 = 1.0;
      else
        v40 = 0.5;
      v41 = v40;
      v42 = v40;
      CombineCommandCardComponent__SetColor(v29, *(UnityEngine_Color_o *)(&v39 - 3), 0LL);
      CombineCommandCardComponent__SetLayout(v29, this->fields.positionOffsetY, this->fields.scaleOffset, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v24;
    if ( !commandCardComponents )
      goto LABEL_41;
  }
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.onAssetLoadEnd, 0, v21, v22);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onAssetLoadEnd->fields.m_target)(
      onAssetLoadEnd->fields.original_method_info,
      *(_QWORD *)&onAssetLoadEnd->fields.extra_arg);
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
  struct UISprite_o *infoBack; // x20
  EventDelegate_Callback_o *v17; // x21

  v2 = this;
  if ( (byte_48E5E13 & 1) == 0 )
  {
    sub_1B00CCC(&EventDelegate_Callback_TypeInfo, method);
    sub_1B00CCC(&Method_CombineMenuControl_OnLongPushListView__, v3);
    sub_1B00CCC(&Method_CommandCardExceedControl_OnClickCombine__, v4);
    sub_1B00CCC(&EventDelegate_TypeInfo, v5);
    this = (CommandCardExceedControl_o *)sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    byte_48E5E13 = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, (intptr_t)Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_45634652(onClick, v9, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v11 = baseServantTouchPress->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_45634652(v11, v12, 0LL);
  v13 = v2->fields.baseServantTouchPress;
  if ( !v13
    || (onLongPress = v13->fields.onLongPress,
        v15 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v15,
          (Il2CppObject *)v2,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0LL),
        EventDelegate__Set_45634652(onLongPress, v15, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_11:
    sub_1B00F28(this, method);
  }
  infoBack = this->fields.infoBack;
  v17 = (EventDelegate_Callback_o *)sub_1B00F18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_45634652((System_Collections_Generic_List_EventDelegate__o *)infoBack, v17, 0LL);
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
  UILabel_o *detailLabel; // x25
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v20; // x0
  const MethodInfo *v21; // x2
  UILabel_o *userQpLabel; // x22
  UILabel_o *requiredQpLabel; // x22
  float v24; // s1
  float v25; // s0
  float v26; // s3
  float v27; // s2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v31; // x24
  struct System_Int32_array *commandCardParam; // x25

  if ( (byte_48E5E17 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, *(_QWORD *)&stateType);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B00CCC(&StringLiteral_1/*""*/, v11);
    byte_48E5E17 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_32:
    sub_1B00F28(SelfUserGame, v13);
  v14 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v13);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v15),
        ((unsigned __int8)SelfUserGame & 1) != 0)
    || this->fields.displayTransformIndex )
  {
    v17 = 0;
    goto LABEL_8;
  }
  SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = DataManager__GetMasterData_object_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v31 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v29);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
      sub_1B00F30(SelfUserGame, v13);
    v13 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame + 1];
    if ( !v31 )
      goto LABEL_32;
  }
  else
  {
    v13 = 0LL;
    if ( !SelfUserGame )
      goto LABEL_32;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v31, (int32_t)v13, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v17 = *((_DWORD *)SelfUserGame + 11);
LABEL_8:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = CommandCardExceedControl__GetDetailLabelText(
                   (CommandCardExceedControl_o *)SelfUserGame,
                   stateType,
                   isItemEnough,
                   isExceedMax,
                   v14 >= v17,
                   v16);
  if ( !detailLabel )
    goto LABEL_32;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v20, stateType, v21);
  if ( !targetSelectInfoLabel )
    goto LABEL_32;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__GetNumberFormat(v14, 0LL);
  if ( !userQpLabel )
    goto LABEL_32;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v17 <= 0 )
  {
    v13 = (MethodInfo *)StringLiteral_1/*""*/;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__GetNumberFormat(v17, 0LL);
    v13 = (MethodInfo *)SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v13, 0LL);
  SelfUserGame = this->fields.requiredQpLabel;
  v24 = 1.0;
  if ( v14 < v17 )
    v24 = 0.0;
  if ( !SelfUserGame )
    goto LABEL_32;
  v25 = 1.0;
  v26 = 1.0;
  v27 = v24;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)(&v24 - 1), 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v28);
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

  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
LABEL_7:
    sub_1B00F28(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B00F30(this, *(_QWORD *)&cardIndex);
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
    sub_1B00F28(useItemTitleNormal, *(_QWORD *)&stateType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType == 2, 0LL);
}


void __fastcall CommandCardExceedControl__SetUserServant(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *selectedUserServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int128 v6; // q1
  int64_t v7; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v10; // q0
  int v11; // w22
  _BOOL4 v12; // w23
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-50h]

  if ( (byte_48E5E1B & 1) == 0 )
  {
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    byte_48E5E1B = 1;
  }
  if ( selectedUserServantEntity )
  {
    if ( this->fields.baseUserServantEntity )
    {
      v6 = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v20.fields.fakeValue = v6;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v19 = v20;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v19, 0LL);
      baseUserServantEntity = this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        sub_1B00F28(v7, v8);
      v10 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v10;
      v11 = 0;
      v12 = v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45316568(&v18, 0LL);
    }
    else
    {
      v11 = 0;
      v12 = 0;
    }
  }
  else
  {
    v12 = 0;
    v11 = 1;
  }
  this->fields.baseUserServantEntity = selectedUserServantEntity;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectedUserServantEntity,
    (int32_t)method,
    v3);
  CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v13);
  CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v14);
  if ( v12 | v11 )
  {
    this->fields.selectedCommandCard = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectedCommandCard, 0, v15, v16);
    CommandCardExceedControl__InitExceedItem(this, v17);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t UserId; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  int64_t v15; // x22
  Il2CppObject *v16; // x21
  int64_t v17; // x0
  __int64 v18; // x8
  int64_t v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_48E5E1C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, userServantEntity);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48E5E1C = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v15 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v14;
    *(_QWORD *)&v20.fields.fakeValue = v13;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v20, 0LL);
    if ( !MasterData_object )
      goto LABEL_14;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      v15,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v16 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v17 = NetworkManager__get_UserId(0LL),
          v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v21.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v19 = v17,
          *(_QWORD *)&v21.fields.currentCryptoKey = v18,
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v21, 0LL),
          !v16) )
    {
LABEL_14:
      sub_1B00F28(Instance, v10);
    }
    UserServantCommandCodeMaster__TryGetEntity(
      (UserServantCommandCodeMaster_o *)v16,
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

  if ( (byte_48E5E24 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E5E24 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_1B00F28(0LL, v4);
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
  int32_t v3; // w3

  this->fields._ExceedItemIds_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._ExceedItemIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__touchCommandCard(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t displayTransformIndex; // w21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_Object_o *selectedCommandCard; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  BattleCommandComponent_o *v12; // x0

  if ( (byte_48E5E26 & 1) == 0 )
  {
    sub_1B00CCC(&Method_CommandCardExceedControl_touchCommandCard__, *(_QWORD *)&cardIndex);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48E5E26 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    v7 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B00CE4(Method_CommandCardExceedControl_touchCommandCard__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
    if ( displayTransformIndex < 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
        goto LABEL_14;
      v12 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
      if ( !v12 )
        sub_1B00F28(0LL, v10);
      if ( BattleCommandComponent__getMarkIndex(v12, 0LL) != cardIndex )
LABEL_14:
        CommandCardExceedControl__SetCommandCardDisplay(this, cardIndex, v11);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
    }
  }
}