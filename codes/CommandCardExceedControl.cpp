void __fastcall CommandCardExceedControl___ctor(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19A7C & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19A7C = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
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
  __int64 v7; // x2
  __int64 *v8; // x8

  if ( (byte_4B19A6C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17855/*"buttontxt_synthesis"*/, *(_QWORD *)&stateType, isExceedMax);
    sub_1BCA7E0(&StringLiteral_17852/*"buttontxt_notsynthesis"*/, v6, v7);
    byte_4B19A6C = 1;
  }
  if ( stateType != 2 || !isExceedMax )
    v8 = &StringLiteral_17855/*"buttontxt_synthesis"*/;
  else
    v8 = &StringLiteral_17852/*"buttontxt_notsynthesis"*/;
  return (System_String_o *)*v8;
}


// local variable allocation has failed, the output may be wrong!
BattleCommandData_array *__fastcall CommandCardExceedControl__GetCommandCardDataEachServantId(
        CommandCardExceedControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x1
  BattleCommandData_array *v19; // x21
  __int64 v20; // x27
  unsigned __int64 v21; // x22
  __int64 baseUserServantEntity; // x0
  int32_t v23; // w23
  __int64 v24; // x1
  int32_t CommandCardLimitCount; // w24
  int32_t LimitCountByImageLimitCostumeIn; // w24
  int32_t ServantImageLimitSealAfter; // w25
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x8
  int32_t v31; // w9
  BattleCommandData_o *v32; // x24
  const MethodInfo *v33; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v35; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v44; // x0
  __int64 v45; // [xsp+8h] [xbp-78h]
  int32_t type; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B19A7B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandData___TypeInfo, *(_QWORD *)&cardIndex, method);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B19A7B = 1;
  }
  v17 = sub_1BCA888(BattleCommandData___TypeInfo, (unsigned int)this->fields.transformTotal);
  v19 = (BattleCommandData_array *)v17;
  if ( this->fields.transformTotal >= 1 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v45 = v17 + 32;
    while ( 1 )
    {
      baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                                (UserServantEntity_o *)baseUserServantEntity,
                                v21,
                                0LL);
      if ( !this->fields.baseUserServantEntity )
        break;
      v23 = baseUserServantEntity;
      CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v24);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !baseUserServantEntity )
        break;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)baseUserServantEntity,
                                     v23,
                                     LimitCountByImageLimitCostumeIn,
                                     0LL);
      baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseUserServantEntity,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !baseUserServantEntity )
        break;
      baseUserServantEntity = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                         v23,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !baseUserServantEntity )
        break;
      v30 = *(_QWORD *)(baseUserServantEntity + 144);
      if ( v30 )
      {
        v31 = *(_DWORD *)(v30 + 24);
        if ( v31 > cardIndex )
        {
          if ( v31 <= (unsigned int)cardIndex )
            goto LABEL_29;
          type = *(_DWORD *)(v30 + 4LL * cardIndex + 32);
          v32 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v18, v28, v29);
          BattleCommandData___ctor_44072696(v32, type, v23, ServantImageLimitSealAfter, 0, -1, 0LL);
          if ( !v32 )
            break;
          v32->fields.markindex = cardIndex;
          v32->fields.servantCardIdsIndex = cardIndex;
          UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, cardIndex, v33);
          v32->fields.userCommandCodeId = UserCommandCodeId;
          baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v35);
          v32->fields.commandCodeId = baseUserServantEntity;
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
          v32->fields.commandCardParam = (int)baseUserServantCommandCardEntity;
          if ( !v19 )
            break;
          baseUserServantEntity = sub_1BCA91C(v32, v19->obj.klass->_1.element_class);
          if ( !baseUserServantEntity )
          {
            v44 = sub_1BCAA60(0LL);
            sub_1BCA908(v44, 0LL);
          }
          if ( v21 >= v19->max_length )
LABEL_29:
            sub_1BCAA44(baseUserServantEntity, v18);
          *(_QWORD *)(v45 + 8 * v21) = v32;
          sub_1BCA784((PartyOrganizationUtility_o *)(v45 + v20), (int64_t)v32, v37, v38, v39, v40, v41, v42);
        }
      }
      ++v21;
      v20 += 8LL;
      if ( (__int64)v21 >= this->fields.transformTotal )
        return v19;
    }
    sub_1BCAA3C(baseUserServantEntity, v18);
  }
  return v19;
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
    sub_1BCAA44(this, cardIndex);
  return commandCardParam->m_Items[cardIndex + 1];
}


int32_t __fastcall CommandCardExceedControl__GetCommandCodeId(
        CommandCardExceedControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *userCommandCodeMaster; // x0
  __int64 v8; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B19A72 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__,
      userCommandCodeId,
      method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B19A72 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userCommandCodeMaster;
  if ( !userCommandCodeMaster
    || (userCommandCodeMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                                userCommandCodeMaster,
                                                                                userCommandCodeId,
                                                                                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(userCommandCodeMaster, userCommandCodeId);
  }
  monitor = userCommandCodeMaster[1].monitor;
  v8 = *(_QWORD *)&userCommandCodeMaster[1].fields._MasterKind_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCodeId);
  *(_QWORD *)&v11.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 *v22; // x8

  if ( (byte_4B19A6A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType, isItemEnough);
    sub_1BCA7E0(&StringLiteral_3740/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3741/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3747/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_3746/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/, v20, v21);
    byte_4B19A6A = 1;
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
          v22 = &StringLiteral_3747/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/;
          return LocalizationManager__Get((System_String_o *)*v22, 0LL);
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
        if ( isExceedMax )
          goto LABEL_12;
      }
      if ( isItemEnough )
      {
        if ( isQpEnough )
          v22 = &StringLiteral_3740/*"COMMAND_CARD_EXCEED_CONFIRM_HEADER_MSG"*/;
        else
          v22 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
      }
      else
      {
        v22 = &StringLiteral_3746/*"COMMAND_CARD_EXCEED_WARNING_ITEM_HEADER_MSG"*/;
      }
      return LocalizationManager__Get((System_String_o *)*v22, 0LL);
    case 0:
LABEL_6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
      v22 = &StringLiteral_3741/*"COMMAND_CARD_EXCEED_SELECT_BASE_HEADER_MSG"*/;
      return LocalizationManager__Get((System_String_o *)*v22, 0LL);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall CommandCardExceedControl__GetIsAllParamMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int64_t v17; // x19
  __int64 v18; // x21
  __int64 v19; // x22
  struct System_Int32_array *commandCardParam; // x19
  int max_length; // w8
  __int64 v22; // x20
  int32_t v23; // w23
  int32_t v24; // w9
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B19A75 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B19A75 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = NetworkManager__get_UserId(0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_24;
  v17 = Instance;
  v19 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  if ( !MasterData_object )
    goto LABEL_24;
  Instance = UserServantCommandCardMaster__TryGetEntity(
               (UserServantCommandCardMaster_o *)MasterData_object,
               &entity,
               v17,
               (int)Instance,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_24:
    sub_1BCAA3C(Instance, v13);
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  max_length = commandCardParam->max_length;
  if ( max_length < 1 )
    return 1;
  v22 = 0LL;
  do
  {
    if ( (unsigned int)v22 >= max_length )
      sub_1BCAA44(Instance, v13);
    Instance = (int64_t)BalanceConfig_TypeInfo;
    v23 = commandCardParam->m_Items[v22 + 1];
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    v24 = *(_DWORD *)(*(_QWORD *)(Instance + 184) + 740LL);
    if ( v23 < v24 )
      break;
    max_length = commandCardParam->max_length;
    ++v22;
  }
  while ( (int)v22 < max_length );
  return v23 >= v24;
}


bool __fastcall CommandCardExceedControl__GetIsCombineEnable(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v15; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x20
  int64_t CardIndex; // x0
  __int64 v19; // x1
  int32_t v20; // w20
  BalanceConfig_c *v21; // x0
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  const MethodInfo *v23; // x1
  struct UserServantCommandCardEntity_o *v24; // x8
  CommandCardRankParamMaster_o *v25; // x20
  struct System_Int32_array *v26; // x21
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  int32_t useItemNum; // w21
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x20
  struct System_Int32_array *v31; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19A73 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B19A73 = 1;
  }
  entity = 0LL;
  if ( !this->fields.baseUserServantEntity )
    return 0;
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL) )
    return 0;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    if ( commandCardParam )
    {
      CardIndex = CommandCardExceedControl__get_CardIndex(this, v15);
      if ( (unsigned int)CardIndex >= commandCardParam->max_length )
        goto LABEL_36;
      v20 = commandCardParam->m_Items[(int)CardIndex + 1];
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
        v21 = BalanceConfig_TypeInfo;
      }
      if ( v20 >= v21->static_fields->CommandCardParamUpMax )
        return 0;
    }
  }
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField || !*(_QWORD *)&ExceedItemIds_k__BackingField->max_length )
    return 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_35;
  CardIndex = (int64_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)CardIndex,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  v24 = this->fields.baseUserServantCommandCardEntity;
  v25 = (CommandCardRankParamMaster_o *)CardIndex;
  if ( v24 )
  {
    v26 = v24->fields.commandCardParam;
    CardIndex = CommandCardExceedControl__get_CardIndex(this, v23);
    if ( !v26 )
      goto LABEL_35;
    if ( (unsigned int)CardIndex >= v26->max_length )
      goto LABEL_36;
    v19 = (unsigned int)v26->m_Items[(int)CardIndex + 1];
    if ( !v25 )
      goto LABEL_35;
  }
  else
  {
    v19 = 0LL;
    if ( !CardIndex )
      goto LABEL_35;
  }
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(v25, v19, 0LL);
  if ( RankParamEntity )
    useItemNum = RankParamEntity->fields.useItemNum;
  else
    useItemNum = 0;
  CardIndex = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !CardIndex )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)CardIndex,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  CardIndex = NetworkManager__get_UserId(0LL);
  v31 = this->fields._ExceedItemIds_k__BackingField;
  if ( !v31 )
LABEL_35:
    sub_1BCAA3C(CardIndex, v19);
  if ( !v31->max_length )
LABEL_36:
    sub_1BCAA44(CardIndex, v19);
  if ( !MasterData_object )
    goto LABEL_35;
  CardIndex = UserItemMaster__TryGetEntity(
                (UserItemMaster_o *)MasterData_object,
                &entity,
                CardIndex,
                v31->m_Items[1],
                0LL);
  if ( (CardIndex & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_35;
  return entity->fields.num >= useItemNum;
}


bool __fastcall CommandCardExceedControl__GetIsExceedMax(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *selectedCommandCard; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v13; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v15; // x20
  struct System_Int32_array *commandCardParam; // x21
  int32_t v17; // w19
  __int64 v18; // x1
  BalanceConfig_c *v19; // x0

  if ( (byte_4B19A74 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19A74 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(selectedCommandCard, 0LL, 0LL)
    || (CommandCardExceedControl__get_CardIndex(this, v11) & 0x80000000) != 0 )
  {
    return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v15 = (CommandCardRankParamMaster_o *)Instance;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    Instance = (Il2CppObject *)CommandCardExceedControl__get_CardIndex(this, v13);
    if ( commandCardParam )
    {
      if ( (unsigned int)Instance >= commandCardParam->max_length )
        sub_1BCAA44(Instance, v13);
      v17 = commandCardParam->m_Items[(int)Instance + 1];
      if ( v15 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1BCAA3C(Instance, v13);
  }
  v17 = 0;
  if ( !Instance )
    goto LABEL_17;
LABEL_12:
  CommandCardRankParamMaster__GetRankParamEntity(v15, v17, 0LL);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
    v19 = BalanceConfig_TypeInfo;
  }
  return v17 >= v19->static_fields->CommandCardParamUpMax;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedControl__GetTargetSelectInfoLabelText(
        CommandCardExceedControl_o *this,
        int32_t stateType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 *v10; // x8

  if ( (byte_4B19A6B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stateType, method);
    sub_1BCA7E0(&StringLiteral_3742/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_3744/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B19A6B = 1;
  }
  if ( stateType == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    v10 = &StringLiteral_3744/*"COMMAND_CARD_EXCEED_SELECT_COMMAND_CARD_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v10, 0LL);
  }
  if ( !stateType )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stateType);
    v10 = &StringLiteral_3742/*"COMMAND_CARD_EXCEED_SELECT_BASE_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v10, 0LL);
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
    sub_1BCAA44(this, cardIndex);
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
    sub_1BCAA3C(0LL, v9);
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
  __int64 v11; // x1
  UnityEngine_Object_o *charaGraphTexture; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B19A68 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A68 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  baseSelectInfoObject = this->fields.baseSelectInfoObject;
  if ( !baseSelectInfoObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(baseSelectInfoObject, 1, 0LL);
  charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
  {
    baseSelectInfoObject = (UnityEngine_GameObject_o *)this->fields.charaGraphTexture;
    if ( baseSelectInfoObject )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)baseSelectInfoObject,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      this->fields.charaGraphTexture = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraphTexture, 0LL, v15, v16, v17, v18, v19, v20);
      baseSelectInfoObject = this->fields.cardSwitchButton;
      if ( baseSelectInfoObject )
      {
        UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(baseSelectInfoObject, v9);
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
  __int64 v10; // x2
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  struct CombineCommandCardComponent_array *commandCardComponents; // x21
  int max_length; // w8
  unsigned int v27; // w22
  Il2CppClass **v28; // x8
  CombineCommandCardComponent_o *v29; // x20
  PartyOrganizationUtility_o *p_userCommandCodeMaster; // x19
  Il2CppObject *MasterData_object; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B19A67 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19A67 = 1;
  }
  this->fields.baseUserServantCommandCardEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCardEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectedCommandCard = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCodeEntity,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
        sub_1BCAA44(Instance, v24);
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
    sub_1BCAA3C(Instance, v24);
  }
LABEL_9:
  if ( !this->fields.userCommandCodeMaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    p_userCommandCodeMaster = (PartyOrganizationUtility_o *)&this->fields.userCommandCodeMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    p_userCommandCodeMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_userCommandCodeMaster, (int64_t)MasterData_object, v32, v33, v34, v35, v36, v37);
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
    sub_1BCAA3C(targetSelectInfoBase, method);
  }
  UnityEngine_GameObject__SetActive(targetSelectInfoBase, 0, 0LL);
}


void __fastcall CommandCardExceedControl__InitLabel(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *detailLabel; // x0

  if ( (byte_4B19A66 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19A66 = 1;
  }
  detailLabel = this->fields.detailLabel;
  if ( !detailLabel
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.userQpLabel) == 0LL)
    || (UILabel__set_text(detailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (detailLabel = this->fields.requiredQpLabel) == 0LL) )
  {
    sub_1BCAA3C(detailLabel, method);
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
    sub_1BCAA3C(cardSwitchButton, method);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommandCardExceedConfirmDialog_o *commandCardExceedConfirmDialog; // x20
  UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x21
  const MethodInfo *v8; // x1
  int32_t CardIndex; // w0
  const MethodInfo *v10; // x2
  BattleCommandData_array *CommandCardDataEachServantId; // x22
  const MethodInfo *v12; // x1
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v16; // x1
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  int32_t v18; // w24
  int64_t v19; // x23
  const MethodInfo *v20; // x7

  if ( (byte_4B19A77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardExceedControl_OnClickCombine__, method, v2);
    byte_4B19A77 = 1;
  }
  v4 = Method_CommandCardExceedControl_OnClickCombine__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickCombine__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardExceedControl_OnClickCombine__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  commandCardExceedConfirmDialog = this->fields.commandCardExceedConfirmDialog;
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  CardIndex = CommandCardExceedControl__get_CardIndex(this, v8);
  CommandCardDataEachServantId = CommandCardExceedControl__GetCommandCardDataEachServantId(this, CardIndex, v10);
  v13 = CommandCardExceedControl__get_CardIndex(this, v12);
  UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v13, v14);
  ExceedItemIds_k__BackingField = this->fields._ExceedItemIds_k__BackingField;
  if ( !ExceedItemIds_k__BackingField )
    goto LABEL_9;
  if ( !ExceedItemIds_k__BackingField->max_length )
    sub_1BCAA44(UserCommandCodeId, v16);
  v18 = ExceedItemIds_k__BackingField->m_Items[1];
  v19 = UserCommandCodeId;
  UserCommandCodeId = CommandCardExceedControl__get_CardIndex(this, v16);
  if ( !commandCardExceedConfirmDialog )
LABEL_9:
    sub_1BCAA3C(UserCommandCodeId, v16);
  CommandCardExceedConfirmDialog__Open(
    commandCardExceedConfirmDialog,
    baseUserServantCommandCardEntity,
    CommandCardDataEachServantId,
    v19,
    v18,
    UserCommandCodeId,
    this->fields.onRequestCombine,
    v20);
}


void __fastcall CommandCardExceedControl__OnClickSwitchButton(
        CommandCardExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  bool v11; // w1
  UnityEngine_Object_o *selectedCommandCard; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B19A7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardExceedControl_OnClickSwitchButton__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19A7A = 1;
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
    CommandCardExceedControl__InitExceedItem(this, v6);
    CommandCardExceedControl__SetCombineButtonState(this, 0, 0, 0, v8);
    CommandCardExceedControl__SetInfoMessageLabels(this, 0, 0, 0, v9);
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
          v11 = 0;
          goto LABEL_22;
        }
      }
    }
    goto LABEL_25;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.selectedCommandCard;
    if ( !baseUserServantEntity )
      goto LABEL_25;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0LL);
    CommandCardExceedControl__SetCommandCardDisplay(this, MarkIndex, v14);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.useItemTitleNormal;
  if ( !baseUserServantEntity
    || (v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v15, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(baseUserServantEntity, v6);
  }
  v11 = 1;
LABEL_22:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v11, 0LL);
  v16 = Method_CommandCardExceedControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardExceedControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_CommandCardExceedControl_OnClickSwitchButton__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
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
    sub_1BCAA3C(0LL, method);
  BaseDialog__Init(commandCardExceedConfirmDialog, 0LL);
  CommandCardExceedControl__InitCommandCard(this, v4);
  CommandCardExceedControl__InitExceedItem(this, v5);
  this->fields.selectedCommandCard = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v6, v7, v8, v9, v10, v11);
  CommandCardExceedControl__SetUserServant(this, this->fields.baseUserServantEntity, v12);
  CommandCardExceedControl__SetBaseServantCommandCardList(this, 0LL, v13);
}


void __fastcall CommandCardExceedControl__SetBaseServantCardImage(
        CommandCardExceedControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *baseSelectInfoObject; // x0
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitImageMaster_o *v17; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v19; // x1
  UnityEngine_Object_o *charaGraphTexture; // x23
  int32_t v21; // w21
  struct UICharaGraphTexture_o **p_charaGraphTexture; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B19A6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19A6F = 1;
  }
  if ( userServantEntity )
  {
    baseSelectInfoObject = this->fields.baseSelectInfoObject;
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(baseSelectInfoObject, 0, 0LL);
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
    baseSelectInfoObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseSelectInfoObject )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseSelectInfoObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v17 = (ServantLimitImageMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v30.fields.currentCryptoKey = v16;
    *(_QWORD *)&v30.fields.fakeValue = v15;
    baseSelectInfoObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                         v30,
                                                         0LL);
    if ( !v17 )
      goto LABEL_16;
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   v17,
                                   (int32_t)baseSelectInfoObject,
                                   CardImageLimitCount,
                                   0LL);
    charaGraphTexture = (UnityEngine_Object_o *)this->fields.charaGraphTexture;
    v21 = ServantImageLimitSealAfter;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    p_charaGraphTexture = &this->fields.charaGraphTexture;
    if ( UnityEngine_Object__op_Equality(charaGraphTexture, 0LL, 0LL) )
    {
      TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                                 this->fields.characterGraphicBase,
                                 userServantEntity,
                                 v21,
                                 10,
                                 0LL,
                                 0,
                                 0LL);
      this->fields.charaGraphTexture = TexturePrefab_38621628;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.charaGraphTexture,
        (int64_t)TexturePrefab_38621628,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      return;
    }
    baseSelectInfoObject = (UnityEngine_GameObject_o *)*p_charaGraphTexture;
    if ( !*p_charaGraphTexture )
LABEL_16:
      sub_1BCAA3C(baseSelectInfoObject, userServantEntity);
    UICharaGraphTexture__SetCharacter_41557848(
      (UICharaGraphTexture_o *)baseSelectInfoObject,
      userServantEntity,
      v21,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_array *assetList; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 transformTotal; // x1
  int64_t useItemTitleNormal; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_String_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  struct System_String_array *v41; // x20
  unsigned __int64 v42; // x21
  __int64 v43; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v45; // w22
  __int64 v46; // x23
  __int64 v47; // x24
  __int64 v48; // x1
  int32_t v49; // w23
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Action_o *v56; // x21
  __int64 v57; // x1
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4B19A70 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, onAssetLoadEnd, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CommandCardExceedControl_SetCommandCards__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&string___TypeInfo, v13, v14);
    byte_4B19A70 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, onAssetLoadEnd);
    AssetManager__releaseAssetStorage_38514680(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v16, v17, v18, v19, v20, v21);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onAssetLoadEnd,
      (int64_t)onAssetLoadEnd,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
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
    v32 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, transformTotal);
    this->fields.assetList = v32;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    v41 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v42 = 0LL;
      v43 = 32LL;
      while ( 1 )
      {
        useItemTitleNormal = (int64_t)this->fields.baseUserServantEntity;
        if ( !useItemTitleNormal )
          break;
        useItemTitleNormal = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)useItemTitleNormal,
                               v42,
                               0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v45 = useItemTitleNormal;
        v47 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v46 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, transformTotal);
        *(_QWORD *)&v59.fields.currentCryptoKey = v47;
        *(_QWORD *)&v59.fields.fakeValue = v46;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v48);
        useItemTitleNormal = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderName(v45, v49, 0LL);
        if ( !v41 )
          break;
        if ( v42 >= v41->max_length )
          sub_1BCAA44(useItemTitleNormal, transformTotal);
        *(Il2CppClass **)((char *)&v41->obj.klass + v43) = (Il2CppClass *)useItemTitleNormal;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)v41 + v43), useItemTitleNormal, v50, v51, v52, v53, v54, v55);
        v41 = this->fields.assetList;
        ++v42;
        v43 += 8LL;
        if ( (__int64)v42 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1BCAA3C(useItemTitleNormal, transformTotal);
    }
LABEL_30:
    v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, transformTotal, v39, v40);
    System_Action___ctor(v56, (Il2CppObject *)this, Method_CommandCardExceedControl_SetCommandCards__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v57);
    AssetManager__loadAssetStorage_38512336(v41, v56, 1, 0LL);
  }
  else
  {
    CommandCardExceedControl__InitCommandCard(this, v25);
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
  sub_1BCA784(
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
    sub_1BCAA3C(combineButton, *(_QWORD *)&stateType);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct CombineCommandCardComponent_array *v24; // x8
  int64_t v25; // x1
  const MethodInfo *v26; // x2
  ItemEntity_array *EntityList; // x22
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v30; // w20
  __int64 v31; // x1
  CommandCardRankParamEntity_o *RankParamEntity; // x21
  BalanceConfig_c *v33; // x8
  int32_t CommandCardParamUpMax; // w25
  __int64 v35; // x1
  int64_t v36; // x0
  struct System_Int32_array **p_ExceedItemIds_k__BackingField; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int max_length; // w8
  struct System_Int32_array *v45; // x10
  __int64 v46; // x9
  __int64 v47; // x11
  ItemEntity_o *v48; // x13
  int32_t useItemNum; // w22
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x23
  struct System_Int32_array *ExceedItemIds_k__BackingField; // x8
  bool v53; // w23
  struct LimitCntUpItemComponent_array *exceedItemComponents; // x8
  il2cpp_array_size_t v55; // w27
  il2cpp_array_size_t v56; // w9
  struct System_Int32_array *v57; // x8
  struct System_Int32_array *v58; // x8
  struct LimitCntUpItemComponent_array *v59; // x8
  LimitCntUpItemComponent_o *v60; // x24
  const MethodInfo *v61; // x4
  struct System_Int32_array *v62; // x8
  struct System_Int32_array *v63; // x8
  const MethodInfo *v64; // x4
  const MethodInfo *v65; // x4
  bool v66; // w2
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = cardIndex;
  v4 = this;
  if ( (byte_4B19A79 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&cardIndex, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    this = (CommandCardExceedControl_o *)sub_1BCA7E0(
                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                           v15,
                                           v16);
    byte_4B19A79 = 1;
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
      v24 = v4->fields.commandCardComponents;
      if ( !v24 )
        goto LABEL_75;
      if ( v24->max_length > v3 )
      {
        v25 = (int64_t)v24->m_Items[v3];
        v4->fields.selectedCommandCard = (struct CombineCommandCardComponent_o *)v25;
        sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.selectedCommandCard, v25, v18, v19, v20, v21, v22, v23);
        CommandCardExceedControl__SetSelectedFrameActive(v4, v3, v26);
        this = (CommandCardExceedControl_o *)v4->fields.targetSelectInfoBase;
        if ( !this )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CommandCardExceedControl_o *)v4->fields.exceedItemBase;
        if ( !this )
          goto LABEL_75;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_75;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !this )
          goto LABEL_75;
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)this, 25, 0LL);
        this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_75;
        this = (CommandCardExceedControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
        baseUserServantCommandCardEntity = v4->fields.baseUserServantCommandCardEntity;
        if ( !baseUserServantCommandCardEntity )
        {
          v30 = 0;
          if ( !this )
            goto LABEL_75;
          goto LABEL_19;
        }
        commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
        if ( !commandCardParam )
          goto LABEL_75;
        if ( commandCardParam->max_length > v3 )
        {
          v30 = commandCardParam->m_Items[v3 + 1];
          if ( !this )
            goto LABEL_75;
LABEL_19:
          RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(
                              (CommandCardRankParamMaster_o *)this,
                              v30,
                              0LL);
          v33 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
            v33 = BalanceConfig_TypeInfo;
          }
          CommandCardParamUpMax = v33->static_fields->CommandCardParamUpMax;
          if ( EntityList )
          {
            v35 = *(_QWORD *)&EntityList->max_length;
            if ( v35 )
            {
              v36 = sub_1BCA888(int___TypeInfo, v35);
              p_ExceedItemIds_k__BackingField = &v4->fields._ExceedItemIds_k__BackingField;
              v4->fields._ExceedItemIds_k__BackingField = (struct System_Int32_array *)v36;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v4->fields._ExceedItemIds_k__BackingField,
                v36,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              max_length = EntityList->max_length;
              if ( max_length >= 1 )
              {
                v45 = *p_ExceedItemIds_k__BackingField;
                v46 = 0LL;
                v47 = (__int64)&(*p_ExceedItemIds_k__BackingField)->m_Items[1];
                while ( (unsigned int)v46 < max_length )
                {
                  v48 = EntityList->m_Items[v46];
                  if ( !v48 || !v45 )
                    goto LABEL_75;
                  if ( (unsigned int)v46 >= v45->max_length )
                    goto LABEL_76;
                  *(_DWORD *)(v47 + 4 * v46++) = v48->fields.id;
                  if ( (int)v46 >= max_length )
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
          this = (CommandCardExceedControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50);
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
                v53 = entity->fields.num >= useItemNum;
              }
              else
              {
                v53 = 0;
              }
              exceedItemComponents = v4->fields.exceedItemComponents;
              if ( exceedItemComponents )
              {
                v55 = 0;
                while ( 1 )
                {
                  v56 = exceedItemComponents->max_length;
                  if ( (int)v55 >= (int)v56 )
                    break;
                  if ( v55 >= v56 )
                    goto LABEL_76;
                  this = (CommandCardExceedControl_o *)exceedItemComponents->m_Items[v55];
                  if ( !this )
                    goto LABEL_75;
                  this = (CommandCardExceedControl_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( v30 < CommandCardParamUpMax )
                  {
                    v57 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v57 )
                      goto LABEL_75;
                    *(_QWORD *)&cardIndex = (int)v55 < (signed int)v57->max_length;
                  }
                  else
                  {
                    *(_QWORD *)&cardIndex = 0LL;
                  }
                  if ( !this )
                    goto LABEL_75;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, cardIndex, 0LL);
                  v58 = v4->fields._ExceedItemIds_k__BackingField;
                  if ( !v58 )
                    goto LABEL_75;
                  if ( v30 < CommandCardParamUpMax && (signed int)v55 < (signed int)v58->max_length )
                  {
                    v59 = v4->fields.exceedItemComponents;
                    if ( !v59 )
                      goto LABEL_75;
                    if ( v55 >= v59->max_length )
                      goto LABEL_76;
                    v60 = v59->m_Items[v55];
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&cardIndex);
                    this = (CommandCardExceedControl_o *)NetworkManager__get_UserId(0LL);
                    v62 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v62 )
                      goto LABEL_75;
                    if ( v55 >= v62->max_length )
                      goto LABEL_76;
                    if ( !v60 )
                      goto LABEL_75;
                    LimitCntUpItemComponent__setLimitUpItemInfo(
                      v60,
                      (int64_t)this,
                      v62->m_Items[v55 + 1],
                      useItemNum,
                      v61);
                    v63 = v4->fields._ExceedItemIds_k__BackingField;
                    if ( !v63 )
                      goto LABEL_75;
                    if ( v55 >= v63->max_length )
                      goto LABEL_76;
                    CombineMenuControl__AddCombineItemInfo(
                      (CombineMenuControl_o *)v4,
                      v63->m_Items[v55 + 1],
                      useItemNum,
                      0LL);
                  }
                  exceedItemComponents = v4->fields.exceedItemComponents;
                  ++v55;
                  if ( !exceedItemComponents )
                    goto LABEL_75;
                }
                CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
                CommandCardExceedControl__SetInfoMessageLabels(v4, 2, v53, v30 >= CommandCardParamUpMax, v64);
                v66 = 0;
                if ( v30 >= CommandCardParamUpMax || !v53 || v4->fields.baseUserServantEntity == 0LL )
                  goto LABEL_73;
                this = (CommandCardExceedControl_o *)UserGameMaster__getSelfUserGame(0LL);
                if ( this && RankParamEntity )
                {
                  v66 = SLODWORD(this->fields.menuListCtr) >= RankParamEntity->fields.useQp;
LABEL_73:
                  CommandCardExceedControl__SetCombineButtonState(v4, 2, v66, v30 >= CommandCardParamUpMax, v65);
                  return;
                }
              }
            }
          }
LABEL_75:
          sub_1BCAA3C(this, *(_QWORD *)&cardIndex);
        }
      }
LABEL_76:
      sub_1BCAA44(this, *(_QWORD *)&cardIndex);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedControl__SetCommandCards(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t baseUserServantEntity; // x0
  int32_t v15; // w20
  __int64 v16; // x1
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w21
  int64_t v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v23; // s1
  float v24; // s0
  int v25; // s2
  __int64 v26; // x11
  float v27; // s0
  struct CombineCommandCardComponent_array *commandCardComponents; // x8
  unsigned __int64 v29; // x23
  unsigned __int64 max_length; // x9
  __int64 v31; // x10
  unsigned __int64 v32; // x11
  int32_t v33; // w26
  CombineCommandCardComponent_o *v34; // x24
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  BattleCommandData_o *v44; // x25
  const MethodInfo *v45; // x2
  int64_t UserCommandCodeId; // x26
  const MethodInfo *v47; // x2
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v50; // w3
  float v51; // s3
  float v52; // s0
  float v53; // s1
  float v54; // s2
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Action_o *onAssetLoadEnd; // x20

  if ( (byte_4B19A71 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B19A71 = 1;
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
  v15 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                                 v15,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_47;
  baseUserServantEntity = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
                                     v15,
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this->fields.cardBaseGrid )
    goto LABEL_47;
  v20 = baseUserServantEntity;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.cardBaseGrid, 0LL);
  transformTotal = this->fields.transformTotal;
  v23 = -18.0;
  if ( transformTotal <= 1 )
    v23 = -15.5;
  v24 = transformTotal <= 1 ? -258.0 : -270.0;
  v25 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v23 - 1), 0LL);
  baseUserServantEntity = (int64_t)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_47;
  v26 = *(_QWORD *)baseUserServantEntity;
  v27 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v27 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v27;
  baseUserServantEntity = (*(__int64 (**)(void))(v26 + 440))();
  commandCardComponents = this->fields.commandCardComponents;
  if ( !commandCardComponents )
    goto LABEL_47;
  v29 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (__int64)v29 >= (int)max_length )
      break;
    if ( !v20 )
      goto LABEL_47;
    v31 = *(_QWORD *)(v20 + 144);
    if ( !v31 )
      break;
    v32 = *(unsigned int *)(v31 + 24);
    if ( (__int64)v29 >= (int)v32 )
      break;
    if ( v29 >= v32 )
      goto LABEL_48;
    v33 = *(_DWORD *)(v31 + 4 * v29 + 32);
    if ( (unsigned int)(v33 - 1) <= 2 )
    {
      if ( v29 >= max_length )
        goto LABEL_48;
      v34 = commandCardComponents->m_Items[v29];
      baseUserServantEntity = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v34 )
        goto LABEL_47;
      v34->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v34->fields.target,
        baseUserServantEntity,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v44 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v41, v42, v43);
      BattleCommandData___ctor_44072696(v44, v33, v15, ServantImageLimitSealAfter, 0, -1, 0LL);
      if ( !v44 )
        goto LABEL_47;
      v44->fields.markindex = v29;
      v44->fields.servantCardIdsIndex = v29;
      UserCommandCodeId = CommandCardExceedControl__GetUserCommandCodeId(this, v29, v45);
      baseUserServantEntity = CommandCardExceedControl__GetCommandCodeId(this, UserCommandCodeId, v47);
      baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
      if ( baseUserServantCommandCardEntity
        && (commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam) != 0LL )
      {
        if ( v29 >= commandCardParam->max_length )
LABEL_48:
          sub_1BCAA44(baseUserServantEntity, method);
        v50 = commandCardParam->m_Items[v29 + 1];
      }
      else
      {
        v50 = 0;
      }
      v44->fields.commandCodeId = baseUserServantEntity;
      v44->fields.commandCardParam = v50;
      v44->fields.userCommandCodeId = UserCommandCodeId;
      CombineCommandCardComponent__DispCommandCard(v34, v44, UserCommandCodeId, v50, 1, 1, 0LL);
      v51 = 1.0;
      if ( this->fields.displayTransformIndex <= 0 )
        v52 = 1.0;
      else
        v52 = 0.5;
      v53 = v52;
      v54 = v52;
      CombineCommandCardComponent__SetColor(v34, *(UnityEngine_Color_o *)(&v51 - 3), 0LL);
      CombineCommandCardComponent__SetLayout(v34, this->fields.positionOffsetY, this->fields.scaleOffset, 0LL);
      commandCardComponents = this->fields.commandCardComponents;
    }
    ++v29;
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
    sub_1BCAA3C(baseUserServantEntity, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0LL);
  onAssetLoadEnd = this->fields.onAssetLoadEnd;
  if ( onAssetLoadEnd )
  {
    this->fields.onAssetLoadEnd = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onAssetLoadEnd, 0LL, v55, v56, v57, v58, v59, v60);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onAssetLoadEnd->fields.m_target)(
      onAssetLoadEnd->fields.original_method_info,
      *(_QWORD *)&onAssetLoadEnd->fields.extra_arg);
  }
}


void __fastcall CommandCardExceedControl__SetEventDelegate(CommandCardExceedControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  CommandCardExceedControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UICommonButton_o *combineButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct UITouchPress_o *baseServantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *v20; // x20
  EventDelegate_Callback_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  struct UITouchPress_o *v24; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_EventDelegate__o *v29; // x20
  EventDelegate_Callback_o *v30; // x21

  v4 = this;
  if ( (byte_4B19A65 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineMenuControl_OnLongPushListView__, v5, v6);
    sub_1BCA7E0(&Method_CommandCardExceedControl_OnClickCombine__, v7, v8);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v9, v10);
    this = (CommandCardExceedControl_o *)sub_1BCA7E0(
                                           &Method_UnityEngine_GameObject_GetComponent_UICommonButton___,
                                           v11,
                                           v12);
    byte_4B19A65 = 1;
  }
  combineButton = v4->fields.combineButton;
  if ( !combineButton )
    goto LABEL_11;
  onClick = combineButton->fields.onClick;
  v15 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v2, v3);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)v4,
    (intptr_t)Method_CommandCardExceedControl_OnClickCombine__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v16);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_47333340(onClick, v15, 0LL);
  baseServantTouchPress = v4->fields.baseServantTouchPress;
  if ( !baseServantTouchPress )
    goto LABEL_11;
  v20 = baseServantTouchPress->fields.onClick;
  v21 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v17, v18);
  EventDelegate_Callback___ctor(v21, (Il2CppObject *)v4, (intptr_t)v4->klass->vtable._5_OnClickHelp.methodPtr, 0LL);
  this = (CommandCardExceedControl_o *)EventDelegate__Set_47333340(v20, v21, 0LL);
  v24 = v4->fields.baseServantTouchPress;
  if ( !v24
    || (onLongPress = v24->fields.onLongPress,
        v26 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v22, v23),
        EventDelegate_Callback___ctor(
          v26,
          (Il2CppObject *)v4,
          (intptr_t)Method_CombineMenuControl_OnLongPushListView__,
          0LL),
        EventDelegate__Set_47333340(onLongPress, v26, 0LL),
        (this = (CommandCardExceedControl_o *)v4->fields.helpBtn) == 0LL)
    || (this = (CommandCardExceedControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(this, method);
  }
  v29 = *(System_Collections_Generic_List_EventDelegate__o **)&this->fields.positionOffsetY;
  v30 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v27, v28);
  EventDelegate_Callback___ctor(
    v30,
    (Il2CppObject *)v4,
    (intptr_t)v4->klass->vtable._6_GetTutorialOpenType.methodPtr,
    0LL);
  EventDelegate__Set_47333340(v29, v30, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *SelfUserGame; // x0
  MethodInfo *v16; // x1
  int32_t v17; // w21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x5
  int32_t v20; // w24
  UILabel_o *detailLabel; // x25
  UILabel_o *targetSelectInfoLabel; // x22
  CommandCardExceedControl_o *v23; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  UILabel_o *userQpLabel; // x22
  __int64 v27; // x1
  UILabel_o *requiredQpLabel; // x22
  float v29; // s1
  float v30; // s0
  float v31; // s3
  float v32; // s2
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct UserServantCommandCardEntity_o *baseUserServantCommandCardEntity; // x8
  CommandCardRankParamMaster_o *v36; // x24
  struct System_Int32_array *commandCardParam; // x25

  if ( (byte_4B19A69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, *(_QWORD *)&stateType, isItemEnough);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B19A69 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_32:
    sub_1BCAA3C(SelfUserGame, v16);
  v17 = *((_DWORD *)SelfUserGame + 24);
  SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v16);
  if ( ((unsigned int)SelfUserGame & 0x80000000) != 0
    || (SelfUserGame = (void *)CommandCardExceedControl__GetIsExceedMax(this, v18),
        ((unsigned __int8)SelfUserGame & 1) != 0)
    || this->fields.displayTransformIndex )
  {
    v20 = 0;
    goto LABEL_8;
  }
  SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = DataManager__GetMasterData_object_(
                   (DataManager_o *)SelfUserGame,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  baseUserServantCommandCardEntity = this->fields.baseUserServantCommandCardEntity;
  v36 = (CommandCardRankParamMaster_o *)SelfUserGame;
  if ( baseUserServantCommandCardEntity )
  {
    commandCardParam = baseUserServantCommandCardEntity->fields.commandCardParam;
    SelfUserGame = (void *)CommandCardExceedControl__get_CardIndex(this, v34);
    if ( !commandCardParam )
      goto LABEL_32;
    if ( (unsigned int)SelfUserGame >= commandCardParam->max_length )
      sub_1BCAA44(SelfUserGame, v16);
    v16 = (MethodInfo *)(unsigned int)commandCardParam->m_Items[(int)SelfUserGame + 1];
    if ( !v36 )
      goto LABEL_32;
  }
  else
  {
    v16 = 0LL;
    if ( !SelfUserGame )
      goto LABEL_32;
  }
  SelfUserGame = CommandCardRankParamMaster__GetRankParamEntity(v36, (int32_t)v16, 0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v20 = *((_DWORD *)SelfUserGame + 11);
LABEL_8:
  detailLabel = this->fields.detailLabel;
  SelfUserGame = CommandCardExceedControl__GetDetailLabelText(
                   (CommandCardExceedControl_o *)SelfUserGame,
                   stateType,
                   isItemEnough,
                   isExceedMax,
                   v17 >= v20,
                   v19);
  if ( !detailLabel )
    goto LABEL_32;
  UILabel__set_text(detailLabel, (System_String_o *)SelfUserGame, 0LL);
  targetSelectInfoLabel = this->fields.targetSelectInfoLabel;
  SelfUserGame = CommandCardExceedControl__GetTargetSelectInfoLabelText(v23, stateType, v24);
  if ( !targetSelectInfoLabel )
    goto LABEL_32;
  UILabel__set_text(targetSelectInfoLabel, (System_String_o *)SelfUserGame, 0LL);
  userQpLabel = this->fields.userQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  SelfUserGame = LocalizationManager__GetNumberFormat(v17, 0LL);
  if ( !userQpLabel )
    goto LABEL_32;
  UILabel__set_text(userQpLabel, (System_String_o *)SelfUserGame, 0LL);
  requiredQpLabel = this->fields.requiredQpLabel;
  if ( v20 <= 0 )
  {
    v16 = (MethodInfo *)StringLiteral_1/*""*/;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    SelfUserGame = LocalizationManager__GetNumberFormat(v20, 0LL);
    v16 = (MethodInfo *)SelfUserGame;
    if ( !requiredQpLabel )
      goto LABEL_32;
  }
  UILabel__set_text(requiredQpLabel, (System_String_o *)v16, 0LL);
  SelfUserGame = this->fields.requiredQpLabel;
  v29 = 1.0;
  if ( v17 < v20 )
    v29 = 0.0;
  if ( !SelfUserGame )
    goto LABEL_32;
  v30 = 1.0;
  v31 = 1.0;
  v32 = v29;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, *(UnityEngine_Color_o *)(&v29 - 1), 0LL);
  CommandCardExceedControl__SetUseItemTitle(this, stateType, v33);
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
    sub_1BCAA3C(this, *(_QWORD *)&cardIndex);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCardComponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&cardIndex);
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
    sub_1BCAA3C(useItemTitleNormal, *(_QWORD *)&stateType);
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

  if ( (byte_4B19A6D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity, method);
    byte_4B19A6D = 1;
  }
  if ( selectedUserServantEntity )
  {
    if ( !this->fields.baseUserServantEntity )
      goto LABEL_9;
    v10 = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectedUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectedUserServantEntity);
    v28 = v29;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v28, 0LL);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      sub_1BCAA3C(v11, v12);
    v14 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v14;
    if ( v11 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v27, 0LL) )
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
  sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectedCommandCard, 0LL, v20, v21, v22, v23, v24, v25);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t UserId; // x0
  __int64 v18; // x1
  __int64 v19; // x23
  __int64 v20; // x24
  int64_t v21; // x22
  Il2CppObject *v22; // x21
  int64_t v23; // x0
  __int64 v24; // x8
  int64_t v25; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B19A6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, userServantEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B19A6E = 1;
  }
  if ( userServantEntity )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    UserId = NetworkManager__get_UserId(0LL);
    v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v21 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v26.fields.currentCryptoKey = v20;
    *(_QWORD *)&v26.fields.fakeValue = v19;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
    if ( !MasterData_object )
      goto LABEL_14;
    UserServantCommandCardMaster__TryGetEntity(
      (UserServantCommandCardMaster_o *)MasterData_object,
      &this->fields.baseUserServantCommandCardEntity,
      v21,
      (int)Instance,
      0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (v22 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___),
          v23 = NetworkManager__get_UserId(0LL),
          v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey,
          *(_QWORD *)&v27.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue,
          v25 = v23,
          *(_QWORD *)&v27.fields.currentCryptoKey = v24,
          Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL),
          !v22) )
    {
LABEL_14:
      sub_1BCAA3C(Instance, v14);
    }
    UserServantCommandCodeMaster__TryGetEntity(
      (UserServantCommandCodeMaster_o *)v22,
      &this->fields.baseUserServantCommandCodeEntity,
      v25,
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
  __int64 v2; // x2
  UnityEngine_Object_o *selectedCommandCard; // x20
  __int64 v5; // x1
  BattleCommandComponent_o *v6; // x0

  if ( (byte_4B19A76 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A76 = 1;
  }
  selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
    return -1;
  v6 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  return BattleCommandComponent__getMarkIndex(v6, 0LL);
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
  sub_1BCA784(
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
  __int64 v6; // x2
  int32_t displayTransformIndex; // w21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *selectedCommandCard; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  BattleCommandComponent_o *v14; // x0

  if ( (byte_4B19A78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardExceedControl_touchCommandCard__, *(_QWORD *)&cardIndex, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19A78 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    displayTransformIndex = this->fields.displayTransformIndex;
    v8 = Method_CommandCardExceedControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardExceedControl_touchCommandCard__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CommandCardExceedControl_touchCommandCard__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    if ( displayTransformIndex < 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      selectedCommandCard = (UnityEngine_Object_o *)this->fields.selectedCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( !UnityEngine_Object__op_Inequality(selectedCommandCard, 0LL, 0LL) )
        goto LABEL_14;
      v14 = (BattleCommandComponent_o *)this->fields.selectedCommandCard;
      if ( !v14 )
        sub_1BCAA3C(0LL, v12);
      if ( BattleCommandComponent__getMarkIndex(v14, 0LL) != cardIndex )
LABEL_14:
        CommandCardExceedControl__SetCommandCardDisplay(this, cardIndex, v13);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
    }
  }
}