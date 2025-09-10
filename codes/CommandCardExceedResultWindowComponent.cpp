void CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2B1A6 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2B1A6 = 1;
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
  __int64 v5; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C2B1A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B1A5 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(Instance, v5);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = klass;
  *(_QWORD *)&v9.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
}


int64_t CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v9; // x2
  bool v10; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v12; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2B1A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B1A4 = 1;
  }
  entity = 0;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  result = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_17;
  v10 = UserServantCommandCodeMaster__TryGetEntity(
          (UserServantCommandCodeMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)(result + 184) + 64LL),
          servantId,
          0);
  result = 0;
  if ( !v10 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0 )
LABEL_17:
    sub_1C2D6EC(result, v7);
  if ( LODWORD(userCommandCodeIds->max_length) <= cardIndex )
    sub_1C2D6F4(0, v7, v9);
  v12 = userCommandCodeIds->m_Items[cardIndex];
  return v12 & ~(v12 >> 63);
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
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x25
  int32_t CommandCardLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w25
  Il2CppObject *v22; // x26
  Il2CppObject *MasterData_object; // x27
  NetworkManager_c *v24; // x0
  __int64 v25; // x20
  __int64 v26; // x29
  int64_t userIdNumber; // x28
  CommandCardExceedResultWindowComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  int64_t UserCommandCodeId; // x24
  __int64 v31; // x2
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v35; // w26
  int32_t v36; // w20
  BattleCommandData_o *v37; // x28
  BattleCommandData_o *v38; // x27
  const MethodInfo *v39; // x2
  int32_t v40; // w21
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  BalanceConfig_c *v43; // x0
  char v44; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  float v46; // s0
  System_Action_o *v47; // x20
  System_String_o *v48; // [xsp+8h] [xbp-78h]
  int32_t v49; // [xsp+14h] [xbp-6Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C2B1A2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B1A2 = 1;
  }
  v13 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C2D4A8(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C2D474(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_57;
    v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = v18;
    *(_QWORD *)&v51.fields.fakeValue = v17;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_57;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_57;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_57;
  v49 = exceedCount;
  v48 = displayBattleName;
  v22 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  userIdNumber = v24->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v25;
  *(_QWORD *)&v52.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52, 0);
  if ( !MasterData_object )
    goto LABEL_57;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    userIdNumber,
    (int)Instance,
    0);
  v28 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                      userServantEntity->fields.svtId,
                                                      0);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v28, (int)v28, cardIndex, v29);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  if ( !v22 )
    goto LABEL_57;
  klass = v22[9].klass;
  if ( !klass )
    goto LABEL_57;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_58:
    sub_1C2D6F4(Instance, v16, v31);
  saveNameList = (int)Instance->fields.saveNameList;
  v35 = commandCardParam->m_Items[cardIndex];
  v36 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v37 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46333400(v37, v36, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0);
  v38 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46333400(v38, v36, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0);
  if ( !v37 )
    goto LABEL_57;
  v37->fields.userCommandCodeId = UserCommandCodeId;
  v40 = v35 - saveNameList * v49;
  v37->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v39);
  v37->fields.commandCardParam = v40;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_57;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v37,
    UserCommandCodeId,
    v40,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_57;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v40, 3, 1, 0);
  if ( !v38 )
    goto LABEL_57;
  v38->fields.userCommandCodeId = UserCommandCodeId;
  v38->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v41);
  v38->fields.commandCardParam = v35;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_57;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v38,
    UserCommandCodeId,
    v35,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_57;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v35, 3, 1, 0);
  v43 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v40, v35, v43->static_fields->CommandCardParamUpMax, v42);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v48, 0);
  if ( !this->fields.nameLabel
    || (v44 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.nameLabel,
                                       0)) == 0) )
  {
LABEL_57:
    sub_1C2D6EC(Instance, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v44 ^ 1) & 1, 0);
  if ( (v44 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)Instance, v48, 0);
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0, 0) )
  {
    v46 = -12.0;
    if ( (v44 & 1) != 0 )
      v46 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v46, 0);
  }
  v47 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0);
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
  __int64 v14; // x1
  UILabel_o *afterStatusLabel; // x21
  System_String_o *v16; // x22
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0

  if ( (byte_4C2B1A3 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3616/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_1C2D490(&StringLiteral_3617/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_4C2B1A3 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0);
  v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0);
  v13 = System_String__Format_63499156(v10, NumberFormat, v12, 0);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v13, 0),
        afterStatusLabel = this->fields.afterStatusLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3616/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0),
        v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0),
        v13 = System_String__Format_63499156(v16, v17, v18, 0),
        !afterStatusLabel) )
  {
    sub_1C2D6EC(v13, v14);
  }
  UILabel__set_text(afterStatusLabel, v13, 0);
}