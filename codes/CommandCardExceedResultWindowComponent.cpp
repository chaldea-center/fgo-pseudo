void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA59B & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA59B = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  __int64 v10; // x19
  __int64 v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_40FA59A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA59A = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   userCommandCodeId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  v11 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
}


int64_t __fastcall CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // w8
  int64_t result; // x0
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v16; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA599 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, servantId);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA599 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  v13 = UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, servantId, 0LL);
  result = 0LL;
  if ( !v13 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_14:
    sub_B170D4();
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
    sub_B17100(0LL, v11, v12);
    sub_B170A0();
  }
  v16 = userCommandCodeIds->m_Items[cardIndex];
  return v16 & ~(v16 >> 63);
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
  __int64 v22; // x24
  __int64 v23; // x25
  int32_t CommandCardLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w23
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t v28; // w0
  int32_t ServantImageLimitSealAfter; // w23
  WebViewManager_o *v30; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x26
  int32_t v32; // w0
  WarEntity_o *v33; // x26
  WebViewManager_o *v34; // x0
  UserServantCommandCardMaster_o *v35; // x27
  int64_t UserId; // x28
  int32_t v37; // w0
  CommandCardExceedResultWindowComponent_o *v38; // x0
  const MethodInfo *v39; // x3
  int64_t UserCommandCodeId; // x24
  WebViewManager_o *v41; // x0
  ItemMaster_o *v42; // x0
  ItemEntity_o *EntityByType; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  struct System_Int32_array *commandCardParam; // x8
  __int64 v47; // x9
  int32_t value; // w20
  __int64 v49; // x9
  int32_t v50; // w22
  int32_t v51; // w26
  int32_t v52; // w27
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  BattleCommandData_o *v57; // x25
  int32_t v58; // w27
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  BattleCommandData_o *v63; // x21
  CommandCardExceedResultWindowComponent_o *v64; // x0
  const MethodInfo *v65; // x2
  int32_t v66; // w20
  CombineCommandCardComponent_o *previousCommandCard; // x0
  BattleCommandComponent_o *v68; // x0
  CommandCardExceedResultWindowComponent_o *v69; // x0
  const MethodInfo *v70; // x2
  CombineCommandCardComponent_o *afterCommandCard; // x0
  BattleCommandComponent_o *v72; // x0
  const MethodInfo *v73; // x4
  BalanceConfig_c *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Action_o *v79; // x20
  int32_t v80; // [xsp+4h] [xbp-5Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_40FA597 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, userServantEntity);
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    sub_B16FFC(&Method_BaseDialog_EndOpenBaseDialog__, v10);
    sub_B16FFC(&BattleCommandData_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&SoundManager_TypeInfo, v21);
    byte_40FA597 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  if ( !userServantEntity )
    goto LABEL_41;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v82.fields.currentCryptoKey = v22;
  *(_QWORD *)&v82.fields.fakeValue = v23;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 v28,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_41;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v30,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userServantEntity->fields.svtId, 0LL);
  if ( !v31 )
    goto LABEL_41;
  v33 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v31,
          v32,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v34 )
    goto LABEL_41;
  v80 = exceedCount;
  v35 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v34,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  *(_QWORD *)&v83.fields.currentCryptoKey = v22;
  *(_QWORD *)&v83.fields.fakeValue = v23;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83, 0LL);
  if ( !v35 )
    goto LABEL_41;
  UserServantCommandCardMaster__TryGetEntity(v35, &entity, UserId, v37, 0LL);
  *(_QWORD *)&v84.fields.currentCryptoKey = v22;
  *(_QWORD *)&v84.fields.fakeValue = v23;
  v38 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                      v84,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v38, (int)v38, cardIndex, v39);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_41;
  v42 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v41,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v42 )
    goto LABEL_41;
  EntityByType = ItemMaster__GetEntityByType(v42, 25, 0LL);
  if ( !entity )
    goto LABEL_41;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_41;
  if ( commandCardParam->max_length <= cardIndex )
    goto LABEL_42;
  if ( !EntityByType || !v33 || (v47 = *(_QWORD *)&v33[1].fields.id) == 0 )
LABEL_41:
    sub_B170D4();
  if ( *(_DWORD *)(v47 + 24) <= (unsigned int)cardIndex )
  {
LABEL_42:
    sub_B17100(EntityByType, v44, v45);
    sub_B170A0();
  }
  value = EntityByType->fields.value;
  v49 = v47 + 4LL * cardIndex;
  v50 = commandCardParam->m_Items[cardIndex + 1];
  v51 = *(_DWORD *)(v49 + 32);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userServantEntity->fields.svtId, 0LL);
  v57 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v53, v54, v55, v56);
  BattleCommandData___ctor_18691260(v57, v51, v52, ServantImageLimitSealAfter, 0, 0LL);
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userServantEntity->fields.svtId, 0LL);
  v63 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v59, v60, v61, v62);
  BattleCommandData___ctor_18691260(v63, v51, v58, ServantImageLimitSealAfter, 0, 0LL);
  if ( !v57 )
    goto LABEL_41;
  v57->fields.userCommandCodeId = UserCommandCodeId;
  v66 = v50 - value * v80;
  v57->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(v64, UserCommandCodeId, v65);
  v57->fields.commandCardParam = v66;
  previousCommandCard = this->fields.previousCommandCard;
  if ( !previousCommandCard )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(previousCommandCard, v57, UserCommandCodeId, v66, 0, 0, 0LL);
  v68 = (BattleCommandComponent_o *)this->fields.previousCommandCard;
  if ( !v68 )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon(v68, v66, 3, 1, 0LL);
  if ( !v63 )
    goto LABEL_41;
  v63->fields.userCommandCodeId = UserCommandCodeId;
  v63->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(v69, UserCommandCodeId, v70);
  v63->fields.commandCardParam = v50;
  afterCommandCard = this->fields.afterCommandCard;
  if ( !afterCommandCard )
    goto LABEL_41;
  CombineCommandCardComponent__DispCommandCard(afterCommandCard, v63, UserCommandCodeId, v50, 0, 0, 0LL);
  v72 = (BattleCommandComponent_o *)this->fields.afterCommandCard;
  if ( !v72 )
    goto LABEL_41;
  BattleCommandComponent__SetPowerUpCardIcon(v72, v50, 3, 1, 0LL);
  v74 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v74 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v66, v50, v74->static_fields->CommandCardParamUpMax, v73);
  v79 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v75, v76, v77, v78);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
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
  System_String_o *v20; // x0

  if ( (byte_40FA598 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&previousParam);
    sub_B16FFC(&StringLiteral_3196, v9);
    sub_B16FFC(&StringLiteral_3197, v10);
    byte_40FA598 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3197, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v15 = System_String__Format_43739268(v12, NumberFormat, v14, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v15, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3196, 0LL),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v20 = System_String__Format_43739268(v17, v18, v19, 0LL),
        !afterStatusLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(afterStatusLabel, v20, 0LL);
}