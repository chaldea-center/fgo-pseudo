void CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D34A49 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D34A49 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t CommandCardExceedResultWindowComponent__GetCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4D34A48 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34A48 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_3465A24 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0 )
  {
    sub_1C93D2C(Instance, v5);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = klass;
  *(_QWORD *)&v9.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v9, 0);
}


int64_t CommandCardExceedResultWindowComponent__GetUserCommandCodeId(
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
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D34A47 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34A47 = 1;
  }
  entity = 0;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  result = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_17;
  v9 = UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)(result + 184) + 64LL),
         servantId,
         0);
  result = 0;
  if ( !v9 )
    return result;
  if ( !entity || (userCommandCodeIds = entity->fields.userCommandCodeIds) == 0 )
LABEL_17:
    sub_1C93D2C(result, v7);
  if ( LODWORD(userCommandCodeIds->max_length) <= cardIndex )
    sub_1C93D34(0);
  v11 = userCommandCodeIds->m_Items[cardIndex];
  return v11 & ~(v11 >> 63);
}


void CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
        CommandCardExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        int32_t useServantId,
        System_String_o *multiCommandCardDisplayTitle,
        UnityEngine_Color_o multiCommandCardDisplayTitleColor,
        UnityEngine_Color_o multiCommandCardDisplayTitleBgColor,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float a; // s12
  float v13; // s13
  float v14; // s14
  float v15; // s15
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  __int64 v27; // x25
  int32_t CommandCardLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w25
  int32_t ServantImageLimitSealAfter; // w25
  Il2CppObject *v31; // x26
  Il2CppObject *MasterData_object; // x27
  NetworkManager_c *v33; // x0
  __int64 v34; // x20
  __int64 v35; // x29
  int64_t userIdNumber; // x28
  CommandCardExceedResultWindowComponent_o *v37; // x0
  const MethodInfo *v38; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v43; // w26
  int32_t v44; // w20
  BattleCommandData_o *v45; // x28
  BattleCommandData_o *v46; // x27
  const MethodInfo *v47; // x2
  int32_t v48; // w21
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  BalanceConfig_c *v51; // x0
  char v52; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  float v54; // s0
  System_Action_o *v55; // x20
  float value; // [xsp+4h] [xbp-BCh]
  System_String_o *v57; // [xsp+8h] [xbp-B8h]
  int32_t v58; // [xsp+14h] [xbp-ACh]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  value = multiCommandCardDisplayTitleBgColor.fields.a;
  b = multiCommandCardDisplayTitleBgColor.fields.b;
  g = multiCommandCardDisplayTitleBgColor.fields.g;
  r = multiCommandCardDisplayTitleBgColor.fields.r;
  a = multiCommandCardDisplayTitleColor.fields.a;
  v13 = multiCommandCardDisplayTitleColor.fields.b;
  v14 = multiCommandCardDisplayTitleColor.fields.g;
  v15 = multiCommandCardDisplayTitleColor.fields.r;
  if ( (byte_4D34A45 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34A45 = 1;
  }
  v22 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1C93AEC(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v23 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 6, 0, 0);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_62;
    v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v60.fields.currentCryptoKey = v27;
    *(_QWORD *)&v60.fields.fakeValue = v26;
    useServantId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v60, 0);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_62;
  }
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !Instance )
    goto LABEL_62;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Instance,
                                 useServantId,
                                 LimitCountByImageLimitCostumeIn,
                                 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_62;
  v58 = exceedCount;
  v57 = multiCommandCardDisplayTitle;
  v31 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v33 = NetworkManager_TypeInfo;
  }
  v34 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  userIdNumber = v33->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v34;
  *(_QWORD *)&v61.fields.fakeValue = v35;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v61, 0);
  if ( !MasterData_object )
    goto LABEL_62;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    userIdNumber,
    (int)Instance,
    0);
  v37 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                      userServantEntity->fields.svtId,
                                                      0);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v37, (int)v37, cardIndex, v38);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)ItemMaster__GetEntityByType((ItemMaster_o *)Instance, 25, 0);
  if ( !entity )
    goto LABEL_62;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_62;
  if ( LODWORD(commandCardParam->max_length) <= cardIndex )
    goto LABEL_63;
  if ( !Instance )
    goto LABEL_62;
  if ( !v31 )
    goto LABEL_62;
  klass = v31[9].klass;
  if ( !klass )
    goto LABEL_62;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_63:
    sub_1C93D34(Instance);
  saveNameList = (int)Instance->fields.saveNameList;
  v43 = commandCardParam->m_Items[cardIndex];
  v44 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v45 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_47371016(v45, v44, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0);
  v46 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_47371016(v46, v44, useServantId, ServantImageLimitSealAfter, 0, cardIndex, 0);
  if ( !v45 )
    goto LABEL_62;
  v45->fields.userCommandCodeId = UserCommandCodeId;
  v48 = v43 - saveNameList * v58;
  v45->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v47);
  v45->fields.commandCardParam = v48;
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_62;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v45,
    UserCommandCodeId,
    v48,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_62;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v48, 3, 1, 0);
  if ( !v46 )
    goto LABEL_62;
  v46->fields.userCommandCodeId = UserCommandCodeId;
  v46->fields.commandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                                (CommandCardExceedResultWindowComponent_o *)Instance,
                                UserCommandCodeId,
                                v49);
  v46->fields.commandCardParam = v43;
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_62;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v46,
    UserCommandCodeId,
    v43,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_62;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v43, 3, 1, 0);
  v51 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v48, v43, v51->static_fields->CommandCardParamUpMax, v50);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v57, 0);
  if ( !this->fields.multiCommandCardDisplayTitleLabel
    || (v52 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.multiCommandCardDisplayTitleLabel,
                                       0)) == 0) )
  {
LABEL_62:
    sub_1C93D2C(Instance, v25);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v52 ^ 1) & 1, 0);
  if ( (v52 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.multiCommandCardDisplayTitleLabel;
    if ( !Instance )
      goto LABEL_62;
    UILabel__set_text((UILabel_o *)Instance, v57, 0);
    if ( (float)((float)(a * a) + (float)((float)(v13 * v13) + (float)((float)(v15 * v15) + (float)(v14 * v14)))) >= 1.0e-10 )
    {
      Instance = (DataManager_o *)this->fields.multiCommandCardDisplayTitleLabel;
      if ( !Instance )
        goto LABEL_62;
      v62.fields.r = v15;
      v62.fields.g = v14;
      v62.fields.b = v13;
      v62.fields.a = a;
      UIWidget__set_color((UIWidget_o *)Instance, v62, 0);
    }
    if ( (float)((float)(value * value) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
    {
      Instance = (DataManager_o *)this->fields.multiCommandCardDisplayTitleBgSprite;
      if ( !Instance )
        goto LABEL_62;
      v63.fields.a = value;
      v63.fields.r = r;
      v63.fields.g = g;
      v63.fields.b = b;
      UIWidget__set_color((UIWidget_o *)Instance, v63, 0);
    }
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0, 0) )
  {
    v54 = -12.0;
    if ( (v52 & 1) != 0 )
      v54 = 0.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v54, 0);
  }
  v55 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0, 0);
}


void CommandCardExceedResultWindowComponent__SetLabels(
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

  if ( (byte_4D34A46 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3644/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_1C93AD4(&StringLiteral_3645/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_4D34A46 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3645/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0);
  v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0);
  v13 = System_String__Format_64467032(v10, NumberFormat, v12, 0);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v13, 0),
        afterStatusLabel = this->fields.afterStatusLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3644/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0),
        v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0),
        v13 = System_String__Format_64467032(v16, v17, v18, 0),
        !afterStatusLabel) )
  {
    sub_1C93D2C(v13, v14);
  }
  UILabel__set_text(afterStatusLabel, v13, 0);
}