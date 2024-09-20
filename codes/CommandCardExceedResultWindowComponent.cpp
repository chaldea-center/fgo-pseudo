void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E930 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E930 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall CommandCardExceedResultWindowComponent__GetCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5E92F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E92F = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = klass;
  *(_QWORD *)&v9.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
}


int64_t __fastcall CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  bool v9; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v11; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E92E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E92E = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  result = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_13;
  v9 = UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         result,
         servantId,
         0LL);
  result = 0LL;
  if ( !v9 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_13:
    sub_1B8880C(result, v7);
  if ( userCommandCodeIds->max_length <= cardIndex )
    sub_1B88814(0LL, v7);
  v11 = userCommandCodeIds->m_Items[cardIndex];
  return v11 & ~(v11 >> 63);
}


void __fastcall CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
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
  int32_t CommandCardLimitCount; // w25
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w25
  Il2CppObject *v22; // x26
  Il2CppObject *MasterData_object; // x27
  int64_t UserId; // x0
  __int64 v25; // x20
  __int64 v26; // x29
  int64_t v27; // x28
  CommandCardExceedResultWindowComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v34; // w26
  int32_t v35; // w20
  BattleCommandData_o *v36; // x28
  BattleCommandData_o *v37; // x27
  const MethodInfo *v38; // x2
  int32_t v39; // w21
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  BalanceConfig_c *v42; // x0
  char v43; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  float v45; // s0
  System_Action_o *v46; // x20
  System_String_o *v47; // [xsp+8h] [xbp-78h]
  int32_t v48; // [xsp+14h] [xbp-6Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4A5E92C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E92C = 1;
  }
  v13 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B885C8(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_53;
    v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v18;
    *(_QWORD *)&v50.fields.fakeValue = v17;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50, 0LL);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_53;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_53;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v47 = displayBattleName;
  v22 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v48 = exceedCount;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v27 = UserId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v25;
  *(_QWORD *)&v51.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
  if ( !MasterData_object )
    goto LABEL_53;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    v27,
    (int)Instance,
    0LL);
  v28 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                      userServantEntity->fields.svtId,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v28, (int)v28, cardIndex, v29);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)ItemMaster__GetEntityByType((ItemMaster_o *)Instance, 25, 0LL);
  if ( !entity )
    goto LABEL_53;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_53;
  if ( commandCardParam->max_length <= cardIndex )
    goto LABEL_54;
  if ( !Instance )
    goto LABEL_53;
  if ( !v22 )
    goto LABEL_53;
  klass = v22[9].klass;
  if ( !klass )
    goto LABEL_53;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_54:
    sub_1B88814(Instance, v16);
  saveNameList = (int)Instance->fields.saveNameList;
  v34 = commandCardParam->m_Items[cardIndex + 1];
  v35 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v36 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_43210772(v36, v35, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  v37 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_43210772(v37, v35, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  if ( !v36 )
    goto LABEL_53;
  v36->fields.userCommandCodeId = UserCommandCodeId;
  v39 = v34 - saveNameList * v48;
  v36->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v38);
  v36->fields.commandCardParam = v39;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v36,
    UserCommandCodeId,
    v39,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v39, 3, 1, 0LL);
  if ( !v37 )
    goto LABEL_53;
  v37->fields.userCommandCodeId = UserCommandCodeId;
  v37->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v40);
  v37->fields.commandCardParam = v34;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v37,
    UserCommandCodeId,
    v34,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v34, 3, 1, 0LL);
  v42 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v42 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v39, v34, v42->static_fields->CommandCardParamUpMax, v41);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v47, 0LL);
  if ( !this->fields.nameLabel
    || (v43 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.nameLabel,
                                       0LL)) == 0LL) )
  {
LABEL_53:
    sub_1B8880C(Instance, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v43 ^ 1) & 1, 0LL);
  if ( (v43 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)Instance, v47, 0LL);
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0LL, 0LL) )
  {
    v45 = -12.0;
    if ( (v43 & 1) != 0 )
      v45 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v45, 0LL);
  }
  v46 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
}


void __fastcall CommandCardExceedResultWindowComponent__SetLabels(
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

  if ( (byte_4A5E92D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3698/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_1B885B0(&StringLiteral_3699/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_4A5E92D = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3699/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v13 = System_String__Format_61721404(v10, NumberFormat, v12, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v13, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v13 = System_String__Format_61721404(v16, v17, v18, 0LL),
        !afterStatusLabel) )
  {
    sub_1B8880C(v13, v14);
  }
  UILabel__set_text(afterStatusLabel, v13, 0LL);
}