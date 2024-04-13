void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8BCF & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BCF = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  Il2CppObject *lockCountObj; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42E8BCE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8BCE = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userCommandCodeId,
                                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  lockCountObj = Instance->fields.lockCountObj;
  v16 = *(_QWORD *)&Instance->fields.nowLoadCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = lockCountObj;
  *(_QWORD *)&v19.fields.fakeValue = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
}


int64_t __fastcall CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t result; // x0
  __int64 v13; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  bool v15; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v17; // x8
  __int64 v18; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8BCD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, servantId, cardIndex, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8BCD = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)result,
                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  v15 = UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, result, servantId, 0LL);
  result = 0LL;
  if ( !v15 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_14:
    sub_B5D69C(result, v13);
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    v18 = sub_B5D6C8(0LL);
    sub_B5D668(v18, 0LL);
  }
  v17 = userCommandCodeIds->m_Items[cardIndex];
  return v17 & ~(v17 >> 63);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        CommandCardExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  __int64 v50; // x24
  __int64 v51; // x25
  int32_t CommandCardLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w23
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t ServantImageLimitSealAfter; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x26
  WarEntity_o *v57; // x26
  UserServantCommandCardMaster_o *v58; // x27
  int64_t UserId; // x28
  CommandCardExceedResultWindowComponent_o *v60; // x0
  const MethodInfo *v61; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  __int64 v64; // x9
  float lastFrameTime; // w20
  __int64 v66; // x9
  int32_t v67; // w22
  int32_t v68; // w26
  int32_t v69; // w27
  BattleCommandData_o *v70; // x25
  int32_t v71; // w27
  BattleCommandData_o *v72; // x21
  const MethodInfo *v73; // x2
  int32_t v74; // w20
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x4
  BalanceConfig_c *v77; // x0
  System_Action_o *v78; // x20
  __int64 v79; // x0
  int32_t v80; // [xsp+4h] [xbp-5Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_42E8BCB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)userServantEntity, cardIndex, *(_QWORD *)&exceedCount);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BaseDialog_EndOpenBaseDialog__, v12, v13, v14);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v30, v31, v32);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&SoundManager_TypeInfo, v45, v46, v47);
    byte_42E8BCB = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  if ( !userServantEntity )
    goto LABEL_41;
  v50 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v82.fields.currentCryptoKey = v50;
  *(_QWORD *)&v82.fields.fakeValue = v51;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v82, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 (int32_t)Instance,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v56 )
    goto LABEL_41;
  v57 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v56,
          (int32_t)Instance,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v80 = exceedCount;
  v58 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  *(_QWORD *)&v83.fields.currentCryptoKey = v50;
  *(_QWORD *)&v83.fields.fakeValue = v51;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v83, 0LL);
  if ( !v58 )
    goto LABEL_41;
  UserServantCommandCardMaster__TryGetEntity(v58, &entity, UserId, (int)Instance, 0LL);
  *(_QWORD *)&v84.fields.currentCryptoKey = v50;
  *(_QWORD *)&v84.fields.fakeValue = v51;
  v60 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                      v84,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v60, (int)v60, cardIndex, v61);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
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
  if ( !Instance || !v57 || (v64 = *(_QWORD *)&v57[1].fields.id) == 0 )
LABEL_41:
    sub_B5D69C(Instance, v49);
  if ( *(_DWORD *)(v64 + 24) <= (unsigned int)cardIndex )
  {
LABEL_42:
    v79 = sub_B5D6C8(Instance);
    sub_B5D668(v79, 0LL);
  }
  lastFrameTime = Instance->fields.lastFrameTime;
  v66 = v64 + 4LL * cardIndex;
  v67 = commandCardParam->m_Items[cardIndex + 1];
  v68 = *(_DWORD *)(v66 + 32);
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userServantEntity->fields.svtId, 0LL);
  v70 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18880712(v70, v68, v69, ServantImageLimitSealAfter, 0, 0LL);
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userServantEntity->fields.svtId, 0LL);
  v72 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18880712(v72, v68, v71, ServantImageLimitSealAfter, 0, 0LL);
  if ( !v70 )
    goto LABEL_41;
  v70->fields.userCommandCodeId = UserCommandCodeId;
  v74 = v67 - LODWORD(lastFrameTime) * v80;
  v70->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v73);
  v70->fields.commandCardParam = v74;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v70,
    UserCommandCodeId,
    v74,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v74, 3, 1, 0LL);
  if ( !v72 )
    goto LABEL_41;
  v72->fields.userCommandCodeId = UserCommandCodeId;
  v72->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v75);
  v72->fields.commandCardParam = v67;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v72,
    UserCommandCodeId,
    v67,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v67, 3, 1, 0LL);
  v77 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v77 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v74, v67, v77->static_fields->CommandCardParamUpMax, v76);
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedResultWindowComponent__SetLabels(
        CommandCardExceedResultWindowComponent_o *this,
        int32_t previousParam,
        int32_t afterParam,
        int32_t maxParam,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *previousStatusLabel; // x23
  System_String_o *v16; // x24
  Il2CppObject *NumberFormat; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  UILabel_o *afterStatusLabel; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0

  if ( (byte_42E8BCC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, previousParam, afterParam, *(_QWORD *)&maxParam);
    sub_B5D5C4(&StringLiteral_3270/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3271/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v12, v13, v14);
    byte_42E8BCC = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3271/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v19 = System_String__Format_44573324(v16, NumberFormat, v18, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v19, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3270/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v19 = System_String__Format_44573324(v22, v23, v24, 0LL),
        !afterStatusLabel) )
  {
    sub_B5D69C(v19, v20);
  }
  UILabel__set_text(afterStatusLabel, v19, 0LL);
}