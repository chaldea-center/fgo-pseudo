void CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3B8C5 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3B8C5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t CommandCardExceedResultWindowComponent__GetCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4C3B8C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B8C4 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_3398D94 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = klass;
  *(_QWORD *)&v8.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v8, 0);
}


int64_t CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  int64_t result; // x0
  Il2CppObject *MasterData_object; // x21
  bool v8; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v10; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B8C3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B8C3 = 1;
  }
  entity = 0;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  result = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_17;
  v8 = UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)(result + 184) + 64LL),
         servantId,
         0);
  result = 0;
  if ( !v8 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0 )
LABEL_17:
    sub_1C32E7C(result);
  if ( LODWORD(userCommandCodeIds->max_length) <= cardIndex )
    sub_1C32E84(0);
  v10 = userCommandCodeIds->m_Items[cardIndex];
  return v10 & ~(v10 >> 63);
}


void CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        CommandCardExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        int32_t useServantId,
        System_String_o *displayBattleName,
        const MethodInfo *method)
{
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  DataManager_o *Instance; // x0
  __int64 v16; // x23
  __int64 v17; // x25
  int32_t CommandCardLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w25
  Il2CppObject *v21; // x26
  Il2CppObject *MasterData_object; // x27
  NetworkManager_c *v23; // x0
  __int64 v24; // x20
  __int64 v25; // x29
  int64_t userIdNumber; // x28
  CommandCardExceedResultWindowComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v33; // w26
  int32_t v34; // w20
  BattleCommandData_o *v35; // x28
  BattleCommandData_o *v36; // x27
  const MethodInfo *v37; // x2
  int32_t v38; // w21
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  BalanceConfig_c *v41; // x0
  char v42; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  float v44; // s0
  System_Action_o *v45; // x20
  System_String_o *v46; // [xsp+8h] [xbp-78h]
  int32_t v47; // [xsp+14h] [xbp-6Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4C3B8C1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B8C1 = 1;
  }
  v13 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C32C38(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_57;
    v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v17;
    *(_QWORD *)&v49.fields.fakeValue = v16;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v49, 0);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_57;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_57;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_57;
  v47 = exceedCount;
  v46 = displayBattleName;
  v21 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v23 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v23 = NetworkManager_TypeInfo;
  }
  v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  userIdNumber = v23->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v24;
  *(_QWORD *)&v50.fields.fakeValue = v25;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v50, 0);
  if ( !MasterData_object )
    goto LABEL_57;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    userIdNumber,
    (int)Instance,
    0);
  v27 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                      userServantEntity->fields.svtId,
                                                      0);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v27, (int)v27, cardIndex, v28);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)ItemMaster__GetEntityByType((ItemMaster_o *)Instance, 25, 0);
  if ( !entity )
    goto LABEL_57;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_57;
  if ( LODWORD(commandCardParam->max_length) <= cardIndex )
    goto LABEL_58;
  if ( !Instance )
    goto LABEL_57;
  if ( !v21 )
    goto LABEL_57;
  klass = v21[9].klass;
  if ( !klass )
    goto LABEL_57;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_58:
    sub_1C32E84(Instance);
  saveNameList = (int)Instance->fields.saveNameList;
  v33 = commandCardParam->m_Items[cardIndex];
  v34 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v35 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46474964(v35, v34, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0);
  v36 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46474964(v36, v34, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0);
  if ( !v35 )
    goto LABEL_57;
  v35->fields.userCommandCodeId = UserCommandCodeId;
  v38 = v33 - saveNameList * v47;
  v35->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v37);
  v35->fields.commandCardParam = v38;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_57;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v35,
    UserCommandCodeId,
    v38,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_57;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v38, 3, 1, 0);
  if ( !v36 )
    goto LABEL_57;
  v36->fields.userCommandCodeId = UserCommandCodeId;
  v36->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v39);
  v36->fields.commandCardParam = v33;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_57;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v36,
    UserCommandCodeId,
    v33,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_57;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v33, 3, 1, 0);
  v41 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v38, v33, v41->static_fields->CommandCardParamUpMax, v40);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v46, 0);
  if ( !this->fields.nameLabel
    || (v42 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.nameLabel,
                                       0)) == 0) )
  {
LABEL_57:
    sub_1C32E7C(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v42 ^ 1) & 1, 0);
  if ( (v42 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)Instance, v46, 0);
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0, 0) )
  {
    v44 = -12.0;
    if ( (v42 & 1) != 0 )
      v44 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v44, 0);
  }
  v45 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0, 0);
}


void CommandCardExceedResultWindowComponent__SetLabels(
        CommandCardExceedResultWindowComponent_o *this,
        int32_t previousParam,
        int32_t afterParam,
        int32_t maxParam,
        const MethodInfo *method)
{
  UILabel_o *previousStatusLabel; // x23
  System_String_o *v10; // x24
  Il2CppObject *NumberFormat; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  UILabel_o *afterStatusLabel; // x21
  System_String_o *v15; // x22
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0

  if ( (byte_4C3B8C2 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3623/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_1C32C20(&StringLiteral_3624/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_4C3B8C2 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3624/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0);
  v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0);
  v13 = System_String__Format_63559836(v10, NumberFormat, v12, 0);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v13, 0),
        afterStatusLabel = this->fields.afterStatusLabel,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3623/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0),
        v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0),
        v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0),
        v13 = System_String__Format_63559836(v15, v16, v17, 0),
        !afterStatusLabel) )
  {
    sub_1C32E7C(v13);
  }
  UILabel__set_text(afterStatusLabel, v13, 0);
}