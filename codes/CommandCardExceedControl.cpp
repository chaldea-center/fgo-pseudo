void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C259A0 & 1) == 0 )
  {
    sub_1C3B764(&CombineMenuControl_TypeInfo, method);
    byte_4C259A0 = 1;
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

  if ( (byte_4C25990 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18019/*"csIBM905"*/, *(_QWORD *)&stateType);
    sub_1C3B764(&StringLiteral_18016/*"csIBM870"*/, v6);
    byte_4C25990 = 1;
  }
  if ( stateType != 2 || !isExceedMax )
    v7 = &StringLiteral_18019/*"csIBM905"*/;
  else
    v7 = &StringLiteral_18016/*"csIBM870"*/;
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v35; // x0
  __int64 v36; // [xsp+8h] [xbp-78h]
  int32_t type; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C2599F & 1) == 0 )
  {
    sub_1C3B764(&BattleCommandData___TypeInfo, *(_QWORD *)&cardIndex);
    sub_1C3B764(&BattleCommandData_TypeInfo, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C2599F = 1;
  }
  v11 = sub_1C3B80C(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
  v13 = (BattleCommandData_array *)v11;
  if ( this->fields.transformTotal >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v36 = v11 + 32;
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
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v17,
                                     LimitCountByImageLimitCostumeIn,
                                     0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v17,
                                         (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          v23 = (BattleCommandData_o *)sub_1C3B9B0(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_44886496(v23, type, v17, ServantImageLimitSealAfter, 0, -1, 0LL);
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
          baseUserServantEntity = sub_1C3B8A0(v23, v13->obj.klass->_1.element_class);
          if ( !baseUserServantEntity )
          {
            v35 = sub_1C3B9E4(0LL);
            sub_1C3B88C(v35, 0LL);
          }
          if ( v15 >= v13->max_length )
LABEL_29:
            sub_1C3B9C8(baseUserServantEntity, v12);
          *(_QWORD *)(v36 + 8 * v15) = v23;
          sub_1C3B708((PartyOrganizationUtility_o *)(v36 + v14), (int64_t)v23, v28, v29, v30, v31, v32, v33);
        }
      }
      ++v15;
      v14 += 8LL;
      if ( (__int64)v15 >= this->fields.transformTotal )
        return v13;
    }
    sub_1C3B9C0(baseUserServantEntity, v12);
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
    sub_1C3B9C8(this, *(_QWORD *)&cardIndex);
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

  if ( (byte_4C25996 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4C25996 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v7 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v10, 0LL);
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

  if ( (byte_4C2598E & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1C3B764(&StringLiteral_3752/*"CONSUME_STORMPOD_SPOT_ID"*/, v10);
    sub_1C3B764(&StringLiteral_3753/*"CONSUME_TYPE_AP"*/, v11);
    sub_1C3B764(&StringLiteral_12379/*"Sergio Georgini"*/, v12);
    sub_1C3B764(&StringLiteral_1/*""*/, v13);
    sub_1C3B764(&StringLiteral_3759/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, v14);
    sub_1C3B764(&StringLiteral_3758/*"CONTINUE_BATTLE_SAVEKEY"*/, v15);
    byte_4C2598E = 1;
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
          v16 = &StringLiteral_3759/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/;
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
          v16 = &StringLiteral_3752/*"CONSUME_STORMPOD_SPOT_ID"*/;
        else
          v16 = &StringLiteral_12379/*"Sergio Georgini"*/;
      }
      else
      {
        v16 = &StringLiteral_3758/*"CONTINUE_BATTLE_SAVEKEY"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v16, 0LL);
    case 0:
LABEL_6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = &StringLiteral_3753/*"CONSUME_TYPE_AP"*/;
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
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v16; // x20
  int32_t v17; // w23
  int32_t v18; // w9
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C25999 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C25999 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
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
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v21, 0LL);
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
    sub_1C3B9C0(Instance, v8);
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
      sub_1C3B9C8(Instance, v8);
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    v17 = commandCardParam->m_Items[v16 + 1];
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v18 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 748LL);
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
  DataManager_o *CardIndex; // x0
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
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C25997 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C25997 = 1;
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
        goto LABEL_40;
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
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_39;
  CardIndex = (DataManager_o *)DataManager__GetMasterData_object_(
                                 CardIndex,
                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v18 = this->fields.baseUserServantCommandCardEntity;
  v19 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v18 )
  {
    v20 = v18->fields.commandCardParam;
    CardIndex = (DataManager_o *)CommandCardExceedControl__get_CardIndex(this, v17);
    if ( !v20 )
      goto LABEL_39;
    if ( (unsigned int)CardIndex >= v20->max_length )
      goto LABEL_40;
    v13 = (unsigned int)v20->m_Items[(int)CardIndex + 1];
    if ( !v19 )
      goto LABEL_39;
  }
  else
  {
    v13 = 0LL;
    if ( !CardIndex )
      goto LABEL_39;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v19, v13, 0LL);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        CardIndex,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    byte_4C1C955 = 1;
  }
  CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    CardIndex = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v24 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v24 )
LABEL_39:
    sub_1C3B9C0(CardIndex, v13);
  if ( !v24->max_length )
LABEL_40:
    sub_1C3B9C8(CardIndex, v13);
  if ( !MasterData_object )
    goto LABEL_39;
  CardIndex = (DataManager_o *)UserItemMaster__TryGetEntity(
                                 (UserItemMaster_o *)MasterData_object,
                                 &entity,
                                 *(_QWORD *)(*(_QWORD *)&CardIndex[1].fields._DispLog + 64LL),
                                 v24->m_Items[1],
                                 0LL);
  if ( ((unsigned __int8)CardIndex & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_39;
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

  if ( (byte_4C25998 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C25998 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v7) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v11 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v9);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
        sub_1C3B9C8(Instance, v9);
      v13 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v11 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C3B9C0(Instance, v9);
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

  if ( (byte_4C2598F & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    sub_1C3B764(&StringLiteral_3754/*"CONSUME_TYPE_RP"*/, v4);
    sub_1C3B764(&StringLiteral_3756/*"CONTEXT SPECIFIC ("*/, v5);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C2598F = 1;
  }
  if ( stateType == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3756/*"CONTEXT SPECIFIC ("*/;
    return LocalizationManager__Get((System_String_o *)*v7, 0LL);
  }
  if ( !stateType )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_3754/*"CONSUME_TYPE_RP"*/;
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
    sub_1C3B9C8(this, *(_QWORD *)&cardIndex);
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
    sub_1C3B9C0(0LL, v9);
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

  if ( (byte_4C2598C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C2598C = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
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
      UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
      this->fields.charaGraphTexture = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.charaGraphTexture, 0LL, v13, v14, v15, v16, v17, v18);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C3B9C0(baseSelectInfoObject, v9);
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
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v26; // w22
  Il2CppClass **v27; // x8
  CombineCommandCardComponent_o *v28; // x20
  PartyOrganizationUtility_o *p_userCommandCodeMaster; // x19
  Il2CppObject *MasterData_object; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4C2598B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C2598B = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCardEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectedCommandCard = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCodeEntity,
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
        sub_1C3B9C8(Instance, v23);
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
    sub_1C3B9C0(Instance, v23);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (PartyOrganizationUtility_o *)&this->fields.userCommandCodeMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C3B708(p_userCommandCodeMaster, (int64_t)MasterData_object, v31, v32, v33, v34, v35, v36);
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
    sub_1C3B9C0(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *detailLabel; // x0

  if ( (byte_4C2598A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C2598A = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_1C3B9C0(detailLabel, method);
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
    sub_1C3B9C0(cardSwitchButton, method);
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

  if ( (byte_4C2599B & 1) == 0 )
  {
    sub_1C3B764(&Method_CommandCardExceedControl_OnClickCombine__, method);
    byte_4C2599B = 1;
  }
  v3 = Method_CommandCardExceedControl_OnClickCombine__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_CommandCardExceedControl_OnClickCombine__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
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
    sub_1C3B9C8(UserCommandCodeId, v15);
  v17 = ExceedItemIds_k__BackingField->m_Items[1];
  v18 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v15);
  if ( !commandCardExceedConfirmDialog )
LABEL_9:
    sub_1C3B9C0(UserCommandCodeId, v15);
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

  if ( (byte_4C2599E & 1) == 0 )
  {
    sub_1C3B764(&Method_CommandCardExceedControl_OnClickSwitchButton__, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C2599E = 1;
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
    sub_1C3B9C0(baseUserServantEntity, v4);
  }
  v9 = 1;
LABEL_22:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v9, 0LL);
  v14 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C3B77C(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C3B748(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
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
    sub_1C3B9C0(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitImageMaster_o *v13; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v16; // w21
  struct UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_39330448; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C25993 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C25993 = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseSelectInfoObject,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v13 = (ServantLimitImageMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v12;
    *(_QWORD *)&v25.fields.fakeValue = v11;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                         v25,
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
      TexturePrefab_39330448 = CharaGraphManager__CreateTexturePrefab_39330448(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v16,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_39330448;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.charaGraphTexture,
        (int64_t)TexturePrefab_39330448,
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
LABEL_16:
      sub_1C3B9C0(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_42314416(
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 transformTotal; // x1
  int64_t useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_String_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_String_array *v34; // x20
  unsigned __int64 v35; // x21
  __int64 v36; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v38; // w22
  __int64 v39; // x23
  __int64 v40; // x24
  int32_t v41; // w23
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Action_o *v48; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C25994 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, onAssetLoadEnd);
    sub_1C3B764(&AssetManager_TypeInfo, v5);
    sub_1C3B764(&Method_CommandCardExceedControl_SetCommandCards__, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1C3B764(&string___TypeInfo, v9);
    byte_4C25994 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_39222080(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.onAssetLoadEnd,
      (int64_t)onAssetLoadEnd,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
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
    v27 = (struct System_String_array *)sub_1C3B80C(string___TypeInfo, transformTotal);
    this->fields.assetList = v27;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.assetList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    v34 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v35 = 0LL;
      v36 = 32LL;
      while ( 1 )
      {
        useItemTitleNormal = (int64_t)this->fields.baseUserServantEntity;
        if ( !useItemTitleNormal )
          break;
        useItemTitleNormal = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)useItemTitleNormal,
                               v35,
                               0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v38 = useItemTitleNormal;
        v40 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v39 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v50.fields.currentCryptoKey = v40;
        *(_QWORD *)&v50.fields.fakeValue = v39;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v50, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        useItemTitleNormal = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderName(v38, v41, 0LL);
        if ( !v34 )
          break;
        if ( v35 >= v34->max_length )
          sub_1C3B9C8(useItemTitleNormal, transformTotal);
        *(Il2CppClass **)((char *)&v34->obj.klass + v36) = (Il2CppClass *)useItemTitleNormal;
        sub_1C3B708((PartyOrganizationUtility_o *)((char *)v34 + v36), useItemTitleNormal, v42, v43, v44, v45, v46, v47);
        v34 = this->fields.assetList;
        ++v35;
        v36 += 8LL;
        if ( (__int64)v35 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1C3B9C0(useItemTitleNormal, transformTotal);
    }
LABEL_30:
    v48 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_39219736(v34, v48, 1, 0LL);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, v20);
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
  sub_1C3B708(
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
    sub_1C3B9C0(combineButton, *(_QWORD *)&stateType);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct CombineCommandCardComponent_array *v18; // x8
  int64_t v19; // x1
  const MethodInfo *v20; // x2
  ItemEntity_array *EntityList; // x22
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v24; // w20
  CommandCardRankParamEntity_o *RankParamEntity; // x25
  BalanceConfig_c *v26; // x8
  int32_t CommandCardParamUpMax; // w26
  __int64 v28; // x1
  int64_t v29; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int max_length; // w8
  struct System_Int32_array *v38; // x10
  __int64 v39; // x9
  __int64 v40; // x11
  ItemEntity_o *v41; // x13
  int32_t useItemNum; // w22
  Il2CppObject *MasterData_object; // x24
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  bool v45; // w24
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  il2cpp_array_size_t v47; // w28
  il2cpp_array_size_t v48; // w9
  struct System_Int32_array *v49; // x8
  struct System_Int32_array *v50; // x8
  struct LimitCntUpItemComponent_array *v51; // x8
  LimitCntUpItemComponent_o *v52; // x25
  struct System_Int32_array *v53; // x8
  struct System_Int32_array *v54; // x8
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x4
  bool v57; // w2
  CommandCardRankParamEntity_o *v58; // [xsp+0h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = cardIndex;
  v4 = this;
  if ( (byte_4C2599D & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&cardIndex);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1C3B764(&int___TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    this = (CommandCardExceedControl_o *)sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C2599D = 1;
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
      v18 = v4->fields.commandCardComponents;
      if ( !v18 )
        goto LABEL_83;
      if ( v18->max_length > v3 )
      {
        v19 = (int64_t)v18->m_Items[v3];
        v4->fields.selectedCommandCard = (struct CombineCommandCardComponent_o *)v19;
        sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.selectedCommandCard, v19, v12, v13, v14, v15, v16, v17);
        CommandCardExceedControl__SetSelectedFrameActive(v4, v3, v20);
        this = (CommandCardExceedControl_o *)v4->fields.targetSelectInfoBase;
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CommandCardExceedControl_o *)v4->fields.exceedItemBase;
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_83;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_83;
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_83;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = v4->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v24 = 0;
          if ( !this )
            goto LABEL_83;
          goto LABEL_19;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_83;
        if ( commandCardParam->max_length > v3 )
        {
          v24 = commandCardParam->m_Items[v3 + 1];
          if ( !this )
            goto LABEL_83;
LABEL_19:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)this,
                              v24,
                              0LL);
          v26 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v26 = BalanceConfig_TypeInfo;
          }
          CommandCardParamUpMax = v26->static_fields->CommandCardParamUpMax;
          if ( EntityList )
          {
            v28 = *(_QWORD *)&EntityList->max_length;
            if ( v28 )
            {
              v29 = sub_1C3B80C(int___TypeInfo, v28);
              p_ExceedItemIds_k__BackingField = &v4->fields._ExceedItemIds_k__BackingField;
              v4->fields._ExceedItemIds_k__BackingField = (struct System_Int32_array *)v29;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&v4->fields._ExceedItemIds_k__BackingField,
                v29,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v38 = *p_ExceedItemIds_k__BackingField;
                v39 = 0LL;
                v40 = (__int64)&(*p_ExceedItemIds_k__BackingField)->m_Items[1];
                while ( (unsigned int)v39 < max_length )
                {
                  v41 = EntityList->m_Items[v39];
                  if ( !v41 || !v38 )
                    goto LABEL_83;
                  if ( (unsigned int)v39 >= v38->max_length )
                    goto LABEL_84;
                  *(_DWORD *)(v40 + 4 * v39++) = v41->fields.id;
                  if ( (int)v39 >= max_length )
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
          this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C1C955 )
            {
              sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
              byte_4C1C955 = 1;
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
              v58 = RankParamEntity;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_83;
                v45 = entity->fields.num >= useItemNum;
              }
              else
              {
                v45 = 0;
              }
              exceedItemComponents = v4->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v47 = 0;
                while ( 1 )
                {
                  v48 = exceedItemComponents->max_length;
                  if ( (int)v47 >= (int)v48 )
                    break;
                  if ( v47 >= v48 )
                    goto LABEL_84;
                  this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v47];
                  if ( !this )
                    goto LABEL_83;
                  this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( v24 < CommandCardParamUpMax )
                  {
                    v49 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v49 )
                      goto LABEL_83;
                    *(_QWORD *)&cardIndex = (int)v47 < (signed int)v49->max_length;
                  }
                  else
                  {
                    *(_QWORD *)&cardIndex = 0LL;
                  }
                  if ( !this )
                    goto LABEL_83;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0LL);
                  v50 = v4->fields._ExceedItemIds_k__BackingField;
                  if ( !v50 )
                    goto LABEL_83;
                  if ( v24 < CommandCardParamUpMax && (signed int)v47 < (signed int)v50->max_length )
                  {
                    v51 = v4->fields.exceedItemComponents;
                    if ( !v51 )
                      goto LABEL_83;
                    if ( v47 >= v51->max_length )
                      goto LABEL_84;
                    v52 = v51->m_Items[v47];
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    if ( !byte_4C1C955 )
                    {
                      sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
                      byte_4C1C955 = 1;
                    }
                    this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      this = (CommandCardExceedControl_o *)NetworkManager_TypeInfo;
                    }
                    v53 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v53 )
                      goto LABEL_83;
                    if ( v47 >= v53->max_length )
                      goto LABEL_84;
                    if ( !v52 )
                      goto LABEL_83;
                    LimitCntUpItemComponent__setLimitUpItemInfo(
                      v52,
                      *(_QWORD *)&this->fields.baseServantTouchPress->fields.isLongPressFast,
                      v53->m_Items[v47 + 1],
                      useItemNum,
                      0LL);
                    v54 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v54 )
                      goto LABEL_83;
                    if ( v47 >= v54->max_length )
                      goto LABEL_84;
                    CombineMenuControl__AddCombineItemInfo(
                      (CombineMenuControl_o *)v4,
                      v54->m_Items[v47 + 1],
                      useItemNum,
                      0LL);
                  }
                  exceedItemComponents = v4->fields.exceedItemComponents;
                  ++v47;
                  if ( !exceedItemComponents )
                    goto LABEL_83;
                }
                CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
                CommandCardExceedControl__SetInfoMessageLabels(v4, 2, v45, v24 >= CommandCardParamUpMax, v55);
                v57 = 0;
                if ( v24 >= CommandCardParamUpMax || !v45 || v4->fields.baseUserServantEntity == 0LL )
                  goto LABEL_81;
                this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0LL);
                if ( this && v58 )
                {
                  v57 = SLODWORD(this->fields.menuListCtr) >= v58->fields.useQp;
LABEL_81:
                  CommandCardExceedControl__SetCombineButtonState(v4, 2, v57, v24 >= CommandCardParamUpMax, v56);
                  return;
                }
              }
            }
          }
LABEL_83:
          sub_1C3B9C0(this, *(_QWORD *)&cardIndex);
        }
      }
LABEL_84:
      sub_1C3B9C8(this, *(_QWORD *)&cardIndex);
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
  int64_t baseUserServantEntity; // x0
  int32_t v9; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w21
  int64_t v13; // x22
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  BattleCommandData_o *v34; // x25
  const MethodInfo *v35; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v37; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v40; // w3
  float v41; // s3
  float v42; // s0
  float v43; // s1
  float v44; // s2
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_4C25995 & 1) == 0 )
  {
    sub_1C3B764(&BattleCommandData_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&ImageLimitCount_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C25995 = 1;
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
  v9 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v9,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v9,
                                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  baseUserServantEntity = (int64_t)this->fields.cardBaseGrid;
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
      baseUserServantEntity = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v27 )
        goto LABEL_47;
      v27->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v27->fields.target,
        baseUserServantEntity,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (BattleCommandData_o *)sub_1C3B9B0(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_44886496(v34, v26, v9, ServantImageLimitSealAfter, 0, -1, 0LL);
      if ( !v34 )
        goto LABEL_47;
      v34->fields.markindex = v22;
      v34->fields.servantCardIdsIndex = v22;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v22, v35);
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v37);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0LL )
      {
        if ( v22 >= commandCardParam->max_length )
LABEL_48:
          sub_1C3B9C8(baseUserServantEntity, method);
        v40 = commandCardParam->m_Items[v22 + 1];
      }
      else
      {
        v40 = 0;
      }
      v34->fields.commandCodeId = baseUserServantEntity;
      v34->fields.commandCardParam = v40;
      v34->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v27, v34, UserCommandCodeId, v40, 1, 1, 0LL);
      v41 = 1.0;
      if ( this->fields.displayTransformIndex <= 0 )
        v42 = 1.0;
      else
        v42 = 0.5;
      v43 = v42;
      v44 = v42;
      CombineCommandCardComponent__SetColor(v27, *(UnityEngine_Color_o *)(&v41 - 3), 0LL);
      CombineCommandCardComponent__SetLayout(v27, this->fields.positionOffsetY, this->fields.scaleOffset, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v22;
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
    sub_1C3B9C0(baseUserServantEntity, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0LL);
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onAssetLoadEnd, 0LL, v45, v46, v47, v48, v49, v50);
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
  if ( (byte_4C25989 & 1) == 0 )
  {
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, method);
    sub_1C3B764(&Method_CombineMenuControl_OnLongPushListView__, v3);
    sub_1C3B764(&Method_CommandCardExceedControl_OnClickCombine__, v4);
    sub_1C3B764(&EventDelegate_TypeInfo, v5);
    this = (CommandCardExceedControl_o *)sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    byte_4C25989 = 1;
  }
  combineButton = v2->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)v2, (intptr_t)Method_CommandCardExceedControl_OnClickCombine__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_48207248(onClick, v9, 0LL);
  baseServantTouchPress = v2->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v11 = baseServantTouchPress->fields.onClick;
  v12 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v12, (Il2CppObject *)v2, (intptr_t)v2->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_48207248(v11, v12, 0LL);
  v13 = v2->fields.baseServantTouchPress;
  if ( !v13
    || (onLongPress = v13->fields.onLongPress,
        v15 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v15,
          (Il2CppObject *)v2,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0LL),
        EventDelegate__Set_48207248(onLongPress, v15, 0LL),
        (this = (CommandCardExceedControl_o *)v2->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_11:
    sub_1C3B9C0(this, method);
  }
  v16 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.positionOffsetY;
  v17 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)v2,
    (intptr_t)v2->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_48207248(v16, v17, 0LL);
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

  if ( (byte_4C2598D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, *(_QWORD *)&stateType);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C2598D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_32:
    sub_1C3B9C0(SelfUserGame, v13);
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
  SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = DataManager__GetMasterData_object_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v31 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v29);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
      sub_1C3B9C8(SelfUserGame, v13);
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
    sub_1C3B9C0(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C3B9C8(this, *(_QWORD *)&cardIndex);
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
    sub_1C3B9C0(useItemTitleNormal, *(_QWORD *)&stateType);
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

  if ( (byte_4C25991 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    byte_4C25991 = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v28, 0LL);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_1C3B9C0(v11, v12);
    v14 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v14;
    if ( v11 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v27, 0LL) )
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
  sub_1C3B708(
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
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v20, v21, v22, v23, v24, v25);
    CommandCardExceedControl__InitExceedItem(this, v26);
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

  if ( (byte_4C25992 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, userServantEntity);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C25992 = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v11);
      byte_4C1C955 = 1;
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
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v21, 0LL);
    if ( !MasterData_object )
      goto LABEL_22;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      userIdNumber,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    v18 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v17);
      byte_4C1C955 = 1;
    }
    v19 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v19 = NetworkManager_TypeInfo;
    }
    v20 = v19->static_fields->userIdNumber;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                 userServantEntity->fields.svtId,
                                 0LL);
    if ( !v18 )
LABEL_22:
      sub_1C3B9C0(Instance, v10);
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

  if ( (byte_4C2599A & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C2599A = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v5 )
    sub_1C3B9C0(0LL, v4);
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._ExceedItemIds_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t displayTransformIndex; // w21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_Object_o *selectedCommandCard; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  BattleCommandComponent_o *v12; // x0

  if ( (byte_4C2599C & 1) == 0 )
  {
    sub_1C3B764(&Method_CommandCardExceedControl_touchCommandCard__, *(_QWORD *)&cardIndex);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C2599C = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    v7 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C3B77C(Method_CommandCardExceedControl_touchCommandCard__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
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
        sub_1C3B9C0(0LL, v10);
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