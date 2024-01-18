void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_41880E4 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41880E4 = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x19
  Il2CppObject *lockCountObj; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_41880E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_41880E3 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userCommandCodeId,
                                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  lockCountObj = Instance->fields.lockCountObj;
  v9 = *(_QWORD *)&Instance->fields.nowLoadCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = lockCountObj;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
}


int64_t __fastcall CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t result; // x0
  __int64 v9; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v11; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v13; // x8
  __int64 v14; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41880E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, servantId);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_41880E2 = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)result,
                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  v11 = UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, result, servantId, 0LL);
  result = 0LL;
  if ( !v11 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_14:
    sub_B2C434(result, v9);
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    v14 = sub_B2C460(0LL);
    sub_B2C400(v14, 0LL);
  }
  v13 = userCommandCodeIds->m_Items[cardIndex];
  return v13 & ~(v13 >> 63);
}


void __fastcall CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        CommandCardExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t CommandCardLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w23
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t ServantImageLimitSealAfter; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x26
  WarEntity_o *v31; // x26
  UserServantCommandCardMaster_o *v32; // x27
  int64_t UserId; // x28
  CommandCardExceedResultWindowComponent_o *v34; // x0
  const MethodInfo *v35; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  __int64 v38; // x9
  float lastFrameTime; // w20
  __int64 v40; // x9
  int32_t v41; // w22
  int32_t v42; // w26
  int32_t v43; // w27
  BattleCommandData_o *v44; // x25
  int32_t v45; // w27
  BattleCommandData_o *v46; // x21
  const MethodInfo *v47; // x2
  int32_t v48; // w20
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  BalanceConfig_c *v51; // x0
  System_Action_o *v52; // x20
  __int64 v53; // x0
  int32_t v54; // [xsp+4h] [xbp-5Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_41880E0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userServantEntity);
    sub_B2C35C(&BalanceConfig_TypeInfo, v9);
    sub_B2C35C(&Method_BaseDialog_EndOpenBaseDialog__, v10);
    sub_B2C35C(&BattleCommandData_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&SoundManager_TypeInfo, v21);
    byte_41880E0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  if ( !userServantEntity )
    goto LABEL_41;
  v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v24;
  *(_QWORD *)&v56.fields.fakeValue = v25;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v56, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)Instance,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v30 )
    goto LABEL_41;
  v31 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v30,
          (int32_t)Instance,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v54 = exceedCount;
  v32 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  *(_QWORD *)&v57.fields.currentCryptoKey = v24;
  *(_QWORD *)&v57.fields.fakeValue = v25;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v57, 0LL);
  if ( !v32 )
    goto LABEL_41;
  UserServantCommandCardMaster__TryGetEntity(v32, &entity, UserId, (int)Instance, 0LL);
  *(_QWORD *)&v58.fields.currentCryptoKey = v24;
  *(_QWORD *)&v58.fields.fakeValue = v25;
  v34 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                      v58,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v34, (int)v34, cardIndex, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
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
  if ( !Instance || !v31 || (v38 = *(_QWORD *)&v31[1].fields.id) == 0 )
LABEL_41:
    sub_B2C434(Instance, v23);
  if ( *(_DWORD *)(v38 + 24) <= (unsigned int)cardIndex )
  {
LABEL_42:
    v53 = sub_B2C460(Instance);
    sub_B2C400(v53, 0LL);
  }
  lastFrameTime = Instance->fields.lastFrameTime;
  v40 = v38 + 4LL * cardIndex;
  v41 = commandCardParam->m_Items[cardIndex + 1];
  v42 = *(_DWORD *)(v40 + 32);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userServantEntity->fields.svtId, 0LL);
  v44 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18363144(v44, v42, v43, ServantImageLimitSealAfter, 0, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userServantEntity->fields.svtId, 0LL);
  v46 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18363144(v46, v42, v45, ServantImageLimitSealAfter, 0, 0LL);
  if ( !v44 )
    goto LABEL_41;
  v44->fields.userCommandCodeId = UserCommandCodeId;
  v48 = v41 - LODWORD(lastFrameTime) * v54;
  v44->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v47);
  v44->fields.commandCardParam = v48;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v44,
    UserCommandCodeId,
    v48,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v48, 3, 1, 0LL);
  if ( !v46 )
    goto LABEL_41;
  v46->fields.userCommandCodeId = UserCommandCodeId;
  v46->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v49);
  v46->fields.commandCardParam = v41;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v46,
    UserCommandCodeId,
    v41,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v41, 3, 1, 0LL);
  v51 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v48, v41, v51->static_fields->CommandCardParamUpMax, v50);
  v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedResultWindowComponent__SetLabels(
        CommandCardExceedResultWindowComponent_o *this,
        int32_t previousParam,
        int32_t afterParam,
        int32_t maxParam,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *previousStatusLabel; // x23
  System_String_o *v12; // x24
  Il2CppObject *NumberFormat; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *afterStatusLabel; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0

  if ( (byte_41880E1 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&previousParam);
    sub_B2C35C(&StringLiteral_3205/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v9);
    sub_B2C35C(&StringLiteral_3206/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v10);
    byte_41880E1 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3206/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v15 = System_String__Format_44301068(v12, NumberFormat, v14, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v15, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3205/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v20 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v15 = System_String__Format_44301068(v18, v19, v20, 0LL),
        !afterStatusLabel) )
  {
    sub_B2C434(v15, v16);
  }
  UILabel__set_text(afterStatusLabel, v15, 0LL);
}