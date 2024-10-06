void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A73644 & 1) == 0 )
  {
    sub_1B90010(&CombineMenuControl_TypeInfo, method);
    byte_4A73644 = 1;
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

  if ( (byte_4A73634 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_17702/*"buttontxt_synthesis"*/, *(_QWORD *)&stateType);
    sub_1B90010(&StringLiteral_17699/*"buttontxt_notsynthesis"*/, v6);
    byte_4A73634 = 1;
  }
  if ( stateType != 2 || !isExceedMax )
    v7 = &StringLiteral_17702/*"buttontxt_synthesis"*/;
  else
    v7 = &StringLiteral_17699/*"buttontxt_notsynthesis"*/;
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

  if ( (byte_4A73643 & 1) == 0 )
  {
    sub_1B90010(&BattleCommandData___TypeInfo, *(_QWORD *)&cardIndex);
    sub_1B90010(&BattleCommandData_TypeInfo, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B90010(&ImageLimitCount_TypeInfo, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A73643 = 1;
  }
  v11 = sub_1B900B8(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
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
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v17,
                                     LimitCountByImageLimitCostumeIn,
                                     0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v17,
                                         (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          v23 = (BattleCommandData_o *)sub_1B9025C(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_43265536(v23, type, v17, ServantImageLimitSealAfter, 0, -1, 0LL);
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
          baseUserServantEntity = sub_1B9014C(v23, v13->obj.klass->_1.element_class);
          if ( !baseUserServantEntity )
          {
            v31 = sub_1B90290(0LL);
            sub_1B90138(v31, 0LL);
          }
          if ( v15 >= v13->max_length )
LABEL_29:
            sub_1B90274(baseUserServantEntity, v12);
          *(_QWORD *)(v32 + 8 * v15) = v23;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v32 + v14), (int32_t)v23, v28, v29);
        }
      }
      ++v15;
      v14 += 8LL;
      if ( (__int64)v15 >= this->fields.transformTotal )
        return v13;
    }
    sub_1B9026C(baseUserServantEntity, v12);
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
    sub_1B90274(this, *(_QWORD *)&cardIndex);
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

  if ( (byte_4A7363A & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A7363A = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_312C754 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1B9026C(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v7 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v10, 0LL);
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

  if ( (byte_4A73632 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1B90010(&StringLiteral_3710/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/, v10);
    sub_1B90010(&StringLiteral_3711/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/, v11);
    sub_1B90010(&StringLiteral_12135/*"SHORT_QP_INFO_MSG"*/, v12);
    sub_1B90010(&StringLiteral_1/*""*/, v13);
    sub_1B90010(&StringLiteral_3717/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v14);
    sub_1B90010(&StringLiteral_3716/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/, v15);
    byte_4A73632 = 1;
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
          v16 = &StringLiteral_3717/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
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
          v16 = &StringLiteral_3710/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        else
          v16 = &StringLiteral_12135/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        v16 = &StringLiteral_3716/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v16, 0LL);
    case 0:
LABEL_6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = &StringLiteral_3711/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
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

  if ( (byte_4A7363D & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v3);
    sub_1B90010(&NetworkManager_TypeInfo, v4);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A7363D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v21, 0LL);
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
    sub_1B9026C(Instance, v8);
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
      sub_1B90274(Instance, v8);
    Instance = (int64_t)BalanceConfig_TypeInfo;
    v17 = commandCardParam->m_Items[v16 + 1];
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    v18 = *(_DWORD *)(*(_QWORD *)(Instance + 184) + 732LL);
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

  if ( (byte_4A7363B & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A7363B = 1;
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
  CardIndex = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_35;
  CardIndex = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)CardIndex,
                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
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
  CardIndex = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)CardIndex,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  CardIndex = NetworkManager__get_UserId(0LL);
  v24 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v24 )
LABEL_35:
    sub_1B9026C(CardIndex, v13);
  if ( !v24->max_length )
LABEL_36:
    sub_1B90274(CardIndex, v13);
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

  if ( (byte_4A7363C & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A7363C = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v7) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v11 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v9);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
        sub_1B90274(Instance, v9);
      v13 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v11 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1B9026C(Instance, v9);
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

  if ( (byte_4A73633 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1B90010(&StringLiteral_3712/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/, v4);
    sub_1B90010(&StringLiteral_3714/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/, v5);
    sub_1B90010(&StringLiteral_1/*""*/, v6);
    byte_4A73633 = 1;
  }
  if ( stateType == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3714/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  if ( !stateType )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3712/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
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
    sub_1B90274(this, *(_QWORD *)&cardIndex);
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
    sub_1B9026C(0LL, v9);
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

  if ( (byte_4A73630 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A73630 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
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
      UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
      this->fields.charaGraphTexture = 0LL;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphTexture, 0, v9, v10);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B9026C(baseSelectInfoObject, v5);
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

  if ( (byte_4A7362F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A7362F = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCommandCardEntity, 0, v2, v3);
  this->fields.selectedCommandCard = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.selectedCommandCard, 0, v6, v7);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCommandCodeEntity, 0, v8, v9);
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
        sub_1B90274(Instance, v11);
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
    sub_1B9026C(Instance, v11);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B8FFB4(p_userCommandCodeMaster, (int32_t)MasterData_object, v19, v20);
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
    sub_1B9026C(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_4A7362E & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A7362E = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_1B9026C(detailLabel, method);
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
    sub_1B9026C(cardSwitchButton, method);
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

  if ( (byte_4A7363F & 1) == 0 )
  {
    sub_1B90010(&Method_CommandCardExceedControl_OnClickCombine__, method);
    byte_4A7363F = 1;
  }
  v3 = Method_CommandCardExceedControl_OnClickCombine__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_CommandCardExceedControl_OnClickCombine__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
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
    sub_1B90274(UserCommandCodeId, v15);
  v17 = ExceedItemIds_k__BackingField->m_Items[1];
  v18 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v15);
  if ( !commandCardExceedConfirmDialog )
LABEL_9:
    sub_1B9026C(UserCommandCodeId, v15);
  CommandCardExceedConfirmDialog__Open(
    commandCardExceedConfirmDialog,
    baseUserServantCommandCardEntity,
    CommandCardDataEachServantId,
    v18,
    v17,
    UserCommandCodeId,
    this->fields.onRequestCombine,
    0LL);
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

  if ( (byte_4A73642 & 1) == 0 )
  {
    sub_1B90010(&Method_CommandCardExceedControl_OnClickSwitchButton__, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A73642 = 1;
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
    sub_1B9026C(baseUserServantEntity, v4);
  }
  v9 = 1;
LABEL_22:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v9, 0LL);
  v14 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B90028(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v14, v14[4]);
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
    sub_1B9026C(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.selectedCommandCard, 0, v6, v7);
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
  struct UICharaGraphTexture_o *TexturePrefab_37958548; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A73637 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A73637 = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseSelectInfoObject,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v13 = (ServantLimitImageMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v12;
    *(_QWORD *)&v21.fields.fakeValue = v11;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
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
      TexturePrefab_37958548 = CharaGraphManager__CreateTexturePrefab_37958548(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v16,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_37958548;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&this->fields.charaGraphTexture,
        (int32_t)TexturePrefab_37958548,
        v19,
        v20);
      return;
    }
    baseSelectInfoObject = (UnityEngine_GameObject_o *)*p_charaGraphTexture;
    if ( !*p_charaGraphTexture )
LABEL_16:
      sub_1B9026C(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_40890232(
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

  if ( (byte_4A73638 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, onAssetLoadEnd);
    sub_1B90010(&AssetManager_TypeInfo, v5);
    sub_1B90010(&Method_CommandCardExceedControl_SetCommandCards__, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B90010(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1B90010(&string___TypeInfo, v9);
    byte_4A73638 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37851752(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v11, v12);
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
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onAssetLoadEnd, (int32_t)onAssetLoadEnd, v17, v18);
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
    v19 = (struct System_String_array *)sub_1B900B8(string___TypeInfo, transformTotal);
    this->fields.assetList = v19;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.assetList, (int32_t)v19, v20, v21);
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
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v34, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        useItemTitleNormal = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                          v26,
                                                          v29,
                                                          0LL);
        if ( !v22 )
          break;
        if ( v23 >= v22->max_length )
          sub_1B90274(useItemTitleNormal, transformTotal);
        *(Il2CppClass **)((char *)&v22->obj.klass + v24) = (Il2CppClass *)useItemTitleNormal;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v22 + v24), (int32_t)useItemTitleNormal, v30, v31);
        v22 = this->fields.assetList;
        ++v23;
        v24 += 8LL;
        if ( (__int64)v23 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1B9026C(useItemTitleNormal, transformTotal);
    }
LABEL_30:
    v32 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37849408(v22, v32, 1, 0LL);
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
  sub_1B8FFB4(
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
    sub_1B9026C(combineButton, *(_QWORD *)&stateType);
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
  unsigned int v3; // w20
  CommandCardExceedControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  struct CombineCommandCardComponent_array *v14; // x8
  struct CombineCommandCardComponent_o *v15; // x1
  const MethodInfo *v16; // x2
  ItemEntity_array *EntityList; // x22
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v20; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v22; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v24; // x1
  __int64 v25; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  int max_length; // w8
  struct System_Int32_array *v30; // x10
  __int64 v31; // x9
  __int64 v32; // x11
  ItemEntity_o *v33; // x13
  int32_t useItemNum; // w22
  Il2CppObject *MasterData_object; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  bool v37; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  il2cpp_array_size_t v39; // w27
  il2cpp_array_size_t v40; // w9
  struct System_Int32_array *v41; // x8
  struct System_Int32_array *v42; // x8
  struct LimitCntUpItemComponent_array *v43; // x8
  LimitCntUpItemComponent_o *v44; // x24
  const MethodInfo *v45; // x4
  struct System_Int32_array *v46; // x8
  struct System_Int32_array *v47; // x8
  const MethodInfo *v48; // x4
  const MethodInfo *v49; // x4
  bool v50; // w2
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = cardIndex;
  v4 = this;
  if ( (byte_4A73641 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, *(_QWORD *)&cardIndex);
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1B90010(&int___TypeInfo, v8);
    sub_1B90010(&NetworkManager_TypeInfo, v9);
    this = (CommandCardExceedControl_o *)sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A73641 = 1;
  }
  entity = 0LL;
  if ( (v3 & 0x80000000) == 0 )
  {
    commandCardComponents = v4->fields.commandCardComponents;
    if ( !commandCardComponents )
      goto LABEL_75;
    if ( (signed int)commandCardComponents->max_length > (signed int)v3 )
    {
      CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0LL);
      v14 = v4->fields.commandCardComponents;
      if ( !v14 )
        goto LABEL_75;
      if ( v14->max_length > v3 )
      {
        v15 = v14->m_Items[v3];
        v4->fields.selectedCommandCard = v15;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.selectedCommandCard, (int32_t)v15, v12, v13);
        CommandCardExceedControl__SetSelectedFrameActive(v4, v3, v16);
        this = (CommandCardExceedControl_o *)v4->fields.targetSelectInfoBase;
        if ( !this )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CommandCardExceedControl_o *)v4->fields.exceedItemBase;
        if ( !this )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_75;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_75;
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_75;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = v4->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v20 = 0;
          if ( !this )
            goto LABEL_75;
          goto LABEL_19;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_75;
        if ( commandCardParam->max_length > v3 )
        {
          v20 = commandCardParam->m_Items[v3 + 1];
          if ( !this )
            goto LABEL_75;
LABEL_19:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)this,
                              v20,
                              0LL);
          v22 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v22 = BalanceConfig_TypeInfo;
          }
          CommandCardParamUpMax = v22->static_fields->CommandCardParamUpMax;
          if ( EntityList )
          {
            v24 = *(_QWORD *)&EntityList->max_length;
            if ( v24 )
            {
              v25 = sub_1B900B8(int___TypeInfo, v24);
              p_ExceedItemIds_k__BackingField = &v4->fields._ExceedItemIds_k__BackingField;
              v4->fields._ExceedItemIds_k__BackingField = (struct System_Int32_array *)v25;
              sub_1B8FFB4(
                (ServantStatusBattleListViewItem_o *)&v4->fields._ExceedItemIds_k__BackingField,
                v25,
                v27,
                v28);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v30 = *p_ExceedItemIds_k__BackingField;
                v31 = 0LL;
                v32 = (__int64)&(*p_ExceedItemIds_k__BackingField)->m_Items[1];
                while ( (unsigned int)v31 < max_length )
                {
                  v33 = EntityList->m_Items[v31];
                  if ( !v33 || !v30 )
                    goto LABEL_75;
                  if ( (unsigned int)v31 >= v30->max_length )
                    goto LABEL_76;
                  *(_DWORD *)(v32 + 4 * v31++) = v33->fields.id;
                  if ( (int)v31 >= max_length )
                    goto LABEL_30;
                }
                goto LABEL_76;
              }
            }
          }
LABEL_30:
          if ( RankParamEntity )
            useItemNum = RankParamEntity->fields.useItemNum;
          else
            useItemNum = 0;
          this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            this = (CommandCardExceedControl_o *)NetworkManager__get_UserId(0LL);
            ExceedItemIds_k__BackingField = v4->fields._ExceedItemIds_k__BackingField;
            if ( ExceedItemIds_k__BackingField )
            {
              if ( !ExceedItemIds_k__BackingField->max_length )
                goto LABEL_76;
              if ( !MasterData_object )
                goto LABEL_75;
              this = (CommandCardExceedControl_o *)UserItemMaster__TryGetEntity(
                                                     (UserItemMaster_o *)MasterData_object,
                                                     &entity,
                                                     (int64_t)this,
                                                     ExceedItemIds_k__BackingField->m_Items[1],
                                                     0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_75;
                v37 = entity->fields.num >= useItemNum;
              }
              else
              {
                v37 = 0;
              }
              exceedItemComponents = v4->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v39 = 0;
                while ( 1 )
                {
                  v40 = exceedItemComponents->max_length;
                  if ( (int)v39 >= (int)v40 )
                    break;
                  if ( v39 >= v40 )
                    goto LABEL_76;
                  this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v39];
                  if ( !this )
                    goto LABEL_75;
                  this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( v20 < CommandCardParamUpMax )
                  {
                    v41 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v41 )
                      goto LABEL_75;
                    *(_QWORD *)&cardIndex = (int)v39 < (signed int)v41->max_length;
                  }
                  else
                  {
                    *(_QWORD *)&cardIndex = 0LL;
                  }
                  if ( !this )
                    goto LABEL_75;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0LL);
                  v42 = v4->fields._ExceedItemIds_k__BackingField;
                  if ( !v42 )
                    goto LABEL_75;
                  if ( v20 < CommandCardParamUpMax && (signed int)v39 < (signed int)v42->max_length )
                  {
                    v43 = v4->fields.exceedItemComponents;
                    if ( !v43 )
                      goto LABEL_75;
                    if ( v39 >= v43->max_length )
                      goto LABEL_76;
                    v44 = v43->m_Items[v39];
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    this = (CommandCardExceedControl_o *)NetworkManager__get_UserId(0LL);
                    v46 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v46 )
                      goto LABEL_75;
                    if ( v39 >= v46->max_length )
                      goto LABEL_76;
                    if ( !v44 )
                      goto LABEL_75;
                    LimitCntUpItemComponent__setLimitUpItemInfo(
                      v44,
                      (int64_t)this,
                      v46->m_Items[v39 + 1],
                      useItemNum,
                      v45);
                    v47 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v47 )
                      goto LABEL_75;
                    if ( v39 >= v47->max_length )
                      goto LABEL_76;
                    CombineMenuControl__AddCombineItemInfo(
                      (CombineMenuControl_o *)v4,
                      v47->m_Items[v39 + 1],
                      useItemNum,
                      0LL);
                  }
                  exceedItemComponents = v4->fields.exceedItemComponents;
                  ++v39;
                  if ( !exceedItemComponents )
                    goto LABEL_75;
                }
                CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
                CommandCardExceedControl__SetInfoMessageLabels(v4, 2, v37, v20 >= CommandCardParamUpMax, v48);
                v50 = 0;
                if ( v20 >= CommandCardParamUpMax || !v37 || v4->fields.baseUserServantEntity == 0LL )
                  goto LABEL_73;
                this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0LL);
                if ( this && RankParamEntity )
                {
                  v50 = SLODWORD(this->fields.menuListCtr) >= RankParamEntity->fields.useQp;
LABEL_73:
                  CommandCardExceedControl__SetCombineButtonState(v4, 2, v50, v20 >= CommandCardParamUpMax, v49);
                  return;
                }
              }
            }
          }
LABEL_75:
          sub_1B9026C(this, *(_QWORD *)&cardIndex);
        }
      }
LABEL_76:
      sub_1B90274(this, *(_QWORD *)&cardIndex);
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
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v22; // x23
  unsigned __int64 max_length; // x9
  __int64 v24; // x10
  unsigned __int64 v25; // x11
  int32_t v26; // w26
  CombineCommandCardComponent_o *v27; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  BattleCommandData_o *v30; // x25
  const MethodInfo *v31; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v33; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v36; // w3
  float v37; // s3
  float v38; // s0
  float v39; // s1
  float v40; // s2
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_4A73639 & 1) == 0 )
  {
    sub_1B90010(&BattleCommandData_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B90010(&ImageLimitCount_TypeInfo, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A73639 = 1;
  }
  baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_47;
  v9 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v9,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v9,
                                     (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.cardBaseGrid )
    goto LABEL_47;
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
    goto LABEL_47;
  v19 = *(_QWORD *)baseUserServantEntity;
  v20 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v20 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v20;
  baseUserServantEntity = (*(__int64 (**)(void))(v19 + 440))();
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_47;
  v22 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v22 >= (int)max_length )
      break;
    if ( !v13 )
      goto LABEL_47;
    v24 = *(_QWORD *)(v13 + 144);
    if ( !v24 )
      break;
    v25 = *(unsigned int *)(v24 + 24);
    if ( (__int64)v22 >= (int)v25 )
      break;
    if ( v22 >= v25 )
      goto LABEL_48;
    v26 = *(_DWORD *)(v24 + 4 * v22 + 32);
    if ( (unsigned int)(v26 - 1) <= 2 )
    {
      if ( v22 >= max_length )
        goto LABEL_48;
      v27 = commandCardComponents->m_Items[v22];
      baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v27 )
        goto LABEL_47;
      v27->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v27->fields.target, baseUserServantEntity, v28, v29);
      v30 = (BattleCommandData_o *)sub_1B9025C(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_43265536(v30, v26, v9, ServantImageLimitSealAfter, 0, -1, 0LL);
      if ( !v30 )
        goto LABEL_47;
      v30->fields.markindex = v22;
      v30->fields.servantCardIdsIndex = v22;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v22, v31);
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v33);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0LL )
      {
        if ( v22 >= commandCardParam->max_length )
LABEL_48:
          sub_1B90274(baseUserServantEntity, method);
        v36 = commandCardParam->m_Items[v22 + 1];
      }
      else
      {
        v36 = 0;
      }
      v30->fields.commandCodeId = baseUserServantEntity;
      v30->fields.commandCardParam = v36;
      v30->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v27, v30, UserCommandCodeId, v36, 1, 1, 0LL);
      v37 = 1.0;
      if ( this->fields.displayTransformIndex <= 0 )
        v38 = 1.0;
      else
        v38 = 0.5;
      v39 = v38;
      v40 = v38;
      CombineCommandCardComponent__SetColor(v27, *(UnityEngine_Color_o *)(&v37 - 3), 0LL);
      CombineCommandCardComponent__SetLayout(v27, this->fields.positionOffsetY, this->fields.scaleOffset, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v22;
    if ( !commandCardComponents )
      goto LABEL_47;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  baseUserServantEntity = (__int64)this->fields.itemLinkInfoListBtn;
  if ( !baseUserServantEntity
    || (baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseUserServantEntity,
                                           0LL)) == 0 )
  {
LABEL_47:
    sub_1B9026C(baseUserServantEntity, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0LL);
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onAssetLoadEnd, 0, v41, v42);
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
  System_Collections_Generic_List_EventDelegate__o *v16; // x20
  EventDelegate_Callback_o *v17; // x21

  v2 = this;
  if ( (byte_4A7362D & 1) == 0 )
  {
    sub_1B90010(&EventDelegate_Callback_TypeInfo, method);
    sub_1B90010(&Method_CombineMenuControl_OnLongPushListView__, v3);
    sub_1B90010(&Method_CommandCardExceedControl_OnClickCombine__, v4);
    sub_1B90010(&EventDelegate_TypeInfo, v5);
    this = (CommandCardExceedControl_o *)sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    byte_4A7362D = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_1B9025C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, (intptr_t)Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_46827984(onClick, v9, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v11 = baseServantTouchPress->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_1B9025C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_46827984(v11, v12, 0LL);
  v13 = v2->fields.baseServantTouchPress;
  if ( !v13
    || (onLongPress = v13->fields.onLongPress,
        v15 = (EventDelegate_Callback_o *)sub_1B9025C(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v15,
          (Il2CppObject *)v2,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0LL),
        EventDelegate__Set_46827984(onLongPress, v15, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_11:
    sub_1B9026C(this, method);
  }
  v16 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.positionOffsetY;
  v17 = (EventDelegate_Callback_o *)sub_1B9025C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_46827984(v16, v17, 0LL);
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

  if ( (byte_4A73631 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, *(_QWORD *)&stateType);
    sub_1B90010(&LocalizationManager_TypeInfo, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B90010(&StringLiteral_1/*""*/, v11);
    byte_4A73631 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_32:
    sub_1B9026C(SelfUserGame, v13);
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
  SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = DataManager__GetMasterData_object_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v31 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v29);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
      sub_1B90274(SelfUserGame, v13);
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
    sub_1B9026C(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B90274(this, *(_QWORD *)&cardIndex);
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
    sub_1B9026C(useItemTitleNormal, *(_QWORD *)&stateType);
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
  const MethodInfo *v11; // x1
  int v12; // w22
  int v13; // w23
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-50h]

  if ( (byte_4A73635 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    byte_4A73635 = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v20, 0LL);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_1B9026C(v7, v8);
    v10 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v10;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v19, 0LL) )
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
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectedUserServantEntity,
    (int32_t)method,
    v3);
  CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v14);
  CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v15);
  if ( v13 | v12 )
  {
    this->fields.selectedCommandCard = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.selectedCommandCard, 0, v16, v17);
    CommandCardExceedControl__InitExceedItem(this, v18);
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
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

  if ( (byte_4A73636 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, userServantEntity);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v5);
    sub_1B90010(&NetworkManager_TypeInfo, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A73636 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
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
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v20, 0LL);
    if ( !MasterData_object )
      goto LABEL_14;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      v15,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v16 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v17 = NetworkManager__get_UserId(0LL),
          v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v21.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v19 = v17,
          *(_QWORD *)&v21.fields.currentCryptoKey = v18,
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v21, 0LL),
          !v16) )
    {
LABEL_14:
      sub_1B9026C(Instance, v10);
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

  if ( (byte_4A7363E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A7363E = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_1B9026C(0LL, v4);
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
  sub_1B8FFB4(
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

  if ( (byte_4A73640 & 1) == 0 )
  {
    sub_1B90010(&Method_CommandCardExceedControl_touchCommandCard__, *(_QWORD *)&cardIndex);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A73640 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    v7 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B90028(Method_CommandCardExceedControl_touchCommandCard__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v7, v7[4]);
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
        sub_1B9026C(0LL, v10);
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