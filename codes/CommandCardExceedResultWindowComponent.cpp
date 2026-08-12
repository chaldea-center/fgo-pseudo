void CommandCardExceedResultWindowComponent___ctor(
        CommandCardExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974ABC & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5974ABC = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t CommandCardExceedResultWindowComponent__GetCommandCodeId(
        CommandCardExceedResultWindowComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppClass *klass; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_5974ABB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974ABB = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v5);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v9.fields.currentCryptoKey = klass;
  *(_QWORD *)&v9.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
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

  if ( (byte_5974ABA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974ABA = 1;
  }
  entity = 0;
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  result = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
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
    sub_2213CDC(result, v7);
  if ( LODWORD(userCommandCodeIds->max_length) <= cardIndex )
    sub_2213CE4(0);
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
        int32_t displayTransformIndex,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float a; // s12
  float v14; // s13
  float v15; // s14
  float v16; // s15
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  int32_t CommandCardLimitCountStageSealAfter; // w0
  __int64 v29; // x1
  int32_t v30; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w25
  Il2CppObject *v32; // x26
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x27
  NetworkManager_c *v35; // x0
  __int64 v36; // x20
  __int64 v37; // x29
  int64_t userIdNumber; // x28
  CommandCardExceedResultWindowComponent_o *v39; // x0
  const MethodInfo *v40; // x3
  int64_t UserCommandCodeId; // x24
  struct System_Int32_array *commandCardParam; // x8
  Il2CppClass *klass; // x9
  int saveNameList; // w21
  int32_t v45; // w26
  int32_t v46; // w20
  BattleCommandData_o *v47; // x28
  BattleCommandData_o *v48; // x27
  const MethodInfo *v49; // x2
  int32_t v50; // w21
  int32_t CommandCodeId; // w8
  const MethodInfo *v52; // x2
  int32_t v53; // w8
  __int64 v54; // x1
  const MethodInfo *v55; // x4
  BalanceConfig_c *v56; // x0
  char v57; // w21
  UnityEngine_Object_o *commandCardBaseObj; // x20
  float v59; // s0
  System_Action_o *v60; // x20
  float value; // [xsp+4h] [xbp-BCh]
  System_String_o *v62; // [xsp+8h] [xbp-B8h]
  int32_t v63; // [xsp+14h] [xbp-ACh]
  UserServantCommandCardEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = multiCommandCardDisplayTitleBgColor.fields.b;
  g = multiCommandCardDisplayTitleBgColor.fields.g;
  value = multiCommandCardDisplayTitleBgColor.fields.a;
  r = multiCommandCardDisplayTitleBgColor.fields.r;
  a = multiCommandCardDisplayTitleColor.fields.a;
  v14 = multiCommandCardDisplayTitleColor.fields.b;
  v15 = multiCommandCardDisplayTitleColor.fields.g;
  v16 = multiCommandCardDisplayTitleColor.fields.r;
  if ( (byte_5974AB8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974AB8 = 1;
  }
  v24 = Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__;
  entity = 0;
  if ( (*((_BYTE *)Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_2213A78(Method_CommandCardExceedResultWindowComponent_SetCommandCardExceedInfo__);
  v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 6, 0, 0);
  if ( useServantId <= 0 )
  {
    if ( !userServantEntity )
      goto LABEL_58;
    useServantId = UserServantEntity__GetServantId(userServantEntity, displayTransformIndex, 0);
  }
  else if ( !userServantEntity )
  {
    goto LABEL_58;
  }
  CommandCardLimitCountStageSealAfter = UserServantEntity__GetCommandCardLimitCountStageSealAfter(
                                          userServantEntity,
                                          displayTransformIndex,
                                          0,
                                          0);
  v30 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CommandCardLimitCountStageSealAfter, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v29);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v30, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_58;
  v62 = multiCommandCardDisplayTitle;
  v32 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          useServantId,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  v63 = exceedCount;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v35 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
    v35 = NetworkManager_TypeInfo;
  }
  v37 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  userIdNumber = v35->static_fields->userIdNumber;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
  *(_QWORD *)&v65.fields.currentCryptoKey = v37;
  *(_QWORD *)&v65.fields.fakeValue = v36;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v65, 0);
  if ( !MasterData_object )
    goto LABEL_58;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)MasterData_object,
    &entity,
    userIdNumber,
    (int)Instance,
    0);
  v39 = (CommandCardExceedResultWindowComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                      userServantEntity->fields.svtId,
                                                      0);
  UserCommandCodeId = CommandCardExceedResultWindowComponent__GetUserCommandCodeId(v39, (int)v39, cardIndex, v40);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)ItemMaster__GetEntityByType((ItemMaster_o *)Instance, 25, 0);
  if ( !entity )
    goto LABEL_58;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    goto LABEL_58;
  if ( LODWORD(commandCardParam->max_length) <= cardIndex )
    goto LABEL_59;
  if ( !Instance )
    goto LABEL_58;
  if ( !v32 )
    goto LABEL_58;
  klass = v32[9].klass;
  if ( !klass )
    goto LABEL_58;
  if ( LODWORD(klass->_1.namespaze) <= cardIndex )
LABEL_59:
    sub_2213CE4(Instance);
  saveNameList = (int)Instance->fields.saveNameList;
  v45 = commandCardParam->m_Items[cardIndex];
  v46 = *((_DWORD *)&klass->_1.byval_arg.data + cardIndex);
  v47 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_53637188(v47, v46, useServantId, LimitCountByImageLimitCostumeIn, 0, cardIndex, 0);
  v48 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_53637188(v48, v46, useServantId, LimitCountByImageLimitCostumeIn, 0, cardIndex, 0);
  if ( !v47 )
    goto LABEL_58;
  v47->fields.userCommandCodeId = UserCommandCodeId;
  v50 = v45 - saveNameList * v63;
  CommandCodeId = CommandCardExceedResultWindowComponent__GetCommandCodeId(
                    (CommandCardExceedResultWindowComponent_o *)Instance,
                    UserCommandCodeId,
                    v49);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  v47->fields.commandCodeId = CommandCodeId;
  v47->fields.commandCardParam = v50;
  if ( !Instance )
    goto LABEL_58;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v47,
    UserCommandCodeId,
    v50,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.previousCommandCard;
  if ( !Instance )
    goto LABEL_58;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v50, 3, 1, 0);
  if ( !v48 )
    goto LABEL_58;
  v48->fields.userCommandCodeId = UserCommandCodeId;
  v53 = CommandCardExceedResultWindowComponent__GetCommandCodeId(
          (CommandCardExceedResultWindowComponent_o *)Instance,
          UserCommandCodeId,
          v52);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  v48->fields.commandCodeId = v53;
  v48->fields.commandCardParam = v45;
  if ( !Instance )
    goto LABEL_58;
  CombineCommandCardComponent__DispCommandCard(
    (CombineCommandCardComponent_o *)Instance,
    v48,
    UserCommandCodeId,
    v45,
    0,
    0,
    0);
  Instance = (DataManager_o *)this->fields.afterCommandCard;
  if ( !Instance )
    goto LABEL_58;
  BattleCommandComponent__SetPowerUpCardIcon((BattleCommandComponent_o *)Instance, v45, 3, 1, 0);
  v56 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v54);
    v56 = BalanceConfig_TypeInfo;
  }
  CommandCardExceedResultWindowComponent__SetLabels(this, v50, v45, v56->static_fields->CommandCardParamUpMax, v55);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(v62, 0);
  if ( !this->fields.multiCommandCardDisplayTitleLabel
    || (v57 = (char)Instance,
        (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.multiCommandCardDisplayTitleLabel,
                                       0)) == 0) )
  {
LABEL_58:
    sub_2213CDC(Instance, v27);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (v57 ^ 1) & 1, 0);
  if ( (v57 & 1) == 0 )
  {
    Instance = (DataManager_o *)this->fields.multiCommandCardDisplayTitleLabel;
    if ( !Instance )
      goto LABEL_58;
    UILabel__set_text((UILabel_o *)Instance, v62, 0);
    if ( (float)((float)(a * a) + (float)((float)(v14 * v14) + (float)((float)(v16 * v16) + (float)(v15 * v15)))) >= 1.0e-10 )
    {
      Instance = (DataManager_o *)this->fields.multiCommandCardDisplayTitleLabel;
      if ( !Instance )
        goto LABEL_58;
      v66.fields.r = v16;
      v66.fields.g = v15;
      v66.fields.b = v14;
      v66.fields.a = a;
      UIWidget__set_color((UIWidget_o *)Instance, v66, 0);
    }
    if ( (float)((float)(value * value) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
    {
      Instance = (DataManager_o *)this->fields.multiCommandCardDisplayTitleBgSprite;
      if ( !Instance )
        goto LABEL_58;
      v67.fields.r = r;
      v67.fields.g = g;
      v67.fields.a = value;
      v67.fields.b = b;
      UIWidget__set_color((UIWidget_o *)Instance, v67, 0);
    }
  }
  commandCardBaseObj = (UnityEngine_Object_o *)this->fields.commandCardBaseObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(commandCardBaseObj, 0, 0) )
  {
    v59 = 0.0;
    if ( (v57 & 1) == 0 )
      v59 = -12.0;
    GameObjectExtensions__SetLocalPositionY(this->fields.commandCardBaseObj, v59, 0);
  }
  v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5974AB9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3765/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_2213A60(&StringLiteral_3766/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_5974AB9 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&previousParam);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(previousParam, 0);
  v12 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0);
  v13 = System_String__Format_75697880(v10, NumberFormat, v12, 0);
  if ( !previousStatusLabel
    || (UILabel__set_text(previousStatusLabel, v13, 0),
        afterStatusLabel = this->fields.afterStatusLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0),
        v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(afterParam, 0),
        v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(maxParam, 0),
        v13 = System_String__Format_75697880(v16, v17, v18, 0),
        !afterStatusLabel) )
  {
    sub_2213CDC(v13, v14);
  }
  UILabel__set_text(afterStatusLabel, v13, 0);
}