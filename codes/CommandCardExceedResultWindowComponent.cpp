void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B00EE & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B00EE = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall CommandCardExceedResultWindowComponent__GetCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x19
  Il2CppObject *lockCountObj; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42B00ED & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00ED = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userCommandCodeId,
                                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
  }
  lockCountObj = Instance->fields.lockCountObj;
  v6 = *(_QWORD *)&Instance->fields.nowLoadCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = lockCountObj;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
}


int64_t __fastcall CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v7; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v9; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v11; // x8
  __int64 v12; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B00EC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00EC = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)result,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  v9 = UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, result, servantId, 0LL);
  result = 0LL;
  if ( !v9 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_14:
    sub_B52A5C(result, v7);
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    v12 = sub_B52A88(0LL);
    sub_B52A28(v12, 0LL);
  }
  v11 = userCommandCodeIds->m_Items[cardIndex];
  return v11 & ~(v11 >> 63);
}


void __fastcall CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        CommandCardExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t CommandCardLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w23
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t ServantImageLimitSealAfter; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x26
  WarEntity_o *v18; // x26
  UserServantCommandCardMaster_o *v19; // x27
  int64_t UserId; // x28
  CommandCardExceedResultWindowComponent_o *v21; // x0
  const MethodInfo *v22; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  __int64 v25; // x9
  float lastFrameTime; // w20
  __int64 v27; // x9
  int32_t v28; // w22
  int32_t v29; // w26
  int32_t v30; // w27
  BattleCommandData_o *v31; // x25
  int32_t v32; // w27
  BattleCommandData_o *v33; // x21
  const MethodInfo *v34; // x2
  int32_t v35; // w20
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x4
  BalanceConfig_c *v38; // x0
  System_Action_o *v39; // x20
  __int64 v40; // x0
  int32_t v41; // [xsp+4h] [xbp-5Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42B00EA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_B52984(&BattleCommandData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00EA = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  if ( !userServantEntity )
    goto LABEL_41;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v11;
  *(_QWORD *)&v43.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)Instance,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v17 )
    goto LABEL_41;
  v18 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v17,
          (int32_t)Instance,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v41 = exceedCount;
  v19 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  *(_QWORD *)&v44.fields.currentCryptoKey = v11;
  *(_QWORD *)&v44.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v44, 0LL);
  if ( !v19 )
    goto LABEL_41;
  UserServantCommandCardMaster__TryGetEntity(v19, &entity, UserId, (int)Instance, 0LL);
  *(_QWORD *)&v45.fields.currentCryptoKey = v11;
  *(_QWORD *)&v45.fields.fakeValue = v12;
  v21 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                      v45,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v21, (int)v21, cardIndex, v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)ItemMaster__GetEntityByType((ItemMaster_o *)Instance, 25, 0LL);
  if ( !entity )
    goto LABEL_41;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_41;
  if ( commandCardParam->max_length <= cardIndex )
    goto LABEL_42;
  if ( !Instance || !v18 || (v25 = *(_QWORD *)&v18[1].fields.id) == 0 )
LABEL_41:
    sub_B52A5C(Instance, v10);
  if ( *(_DWORD *)(v25 + 24) <= (unsigned int)cardIndex )
  {
LABEL_42:
    v40 = sub_B52A88(Instance);
    sub_B52A28(v40, 0LL);
  }
  lastFrameTime = Instance->fields.lastFrameTime;
  v27 = v25 + 4LL * cardIndex;
  v28 = commandCardParam->m_Items[cardIndex + 1];
  v29 = *(_DWORD *)(v27 + 32);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userServantEntity->fields.svtId, 0LL);
  v31 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_19012556(v31, v29, v30, ServantImageLimitSealAfter, 0, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(userServantEntity->fields.svtId, 0LL);
  v33 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_19012556(v33, v29, v32, ServantImageLimitSealAfter, 0, 0LL);
  if ( !v31 )
    goto LABEL_41;
  v31->fields.userCommandCodeId = UserCommandCodeId;
  v35 = v28 - LODWORD(lastFrameTime) * v41;
  v31->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v34);
  v31->fields.commandCardParam = v35;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v31,
    UserCommandCodeId,
    v35,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v35, 3, 1, 0LL);
  if ( !v33 )
    goto LABEL_41;
  v33->fields.userCommandCodeId = UserCommandCodeId;
  v33->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v36);
  v33->fields.commandCardParam = v28;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v33,
    UserCommandCodeId,
    v28,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v28, 3, 1, 0LL);
  v38 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v35, v28, v38->static_fields->CommandCardParamUpMax, v37);
  v39 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
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

  if ( (byte_42B00EB & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3237/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_B52984(&StringLiteral_3238/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_42B00EB = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3238/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v13 = System_String__Format_44563852(v10, NumberFormat, v12, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v13, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3237/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v13 = System_String__Format_44563852(v16, v17, v18, 0LL),
        !afterStatusLabel) )
  {
    sub_B52A5C(v13, v14);
  }
  UILabel__set_text(afterStatusLabel, v13, 0LL);
}