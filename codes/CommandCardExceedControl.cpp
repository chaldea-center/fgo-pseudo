void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B20295 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineMenuControl_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4B20295 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.orObjectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.orObjectList, (int32_t)v5, v6, v7);
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

  if ( (byte_4B20286 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17523/*"buttontxt_synthesis"*/, *(_QWORD *)&stateType);
    sub_1BCAFF8(&StringLiteral_17520/*"buttontxt_notsynthesis"*/, v6);
    byte_4B20286 = 1;
  }
  if ( stateType != 2 || !isExceedMax )
    v7 = &StringLiteral_17523/*"buttontxt_synthesis"*/;
  else
    v7 = &StringLiteral_17520/*"buttontxt_notsynthesis"*/;
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
  __int64 v21; // x2
  __int64 v22; // x8
  int32_t v23; // w9
  BattleCommandData_o *v24; // x24
  const MethodInfo *v25; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v27; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  const MethodInfo *v29; // x3
  __int64 v31; // x0
  __int64 v32; // [xsp+8h] [xbp-78h]
  int32_t type; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B20294 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommandData___TypeInfo, *(_QWORD *)&cardIndex);
    sub_1BCAFF8(&BattleCommandData_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B20294 = 1;
  }
  v11 = sub_1BCB0A0(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
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
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v17,
                                     LimitCountByImageLimitCostumeIn,
                                     0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v17,
                                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !baseUserServantEntity )
        break;
      v22 = *(_QWORD *)(baseUserServantEntity + 144);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v22 + 24);
        if ( v23 > cardIndex )
        {
          if ( v23 <= (unsigned int)cardIndex )
            goto LABEL_29;
          type = *(_DWORD *)(v22 + 4LL * cardIndex + 32);
          v24 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_45632924(v24, type, v17, ServantImageLimitSealAfter, 0, -1, 0LL);
          if ( !v24 )
            break;
          v24->fields.markindex = cardIndex;
          v24->fields.servantCardIdsIndex = cardIndex;
          UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, cardIndex, v25);
          v24->fields.userCommandCodeId = UserCommandCodeId;
          baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v27);
          v24->fields.commandCodeId = baseUserServantEntity;
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
          v24->fields.commandCardParam = (int)baseUserServantCommandCardEntity;
          if ( !v13 )
            break;
          baseUserServantEntity = sub_1BCB134(v24, v13->obj.klass->_1.element_class);
          if ( !baseUserServantEntity )
          {
            v31 = sub_1BCB278(0LL);
            sub_1BCB120(v31, 0LL);
          }
          if ( v15 >= v13->max_length )
LABEL_29:
            sub_1BCB25C(baseUserServantEntity, v12, v21);
          *(_QWORD *)(v32 + 8 * v15) = v24;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + v14), (int32_t)v24, v21, v29);
        }
      }
      ++v15;
      v14 += 8LL;
      if ( (__int64)v15 >= this->fields.transformTotal )
        return v13;
    }
    sub_1BCB254(baseUserServantEntity, v12);
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
    sub_1BCB25C(this, *(_QWORD *)&cardIndex, method);
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

  if ( (byte_4B2028B & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B2028B = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_32CA35C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BCB254(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v7 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v10, 0LL);
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

  if ( (byte_4B20284 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1BCAFF8(&StringLiteral_3601/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/, v10);
    sub_1BCAFF8(&StringLiteral_3602/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/, v11);
    sub_1BCAFF8(&StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/, v12);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v13);
    sub_1BCAFF8(&StringLiteral_3608/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v14);
    sub_1BCAFF8(&StringLiteral_3607/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/, v15);
    byte_4B20284 = 1;
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
          v16 = &StringLiteral_3608/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
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
          v16 = &StringLiteral_3601/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        else
          v16 = &StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        v16 = &StringLiteral_3607/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v16, 0LL);
    case 0:
LABEL_6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = &StringLiteral_3602/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  __int64 v14; // x2
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v17; // x20
  int32_t v18; // w23
  int32_t v19; // w9
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B2028E & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v3);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B2028E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
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
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  v13 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v12;
  *(_QWORD *)&v22.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v22, 0LL);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = (DataManager_o *)UserServantCommandCardMaster__TryGetEntity(
                                (UserServantCommandCardMaster_o *)MasterData_object,
                                &entity,
                                v13,
                                (int)Instance,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_28:
    sub_1BCB254(Instance, v8);
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  max_length = commandCardParam->max_length;
  if ( max_length < 1 )
    return 1;
  v17 = 0LL;
  do
  {
    if ( (unsigned int)v17 >= max_length )
      sub_1BCB25C(Instance, v8, v14);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v18 = commandCardParam->m_Items[v17 + 1];
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v19 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 772LL);
    if ( v18 < v19 )
      break;
    max_length = commandCardParam->max_length;
    ++v17;
  }
  while ( (int)v17 < max_length );
  return v18 >= v19;
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
  DataManager_o *CardIndex; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w20
  BalanceConfig_c *v16; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v18; // x1
  struct UserServantCommandCardEntity_o *v19; // x8
  CommandCardRankParamMaster_o *v20; // x20
  struct System_Int32_array *v21; // x22
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w22
  struct System_Int32_array *v25; // x23
  __int64 v26; // x8
  UserItemMaster_o *v27; // x19
  int32_t v28; // w24
  unsigned __int64 v29; // x25
  int32_t v30; // w21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B2028C & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B2028C = 1;
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
      CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v9);
      if ( (unsigned int)CardIndex >= commandCardParam->max_length )
        goto LABEL_45;
      v15 = commandCardParam->m_Items[(int)CardIndex + 1];
      v16 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_44;
  CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                 CardIndex,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v19 = this->fields.baseUserServantCommandCardEntity;
  v20 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v19 )
  {
    v21 = v19->fields.commandCardParam;
    CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v18);
    if ( !v21 )
      goto LABEL_44;
    if ( (unsigned int)CardIndex >= v21->max_length )
LABEL_45:
      sub_1BCB25C(CardIndex, v13, v14);
    v13 = (unsigned int)v21->m_Items[(int)CardIndex + 1];
    if ( !v20 )
      goto LABEL_44;
  }
  else
  {
    v13 = 0LL;
    if ( !CardIndex )
      goto LABEL_44;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v20, v13, 0LL);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex
    || (CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                       CardIndex,
                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___),
        (v25 = this->fields._ExceedItemIds_k__BackingField) == 0LL) )
  {
LABEL_44:
    sub_1BCB254(CardIndex, v13);
  }
  v26 = *(_QWORD *)&v25->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = (UserItemMaster_o *)CardIndex;
    v28 = 0;
    v29 = 0LL;
    while ( v29 < (unsigned int)v26 )
    {
      v30 = v25->m_Items[v29 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
        byte_4B165D1 = 1;
      }
      CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v27 )
        goto LABEL_44;
      CardIndex = (DataManager_o *)UserItemMaster__TryGetEntity(
                                     v27,
                                     &entity,
                                     *(_QWORD *)(*(_QWORD *)&CardIndex[1].fields._DispLog + 64LL),
                                     v30,
                                     0LL);
      if ( entity )
        v28 += entity->fields.num;
      LODWORD(v26) = v25->max_length;
      if ( (__int64)++v29 >= (int)v26 )
        return v28 >= useItemNum;
    }
    goto LABEL_45;
  }
  v28 = 0;
  return v28 >= useItemNum;
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
  __int64 v13; // x2
  int32_t v14; // w19
  BalanceConfig_c *v15; // x0

  if ( (byte_4B2028D & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B2028D = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v7) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v11 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v9);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
        sub_1BCB25C(Instance, v9, v13);
      v14 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v11 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1BCB254(Instance, v9);
  }
  v14 = 0;
  if ( !Instance )
    goto LABEL_17;
LABEL_12:
  CommandCardRankParamMaster__GetRankParamEntity(v11, v14, 0LL);
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B20285 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1BCAFF8(&StringLiteral_3603/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/, v4);
    sub_1BCAFF8(&StringLiteral_3605/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/, v5);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B20285 = 1;
  }
  if ( stateType == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3605/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  if ( !stateType )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3603/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
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
    sub_1BCB25C(this, *(_QWORD *)&cardIndex, method);
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
  if ( !commandCardExceedConfirmDialog
    || (BaseDialog__Init(commandCardExceedConfirmDialog, 0LL),
        (commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedAddConfirmDialog) == 0LL) )
  {
    sub_1BCB254(commandCardExceedConfirmDialog, v9);
  }
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
}


void __fastcall CommandCardExceedControl__InitBaseServant(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  UnityEngine_Object_o *charaGraphTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B20282 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B20282 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
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
      UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
      this->fields.charaGraphTexture = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.charaGraphTexture, 0, v9, v10);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCB254(baseSelectInfoObject, v5);
  }
}


void __fastcall CommandCardExceedControl__InitCommandCard(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v16; // w22
  CombineCommandCardComponent_o *v17; // x20
  const MethodInfo *v18; // x2
  CGThumbnailListItem_o *p_userCommandCodeMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B20281 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B20281 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantCommandCardEntity, 0, v2, v3);
  this->fields.selectedCommandCard = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedCommandCard, 0, v6, v7);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantCommandCodeEntity, 0, v8, v9);
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_13;
  max_length = commandCardComponents->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BCB25C(Instance, v11, v12);
      v17 = commandCardComponents->m_Items[v16];
      if ( !v17 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)Instance,
        v17->fields.selectedSprite,
        0,
        v13);
      CombineCommandCardComponent__SetCommandCardEnable(v17, 0, v18);
      max_length = commandCardComponents->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_9;
    }
LABEL_13:
    sub_1BCB254(Instance, v11);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (CGThumbnailListItem_o *)&this->fields.userCommandCodeMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1BCAF9C(p_userCommandCodeMaster, (int32_t)MasterData_object, v21, v22);
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
    sub_1BCB254(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_4B20280 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B20280 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_1BCB254(detailLabel, method);
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
    sub_1BCB254(cardSwitchButton, method);
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

  if ( (byte_4B20290 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardExceedControl_OnClickCombine__, method);
    byte_4B20290 = 1;
  }
  v3 = Method_CommandCardExceedControl_OnClickCombine__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_CommandCardExceedControl_OnClickCombine__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_11;
  v8 = (int)ExceedItemIds_k__BackingField->max_length >= 2
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
    sub_1BCB254(v5, v6);
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

  if ( (byte_4B20293 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardExceedControl_OnClickSwitchButton__, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B20293 = 1;
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
    sub_1BCB254(baseUserServantEntity, v4);
  }
  v9 = 1;
LABEL_22:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v9, 0LL);
  v14 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCB010(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
}


void __fastcall CommandCardExceedControl__RefreshInfo(CommandCardExceedControl_o *this, const MethodInfo *method)
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
    || (BaseDialog__Init(commandCardExceedConfirmDialog, 0LL),
        (commandCardExceedConfirmDialog = (BaseDialog_o *)this->fields.commandCardExceedAddConfirmDialog) == 0LL) )
  {
    sub_1BCB254(commandCardExceedConfirmDialog, method);
  }
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedCommandCard, 0, v6, v7);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v8);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0LL, v9);
}


void __fastcall CommandCardExceedControl__SetBaseServantCardImage(
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
      sub_1BCB254(0LL, userServantEntity);
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(CommandCardExceedControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                           this,
                                           this->fields.charaGraphTexture,
                                           userServantEntity,
                                           this->klass[1]._1.image);
    this->fields.charaGraphTexture = v6;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.charaGraphTexture, (int32_t)v6, v7, v8);
  }
  else
  {
    CommandCardExceedControl__InitBaseServant(this, 0LL);
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
  const MethodInfo *v12; // x3
  __int64 transformTotal; // x1
  UnityEngine_Component_o *useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_String_array *v22; // x20
  unsigned __int64 v23; // x21
  __int64 v24; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v26; // w22
  __int64 v27; // x23
  __int64 v28; // x24
  int32_t v29; // w23
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  System_Action_o *v32; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B20289 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, onAssetLoadEnd);
    sub_1BCAFF8(&AssetManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_CommandCardExceedControl_SetCommandCards__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1BCAFF8(&string___TypeInfo, v9);
    byte_4B20289 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_39731636(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetList, 0, v11, v12);
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
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onAssetLoadEnd, (int32_t)onAssetLoadEnd, v17, v18);
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
    v19 = (struct System_String_array *)sub_1BCB0A0(string___TypeInfo, transformTotal);
    this->fields.assetList = v19;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetList, (int32_t)v19, v20, v21);
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
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v34, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        useItemTitleNormal = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                          v26,
                                                          v29,
                                                          0LL);
        if ( !v22 )
          break;
        if ( v23 >= v22->max_length )
          sub_1BCB25C(useItemTitleNormal, transformTotal, v30);
        *(Il2CppClass **)((char *)&v22->obj.klass + v24) = (Il2CppClass *)useItemTitleNormal;
        sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v22 + v24), (int32_t)useItemTitleNormal, v30, v31);
        v22 = this->fields.assetList;
        ++v23;
        v24 += 8LL;
        if ( (__int64)v23 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1BCB254(useItemTitleNormal, transformTotal);
    }
LABEL_30:
    v32 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_39729272(v22, v32, 1, 0LL);
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
        System_Action_int____o *onRequestCombine,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onRequestCombine = onRequestCombine;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onRequestCombine, (int32_t)onRequestCombine, (int32_t)method, v3);
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
    sub_1BCB254(combineButton, *(_QWORD *)&stateType);
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
  int32_t v3; // w20
  CommandCardExceedControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  const MethodInfo *v24; // x3
  int32_t v25; // w21
  __int64 m_CancellationTokenSource_low; // x2
  Il2CppObject *Item; // x22
  int v28; // w8
  struct CombineCommandCardComponent_array *v29; // x8
  struct CombineCommandCardComponent_o *v30; // x1
  const MethodInfo *v31; // x2
  ItemEntity_array *EntityList; // x21
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v35; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x23
  BalanceConfig_c *v37; // x8
  int32_t CommandCardParamUpMax; // w27
  System_Collections_Generic_List_int__o *v39; // x23
  int max_length; // w8
  unsigned int i; // w26
  Il2CppClass **v42; // x22
  Il2CppClass *v43; // x8
  char *v44; // x22
  Il2CppClass *v45; // t1
  CommandCardExceedControl_o *v46; // x24
  int m_CancellationTokenSource; // w8
  int v48; // w9
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  System_Int32_array *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t useItemNum; // w21
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x25
  __int64 v57; // x8
  UserItemMaster_o *v58; // x22
  int32_t v59; // w29
  unsigned __int64 v60; // x26
  int32_t v61; // w24
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  int v63; // w23
  int v64; // w9
  struct System_Int32_array *v65; // x8
  struct System_Int32_array *v66; // x8
  struct LimitCntUpItemComponent_array *v67; // x8
  LimitCntUpItemComponent_o *v68; // x24
  struct System_Int32_array *v69; // x8
  struct System_Int32_array *v70; // x8
  UnityEngine_Object_o *orGameObject; // x24
  struct System_Int32_array *v72; // x8
  Il2CppObject *v73; // x24
  CommandCardExceedControl_o *v74; // x24
  struct LimitCntUpItemComponent_array *v75; // x8
  CommandCardExceedControl_o *v76; // x25
  struct LimitCntUpItemComponent_array *v77; // x8
  CommandCardExceedControl_o *v78; // x25
  CommandCardExceedControl_o *v79; // x25
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  const MethodInfo *v86; // x4
  const MethodInfo *v87; // x4
  bool v88; // w2
  struct UIGrid_o *exceedItemGrid; // x0
  CommandCardRankParamEntity_o *v90; // [xsp+0h] [xbp-70h]
  __int64 v91; // [xsp+0h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = cardIndex;
  v4 = this;
  if ( (byte_4B20292 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&cardIndex);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Clear__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__set_Item__, v16);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v19);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    this = (CommandCardExceedControl_o *)sub_1BCAFF8(&StringLiteral_24416/*"validClassIds"*/, v22);
    byte_4B20292 = 1;
  }
  entity = 0LL;
  if ( (v3 & 0x80000000) != 0 )
    return;
  commandCardComponents = v4->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_145;
  if ( (signed int)commandCardComponents->max_length <= v3 )
    return;
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0LL);
  this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
  if ( !this )
    goto LABEL_145;
  v25 = 0;
  while ( 1 )
  {
    m_CancellationTokenSource_low = LODWORD(this->fields.m_CancellationTokenSource);
    if ( v25 >= (int)m_CancellationTokenSource_low )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v25,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)Item, 0LL);
    this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
    if ( this )
    {
      this = (CommandCardExceedControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             v25,
                                             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this )
      {
        this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, 0LL, 0LL);
          this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
          if ( this )
          {
            System_Collections_Generic_List_object___set_Item(
              (System_Collections_Generic_List_object__o *)this,
              v25,
              0LL,
              (const MethodInfo_36B9954 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
            this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
            ++v25;
            if ( this )
              continue;
          }
        }
      }
    }
    goto LABEL_145;
  }
  v28 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v28;
  if ( (int)m_CancellationTokenSource_low >= 1 )
    System_Array__Clear(*(System_Array_o **)&this->fields.m_CachedPtr, 0, m_CancellationTokenSource_low, 0LL);
  v29 = v4->fields.commandCardComponents;
  if ( !v29 )
    goto LABEL_145;
  if ( v29->max_length <= v3 )
    goto LABEL_146;
  v30 = v29->m_Items[v3];
  v4->fields.selectedCommandCard = v30;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&v4->fields.selectedCommandCard,
    (int32_t)v30,
    m_CancellationTokenSource_low,
    v24);
  CommandCardExceedControl__SetSelectedFrameActive(v4, v3, v31);
  this = (CommandCardExceedControl_o *)v4->fields.targetSelectInfoBase;
  if ( !this )
    goto LABEL_145;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CommandCardExceedControl_o *)v4->fields.exceedItemBase;
  if ( !this )
    goto LABEL_145;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_145;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_145;
  EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0LL);
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_145;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = v4->fields.baseUserServantCommandCardEntity;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    if ( !commandCardParam )
      goto LABEL_145;
    if ( commandCardParam->max_length <= v3 )
      goto LABEL_146;
    v35 = commandCardParam->m_Items[v3 + 1];
    if ( !this )
      goto LABEL_145;
  }
  else
  {
    v35 = 0;
    if ( !this )
      goto LABEL_145;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity((CommandCardRankParamMaster_o *)this, v35, 0LL);
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  CommandCardParamUpMax = v37->static_fields->CommandCardParamUpMax;
  if ( EntityList && *(_QWORD *)&EntityList->max_length )
  {
    v90 = RankParamEntity;
    v39 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v39,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
    max_length = EntityList->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; (int)i < max_length; ++i )
      {
        if ( i >= max_length )
          goto LABEL_146;
        v42 = &EntityList->obj.klass + (int)i;
        v45 = v42[4];
        v44 = (char *)(v42 + 4);
        v43 = v45;
        if ( !v45 )
          goto LABEL_145;
        this = (CommandCardExceedControl_o *)v43->_1.typeMetadataHandle;
        if ( !this )
          goto LABEL_145;
        this = (CommandCardExceedControl_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               (System_Collections_Generic_Dictionary_object__object__o *)this,
                                               (Il2CppObject *)StringLiteral_24416/*"validClassIds"*/,
                                               (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v4->fields.baseUserServantEntity )
          {
            if ( i >= EntityList->max_length )
              goto LABEL_146;
            if ( !*(_QWORD *)v44 )
              goto LABEL_145;
            this = (CommandCardExceedControl_o *)EntityScriptUtil__GetIntArray(
                                                   *(System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)v44 + 104LL),
                                                   (System_String_o *)StringLiteral_24416/*"validClassIds"*/,
                                                   0LL,
                                                   0LL);
            if ( !v4->fields.baseUserServantEntity )
              goto LABEL_145;
            v46 = this;
            this = (CommandCardExceedControl_o *)UserServantEntity__getSvtClassId(
                                                   v4->fields.baseUserServantEntity,
                                                   0,
                                                   0,
                                                   0LL);
            if ( !v46 )
              goto LABEL_145;
            m_CancellationTokenSource = (int)v46->fields.m_CancellationTokenSource;
            if ( m_CancellationTokenSource >= 1 )
            {
              v48 = 0;
              while ( m_CancellationTokenSource != v48 )
              {
                if ( (_DWORD)this == *((_DWORD *)&v46->fields.combineRootComponent + v48) )
                  goto LABEL_53;
                if ( m_CancellationTokenSource == ++v48 )
                  goto LABEL_60;
              }
LABEL_146:
              sub_1BCB25C(this, *(_QWORD *)&cardIndex, m_CancellationTokenSource_low);
            }
          }
        }
        else
        {
LABEL_53:
          if ( i >= EntityList->max_length )
            goto LABEL_146;
          if ( !*(_QWORD *)v44 )
            goto LABEL_145;
          if ( !v39 )
            goto LABEL_145;
          *(_QWORD *)&cardIndex = *(unsigned int *)(*(_QWORD *)v44 + 16LL);
          items = v39->fields._items;
          v50 = Method_System_Collections_Generic_List_int__Add__;
          ++v39->fields._version;
          if ( !items )
            goto LABEL_145;
          size = v39->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v39,
              cardIndex,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v39->fields._size = size + 1;
            items->m_Items[size + 1] = cardIndex;
          }
        }
LABEL_60:
        max_length = EntityList->max_length;
      }
    }
    if ( v39 )
    {
      v52 = System_Collections_Generic_List_int___ToArray(
              v39,
              (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
      v4->fields._ExceedItemIds_k__BackingField = v52;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._ExceedItemIds_k__BackingField, (int32_t)v52, v53, v54);
      RankParamEntity = v90;
      goto LABEL_63;
    }
LABEL_145:
    sub_1BCB254(this, *(_QWORD *)&cardIndex);
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
  this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_145;
  this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  ExceedItemIds_k__BackingField = v4->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_145;
  v57 = *(_QWORD *)&ExceedItemIds_k__BackingField->max_length;
  v91 = (__int64)RankParamEntity;
  if ( (int)v57 >= 1 )
  {
    v58 = (UserItemMaster_o *)this;
    v59 = 0;
    v60 = 0LL;
    while ( v60 < (unsigned int)v57 )
    {
      v61 = ExceedItemIds_k__BackingField->m_Items[v60 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
        byte_4B165D1 = 1;
      }
      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      }
      if ( !v58 )
        goto LABEL_145;
      this = (CommandCardExceedControl_o *)UserItemMaster__TryGetEntity(
                                             v58,
                                             &entity,
                                             *(_QWORD *)&this->fields.detailLabel->fields.updateAnchors,
                                             v61,
                                             0LL);
      if ( entity )
        v59 += entity->fields.num;
      LODWORD(v57) = ExceedItemIds_k__BackingField->max_length;
      if ( (__int64)++v60 >= (int)v57 )
        goto LABEL_83;
    }
    goto LABEL_146;
  }
  v59 = 0;
LABEL_83:
  exceedItemComponents = v4->fields.exceedItemComponents;
  if ( !exceedItemComponents )
    goto LABEL_145;
  v63 = 0;
  while ( 1 )
  {
    v64 = exceedItemComponents->max_length;
    if ( v63 >= v64 )
      break;
    if ( v63 >= (unsigned int)v64 )
      goto LABEL_146;
    this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v63];
    if ( !this )
      goto LABEL_145;
    this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v35 < CommandCardParamUpMax )
    {
      v65 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v65 )
        goto LABEL_145;
      *(_QWORD *)&cardIndex = v63 < (signed int)v65->max_length;
    }
    else
    {
      *(_QWORD *)&cardIndex = 0LL;
    }
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0LL);
    v66 = v4->fields._ExceedItemIds_k__BackingField;
    if ( !v66 )
      goto LABEL_145;
    if ( v35 < CommandCardParamUpMax && v63 < (signed int)v66->max_length )
    {
      v67 = v4->fields.exceedItemComponents;
      if ( !v67 )
        goto LABEL_145;
      if ( v63 >= v67->max_length )
        goto LABEL_146;
      v68 = v67->m_Items[v63];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
        byte_4B165D1 = 1;
      }
      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
      }
      v69 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v69 )
        goto LABEL_145;
      if ( v63 >= v69->max_length )
        goto LABEL_146;
      if ( !v68 )
        goto LABEL_145;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        v68,
        *(_QWORD *)&this->fields.detailLabel->fields.updateAnchors,
        v69->m_Items[v63 + 1],
        useItemNum,
        0LL);
      v70 = v4->fields._ExceedItemIds_k__BackingField;
      if ( !v70 )
        goto LABEL_145;
      if ( v63 >= v70->max_length )
        goto LABEL_146;
      CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)v4, v70->m_Items[v63 + 1], useItemNum, 0LL);
      orGameObject = (UnityEngine_Object_o *)v4->fields.orGameObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (CommandCardExceedControl_o *)UnityEngine_Object__op_Implicit(orGameObject, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v72 = v4->fields._ExceedItemIds_k__BackingField;
        if ( !v72 )
          goto LABEL_145;
        if ( v63 < (signed int)(v72->max_length - 1) )
        {
          v73 = (Il2CppObject *)v4->fields.orGameObject;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (CommandCardExceedControl_o *)UnityEngine_Object__Instantiate_object_(
                                                 v73,
                                                 (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !this )
            goto LABEL_145;
          v74 = this;
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
          v75 = v4->fields.exceedItemComponents;
          if ( !v75 )
            goto LABEL_145;
          if ( v63 >= v75->max_length )
            goto LABEL_146;
          v76 = this;
          this = (CommandCardExceedControl_o *)v75->m_Items[v63];
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
          if ( !v76 )
            goto LABEL_145;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v76, (UnityEngine_Transform_o *)this, 0LL);
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)v74,
                                                 0LL);
          v77 = v4->fields.exceedItemComponents;
          if ( !v77 )
            goto LABEL_145;
          if ( v63 >= v77->max_length )
            goto LABEL_146;
          v78 = this;
          this = (CommandCardExceedControl_o *)v77->m_Items[v63];
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( !this )
            goto LABEL_145;
          this = (CommandCardExceedControl_o *)UnityEngine_Transform__GetSiblingIndex(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
          if ( !v78 )
            goto LABEL_145;
          UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)v78, (_DWORD)this + 1, 0LL);
          this = (CommandCardExceedControl_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)v74,
                                                 0LL);
          v79 = this;
          if ( !byte_4B16196 )
          {
            this = (CommandCardExceedControl_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&cardIndex);
            byte_4B16196 = 1;
          }
          if ( !v79 )
            goto LABEL_145;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v79,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v74, 1, 0LL);
          this = (CommandCardExceedControl_o *)v4->fields.orObjectList;
          if ( !this )
            goto LABEL_145;
          v82 = *(_QWORD *)&this->fields.m_CachedPtr;
          v83 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v82 )
            goto LABEL_145;
          v84 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v74,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v85 = v82 + 8 * v84;
            LODWORD(this->fields.m_CancellationTokenSource) = v84 + 1;
            *(_QWORD *)(v85 + 32) = v74;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v85 + 32), (int32_t)v74, v80, v81);
          }
        }
      }
    }
    exceedItemComponents = v4->fields.exceedItemComponents;
    ++v63;
    if ( !exceedItemComponents )
      goto LABEL_145;
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
  CommandCardExceedControl__SetInfoMessageLabels(v4, 2, v59 >= useItemNum, v35 >= CommandCardParamUpMax, v86);
  v88 = 0;
  if ( v35 < CommandCardParamUpMax && v59 >= useItemNum && v4->fields.baseUserServantEntity )
  {
    this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !this )
      goto LABEL_145;
    v88 = (__int64)this->fields.menuListCtr >= v91;
  }
  CommandCardExceedControl__SetCombineButtonState(v4, 2, v88, v35 >= CommandCardParamUpMax, v87);
  exceedItemGrid = v4->fields.exceedItemGrid;
  if ( exceedItemGrid )
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))exceedItemGrid->klass->vtable._8_Reposition.method)(
      exceedItemGrid,
      exceedItemGrid->klass->vtable._9_ResetPosition.methodPtr);
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
  __int64 v21; // x2
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v23; // x23
  unsigned __int64 max_length; // x9
  __int64 v25; // x10
  unsigned __int64 v26; // x11
  int32_t v27; // w26
  CombineCommandCardComponent_o *v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  BattleCommandData_o *v31; // x25
  const MethodInfo *v32; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x6
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v38; // w3
  const MethodInfo *v39; // x1
  float v40; // s3
  float v41; // s0
  float v42; // s1
  float v43; // s2
  const MethodInfo *v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_4B2028A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommandData_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B2028A = 1;
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
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v9,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v9,
                                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v23 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v23 >= (int)max_length )
      break;
    if ( !v13 )
      goto LABEL_47;
    v25 = *(_QWORD *)(v13 + 144);
    if ( !v25 )
      break;
    v26 = *(unsigned int *)(v25 + 24);
    if ( (__int64)v23 >= (int)v26 )
      break;
    if ( v23 >= v26 )
      goto LABEL_48;
    v27 = *(_DWORD *)(v25 + 4 * v23 + 32);
    if ( (unsigned int)(v27 - 1) <= 2 )
    {
      if ( v23 >= max_length )
        goto LABEL_48;
      v28 = commandCardComponents->m_Items[v23];
      baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v28 )
        goto LABEL_47;
      v28->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v28->fields.target, baseUserServantEntity, v29, v30);
      v31 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_45632924(v31, v27, v9, ServantImageLimitSealAfter, 0, -1, 0LL);
      if ( !v31 )
        goto LABEL_47;
      v31->fields.markindex = v23;
      v31->fields.servantCardIdsIndex = v23;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v23, v32);
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v34);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0LL )
      {
        if ( v23 >= commandCardParam->max_length )
LABEL_48:
          sub_1BCB25C(baseUserServantEntity, method, v21);
        v38 = commandCardParam->m_Items[v23 + 1];
      }
      else
      {
        v38 = 0;
      }
      v31->fields.commandCodeId = baseUserServantEntity;
      v31->fields.commandCardParam = v38;
      v31->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v28, v31, UserCommandCodeId, v38, 1, 1, v35);
      v40 = 1.0;
      if ( this->fields.displayTransformIndex <= 0 )
        v41 = 1.0;
      else
        v41 = 0.5;
      v42 = v41;
      v43 = v41;
      CombineCommandCardComponent__SetColor(v28, *(UnityEngine_Color_o *)(&v40 - 3), v39);
      CombineCommandCardComponent__SetLayout(v28, this->fields.positionOffsetY, this->fields.scaleOffset, v44);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v23;
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
    sub_1BCB254(baseUserServantEntity, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0LL);
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onAssetLoadEnd, 0, v45, v46);
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
  if ( (byte_4B2027F & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, method);
    sub_1BCAFF8(&Method_CombineMenuControl_OnLongPushListView__, v3);
    sub_1BCAFF8(&Method_CommandCardExceedControl_OnClickCombine__, v4);
    sub_1BCAFF8(&EventDelegate_TypeInfo, v5);
    this = (CommandCardExceedControl_o *)sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    byte_4B2027F = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, (intptr_t)Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_48451416(onClick, v9, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v11 = baseServantTouchPress->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_48451416(v11, v12, 0LL);
  v13 = v2->fields.baseServantTouchPress;
  if ( !v13
    || (onLongPress = v13->fields.onLongPress,
        v15 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v15,
          (Il2CppObject *)v2,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0LL),
        EventDelegate__Set_48451416(onLongPress, v15, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_11:
    sub_1BCB254(this, method);
  }
  v16 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.positionOffsetY;
  v17 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_48451416(v16, v17, 0LL);
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
  int64_t v14; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x5
  int32_t v17; // w25
  UILabel_o *detailLabel; // x24
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v20; // x0
  const MethodInfo *v21; // x2
  UILabel_o *userQpLabel; // x23
  UILabel_o *requiredQpLabel; // x23
  float v24; // s1
  float v25; // s0
  float v26; // s3
  float v27; // s2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v31; // x24
  struct System_Int32_array *commandCardParam; // x25
  __int64 v33; // x2

  if ( (byte_4B20283 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, *(_QWORD *)&stateType);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v11);
    byte_4B20283 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_32:
    sub_1BCB254(SelfUserGame, v13);
  v14 = *((_QWORD *)SelfUserGame + 12);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v13);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v15),
        ((unsigned __int8)SelfUserGame & 1) != 0)
    || this->fields.displayTransformIndex )
  {
    v17 = 0;
    goto LABEL_8;
  }
  SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = DataManager__GetMasterData_object_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v31 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v29);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
      sub_1BCB25C(SelfUserGame, v13, v33);
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
  SelfUserGame = LocalizationManager__GetNumberFormatLong(v14, 0LL);
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
  const MethodInfo *v3; // x3
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  __int64 v6; // x20
  int max_length; // w9
  CombineCommandCardComponent_o *v9; // x8

  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
LABEL_7:
    sub_1BCB254(this, *(_QWORD *)&cardIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BCB25C(this, *(_QWORD *)&cardIndex, method);
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
    sub_1BCB254(useItemTitleNormal, *(_QWORD *)&stateType);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useItemTitleNormal, stateType == 2, 0LL);
}


void __fastcall CommandCardExceedControl__SetUserServant(
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

  if ( (byte_4B20287 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    byte_4B20287 = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v20, 0LL);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_1BCB254(v7, v8);
    v10 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v10;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v19, 0LL) )
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
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectedUserServantEntity,
    (int32_t)method,
    v3);
  CommandCardExceedControl__SetUserServantCommandCard(this, this->fields.baseUserServantEntity, v14);
  CommandCardExceedControl__SetBaseServantCardImage(this, this->fields.baseUserServantEntity, v15);
  if ( v13 | v12 )
  {
    this->fields.selectedCommandCard = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectedCommandCard, 0, v16, v17);
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
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v13; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  int64_t userIdNumber; // x22
  __int64 v17; // x1
  Il2CppObject *v18; // x21
  NetworkManager_c *v19; // x0
  int64_t v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B20288 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, userServantEntity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B20288 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
      byte_4B165D1 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    userIdNumber = v13->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v15;
    *(_QWORD *)&v21.fields.fakeValue = v14;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v21, 0LL);
    if ( !MasterData_object )
      goto LABEL_22;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      userIdNumber,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v18 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
      byte_4B165D1 = 1;
    }
    v19 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    v20 = v19->static_fields->userIdNumber;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                 userServantEntity->fields.svtId,
                                 0LL);
    if ( !v18 )
LABEL_22:
      sub_1BCB254(Instance, v10);
    UserServantCommandCodeMaster__TryGetEntity(
      (UserServantCommandCodeMaster_o *)v18,
      &this->fields.baseUserServantCommandCodeEntity,
      v20,
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

  if ( (byte_4B2028F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B2028F = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_1BCB254(0LL, v4);
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
  const MethodInfo *v3; // x3

  this->fields._ExceedItemIds_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._ExceedItemIds_k__BackingField,
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

  if ( (byte_4B20291 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CommandCardExceedControl_touchCommandCard__, *(_QWORD *)&cardIndex);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B20291 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    v7 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_CommandCardExceedControl_touchCommandCard__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    if ( displayTransformIndex < 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
      selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
        goto LABEL_14;
      v12 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
      if ( !v12 )
        sub_1BCB254(0LL, v10);
      if ( BattleCommandComponent__getMarkIndex(v12, 0LL) != cardIndex )
LABEL_14:
        CommandCardExceedControl__SetCommandCardDisplay(this, cardIndex, v11);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
    }
  }
}