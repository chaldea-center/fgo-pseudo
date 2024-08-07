void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0226A & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_4A0226A = 1;
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
  __int64 v8; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A02269 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_1B64A00(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A02269 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_30D6944 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1B64C5C(Instance, v8);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = klass;
  *(_QWORD *)&v12.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v12, 0LL);
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
  Il2CppObject *MasterData_object; // x21
  bool v11; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v13; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A02268 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, servantId);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A02268 = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
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
    sub_1B64C5C(result, v9);
  if ( userCommandCodeIds->max_length <= cardIndex )
    sub_1B64C64(0LL, v9);
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
  __int64 v30; // x1
  __int64 v31; // x23
  __int64 v32; // x25
  int32_t CommandCardLimitCount; // w25
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w25
  Il2CppObject *v36; // x26
  Il2CppObject *MasterData_object; // x27
  int64_t UserId; // x0
  __int64 v39; // x20
  __int64 v40; // x29
  int64_t v41; // x28
  CommandCardExceedResultWindowComponent_o *v42; // x0
  const MethodInfo *v43; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v48; // w26
  int32_t v49; // w20
  BattleCommandData_o *v50; // x28
  BattleCommandData_o *v51; // x27
  const MethodInfo *v52; // x2
  int32_t v53; // w21
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x4
  BalanceConfig_c *v56; // x0
  char v57; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  float v59; // s0
  System_Action_o *v60; // x20
  System_String_o *v61; // [xsp+8h] [xbp-78h]
  int32_t v62; // [xsp+14h] [xbp-6Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4A02266 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, userServantEntity);
    sub_1B64A00(&BalanceConfig_TypeInfo, v13);
    sub_1B64A00(&Method_BaseDialog_EndOpenBaseDialog__, v14);
    sub_1B64A00(&BattleCommandData_TypeInfo, v15);
    sub_1B64A00(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__, v16);
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, v17);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v18);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v20);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v22);
    sub_1B64A00(&NetworkManager_TypeInfo, v23);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v24);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_4A02266 = 1;
  }
  v27 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1B64A18(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v28 = (System_Reflection_MethodBase_o *)sub_1B649E4(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 6, 0LL);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_53;
    v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v64.fields.currentCryptoKey = v32;
    *(_QWORD *)&v64.fields.fakeValue = v31;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v64, 0LL);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_53;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_53;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v61 = displayBattleName;
  v36 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v62 = exceedCount;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v39 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v41 = UserId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v39;
  *(_QWORD *)&v65.fields.fakeValue = v40;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v65, 0LL);
  if ( !MasterData_object )
    goto LABEL_53;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    v41,
    (int)Instance,
    0LL);
  v42 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                                                      userServantEntity->fields.svtId,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v42, (int)v42, cardIndex, v43);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  if ( !v36 )
    goto LABEL_53;
  klass = v36[9].klass;
  if ( !klass )
    goto LABEL_53;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_54:
    sub_1B64C64(Instance, v30);
  saveNameList = (int)Instance->fields.saveNameList;
  v48 = commandCardParam->m_Items[cardIndex + 1];
  v49 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v50 = (BattleCommandData_o *)sub_1B64C4C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_42859708(v50, v49, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  v51 = (BattleCommandData_o *)sub_1B64C4C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_42859708(v51, v49, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  if ( !v50 )
    goto LABEL_53;
  v50->fields.userCommandCodeId = UserCommandCodeId;
  v53 = v48 - saveNameList * v62;
  v50->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v52);
  v50->fields.commandCardParam = v53;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v50,
    UserCommandCodeId,
    v53,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v53, 3, 1, 0LL);
  if ( !v51 )
    goto LABEL_53;
  v51->fields.userCommandCodeId = UserCommandCodeId;
  v51->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v54);
  v51->fields.commandCardParam = v48;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v51,
    UserCommandCodeId,
    v48,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v48, 3, 1, 0LL);
  v56 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v56 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v53, v48, v56->static_fields->CommandCardParamUpMax, v55);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v61, 0LL);
  if ( !this->fields.nameLabel
    || (v57 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.nameLabel,
                                       0LL)) == 0LL) )
  {
LABEL_53:
    sub_1B64C5C(Instance, v30);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v57 ^ 1) & 1, 0LL);
  if ( (v57 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)Instance, v61, 0LL);
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0LL, 0LL) )
  {
    v59 = -12.0;
    if ( (v57 & 1) != 0 )
      v59 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v59, 0LL);
  }
  v60 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
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

  if ( (byte_4A02267 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, *(_QWORD *)&previousParam);
    sub_1B64A00(&StringLiteral_3676/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v9);
    sub_1B64A00(&StringLiteral_3677/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v10);
    byte_4A02267 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v15 = System_String__Format_61399508(v12, NumberFormat, v14, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v15, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v20 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v15 = System_String__Format_61399508(v18, v19, v20, 0LL),
        !afterStatusLabel) )
  {
    sub_1B64C5C(v15, v16);
  }
  UILabel__set_text(afterStatusLabel, v15, 0LL);
}