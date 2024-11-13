void __fastcall CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19A81 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19A81 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall CommandCardExceedResultWindowComponent__GetCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B19A80 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19A80 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v15.fields.currentCryptoKey = klass;
  *(_QWORD *)&v15.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t servantId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t result; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  bool v14; // w8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v16; // x8
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19A7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, servantId, *(_QWORD *)&cardIndex);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19A7F = 1;
  }
  entity = 0LL;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  result = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_13;
  v14 = UserServantCommandCodeMaster__TryGetEntity(
          (UserServantCommandCodeMaster_o *)MasterData_object,
          &entity,
          result,
          servantId,
          0LL);
  result = 0LL;
  if ( !v14 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0LL )
LABEL_13:
    sub_1BCAA3C(result, v11);
  if ( userCommandCodeIds->max_length <= cardIndex )
    sub_1BCAA44(0LL, v11);
  v16 = userCommandCodeIds->m_Items[cardIndex];
  return v16 & ~(v16 >> 63);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  __int64 v45; // x23
  __int64 v46; // x25
  __int64 v47; // x1
  int32_t CommandCardLimitCount; // w25
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w25
  Il2CppObject *v51; // x26
  __int64 v52; // x1
  Il2CppObject *MasterData_object; // x27
  int64_t UserId; // x0
  __int64 v55; // x1
  __int64 v56; // x20
  __int64 v57; // x29
  int64_t v58; // x28
  CommandCardExceedResultWindowComponent_o *v59; // x0
  const MethodInfo *v60; // x3
  int64_t UserCommandCodeId; // x24
  __int64 v62; // x2
  __int64 v63; // x3
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v67; // w26
  int32_t v68; // w20
  BattleCommandData_o *v69; // x28
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  BattleCommandData_o *v73; // x27
  const MethodInfo *v74; // x2
  int32_t v75; // w21
  const MethodInfo *v76; // x2
  __int64 v77; // x1
  const MethodInfo *v78; // x4
  BalanceConfig_c *v79; // x0
  char v80; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  float v85; // s0
  System_Action_o *v86; // x20
  System_String_o *v87; // [xsp+8h] [xbp-78h]
  int32_t v88; // [xsp+14h] [xbp-6Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4B19A7D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userServantEntity, *(_QWORD *)&cardIndex);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BaseDialog_EndOpenBaseDialog__, v15, v16);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    byte_4B19A7D = 1;
  }
  v41 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v41 = (_QWORD *)sub_1BCA7F8(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v42 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v41, v41[4]);
  OverwriteAssetSoundName__PlaySystemSe(v42, 6, 0LL);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_53;
    v46 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    *(_QWORD *)&v90.fields.currentCryptoKey = v46;
    *(_QWORD *)&v90.fields.fakeValue = v45;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v90, 0LL);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_53;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v47);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_53;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_53;
  v87 = displayBattleName;
  v51 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v88 = exceedCount;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52);
  UserId = NetworkManager__get_UserId(0LL);
  v56 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v58 = UserId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v55);
  *(_QWORD *)&v91.fields.currentCryptoKey = v56;
  *(_QWORD *)&v91.fields.fakeValue = v57;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v91, 0LL);
  if ( !MasterData_object )
    goto LABEL_53;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    v58,
    (int)Instance,
    0LL);
  v59 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                      userServantEntity->fields.svtId,
                                                      0LL);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v59, (int)v59, cardIndex, v60);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  if ( !v51 )
    goto LABEL_53;
  klass = v51[9].klass;
  if ( !klass )
    goto LABEL_53;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_54:
    sub_1BCAA44(Instance, v44);
  saveNameList = (int)Instance->fields.saveNameList;
  v67 = commandCardParam->m_Items[cardIndex + 1];
  v68 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v69 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v44, v62, v63);
  BattleCommandData___ctor_44072696(v69, v68, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  v73 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v70, v71, v72);
  BattleCommandData___ctor_44072696(v73, v68, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0LL);
  if ( !v69 )
    goto LABEL_53;
  v69->fields.userCommandCodeId = UserCommandCodeId;
  v75 = v67 - saveNameList * v88;
  v69->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v74);
  v69->fields.commandCardParam = v75;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v69,
    UserCommandCodeId,
    v75,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v75, 3, 1, 0LL);
  if ( !v73 )
    goto LABEL_53;
  v73->fields.userCommandCodeId = UserCommandCodeId;
  v73->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v76);
  v73->fields.commandCardParam = v67;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v73,
    UserCommandCodeId,
    v67,
    0,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_53;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v67, 3, 1, 0LL);
  v79 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v77);
    v79 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v75, v67, v79->static_fields->CommandCardParamUpMax, v78);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v87, 0LL);
  if ( !this->fields.nameLabel
    || (v80 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.nameLabel,
                                       0LL)) == 0LL) )
  {
LABEL_53:
    sub_1BCAA3C(Instance, v44);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v80 ^ 1) & 1, 0LL);
  if ( (v80 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( !Instance )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)Instance, v87, 0LL);
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0LL, 0LL) )
  {
    v85 = -12.0;
    if ( (v80 & 1) != 0 )
      v85 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v85, 0LL);
  }
  v86 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v82, v83, v84);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v86, 0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *previousStatusLabel; // x23
  System_String_o *v14; // x24
  Il2CppObject *NumberFormat; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *afterStatusLabel; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0

  if ( (byte_4B19A7E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&previousParam, *(_QWORD *)&afterParam);
    sub_1BCA7E0(&StringLiteral_3729/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3730/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v11, v12);
    byte_4B19A7E = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&previousParam);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3730/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0LL);
  v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL);
  v17 = System_String__Format_62415592(v14, NumberFormat, v16, 0LL);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v17, 0LL),
        afterStatusLabel = this->fields.afterStatusLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL),
        v21 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0LL),
        v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0LL),
        v17 = System_String__Format_62415592(v20, v21, v22, 0LL),
        !afterStatusLabel) )
  {
    sub_1BCAA3C(v17, v18);
  }
  UILabel__set_text(afterStatusLabel, v17, 0LL);
}