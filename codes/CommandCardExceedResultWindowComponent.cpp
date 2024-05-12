void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438DF35 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438DF35 = 1;
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

  if ( (byte_438DF34 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF34 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userCommandCodeId,
                                      (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B7769C(Instance, v5);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9, 0LL);
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

  if ( (byte_438DF33 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DF33 = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)result,
                                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
    sub_B7769C(result, v7);
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    v12 = sub_B776C8(0LL);
    sub_B77668(v12, 0LL);
  }
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x20
  __int64 v16; // x22
  int32_t CommandCardLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w20
  WarEntity_o *v20; // x26
  int32_t v21; // w25
  UserServantCommandCardMaster_o *MasterData_WarQuestSelectionMaster; // x27
  int64_t UserId; // x0
  __int64 v24; // x20
  __int64 v25; // x21
  int64_t v26; // x28
  CommandCardExceedResultWindowComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  __int64 v31; // x9
  float lastFrameTime; // w21
  int32_t v33; // w23
  int32_t v34; // w20
  BattleCommandData_o *v35; // x27
  BattleCommandData_o *v36; // x26
  const MethodInfo *v37; // x2
  int32_t v38; // w21
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  BalanceConfig_c *v41; // x0
  char v42; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  float v44; // s0
  System_Action_o *v45; // x20
  __int64 v46; // x0
  int32_t limitCount; // [xsp+8h] [xbp-68h]
  int32_t v48; // [xsp+Ch] [xbp-64h]
  System_String_o *v49; // [xsp+10h] [xbp-60h]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_438DF31 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_B775C4(&BattleCommandData_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438DF31 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_60;
    v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v51.fields.currentCryptoKey = v15;
    *(_QWORD *)&v51.fields.fakeValue = v16;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v51, 0LL);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_60;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_60;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  v49 = displayBattleName;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  v48 = exceedCount;
  v20 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          useServantId,
          (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  limitCount = ServantImageLimitSealAfter;
  v21 = cardIndex;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           Instance,
                                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v26 = UserId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v25;
  *(_QWORD *)&v52.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v52, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_60;
  UserServantCommandCardMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v26, (int)Instance, 0LL);
  v27 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                      userServantEntity->fields.svtId,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v27, (int)v27, v21, v28);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)ItemMaster__GetEntityByType((ItemMaster_o *)Instance, 25, 0LL);
  if ( !entity )
    goto LABEL_60;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_60;
  if ( commandCardParam->max_length <= v21 )
    goto LABEL_61;
  if ( !Instance )
    goto LABEL_60;
  if ( !v20 )
    goto LABEL_60;
  v31 = *(_QWORD *)&v20[1].fields.id;
  if ( !v31 )
    goto LABEL_60;
  if ( *(_DWORD *)(v31 + 24) <= (unsigned int)v21 )
  {
LABEL_61:
    v46 = sub_B776C8(Instance);
    sub_B77668(v46, 0LL);
  }
  lastFrameTime = Instance->fields.lastFrameTime;
  v33 = commandCardParam->m_Items[v21 + 1];
  v34 = *(_DWORD *)(v31 + 4LL * v21 + 32);
  v35 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_19072172(v35, v34, useServantId, limitCount, 0, 0LL);
  v36 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_19072172(v36, v34, useServantId, limitCount, 0, 0LL);
  if ( !v35 )
    goto LABEL_60;
  v35->fields.userCommandCodeId = UserCommandCodeId;
  v38 = v33 - LODWORD(lastFrameTime) * v48;
  v35->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v37);
  v35->fields.commandCardParam = v38;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_60;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v35,
    UserCommandCodeId,
    v38,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_60;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v38, 3, 1, 0LL);
  if ( !v36 )
    goto LABEL_60;
  v36->fields.userCommandCodeId = UserCommandCodeId;
  v36->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v39);
  v36->fields.commandCardParam = v33;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_60;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v36,
    UserCommandCodeId,
    v33,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_60;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v33, 3, 1, 0LL);
  v41 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v38, v33, v41->static_fields->CommandCardParamUpMax, v40);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v49, 0LL);
  if ( !this->fields.nameLabel
    || (v42 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.nameLabel,
                                       0LL)) == 0LL) )
  {
LABEL_60:
    sub_B7769C(Instance, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v42 ^ 1) & 1, 0LL);
  if ( (v42 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)Instance, v49, 0LL);
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0LL, 0LL) )
  {
    v44 = -12.0;
    if ( (v42 & 1) != 0 )
      v44 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v44, 0LL);
  }
  v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
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

  if ( (byte_438DF32 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3330/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_B775C4(&StringLiteral_3331/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_438DF32 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3331/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v13 = System_String__Format_44897472(v10, NumberFormat, v12, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v13, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v13 = System_String__Format_44897472(v16, v17, v18, 0LL),
        !afterStatusLabel) )
  {
    sub_B7769C(v13, v14);
  }
  UILabel__set_text(afterStatusLabel, v13, 0LL);
}