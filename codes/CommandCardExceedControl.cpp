void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4BDFED3 & 1) == 0 )
  {
    sub_1C21E38(&CombineMenuControl_TypeInfo);
    byte_4BDFED3 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


System_String_o *__fastcall CommandCardExceedControl__GetCombineButtonLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        bool isExceedMax,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_4BDFEC3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17974/*"buttontxt_synthesis"*/);
    sub_1C21E38(&StringLiteral_17971/*"buttontxt_notsynthesis"*/);
    byte_4BDFEC3 = 1;
  }
  if ( stateType != 2 || !isExceedMax )
    v6 = &StringLiteral_17974/*"buttontxt_synthesis"*/;
  else
    v6 = &StringLiteral_17971/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v6;
}


BattleCommandData_array *__fastcall CommandCardExceedControl__GetCommandCardDataEachServantId(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  BattleCommandData_array *v7; // x21
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v29; // x0
  __int64 v30; // [xsp+8h] [xbp-78h]
  int32_t type; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4BDFED2 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommandData___TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFED2 = 1;
  }
  v5 = sub_1C21EE0(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
  v7 = (BattleCommandData_array *)v5;
  if ( this->fields.transformTotal >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    v30 = v5 + 32;
    while ( 1 )
    {
      baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                                (UserServantEntity_o *)baseUserServantEntity,
                                v9,
                                0LL);
      if ( !this->fields.baseUserServantEntity )
        break;
      v11 = baseUserServantEntity;
      CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v11,
                                     LimitCountByImageLimitCostumeIn,
                                     0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v11,
                                         (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          v17 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_44642932(v17, type, v11, ServantImageLimitSealAfter, 0, -1, 0LL);
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
          baseUserServantEntity = sub_1C21F74(v17, v7->obj.klass->_1.element_class);
          if ( !baseUserServantEntity )
          {
            v29 = sub_1C220B8(0LL);
            sub_1C21F60(v29, 0LL);
          }
          if ( v9 >= v7->max_length )
LABEL_29:
            sub_1C2209C(baseUserServantEntity, v6);
          *(_QWORD *)(v30 + 8 * v9) = v17;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + v8), (int64_t)v17, v22, v23, v24, v25, v26, v27);
        }
      }
      ++v9;
      v8 += 8LL;
      if ( (__int64)v9 >= this->fields.transformTotal )
        return v7;
    }
    sub_1C22094(baseUserServantEntity, v6);
  }
  return v7;
}


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
    sub_1C2209C(this, cardIndex);
  return commandCardParam->m_Items[cardIndex + 1];
}


int32_t __fastcall CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userCommandCodeMaster; // x0
  __int64 v6; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4BDFEC9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDFEC9 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_325E324 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1C22094(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v6 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v9, 0LL);
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

  if ( (byte_4BDFEC1 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3764/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/);
    sub_1C21E38(&StringLiteral_3765/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/);
    sub_1C21E38(&StringLiteral_12347/*"SHORT_QP_INFO_MSG"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_3771/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/);
    sub_1C21E38(&StringLiteral_3770/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/);
    byte_4BDFEC1 = 1;
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
          v10 = &StringLiteral_3771/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v10, 0LL);
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
          v10 = &StringLiteral_3764/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        else
          v10 = &StringLiteral_12347/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        v10 = &StringLiteral_3770/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v10, 0LL);
    case 0:
LABEL_6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_3765/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v10, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall CommandCardExceedControl__GetIsAllParamMax(CommandCardExceedControl_o *this, const MethodInfo *method)
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

  if ( (byte_4BDFECC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFECC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v17, 0LL);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = (DataManager_o *)UserServantCommandCardMaster__TryGetEntity(
                                (UserServantCommandCardMaster_o *)MasterData_object,
                                &entity,
                                v9,
                                (int)Instance,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_28:
    sub_1C22094(Instance, v4);
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  max_length = commandCardParam->max_length;
  if ( max_length < 1 )
    return 1;
  v12 = 0LL;
  do
  {
    if ( (unsigned int)v12 >= max_length )
      sub_1C2209C(Instance, v4);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v13 = commandCardParam->m_Items[v12 + 1];
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 748LL);
    if ( v13 < v14 )
      break;
    max_length = commandCardParam->max_length;
    ++v12;
  }
  while ( (int)v12 < max_length );
  return v13 >= v14;
}


bool __fastcall CommandCardExceedControl__GetIsCombineEnable(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
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
  struct System_Int32_array *v15; // x21
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w21
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *v19; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDFECA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFECA = 1;
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
      CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v4);
      if ( (unsigned int)CardIndex >= commandCardParam->max_length )
        goto LABEL_40;
      v9 = commandCardParam->m_Items[(int)CardIndex + 1];
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
  if ( !ExceedItemIds_k__BackingField || !*(_QWORD *)&ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_39;
  CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                 CardIndex,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v13 = this->fields.baseUserServantCommandCardEntity;
  v14 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v13 )
  {
    v15 = v13->fields.commandCardParam;
    CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v12);
    if ( !v15 )
      goto LABEL_39;
    if ( (unsigned int)CardIndex >= v15->max_length )
      goto LABEL_40;
    v8 = (unsigned int)v15->m_Items[(int)CardIndex + 1];
    if ( !v14 )
      goto LABEL_39;
  }
  else
  {
    v8 = 0LL;
    if ( !CardIndex )
      goto LABEL_39;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v14, v8, 0LL);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        CardIndex,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v19 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v19 )
LABEL_39:
    sub_1C22094(CardIndex, v8);
  if ( !v19->max_length )
LABEL_40:
    sub_1C2209C(CardIndex, v8);
  if ( !MasterData_object )
    goto LABEL_39;
  CardIndex = (DataManager_o *)UserItemMaster__TryGetEntity(
                                 (UserItemMaster_o *)MasterData_object,
                                 &entity,
                                 *(_QWORD *)(*(_QWORD *)&CardIndex[1].fields._DispLog + 64LL),
                                 v19->m_Items[1],
                                 0LL);
  if ( ((unsigned __int8)CardIndex & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_39;
  return entity->fields.num >= useItemNum;
}


bool __fastcall CommandCardExceedControl__GetIsExceedMax(CommandCardExceedControl_o *this, const MethodInfo *method)
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

  if ( (byte_4BDFECB & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFECB = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v4) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v8 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v6);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
        sub_1C2209C(Instance, v6);
      v10 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v8 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C22094(Instance, v6);
  }
  v10 = 0;
  if ( !Instance )
    goto LABEL_17;
LABEL_12:
  CommandCardRankParamMaster__GetRankParamEntity(v8, v10, 0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return v10 >= v11->static_fields->CommandCardParamUpMax;
}


System_String_o *__fastcall CommandCardExceedControl__GetTargetSelectInfoLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  __int64 *v4; // x8

  if ( (byte_4BDFEC2 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3766/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/);
    sub_1C21E38(&StringLiteral_3768/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFEC2 = 1;
  }
  if ( stateType == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_3768/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  if ( !stateType )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_3766/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
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

  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    return 0LL;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  if ( userCommandCodeIds->max_length <= cardIndex )
    sub_1C2209C(this, cardIndex);
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
    sub_1C22094(0LL, v9);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
}


void __fastcall CommandCardExceedControl__InitBaseServant(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  UnityEngine_Object_o *charaGraphTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BDFEBF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFEBF = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
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
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
      this->fields.charaGraphTexture = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.charaGraphTexture, 0LL, v13, v14, v15, v16, v17, v18);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C22094(baseSelectInfoObject, v9);
  }
}


void __fastcall CommandCardExceedControl__InitCommandCard(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v25; // w22
  Il2CppClass **v26; // x8
  CombineCommandCardComponent_o *v27; // x20
  PartyOrganizationUtility_o *p_userCommandCodeMaster; // x19
  Il2CppObject *MasterData_object; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BDFEBE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFEBE = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCardEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectedCommandCard = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCodeEntity,
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
        sub_1C2209C(Instance, v22);
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
    sub_1C22094(Instance, v22);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (PartyOrganizationUtility_o *)&this->fields.userCommandCodeMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C21DDC(p_userCommandCodeMaster, (int64_t)MasterData_object, v30, v31, v32, v33, v34, v35);
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
    sub_1C22094(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_4BDFEBD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFEBD = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_1C22094(detailLabel, method);
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
    sub_1C22094(cardSwitchButton, method);
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

  if ( (byte_4BDFECE & 1) == 0 )
  {
    sub_1C21E38(&Method_CommandCardExceedControl_OnClickCombine__);
    byte_4BDFECE = 1;
  }
  v3 = Method_CommandCardExceedControl_OnClickCombine__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_CommandCardExceedControl_OnClickCombine__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    sub_1C2209C(UserCommandCodeId, v15);
  v17 = ExceedItemIds_k__BackingField->m_Items[1];
  v18 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v15);
  if ( !commandCardExceedConfirmDialog )
LABEL_9:
    sub_1C22094(UserCommandCodeId, v15);
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

  if ( (byte_4BDFED1 & 1) == 0 )
  {
    sub_1C21E38(&Method_CommandCardExceedControl_OnClickSwitchButton__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFED1 = 1;
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
LABEL_25:
    sub_1C22094(baseUserServantEntity, v3);
  }
  v8 = 1;
LABEL_22:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v8, 0LL);
  v13 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C21E50(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
}


void __fastcall CommandCardExceedControl__RefreshInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  BaseDialog_o *commandCardExceedConfirmDialog; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedConfirmDialog;
  if ( !commandCardExceedConfirmDialog )
    sub_1C22094(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x23
  __int64 v9; // x24
  ServantLimitImageMaster_o *v10; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v13; // w21
  struct UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_39152216; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4BDFEC6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFEC6 = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseSelectInfoObject,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v10 = (ServantLimitImageMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v9;
    *(_QWORD *)&v22.fields.fakeValue = v8;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                         v22,
                                                         0LL);
    if ( !v10 )
      goto LABEL_16;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   v10,
                                   (int32_t)baseSelectInfoObject,
                                   CardImageLimitCount,
                                   0LL);
    charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
    v13 = ServantImageLimitSealAfter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_charaGraphTexture = &this->fields.charaGraphTexture;
    if ( UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
    {
      TexturePrefab_39152216 = CharaGraphManager__CreateTexturePrefab_39152216(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v13,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_39152216;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.charaGraphTexture,
        (int64_t)TexturePrefab_39152216,
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
LABEL_16:
      sub_1C22094(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_42107664(
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 transformTotal; // x1
  int64_t useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_String_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_String_array *v29; // x20
  unsigned __int64 v30; // x21
  __int64 v31; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v33; // w22
  __int64 v34; // x23
  __int64 v35; // x24
  int32_t v36; // w23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Action_o *v43; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4BDFEC7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_CommandCardExceedControl_SetCommandCards__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    byte_4BDFEC7 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_39043848(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v6, v7, v8, v9, v10, v11);
  }
  CommandCardExceedControl__InitTransformInfo(this, (const MethodInfo *)onAssetLoadEnd);
  useItemTitleNormal = (int64_t)this->fields.useItemTitleNormal;
  if ( !useItemTitleNormal )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)useItemTitleNormal, 0LL);
  useItemTitleNormal = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !useItemTitleNormal )
    goto LABEL_35;
  useItemTitleNormal = (int64_t)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)useItemTitleNormal,
                                  0LL);
  if ( !useItemTitleNormal )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.onAssetLoadEnd = onAssetLoadEnd;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.onAssetLoadEnd,
      (int64_t)onAssetLoadEnd,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    transformTotal = (unsigned int)this->fields.transformTotal;
    if ( (int)transformTotal > 1 )
    {
      useItemTitleNormal = (int64_t)this->fields.cardSwitchButton;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
      useItemTitleNormal = (int64_t)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      useItemTitleNormal = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)useItemTitleNormal,
                                      0LL);
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, 1, 0LL);
      useItemTitleNormal = (int64_t)this->fields.baseUserServantEntity;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      useItemTitleNormal = UserServantEntity__GetTransformedServantInfo(
                             (UserServantEntity_o *)useItemTitleNormal,
                             &transformInfo,
                             this->fields.displayTransformIndex,
                             0LL);
      if ( !transformInfo )
        goto LABEL_35;
      useItemTitleNormal = (int64_t)this->fields.servantName;
      if ( !useItemTitleNormal )
        goto LABEL_35;
      UILabel__set_text((UILabel_o *)useItemTitleNormal, transformInfo->fields.titleText, 0LL);
      transformTotal = (unsigned int)this->fields.transformTotal;
    }
    v22 = (struct System_String_array *)sub_1C21EE0(string___TypeInfo, transformTotal);
    this->fields.assetList = v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v30 = 0LL;
      v31 = 32LL;
      while ( 1 )
      {
        useItemTitleNormal = (int64_t)this->fields.baseUserServantEntity;
        if ( !useItemTitleNormal )
          break;
        useItemTitleNormal = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)useItemTitleNormal,
                               v30,
                               0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v33 = useItemTitleNormal;
        v35 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v34 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v45.fields.currentCryptoKey = v35;
        *(_QWORD *)&v45.fields.fakeValue = v34;
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v45, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        useItemTitleNormal = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderName(v33, v36, 0LL);
        if ( !v29 )
          break;
        if ( v30 >= v29->max_length )
          sub_1C2209C(useItemTitleNormal, transformTotal);
        *(Il2CppClass **)((char *)&v29->obj.klass + v31) = (Il2CppClass *)useItemTitleNormal;
        sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v29 + v31), useItemTitleNormal, v37, v38, v39, v40, v41, v42);
        v29 = this->fields.assetList;
        ++v30;
        v31 += 8LL;
        if ( (__int64)v30 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1C22094(useItemTitleNormal, transformTotal);
    }
LABEL_30:
    v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v43, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_39041504(v29, v43, 1, 0LL);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, v15);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onRequestCombine = onRequestCombine;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onRequestCombine,
    (int64_t)onRequestCombine,
    (int64_t)method,
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
    sub_1C22094(combineButton, *(_QWORD *)&stateType);
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
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct CombineCommandCardComponent_array *v12; // x8
  int64_t v13; // x1
  const MethodInfo *v14; // x2
  ItemEntity_array *EntityList; // x22
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v18; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x25
  BalanceConfig_c *v20; // x8
  int32_t CommandCardParamUpMax; // w26
  __int64 v22; // x1
  int64_t v23; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int max_length; // w8
  struct System_Int32_array *v32; // x10
  __int64 v33; // x9
  __int64 v34; // x11
  ItemEntity_o *v35; // x13
  int32_t useItemNum; // w22
  Il2CppObject *MasterData_object; // x24
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  bool v39; // w24
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  il2cpp_array_size_t v41; // w28
  il2cpp_array_size_t v42; // w9
  struct System_Int32_array *v43; // x8
  const MethodInfo *v44; // x4
  struct System_Int32_array *v45; // x8
  struct LimitCntUpItemComponent_array *v46; // x8
  LimitCntUpItemComponent_o *v47; // x25
  struct System_Int32_array *v48; // x8
  struct System_Int32_array *v49; // x8
  const MethodInfo *v50; // x4
  const MethodInfo *v51; // x4
  bool v52; // w2
  CommandCardRankParamEntity_o *v53; // [xsp+0h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = cardIndex;
  v4 = this;
  if ( (byte_4BDFED0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    this = (CommandCardExceedControl_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFED0 = 1;
  }
  entity = 0LL;
  if ( (v3 & 0x80000000) == 0 )
  {
    commandCardComponents = v4->fields.commandCardComponents;
    if ( !commandCardComponents )
      goto LABEL_83;
    if ( (signed int)commandCardComponents->max_length > (signed int)v3 )
    {
      CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0LL);
      v12 = v4->fields.commandCardComponents;
      if ( !v12 )
        goto LABEL_83;
      if ( v12->max_length > v3 )
      {
        v13 = (int64_t)v12->m_Items[v3];
        v4->fields.selectedCommandCard = (struct CombineCommandCardComponent_o *)v13;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.selectedCommandCard, v13, v6, v7, v8, v9, v10, v11);
        CommandCardExceedControl__SetSelectedFrameActive(v4, v3, v14);
        this = (CommandCardExceedControl_o *)v4->fields.targetSelectInfoBase;
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CommandCardExceedControl_o *)v4->fields.exceedItemBase;
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_83;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_83;
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_83;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = v4->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v18 = 0;
          if ( !this )
            goto LABEL_83;
          goto LABEL_19;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_83;
        if ( commandCardParam->max_length > v3 )
        {
          v18 = commandCardParam->m_Items[v3 + 1];
          if ( !this )
            goto LABEL_83;
LABEL_19:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)this,
                              v18,
                              0LL);
          v20 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
              v23 = sub_1C21EE0(int___TypeInfo, v22);
              p_ExceedItemIds_k__BackingField = &v4->fields._ExceedItemIds_k__BackingField;
              v4->fields._ExceedItemIds_k__BackingField = (struct System_Int32_array *)v23;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v4->fields._ExceedItemIds_k__BackingField,
                v23,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v32 = *p_ExceedItemIds_k__BackingField;
                v33 = 0LL;
                v34 = (__int64)&(*p_ExceedItemIds_k__BackingField)->m_Items[1];
                while ( (unsigned int)v33 < max_length )
                {
                  v35 = EntityList->m_Items[v33];
                  if ( !v35 || !v32 )
                    goto LABEL_83;
                  if ( (unsigned int)v33 >= v32->max_length )
                    goto LABEL_84;
                  *(_DWORD *)(v34 + 4 * v33++) = v35->fields.id;
                  if ( (int)v33 >= max_length )
                    goto LABEL_30;
                }
                goto LABEL_84;
              }
            }
          }
LABEL_30:
          if ( RankParamEntity )
            useItemNum = RankParamEntity->fields.useItemNum;
          else
            useItemNum = 0;
          this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BD6FF5 )
            {
              sub_1C21E38(&NetworkManager_TypeInfo);
              byte_4BD6FF5 = 1;
            }
            this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
            }
            ExceedItemIds_k__BackingField = v4->fields._ExceedItemIds_k__BackingField;
            if ( ExceedItemIds_k__BackingField )
            {
              if ( !ExceedItemIds_k__BackingField->max_length )
                goto LABEL_84;
              if ( !MasterData_object )
                goto LABEL_83;
              this = (CommandCardExceedControl_o *)UserItemMaster__TryGetEntity(
                                                     (UserItemMaster_o *)MasterData_object,
                                                     &entity,
                                                     *(_QWORD *)&this->fields.baseServantTouchPress->fields.isLongPressFast,
                                                     ExceedItemIds_k__BackingField->m_Items[1],
                                                     0LL);
              v53 = RankParamEntity;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_83;
                v39 = entity->fields.num >= useItemNum;
              }
              else
              {
                v39 = 0;
              }
              exceedItemComponents = v4->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v41 = 0;
                while ( 1 )
                {
                  v42 = exceedItemComponents->max_length;
                  if ( (int)v41 >= (int)v42 )
                    break;
                  if ( v41 >= v42 )
                    goto LABEL_84;
                  this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v41];
                  if ( !this )
                    goto LABEL_83;
                  this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( v18 < CommandCardParamUpMax )
                  {
                    v43 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v43 )
                      goto LABEL_83;
                    *(_QWORD *)&cardIndex = (int)v41 < (signed int)v43->max_length;
                  }
                  else
                  {
                    *(_QWORD *)&cardIndex = 0LL;
                  }
                  if ( !this )
                    goto LABEL_83;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0LL);
                  v45 = v4->fields._ExceedItemIds_k__BackingField;
                  if ( !v45 )
                    goto LABEL_83;
                  if ( v18 < CommandCardParamUpMax && (signed int)v41 < (signed int)v45->max_length )
                  {
                    v46 = v4->fields.exceedItemComponents;
                    if ( !v46 )
                      goto LABEL_83;
                    if ( v41 >= v46->max_length )
                      goto LABEL_84;
                    v47 = v46->m_Items[v41];
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    if ( !byte_4BD6FF5 )
                    {
                      sub_1C21E38(&NetworkManager_TypeInfo);
                      byte_4BD6FF5 = 1;
                    }
                    this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
                    }
                    v48 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v48 )
                      goto LABEL_83;
                    if ( v41 >= v48->max_length )
                      goto LABEL_84;
                    if ( !v47 )
                      goto LABEL_83;
                    LimitCntUpItemComponent__setLimitUpItemInfo(
                      v47,
                      *(_QWORD *)&this->fields.baseServantTouchPress->fields.isLongPressFast,
                      v48->m_Items[v41 + 1],
                      useItemNum,
                      v44);
                    v49 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v49 )
                      goto LABEL_83;
                    if ( v41 >= v49->max_length )
                      goto LABEL_84;
                    CombineMenuControl__AddCombineItemInfo(
                      (CombineMenuControl_o *)v4,
                      v49->m_Items[v41 + 1],
                      useItemNum,
                      0LL);
                  }
                  exceedItemComponents = v4->fields.exceedItemComponents;
                  ++v41;
                  if ( !exceedItemComponents )
                    goto LABEL_83;
                }
                CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
                CommandCardExceedControl__SetInfoMessageLabels(v4, 2, v39, v18 >= CommandCardParamUpMax, v50);
                v52 = 0;
                if ( v18 >= CommandCardParamUpMax || !v39 || v4->fields.baseUserServantEntity == 0LL )
                  goto LABEL_81;
                this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0LL);
                if ( this && v53 )
                {
                  v52 = SLODWORD(this->fields.menuListCtr) >= v53->fields.useQp;
LABEL_81:
                  CommandCardExceedControl__SetCombineButtonState(v4, 2, v52, v18 >= CommandCardParamUpMax, v51);
                  return;
                }
              }
            }
          }
LABEL_83:
          sub_1C22094(this, *(_QWORD *)&cardIndex);
        }
      }
LABEL_84:
      sub_1C2209C(this, *(_QWORD *)&cardIndex);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int64_t baseUserServantEntity; // x0
  int32_t v4; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w21
  int64_t v8; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v11; // s1
  float v12; // s0
  int v13; // s2
  __int64 v14; // x11
  float v15; // s0
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v17; // x23
  unsigned __int64 max_length; // x9
  __int64 v19; // x10
  unsigned __int64 v20; // x11
  int32_t v21; // w26
  CombineCommandCardComponent_o *v22; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BattleCommandData_o *v29; // x25
  const MethodInfo *v30; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v32; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v35; // w3
  float v36; // s3
  float v37; // s0
  float v38; // s1
  float v39; // s2
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_4BDFEC8 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFEC8 = 1;
  }
  baseUserServantEntity = (int64_t)this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_47;
  v4 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v4,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v4,
                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.cardBaseGrid )
    goto LABEL_47;
  v8 = baseUserServantEntity;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.cardBaseGrid, 0LL);
  transformTotal = this->fields.transformTotal;
  v11 = -18.0;
  if ( transformTotal <= 1 )
    v11 = -15.5;
  v12 = transformTotal <= 1 ? -258.0 : -270.0;
  v13 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v11 - 1), 0LL);
  baseUserServantEntity = (int64_t)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v14 = *(_QWORD *)baseUserServantEntity;
  v15 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v15 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v15;
  baseUserServantEntity = (*(__int64 (**)(void))(v14 + 440))();
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_47;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v17 >= (int)max_length )
      break;
    if ( !v8 )
      goto LABEL_47;
    v19 = *(_QWORD *)(v8 + 144);
    if ( !v19 )
      break;
    v20 = *(unsigned int *)(v19 + 24);
    if ( (__int64)v17 >= (int)v20 )
      break;
    if ( v17 >= v20 )
      goto LABEL_48;
    v21 = *(_DWORD *)(v19 + 4 * v17 + 32);
    if ( (unsigned int)(v21 - 1) <= 2 )
    {
      if ( v17 >= max_length )
        goto LABEL_48;
      v22 = commandCardComponents->m_Items[v17];
      baseUserServantEntity = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v22 )
        goto LABEL_47;
      v22->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v22->fields.target,
        baseUserServantEntity,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_44642932(v29, v21, v4, ServantImageLimitSealAfter, 0, -1, 0LL);
      if ( !v29 )
        goto LABEL_47;
      v29->fields.markindex = v17;
      v29->fields.servantCardIdsIndex = v17;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v17, v30);
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v32);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0LL )
      {
        if ( v17 >= commandCardParam->max_length )
LABEL_48:
          sub_1C2209C(baseUserServantEntity, method);
        v35 = commandCardParam->m_Items[v17 + 1];
      }
      else
      {
        v35 = 0;
      }
      v29->fields.commandCodeId = baseUserServantEntity;
      v29->fields.commandCardParam = v35;
      v29->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v22, v29, UserCommandCodeId, v35, 1, 1, 0LL);
      v36 = 1.0;
      if ( this->fields.displayTransformIndex <= 0 )
        v37 = 1.0;
      else
        v37 = 0.5;
      v38 = v37;
      v39 = v37;
      CombineCommandCardComponent__SetColor(v22, *(UnityEngine_Color_o *)(&v36 - 3), 0LL);
      CombineCommandCardComponent__SetLayout(v22, this->fields.positionOffsetY, this->fields.scaleOffset, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v17;
    if ( !commandCardComponents )
      goto LABEL_47;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  baseUserServantEntity = (int64_t)this->fields.itemLinkInfoListBtn;
  if ( !baseUserServantEntity
    || (baseUserServantEntity = (int64_t)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)baseUserServantEntity,
                                           0LL)) == 0 )
  {
LABEL_47:
    sub_1C22094(baseUserServantEntity, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0LL);
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.onAssetLoadEnd, 0LL, v40, v41, v42, v43, v44, v45);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onAssetLoadEnd->fields.m_target)(
      onAssetLoadEnd->fields.original_method_info,
      *(_QWORD *)&onAssetLoadEnd->fields.extra_arg);
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
  if ( (byte_4BDFEBC & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&Method_CombineMenuControl_OnLongPushListView__);
    sub_1C21E38(&Method_CommandCardExceedControl_OnClickCombine__);
    sub_1C21E38(&EventDelegate_TypeInfo);
    this = (CommandCardExceedControl_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_4BDFEBC = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v5 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v5, (Il2CppObject *)v2, (intptr_t)Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_47946052(onClick, v5, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v7 = baseServantTouchPress->fields.onClick;
  v8 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v8, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_47946052(v7, v8, 0LL);
  v9 = v2->fields.baseServantTouchPress;
  if ( !v9
    || (onLongPress = v9->fields.onLongPress,
        v11 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v11,
          (Il2CppObject *)v2,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0LL),
        EventDelegate__Set_47946052(onLongPress, v11, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_11:
    sub_1C22094(this, method);
  }
  v12 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.positionOffsetY;
  v13 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_47946052(v12, v13, 0LL);
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
  float v21; // s1
  float v22; // s0
  float v23; // s3
  float v24; // s2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v28; // x24
  struct System_Int32_array *commandCardParam; // x25

  if ( (byte_4BDFEC0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFEC0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_32:
    sub_1C22094(SelfUserGame, v10);
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
  SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = DataManager__GetMasterData_object_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v28 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v26);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
      sub_1C2209C(SelfUserGame, v10);
    v10 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame + 1];
    if ( !v28 )
      goto LABEL_32;
  }
  else
  {
    v10 = 0LL;
    if ( !SelfUserGame )
      goto LABEL_32;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v28, (int32_t)v10, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
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
    goto LABEL_32;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v17, stateType, v18);
  if ( !targetSelectInfoLabel )
    goto LABEL_32;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__GetNumberFormat(v11, 0LL);
  if ( !userQpLabel )
    goto LABEL_32;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v14 <= 0 )
  {
    v10 = (MethodInfo *)StringLiteral_1/*""*/;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__GetNumberFormat(v14, 0LL);
    v10 = (MethodInfo *)SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v10, 0LL);
  SelfUserGame = this->fields.requiredQpLabel;
  v21 = 1.0;
  if ( v11 < v14 )
    v21 = 0.0;
  if ( !SelfUserGame )
    goto LABEL_32;
  v22 = 1.0;
  v23 = 1.0;
  v24 = v21;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)(&v21 - 1), 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v25);
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
    sub_1C22094(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2209C(this, *(_QWORD *)&cardIndex);
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
    sub_1C22094(useItemTitleNormal, *(_QWORD *)&stateType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType == 2, 0LL);
}


void __fastcall CommandCardExceedControl__SetUserServant(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *selectedUserServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int128 v10; // q1
  int64_t v11; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  int v16; // w22
  int v17; // w23
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-50h]

  if ( (byte_4BDFEC4 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BDFEC4 = 1;
  }
  if ( selectedUserServantEntity )
  {
    if ( !this->fields.baseUserServantEntity )
      goto LABEL_9;
    v10 = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v28 = v29;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v28, 0LL);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_1C22094(v11, v12);
    v14 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v14;
    if ( v11 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v27, 0LL) )
    {
      CommandCardExceedControl__InitBaseServant(this, v15);
      v17 = 0;
      v16 = 1;
    }
    else
    {
LABEL_9:
      v16 = 0;
      v17 = 0;
    }
  }
  else
  {
    v16 = 0;
    v17 = 1;
  }
  this->fields.baseUserServantEntity = selectedUserServantEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)selectedUserServantEntity,
    (int64_t)method,
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
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v20, v21, v22, v23, v24, v25);
    CommandCardExceedControl__InitExceedItem(this, v26);
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
  }
}


void __fastcall CommandCardExceedControl__SetUserServantCommandCard(
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

  if ( (byte_4BDFEC5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFEC5 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
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
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v15, 0LL);
    if ( !MasterData_object )
      goto LABEL_22;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      userIdNumber,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v12 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    v14 = v13->static_fields->userIdNumber;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                 userServantEntity->fields.svtId,
                                 0LL);
    if ( !v12 )
LABEL_22:
      sub_1C22094(Instance, v6);
    UserServantCommandCodeMaster__TryGetEntity(
      (UserServantCommandCodeMaster_o *)v12,
      &this->fields.baseUserServantCommandCodeEntity,
      v14,
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

  if ( (byte_4BDFECD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFECD = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_1C22094(0LL, v4);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ExceedItemIds_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ExceedItemIds_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t displayTransformIndex; // w21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UnityEngine_Object_o *selectedCommandCard; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  BattleCommandComponent_o *v11; // x0

  if ( (byte_4BDFECF & 1) == 0 )
  {
    sub_1C21E38(&Method_CommandCardExceedControl_touchCommandCard__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFECF = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    v6 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_CommandCardExceedControl_touchCommandCard__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    if ( displayTransformIndex < 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
      selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
        goto LABEL_14;
      v11 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
      if ( !v11 )
        sub_1C22094(0LL, v9);
      if ( BattleCommandComponent__getMarkIndex(v11, 0LL) != cardIndex )
LABEL_14:
        CommandCardExceedControl__SetCommandCardDisplay(this, cardIndex, v10);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
    }
  }
}