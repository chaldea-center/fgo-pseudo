void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFB47 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FFB47 = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_49FFB46 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FFB46 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = klass;
  *(_QWORD *)&v11.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v10; // x1
  bool v11; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v13; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFB45 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, servantId);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFB45 = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  result = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_13;
  v11 = UserServantCommandCodeMaster__TryGetEntity(
          (UserServantCommandCodeMaster_o *)MasterData_object,
          &entity,
          result,
          servantId,
          0LL);
  result = 0LL;
  if ( !v11 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_13:
    sub_1B64324(result);
  if ( userCommandCodeIds->max_length <= cardIndex )
    sub_1B6432C(0LL, v10);
  v13 = userCommandCodeIds->m_Items[cardIndex];
  return v13 & ~(v13 >> 63);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  DataManager_o *Instance; // x0
  __int64 v30; // x23
  __int64 v31; // x25
  int32_t CommandCardLimitCount; // w25
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w25
  Il2CppObject *v35; // x26
  Il2CppObject *MasterData_object; // x27
  int64_t UserId; // x0
  __int64 v38; // x20
  __int64 v39; // x29
  int64_t v40; // x28
  CommandCardExceedResultWindowComponent_o *v41; // x0
  const MethodInfo *v42; // x3
  int64_t UserCommandCodeId; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v49; // w26
  int32_t v50; // w20
  BattleCommandData_o *v51; // x28
  __int64 v52; // x1
  __int64 v53; // x2
  BattleCommandData_o *v54; // x27
  const MethodInfo *v55; // x2
  int32_t v56; // w21
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x4
  BalanceConfig_c *v59; // x0
  char v60; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  float v64; // s0
  System_Action_o *v65; // x20
  System_String_o *v66; // [xsp+8h] [xbp-78h]
  int32_t v67; // [xsp+14h] [xbp-6Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_49FFB43 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, userServantEntity);
    sub_1B640C8(&BalanceConfig_TypeInfo, v13);
    sub_1B640C8(&Method_BaseDialog_EndOpenBaseDialog__, v14);
    sub_1B640C8(&BattleCommandData_TypeInfo, v15);
    sub_1B640C8(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v22);
    sub_1B640C8(&NetworkManager_TypeInfo, v23);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v24);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_49FFB43 = 1;
  }
  v27 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1B640E0(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v28 = (System_Reflection_MethodBase_o *)sub_1B640AC(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 6, 0LL);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_53;
    v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v69.fields.currentCryptoKey = v31;
    *(_QWORD *)&v69.fields.fakeValue = v30;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v69, 0LL);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_53;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_53;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v66 = displayBattleName;
  v35 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v67 = exceedCount;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v38 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v40 = UserId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v38;
  *(_QWORD *)&v70.fields.fakeValue = v39;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v70, 0LL);
  if ( !MasterData_object )
    goto LABEL_53;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    v40,
    (int)Instance,
    0LL);
  v41 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                      userServantEntity->fields.svtId,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v41, (int)v41, cardIndex, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
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
  if ( !v35 )
    goto LABEL_53;
  klass = v35[9].klass;
  if ( !klass )
    goto LABEL_53;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_54:
    sub_1B6432C(Instance, v44);
  saveNameList = (int)Instance->fields.saveNameList;
  v49 = commandCardParam->m_Items[cardIndex + 1];
  v50 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v51 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v44, v45);
  BattleCommandData___ctor_42850076(v51, v50, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  v54 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v52, v53);
  BattleCommandData___ctor_42850076(v54, v50, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  if ( !v51 )
    goto LABEL_53;
  v51->fields.userCommandCodeId = UserCommandCodeId;
  v56 = v49 - saveNameList * v67;
  v51->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v55);
  v51->fields.commandCardParam = v56;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v51,
    UserCommandCodeId,
    v56,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v56, 3, 1, 0LL);
  if ( !v54 )
    goto LABEL_53;
  v54->fields.userCommandCodeId = UserCommandCodeId;
  v54->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v57);
  v54->fields.commandCardParam = v49;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v54,
    UserCommandCodeId,
    v49,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v49, 3, 1, 0LL);
  v59 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v59 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v56, v49, v59->static_fields->CommandCardParamUpMax, v58);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v66, 0LL);
  if ( !this->fields.nameLabel
    || (v60 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.nameLabel,
                                       0LL)) == 0LL) )
  {
LABEL_53:
    sub_1B64324(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v60 ^ 1) & 1, 0LL);
  if ( (v60 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)Instance, v66, 0LL);
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0LL, 0LL) )
  {
    v64 = -12.0;
    if ( (v60 & 1) != 0 )
      v64 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v64, 0LL);
  }
  v65 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v62, v63);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
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

  if ( (byte_49FFB44 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&previousParam);
    sub_1B640C8(&StringLiteral_3676/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v9);
    sub_1B640C8(&StringLiteral_3677/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v10);
    byte_49FFB44 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v15 = System_String__Format_61389768(v12, NumberFormat, v14, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v15, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v15 = System_String__Format_61389768(v17, v18, v19, 0LL),
        !afterStatusLabel) )
  {
    sub_1B64324(v15);
  }
  UILabel__set_text(afterStatusLabel, v15, 0LL);
}