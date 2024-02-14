void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214826 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214826 = 1;
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
  __int64 v8; // x19
  Il2CppObject *lockCountObj; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4214825 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4214825 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userCommandCodeId,
                                      (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  lockCountObj = Instance->fields.lockCountObj;
  v8 = *(_QWORD *)&Instance->fields.nowLoadCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = lockCountObj;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v11, 0LL);
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
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v10; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v12; // x8
  __int64 v13; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214824 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, servantId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4214824 = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)result,
                                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  v10 = UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, result, servantId, 0LL);
  result = 0LL;
  if ( !v10 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_14:
    sub_B0D97C(result);
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    v13 = sub_B0D9A8(0LL);
    sub_B0D948(v13, 0LL);
  }
  v12 = userCommandCodeIds->m_Items[cardIndex];
  return v12 & ~(v12 >> 63);
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
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t CommandCardLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w23
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t ServantImageLimitSealAfter; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x26
  WarEntity_o *v30; // x26
  UserServantCommandCardMaster_o *v31; // x27
  int64_t UserId; // x28
  CommandCardExceedResultWindowComponent_o *v33; // x0
  const MethodInfo *v34; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  __int64 v37; // x9
  float lastFrameTime; // w20
  __int64 v39; // x9
  int32_t v40; // w22
  int32_t v41; // w26
  int32_t v42; // w27
  __int64 v43; // x1
  __int64 v44; // x2
  BattleCommandData_o *v45; // x25
  int32_t v46; // w27
  __int64 v47; // x1
  __int64 v48; // x2
  BattleCommandData_o *v49; // x21
  const MethodInfo *v50; // x2
  int32_t v51; // w20
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x4
  BalanceConfig_c *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  System_Action_o *v57; // x20
  __int64 v58; // x0
  int32_t v59; // [xsp+4h] [xbp-5Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4214822 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, userServantEntity);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v9);
    sub_B0D8A4(&Method_BaseDialog_EndOpenBaseDialog__, v10);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&SoundManager_TypeInfo, v21);
    byte_4214822 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  if ( !userServantEntity )
    goto LABEL_41;
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v23;
  *(_QWORD *)&v61.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v61, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)Instance,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v29 )
    goto LABEL_41;
  v30 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v29,
          (int32_t)Instance,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v59 = exceedCount;
  v31 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  *(_QWORD *)&v62.fields.currentCryptoKey = v23;
  *(_QWORD *)&v62.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v62, 0LL);
  if ( !v31 )
    goto LABEL_41;
  UserServantCommandCardMaster__TryGetEntity(v31, &entity, UserId, (int)Instance, 0LL);
  *(_QWORD *)&v63.fields.currentCryptoKey = v23;
  *(_QWORD *)&v63.fields.fakeValue = v24;
  v33 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                      v63,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v33, (int)v33, cardIndex, v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  if ( !Instance || !v30 || (v37 = *(_QWORD *)&v30[1].fields.id) == 0 )
LABEL_41:
    sub_B0D97C(Instance);
  if ( *(_DWORD *)(v37 + 24) <= (unsigned int)cardIndex )
  {
LABEL_42:
    v58 = sub_B0D9A8(Instance);
    sub_B0D948(v58, 0LL);
  }
  lastFrameTime = Instance->fields.lastFrameTime;
  v39 = v37 + 4LL * cardIndex;
  v40 = commandCardParam->m_Items[cardIndex + 1];
  v41 = *(_DWORD *)(v39 + 32);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userServantEntity->fields.svtId, 0LL);
  v45 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v43, v44);
  BattleCommandData___ctor_18472988(v45, v41, v42, ServantImageLimitSealAfter, 0, 0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userServantEntity->fields.svtId, 0LL);
  v49 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v47, v48);
  BattleCommandData___ctor_18472988(v49, v41, v46, ServantImageLimitSealAfter, 0, 0LL);
  if ( !v45 )
    goto LABEL_41;
  v45->fields.userCommandCodeId = UserCommandCodeId;
  v51 = v40 - LODWORD(lastFrameTime) * v59;
  v45->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v50);
  v45->fields.commandCardParam = v51;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v45,
    UserCommandCodeId,
    v51,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v51, 3, 1, 0LL);
  if ( !v49 )
    goto LABEL_41;
  v49->fields.userCommandCodeId = UserCommandCodeId;
  v49->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v52);
  v49->fields.commandCardParam = v40;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v49,
    UserCommandCodeId,
    v40,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v40, 3, 1, 0LL);
  v54 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v51, v40, v54->static_fields->CommandCardParamUpMax, v53);
  v57 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v55, v56);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
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
  UILabel_o *afterStatusLabel; // x21
  System_String_o *v17; // x22
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x0

  if ( (byte_4214823 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&previousParam);
    sub_B0D8A4(&StringLiteral_3217/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v9);
    sub_B0D8A4(&StringLiteral_3218/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v10);
    byte_4214823 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3218/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v15 = System_String__Format_43845440(v12, NumberFormat, v14, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v15, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3217/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v15 = System_String__Format_43845440(v17, v18, v19, 0LL),
        !afterStatusLabel) )
  {
    sub_B0D97C(v15);
  }
  UILabel__set_text(afterStatusLabel, v15, 0LL);
}