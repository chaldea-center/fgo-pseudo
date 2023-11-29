// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int v15; // s1
  int v16; // s2
  int v17; // s0
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct CommandCardEquipmentControl_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct CommandCardEquipmentControl_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct CommandCardEquipmentControl_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct CommandCardEquipmentControl_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct CommandCardEquipmentControl_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct CommandCardEquipmentControl_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct CommandCardEquipmentControl_StaticFields *v74; // x0
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct CommandCardEquipmentControl_StaticFields *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct UnityEngine_Color_o v90; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40FA573 & 1) == 0 )
  {
    sub_B16FFC(&CommandCardEquipmentControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19608, v6);
    sub_B16FFC(&StringLiteral_19607, v7);
    sub_B16FFC(&StringLiteral_19202, v8);
    sub_B16FFC(&StringLiteral_17014, v9);
    sub_B16FFC(&StringLiteral_19679, v10);
    sub_B16FFC(&StringLiteral_16986, v11);
    sub_B16FFC(&StringLiteral_19609, v12);
    sub_B16FFC(&StringLiteral_17037, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_40FA573 = 1;
  }
  v15 = 1063321600;
  v16 = 1065156608;
  v17 = 0;
  v90 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v90);
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = v90;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_19202;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19202;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_19679;
  v26->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19679;
  sub_B16F98((BattleServantConfConponent_o *)&v26->UNLOCK_MESSAGE_SPRITE_NAME, v27, v28, v29, v30, v31, v32, v33);
  v34 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_19607;
  v34->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19607;
  sub_B16F98((BattleServantConfConponent_o *)&v34->EQUIPED_MESSAGE_SPRITE_NAME, v35, v36, v37, v38, v39, v40, v41);
  v42 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_19608;
  v42->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19608;
  sub_B16F98((BattleServantConfConponent_o *)&v42->SELECTED_MESSAGE_SPRITE_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_19609;
  v50->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19609;
  sub_B16F98((BattleServantConfConponent_o *)&v50->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v51, v52, v53, v54, v55, v56, v57);
  v58 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_1;
  v58->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&v58->DEFAULT_EXE_BTN_SPRITE_NAME, v59, v60, v61, v62, v63, v64, v65);
  v66 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_17037;
  v66->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17037;
  sub_B16F98((BattleServantConfConponent_o *)&v66->UNLOCK_EXE_BTN_SPRITE_NAME, v67, v68, v69, v70, v71, v72, v73);
  v74 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_16986;
  v74->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_16986;
  sub_B16F98((BattleServantConfConponent_o *)&v74->EQUIP_EXE_BTN_SPRITE_NAME, v75, v76, v77, v78, v79, v80, v81);
  v82 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v83 = (System_Int32_array **)StringLiteral_17014;
  v82->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17014;
  sub_B16F98((BattleServantConfConponent_o *)&v82->REPLACE_EXE_BTN_SPRITE_NAME, v83, v84, v85, v86, v87, v88, v89);
}


void __fastcall CommandCardEquipmentControl___ctor(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
        CommandCardEquipmentControl_o *this,
        int32_t nowKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserCommandCodeEntity_o **p_nowEquipedUserCommandCodeEntity; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Component_o *lockButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *commandCardEquipmentIcon; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  BattleCommandComponent_o *targetCommandCardData; // x0
  struct System_Int64_array *userCommandCodeIds; // x21
  __int64 MarkIndex; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t v34; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array **Entity; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UserCommandCodeEntity_o *v44; // x8
  __int128 v45; // q1
  CommandCardEquipmentControl_o *v46; // x0
  const MethodInfo *v47; // x2
  bool v48; // w0
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  UnityEngine_GameObject_o *commandCardInfoObj; // x0
  UnityEngine_GameObject_o *unlockItemInfoObj; // x0
  UnityEngine_GameObject_o *commandCardNotEquippedInfoObj; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *qpInfoObj; // x0
  const MethodInfo *v57; // x1
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UILabel_o *commandCardNotEquippedDetail; // x19
  System_String_o *v67; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-40h]

  if ( (byte_40FA551 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&nowKind);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_3157, v9);
    byte_40FA551 = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_48;
  gameObject = UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !gameObject )
    goto LABEL_48;
  if ( !nowKind )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    commandCardInfoObj = this->fields.commandCardInfoObj;
    if ( commandCardInfoObj )
    {
      UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0LL);
      unlockItemInfoObj = this->fields.unlockItemInfoObj;
      if ( unlockItemInfoObj )
      {
        UnityEngine_GameObject__SetActive(unlockItemInfoObj, 1, 0LL);
        commandCardNotEquippedInfoObj = this->fields.commandCardNotEquippedInfoObj;
        if ( commandCardNotEquippedInfoObj )
        {
          UnityEngine_GameObject__SetActive(commandCardNotEquippedInfoObj, 0, 0LL);
          cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
          if ( cancelButton )
          {
            v55 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
            if ( v55 )
            {
              UnityEngine_GameObject__SetActive(v55, 0, 0LL);
              qpInfoObj = this->fields.qpInfoObj;
              if ( qpInfoObj )
              {
                UnityEngine_GameObject__SetActive(qpInfoObj, 1, 0LL);
                CommandCardEquipmentControl__SetUnlockItemInfo(this, v57);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( nowKind == 1 )
  {
    if ( !this->fields.baseUserCommandCodeEntity )
    {
      v58 = this->fields.commandCardInfoObj;
      if ( !v58 )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive(v58, 0, 0LL);
      v59 = this->fields.unlockItemInfoObj;
      if ( !v59 )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive(v59, 0, 0LL);
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v60);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v61);
      v62 = (UnityEngine_Component_o *)this->fields.cancelButton;
      if ( !v62 )
        goto LABEL_48;
      v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
      if ( !v63 )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive(v63, 0, 0LL);
      v64 = this->fields.qpInfoObj;
      if ( !v64 )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive(v64, 0, 0LL);
      v65 = this->fields.commandCardNotEquippedInfoObj;
      if ( !v65 )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive(v65, 1, 0LL);
    }
    commandCardNotEquippedDetail = this->fields.commandCardNotEquippedDetail;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3157, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, v67, 0LL);
      return;
    }
LABEL_48:
    sub_B170D4();
  }
  if ( nowKind != 2 )
    return;
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_48;
  v20 = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !v20 )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(v20, 1, 0LL);
  v21 = this->fields.commandCardInfoObj;
  if ( !v21 )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(v21, 1, 0LL);
  v22 = this->fields.unlockItemInfoObj;
  if ( !v22 )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(v22, 0, 0LL);
  v23 = this->fields.commandCardNotEquippedInfoObj;
  if ( !v23 )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(v23, 0, 0LL);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v24);
  v25 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v25 )
    goto LABEL_48;
  v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
  if ( !v26 )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(v26, 0, 0LL);
  v27 = this->fields.qpInfoObj;
  if ( !v27 )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(v27, 0, 0LL);
  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    goto LABEL_48;
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    goto LABEL_48;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL);
  if ( !userCommandCodeIds )
    goto LABEL_48;
  if ( (unsigned int)MarkIndex >= userCommandCodeIds->max_length )
  {
    sub_B17100(MarkIndex, v32, v33);
    sub_B170A0();
  }
  v34 = userCommandCodeIds->m_Items[(int)MarkIndex];
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_48;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v34,
                                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    Entity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_48;
  v45 = *(_OWORD *)&v44->fields.id.fields.fakeValue;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v44->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v45;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v46 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v68, 0LL);
  v48 = CommandCardEquipmentControl__EnableReplace(v46, (int64_t)v46, v47);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v48, v49);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v50);
}


bool __fastcall CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_40FA556 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, dic);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40FA556 = 1;
  }
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_9;
  v7 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v10, 0LL);
  if ( !dic )
LABEL_9:
    sub_B170D4();
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           v8,
           (const MethodInfo_2E0F100 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
}


void __fastcall CommandCardEquipmentControl__CheckOpenDialogType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *targetCommandCardData; // x20
  const MethodInfo *v6; // x1
  struct CombineCommandCardComponent_o *v7; // x8
  BattleCommandData_o *data; // x21
  UserServantCommandCodeMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_long__long__o *EquippedCommandCodeDic; // x20
  const MethodInfo *v12; // x3
  CommandCardEquipmentControl_o *v13; // x0
  System_Collections_Generic_Dictionary_long__long__o *v14; // x1
  bool v15; // w2
  CombineRootComponent_o *v16; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FA555 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA555 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
  {
    v7 = this->fields.targetCommandCardData;
    if ( v7 )
    {
      if ( !v7->fields._NowKind_k__BackingField )
      {
        CommandCardEquipmentControl__OpenUnlockDialog(this, v6);
        return;
      }
      data = v7->fields.data;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        EquippedCommandCodeDic = UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
                                   Master_WarQuestSelectionMaster,
                                   0LL);
        if ( data && BattleCommandData__IsEnableCommandCode(data, 0LL) )
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v10) )
          {
            v13 = this;
            v14 = EquippedCommandCodeDic;
            v15 = 0;
LABEL_20:
            CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(v13, v14, v15, v12);
            return;
          }
          combineRootComponent = this->fields.combineRootComponent;
          if ( combineRootComponent )
          {
            CombineRootComponent__RequestReplaceCommandCode(combineRootComponent, 0LL);
            return;
          }
        }
        else
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v10) )
          {
            v15 = 1;
            v13 = this;
            v14 = EquippedCommandCodeDic;
            goto LABEL_20;
          }
          v16 = this->fields.combineRootComponent;
          if ( v16 )
          {
            CombineRootComponent__RequestEquipCommandCode(v16, 0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall CommandCardEquipmentControl__CheckSelectedBaseServant(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x21
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UnityEngine_GameObject_o *baseSelectInfoObj; // x0
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-40h]

  if ( (byte_40FA54D & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_40FA54D = 1;
  }
  if ( !selectBase )
  {
    CommandCardEquipmentControl__InitDispBaseServantInfo(this, (const MethodInfo *)selectBase);
    CommandCardEquipmentControl__InitDisplayInfo(this, v20);
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v21);
    baseSelectInfoObj = this->fields.baseSelectInfoObj;
    this->fields.isBaseSelect = 0;
    if ( baseSelectInfoObj )
    {
      UnityEngine_GameObject__SetActive(baseSelectInfoObj, 1, 0LL);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v23);
      p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
      goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
  p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v25 = v26;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v25, 0LL);
    v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v9;
    if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v24, 0LL) )
    {
      CommandCardEquipmentControl__InitDisplayInfo(this, v10);
      CommandCardEquipmentControl__InitDispCommandCardInfo(this, v11);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v12);
    }
  }
  v13 = this->fields.baseSelectInfoObj;
  if ( !v13 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v13, 0, 0LL);
  this->fields.isBaseSelect = 1;
LABEL_14:
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B16F98(p_baseUserServantEntity, (System_Int32_array **)selectBase, v14, v15, v16, v17, v18, v19);
}


void __fastcall CommandCardEquipmentControl__CloseRemoveCommandCodeDialog(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_25813212(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestRemoveCommandCode(combineRootComponent, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCard(
        CommandCardEquipmentControl_o *this,
        int32_t targetCommandCardIdx,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *commandCodeAppearEffect; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Transform_o *v24; // x21
  int v25; // s0
  const MethodInfo *v28; // x2

  if ( (byte_40FA570 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FA570 = 1;
  }
  commandCodeAppearEffect = this->fields.commandCodeAppearEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeAppearEffect,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v10,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v12 = Component_srcLineSprite;
  transform = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_15;
  if ( commandCardList->max_length <= targetCommandCardIdx )
  {
    sub_B17100(transform, v14, v15);
    sub_B170A0();
  }
  v17 = transform;
  v18 = (UnityEngine_Component_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !v18
    || (v19 = UnityEngine_Component__get_transform(v18, 0LL), !v17)
    || (UnityEngine_Transform__set_parent(v17, v19, 0LL),
        v20 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL),
        !v20)
    || (UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL),
        v24 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL),
        !v24) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, v28);
  return (CommandCodeEffectComponent_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o *commandCodeFlashEffect; // x19
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0

  if ( (byte_40FA572 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA572 = 1;
  }
  commandCodeFlashEffect = this->fields.commandCodeFlashEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeFlashEffect,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v6,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  v8 = Component_srcLineSprite;
  transform = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_14;
  v11 = transform;
  gameObject = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !gameObject
    || (v13 = UnityEngine_GameObject__get_transform(gameObject, 0LL), !v11)
    || (UnityEngine_Transform__set_parent(v11, v13, 0LL),
        v14 = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL),
        !v14)
    || (UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        v18 = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
        !v18) )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  return (CommandCodeEffectComponent_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateRemoveEffectOnCard(
        CommandCardEquipmentControl_o *this,
        int32_t targetCommandCardIdx,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *commandCardDetachEffect; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Transform_o *v24; // x21
  int v25; // s0
  const MethodInfo *v28; // x2

  if ( (byte_40FA56F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FA56F = 1;
  }
  commandCardDetachEffect = this->fields.commandCardDetachEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardDetachEffect,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v10,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v12 = Component_srcLineSprite;
  transform = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_15;
  if ( commandCardList->max_length <= targetCommandCardIdx )
  {
    sub_B17100(transform, v14, v15);
    sub_B170A0();
  }
  v17 = transform;
  v18 = (UnityEngine_Component_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !v18
    || (v19 = UnityEngine_Component__get_transform(v18, 0LL), !v17)
    || (UnityEngine_Transform__set_parent(v17, v19, 0LL),
        v20 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL),
        !v20)
    || (UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL),
        v24 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL),
        !v24) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, v28);
  return (CommandCodeEffectComponent_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateReplaceEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_o *commandCodeReplaceEffect; // x19
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0

  if ( (byte_40FA571 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA571 = 1;
  }
  commandCodeReplaceEffect = this->fields.commandCodeReplaceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeReplaceEffect,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v6 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v6,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  v8 = Component_srcLineSprite;
  transform = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_14;
  v11 = transform;
  gameObject = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !gameObject
    || (v13 = UnityEngine_GameObject__get_transform(gameObject, 0LL), !v11)
    || (UnityEngine_Transform__set_parent(v11, v13, 0LL),
        v14 = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL),
        !v14)
    || (UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        v18 = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
        !v18) )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  return (CommandCodeEffectComponent_o *)v8;
}


bool __fastcall CommandCardEquipmentControl__EnableReplace(
        CommandCardEquipmentControl_o *this,
        int64_t nowEquipedUserCommandCodeId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserCommandCodeMaster_o *Master_WarQuestSelectionMaster; // x0
  UserCommandCodeEntity_array *List; // x0
  UserCommandCodeEntity_array *v11; // x20
  UserServantCommandCodeMaster_o *v12; // x0
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w23
  System_Collections_Generic_List_long__o *v17; // x21
  BalanceConfig_c *v18; // x8
  int64_t v19; // x0
  __int64 v20; // x24
  int v21; // w25
  UserCommandCodeEntity_o *v22; // x22
  __int128 v23; // q0
  __int128 v24; // q0
  int64_t v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-70h]

  if ( (byte_40FA552 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, nowEquipedUserCommandCodeId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_40FA552 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserCommandCodeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  List = UserCommandCodeMaster__getList(Master_WarQuestSelectionMaster, 0LL);
  if ( !List || (v11 = List, !*(_QWORD *)&List->max_length) )
  {
LABEL_35:
    LOBYTE(v19) = 1;
    return v19;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v12 = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !v12 )
LABEL_38:
    sub_B170D4();
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(v12, 0LL);
  max_length = v11->max_length;
  v17 = EquipedCommandCodeList;
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v19 = 1LL;
  if ( v18->static_fields->CommandCodeFrameMax <= max_length && max_length >= 1 )
  {
    v20 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v20 >= v11->max_length )
      {
        sub_B17100(v19, v14, v15);
        sub_B170A0();
      }
      v22 = v11->m_Items[v20];
      if ( !v22 )
        goto LABEL_38;
      v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v23;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v28 = v29;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v28, 0LL);
      if ( v19 != nowEquipedUserCommandCodeId )
      {
        v24 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v27 = v29;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v27, 0LL);
        if ( !v17 )
          goto LABEL_38;
        v19 = System_Collections_Generic_List_long___Contains(
                v17,
                v25,
                (const MethodInfo_2F168F4 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (v19 & 1) != 0 )
        {
          ++v21;
          v19 = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( v21 >= *(_DWORD *)(*(_QWORD *)(v19 + 184) + 144LL) )
            break;
        }
      }
      if ( (int)++v20 >= max_length )
        goto LABEL_35;
    }
    LOBYTE(v19) = 0;
  }
  return v19;
}


UserCommandCodeEntity_o *__fastcall CommandCardEquipmentControl__GetBaseSelectedCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseUserCommandCodeEntity;
}


UserServantEntity_o *__fastcall CommandCardEquipmentControl__GetBaseSelectedServant(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  UserServantEntity_o **p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-30h]

  if ( (byte_40FA566 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40FA566 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0LL;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v13, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    Master_WarQuestSelectionMaster,
    p_baseUserServantEntity,
    v10,
    (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return *p_baseUserServantEntity;
}


int32_t __fastcall CommandCardEquipmentControl__GetCommandCodeId(
        CommandCardEquipmentControl_o *this,
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

  if ( (byte_40FA54C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA54C = 1;
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


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_40FA554 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA554 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
}


UserCommandCodeEntity_o *__fastcall CommandCardEquipmentControl__GetNowEquipedCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  return this->fields.nowEquipedUserCommandCodeEntity;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CommandCardEquipmentControl__GetTargetIndexCommandCodeId(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8

  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    return -1LL;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    sub_B170D4();
  if ( userCommandCodeIds->max_length <= index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  return userCommandCodeIds->m_Items[index];
}


int32_t __fastcall CommandCardEquipmentControl__GetTutorialOpenType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  return 47;
}


void __fastcall CommandCardEquipmentControl__InitCommandCardSelectStatus(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w20
  il2cpp_array_size_t v11; // w21
  CombineCommandCardComponent_o *v12; // x0
  UnityEngine_Component_o *lockButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_8;
  max_length = commandCardList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= commandCardList->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v12 = commandCardList->m_Items[v11];
      if ( !v12 )
        break;
      CombineCommandCardComponent__SetSelectedSprite(v12, 0, 0LL);
      if ( (int)++v11 >= max_length )
        goto LABEL_9;
      commandCardList = this->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_8:
    sub_B170D4();
  }
LABEL_9:
  this->fields.targetCommandCardData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitCommandCodeInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandCardInfoObj; // x0
  UnityEngine_GameObject_o *unlockItemInfoObj; // x0
  UnityEngine_GameObject_o *commandCardNotEquippedInfoObj; // x0

  commandCardInfoObj = this->fields.commandCardInfoObj;
  if ( !commandCardInfoObj
    || (UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0LL),
        (unlockItemInfoObj = this->fields.unlockItemInfoObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(unlockItemInfoObj, 0, 0LL),
        (commandCardNotEquippedInfoObj = this->fields.commandCardNotEquippedInfoObj) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(commandCardNotEquippedInfoObj, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitCommnadCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  int max_length; // w20
  il2cpp_array_size_t v9; // w21
  LimitCntUpItemComponent_o *v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *baseSelectInfoObj; // x0

  EventTutorialMaster__CheckTutorial(0, 47, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isBaseSelect = 0;
  CommandCardEquipmentControl__InitCommandCodeInfo(this, v3);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_8;
  max_length = unlockItemInfoList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= unlockItemInfoList->max_length )
      {
        sub_B17100(v4, v5, v6);
        sub_B170A0();
      }
      v10 = unlockItemInfoList->m_Items[v9];
      if ( !v10 )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(v10, 0LL);
      if ( (int)++v9 >= max_length )
        goto LABEL_9;
      unlockItemInfoList = this->fields.unlockItemInfoList;
    }
    while ( unlockItemInfoList );
LABEL_8:
    sub_B170D4();
  }
LABEL_9:
  CommandCardEquipmentControl__InitDisplayInfo(this, v5);
  CommandCardEquipmentControl__InitDispCommandCardInfo(this, v11);
  CommandCardEquipmentControl__InitDispBaseServantInfo(this, v12);
  baseSelectInfoObj = this->fields.baseSelectInfoObj;
  if ( !baseSelectInfoObj )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(baseSelectInfoObj, 1, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitDispBaseServantInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_baseUserServantEntity; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Component_o **v29; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40FA548 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA548 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_B16F98((BattleServantConfConponent_o *)p_baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseUserServantEntity[45] = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)(p_baseUserServantEntity + 45), 0LL, v10, v11, v12, v13, v14, v15);
  p_baseUserServantEntity[46] = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)(p_baseUserServantEntity + 46), 0LL, v16, v17, v18, v19, v20, v21);
  p_baseUserServantEntity[48] = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)(p_baseUserServantEntity + 48), 0LL, v22, v23, v24, v25, v26, v27);
  v28 = (UnityEngine_Object_o *)p_baseUserServantEntity[44];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    v29 = (UnityEngine_Component_o **)(p_baseUserServantEntity + 44);
    if ( !*v29 )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v29, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *v29 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)v29, 0LL, v31, v32, v33, v34, v35, v36);
  }
}


void __fastcall CommandCardEquipmentControl__InitDispCommandCardInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Component_o *lockButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w21
  il2cpp_array_size_t v16; // w22
  Il2CppClass **v17; // x8
  CombineCommandCardComponent_o *v18; // x20

  this->fields.targetCommandCardData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_10;
  max_length = commandCardList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= commandCardList->max_length )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      v17 = &commandCardList->obj.klass + (int)v16;
      v18 = (CombineCommandCardComponent_o *)v17[4];
      if ( !v18 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v17[4], 0, 0LL);
      CombineCommandCardComponent__SetCommandCardEnable(v18, 0, 0LL);
      if ( (int)++v16 >= max_length )
        return;
      commandCardList = this->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_10:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__InitDisplayInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *qpInfoObj; // x0
  UIWidget_o *spendQpLabel; // x20
  int v5; // s0
  const MethodInfo *v9; // x1

  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL),
        spendQpLabel = (UIWidget_o *)this->fields.spendQpLabel,
        *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL),
        !spendQpLabel) )
  {
    sub_B170D4();
  }
  UIWidget__set_color(spendQpLabel, *(UnityEngine_Color_o *)&v5, 0LL);
  this->fields.isShortNeedItem = 0;
  *(_WORD *)&this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__ModifyCommandCard(
        CommandCardEquipmentControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  CommandCardEquipmentControl_o *v6; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  CombineCommandCardComponent_o *v8; // x20
  BattleCommandData_o *data; // x23
  BattleCommandData_o *v10; // x22
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int64_t v13; // x19

  v6 = this;
  if ( (byte_40FA54B & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_B16FFC(&BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex);
    byte_40FA54B = 1;
  }
  commandCardList = v6->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v8 = commandCardList->m_Items[cardIndex];
  if ( !v8
    || (data = v8->fields.data,
        v10 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex, method, v3, v4),
        BattleCommandData___ctor_18726640(v10, data, 0LL),
        (baseUserServantCommandCodeEntity = v6->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
LABEL_12:
    sub_B17100(this, *(_QWORD *)&cardIndex, method);
    sub_B170A0();
  }
  if ( !v10 )
    goto LABEL_11;
  v13 = userCommandCodeIds->m_Items[cardIndex];
  v10->fields.userCommandCodeId = v13;
  v10->fields.commandCodeId = CommandCardEquipmentControl__GetCommandCodeId(this, v13, method);
  CombineCommandCardComponent__ModifyCommandCard(v8, v10, v13, 0LL);
}


void __fastcall CommandCardEquipmentControl__MoidfyUserSvtCommandCode(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  int64_t v11; // x22
  __int64 v12; // x20
  __int64 v13; // x23
  int32_t v14; // w0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_40FA54A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userServantEntity);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA54A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userServantEntity )
    goto LABEL_16;
  v11 = UserId;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v13;
  *(_QWORD *)&v24.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B170D4();
  if ( UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v11, v14, 0LL) )
  {
    v21 = (System_Int32_array **)entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v21 = 0LL;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_baseUserServantCommandCodeEntity, v21, v15, v16, v17, v18, v19, v20);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FA561 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA561 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickEmptyEquip(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FA560 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA560 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FA55C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA55C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  CommandCardEquipmentControl__OpenLockDialog(this, v3);
}


void __fastcall CommandCardEquipmentControl__OnLongPushCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_baseUserCommandCodeEntity; // x19
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x20
  int64_t v17; // x0
  System_Int32_array **Entity; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WebViewManager_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UserCommandCodeEntity_o *v30; // x19
  CommonUI_o *v31; // x20
  CommandCardEquipmentControl___c_c *v32; // x8
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__102_0; // x21
  Il2CppObject *v35; // x22
  struct CommandCardEquipmentControl___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-50h]

  if ( (byte_40FA562 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v3);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__102_0__, v9);
    sub_B16FFC(&CommandCardEquipmentControl___c_TypeInfo, v10);
    byte_40FA562 = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    p_baseUserCommandCodeEntity = (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_24;
    byval_arg = klass->_1.byval_arg;
    v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v44.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v43 = v44;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v43, 0LL);
    if ( !v16 )
      goto LABEL_24;
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v16,
                                      v17,
                                      (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B16F98(p_baseUserCommandCodeEntity, Entity, v19, v20, v21, v22, v23, v24);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v31 = (CommonUI_o *)v25;
    v32 = CommandCardEquipmentControl___c_TypeInfo;
    if ( (BYTE3(CommandCardEquipmentControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo);
      v32 = CommandCardEquipmentControl___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__102_0 = static_fields->__9__102_0;
    if ( !_9__102_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__102_0 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v26,
                                                         v27,
                                                         v28,
                                                         v29);
      ServantStatusDialog_EndDelegate___ctor(
        _9__102_0,
        v35,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__102_0__,
        0LL);
      v36 = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      v36->__9__102_0 = _9__102_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v36->__9__102_0,
        (System_Int32_array **)_9__102_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    if ( !v31 )
LABEL_24:
      sub_B170D4();
    CommonUI__OpenServantStatusDialog_18250552(v31, 0, v30, _9__102_0, 0LL, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnRemoveCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommandCardDialog_o *commandCardDialog; // x20
  UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommandCardDialog_ClickDelegate_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_40FA55D & 1) == 0 )
  {
    sub_B16FFC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA55D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v11 = (CommandCardDialog_ClickDelegate_o *)sub_B170CC(CommandCardDialog_ClickDelegate_TypeInfo, v7, v8, v9, v10);
  CommandCardDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    0LL);
  if ( !commandCardDialog )
    sub_B170D4();
  CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v11, v12);
}


void __fastcall CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FA55E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA55E = 1;
  }
  if ( this->fields.nowEquipedUserCommandCodeEntity )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      sub_B170D4();
    CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnReplaceReset(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  const MethodInfo *v9; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v11; // x2

  if ( (byte_40FA55F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA55F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v3, v4, v5, v6, v7, v8);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_B170D4();
  CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
    this,
    targetCommandCardData->fields._NowKind_k__BackingField,
    v9);
  CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        bool isCommandCardEmpty,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *v37; // x27
  System_String_o *v38; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v40; // x23
  __int64 v41; // x24
  __int64 v42; // x25
  int32_t v43; // w0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v45; // q1
  int32_t v46; // w24
  int64_t v47; // x0
  struct UserCommandCodeEntity_o *v48; // x8
  __int128 v49; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  int64_t v51; // x0
  __int64 v52; // x21
  __int64 v53; // x21
  CommonUI_o *v54; // x21
  System_String_o *v55; // x22
  System_String_o *v56; // x24
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  CommonConfirmDialog_ClickDelegate_o *v61; // x25
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v63; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x23
  __int64 v65; // x24
  __int64 v66; // x25
  int32_t v67; // w0
  UserServantCollectionMaster_o *v68; // x24
  int64_t UserId; // x0
  struct UserServantEntity_o *v70; // x8
  int64_t v71; // x25
  int32_t v72; // w0
  UserServantCollectionEntity_o *v73; // x0
  int32_t maxLimitCount; // w25
  WarQuestSelectionMaster_o *v75; // x0
  struct UserServantEntity_o *v76; // x8
  ServantLimitMaster_o *v77; // x24
  __int64 v78; // x26
  __int64 v79; // x27
  int32_t v80; // w0
  ServantLimitEntity_o *v81; // x24
  WarQuestSelectionMaster_o *v82; // x0
  struct UserServantEntity_o *v83; // x8
  ServantLimitImageMaster_o *v84; // x26
  int32_t v85; // w0
  int32_t ServantLimitCountSealAfter; // w27
  WarQuestSelectionMaster_o *v87; // x0
  struct UserCommandCodeEntity_o *v88; // x8
  __int128 v89; // q1
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // x25
  int64_t v91; // x0
  int32_t Item; // w0
  ServantEntity_o *v93; // x25
  UserServantCollectionMaster_o *v94; // x27
  int64_t v95; // x0
  struct UserCommandCodeEntity_o *v96; // x8
  __int128 v97; // q0
  int64_t v98; // x28
  int64_t v99; // x0
  int32_t v100; // w0
  UserServantCollectionEntity_o *v101; // x0
  int32_t v102; // w28
  WarQuestSelectionMaster_o *v103; // x0
  struct UserCommandCodeEntity_o *v104; // x8
  __int128 v105; // q0
  ServantLimitMaster_o *v106; // x27
  int64_t v107; // x0
  int32_t v108; // w0
  ServantLimitEntity_o *v109; // x27
  WarQuestSelectionMaster_o *v110; // x0
  struct UserCommandCodeEntity_o *v111; // x8
  __int128 v112; // q0
  ServantLimitImageMaster_o *v113; // x21
  int64_t v114; // x0
  int32_t v115; // w0
  int32_t v116; // w0
  int32_t v117; // w28
  System_String_o *v118; // x21
  __int64 v119; // x2
  __int64 v120; // x22
  System_String_o *Name; // x0
  __int64 v122; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x26
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x26
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x23
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x23
  int32_t rarity; // w23
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x23
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Int32_array **v160; // x23
  System_String_o *v161; // x21
  __int64 v162; // x22
  __int64 v163; // x22
  CommonUI_o *v164; // x22
  System_String_o *v165; // x23
  System_String_o *v166; // x24
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  CommonConfirmDialog_ClickDelegate_o *v171; // x25
  int32_t limitCount; // [xsp+3Ch] [xbp-154h]
  System_String_o *v173; // [xsp+40h] [xbp-150h]
  ServantEntity_o *Entity; // [xsp+48h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v176; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v177; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+110h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  if ( (byte_40FA557 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, dic);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&object___TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B16FFC(&Rarity_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v21);
    sub_B16FFC(
      &Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__0__,
      v22);
    sub_B16FFC(
      &Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__1__,
      v23);
    sub_B16FFC(&CommandCardEquipmentControl___c__DisplayClass89_0_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_3231, v25);
    sub_B16FFC(&StringLiteral_3229, v26);
    sub_B16FFC(&StringLiteral_3230, v27);
    sub_B16FFC(&StringLiteral_3255, v28);
    sub_B16FFC(&StringLiteral_3258, v29);
    byte_40FA557 = 1;
  }
  v30 = sub_B170CC(CommandCardEquipmentControl___c__DisplayClass89_0_TypeInfo, dic, isCommandCardEmpty, method, v4);
  CommandCardEquipmentControl___c__DisplayClass89_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass89_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_117;
  *(_QWORD *)(v30 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_BYTE *)(v30 + 24) = isCommandCardEmpty;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3231, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3230, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v40 = v38;
    v42 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v182.fields.currentCryptoKey = v42;
    *(_QWORD *)&v182.fields.fakeValue = v41;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v182, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_117;
    v45 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v46 = v43;
    *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v181.fields.fakeValue = v45;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v180 = v181;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v180, 0LL);
    if ( !dic )
      goto LABEL_117;
    if ( System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v47,
           (const MethodInfo_2E0EDC8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__) == v46 )
    {
      v48 = this->fields.baseUserCommandCodeEntity;
      if ( v48 )
      {
        v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v181.fields.fakeValue = v49;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v179 = v181;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v179, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             v51,
                                                                             0LL);
          v52 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
          if ( (*(_BYTE *)(v52 + 306) & 1) == 0 )
            sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
          v53 = **(_QWORD **)(v52 + 192);
          if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
            sub_AAFCFC(v53);
          v54 = **(CommonUI_o ***)(v53 + 184);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
          v61 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                         CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                         v57,
                                                         v58,
                                                         v59,
                                                         v60);
          CommonConfirmDialog_ClickDelegate___ctor(
            v61,
            (Il2CppObject *)v30,
            Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v54 )
          {
            CommonUI__OpenConfirmDecideDlg(v54, v37, v40, v55, v56, v61, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
            return;
          }
        }
      }
LABEL_117:
      sub_B170D4();
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v63 = this->fields.baseUserServantEntity;
  if ( !v63 )
    goto LABEL_117;
  v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v183.fields.currentCryptoKey = v66;
  *(_QWORD *)&v183.fields.fakeValue = v65;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v183, 0LL);
  if ( !v64 )
    goto LABEL_117;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v64,
                                v67,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v68 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v70 = this->fields.baseUserServantEntity;
  if ( !v70 )
    goto LABEL_117;
  v71 = UserId;
  v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v70->fields.svtId, 0LL);
  if ( !v68 )
    goto LABEL_117;
  v73 = UserServantCollectionMaster__GetEntity(v68, v71, v72, 0LL);
  if ( v73 )
    maxLimitCount = v73->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v173 = v37;
  v75 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v76 = this->fields.baseUserServantEntity;
  if ( !v76 )
    goto LABEL_117;
  v77 = (ServantLimitMaster_o *)v75;
  v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
  v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v184.fields.currentCryptoKey = v79;
  *(_QWORD *)&v184.fields.fakeValue = v78;
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v184, 0LL);
  if ( !v77 )
    goto LABEL_117;
  v81 = ServantLimitMaster__GetEntity(v77, v80, maxLimitCount, 0LL);
  v82 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v83 = this->fields.baseUserServantEntity;
  if ( !v83 )
    goto LABEL_117;
  v84 = (ServantLimitImageMaster_o *)v82;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83->fields.svtId, 0LL);
  if ( !v84 )
    goto LABEL_117;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v84, v85, maxLimitCount, 0LL);
  v87 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v88 = this->fields.baseUserCommandCodeEntity;
  if ( !v88 )
    goto LABEL_117;
  v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
  v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)v87;
  *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v181.fields.fakeValue = v89;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v178 = v181;
  v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v178, 0LL);
  if ( !dic )
    goto LABEL_117;
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v91,
           (const MethodInfo_2E0EDC8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v90 )
    goto LABEL_117;
  limitCount = ServantLimitCountSealAfter;
  v93 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v90,
                             Item,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v94 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v95 = NetworkManager__get_UserId(0LL);
  v96 = this->fields.baseUserCommandCodeEntity;
  if ( !v96 )
    goto LABEL_117;
  v97 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
  v98 = v95;
  *(_OWORD *)&v177.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v177.fields.fakeValue = v97;
  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v177, 0LL);
  v100 = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v99,
           (const MethodInfo_2E0EDC8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v94 )
    goto LABEL_117;
  v101 = UserServantCollectionMaster__GetEntity(v94, v98, v100, 0LL);
  if ( v101 )
    v102 = v101->fields.maxLimitCount;
  else
    v102 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v103 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v104 = this->fields.baseUserCommandCodeEntity;
  if ( !v104 )
    goto LABEL_117;
  v105 = *(_OWORD *)&v104->fields.id.fields.fakeValue;
  v106 = (ServantLimitMaster_o *)v103;
  *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v104->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v181.fields.fakeValue = v105;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v176 = v181;
  v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v176, 0LL);
  v108 = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v107,
           (const MethodInfo_2E0EDC8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v106 )
    goto LABEL_117;
  v109 = ServantLimitMaster__GetEntity(v106, v108, v102, 0LL);
  v110 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v111 = this->fields.baseUserCommandCodeEntity;
  if ( !v111 )
    goto LABEL_117;
  v112 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
  v113 = (ServantLimitImageMaster_o *)v110;
  *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v175.fields.fakeValue = v112;
  v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v175, 0LL);
  v115 = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v114,
           (const MethodInfo_2E0EDC8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v113 )
    goto LABEL_117;
  v116 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v113, v115, v102, 0LL);
  if ( v81 && Entity && v93 && v109 )
  {
    v117 = v116;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v118 = LocalizationManager__Get((System_String_o *)StringLiteral_3229, 0LL);
    v120 = sub_B17014(object___TypeInfo, 6LL, v119);
    Name = ServantEntity__getName(Entity, limitCount, -1, 0LL);
    if ( !v120 )
      goto LABEL_117;
    v129 = (System_Int32_array **)Name;
    if ( !Name || (Name = (System_String_o *)sub_B170BC(Name, *(_QWORD *)(*(_QWORD *)v120 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v120 + 24) )
        goto LABEL_118;
      *(_QWORD *)(v120 + 32) = v129;
      sub_B16F98((BattleServantConfConponent_o *)(v120 + 32), v129, v123, v124, v125, v126, v127, v128);
      Name = ServantEntity__getName(v93, v117, -1, 0LL);
      v135 = (System_Int32_array **)Name;
      if ( !Name || (Name = (System_String_o *)sub_B170BC(Name, *(_QWORD *)(*(_QWORD *)v120 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v120 + 24) <= 1u )
          goto LABEL_118;
        *(_QWORD *)(v120 + 40) = v135;
        sub_B16F98((BattleServantConfConponent_o *)(v120 + 40), v135, v123, v130, v131, v132, v133, v134);
        Name = ServantEntity__getClassName(Entity, 0LL);
        v141 = (System_Int32_array **)Name;
        if ( !Name || (Name = (System_String_o *)sub_B170BC(Name, *(_QWORD *)(*(_QWORD *)v120 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v120 + 24) <= 2u )
            goto LABEL_118;
          *(_QWORD *)(v120 + 48) = v141;
          sub_B16F98((BattleServantConfConponent_o *)(v120 + 48), v141, v123, v136, v137, v138, v139, v140);
          Name = ServantEntity__getClassName(v93, 0LL);
          v147 = (System_Int32_array **)Name;
          if ( !Name || (Name = (System_String_o *)sub_B170BC(Name, *(_QWORD *)(*(_QWORD *)v120 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v120 + 24) <= 3u )
              goto LABEL_118;
            *(_QWORD *)(v120 + 56) = v147;
            sub_B16F98((BattleServantConfConponent_o *)(v120 + 56), v147, v123, v142, v143, v144, v145, v146);
            rarity = v81->fields.rarity;
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Name = Rarity__getRarityType(rarity, 0LL);
            v154 = (System_Int32_array **)Name;
            if ( !Name || (Name = (System_String_o *)sub_B170BC(Name, *(_QWORD *)(*(_QWORD *)v120 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v120 + 24) <= 4u )
                goto LABEL_118;
              *(_QWORD *)(v120 + 64) = v154;
              sub_B16F98((BattleServantConfConponent_o *)(v120 + 64), v154, v123, v149, v150, v151, v152, v153);
              Name = Rarity__getRarityType(v109->fields.rarity, 0LL);
              v160 = (System_Int32_array **)Name;
              if ( !Name || (Name = (System_String_o *)sub_B170BC(Name, *(_QWORD *)(*(_QWORD *)v120 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v120 + 24) > 5u )
                {
                  *(_QWORD *)(v120 + 72) = v160;
                  sub_B16F98((BattleServantConfConponent_o *)(v120 + 72), v160, v123, v155, v156, v157, v158, v159);
                  v161 = System_String__Format_43822456(v118, (System_Object_array *)v120, 0LL);
                  v162 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
                  if ( (*(_BYTE *)(v162 + 306) & 1) == 0 )
                    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
                  v163 = **(_QWORD **)(v162 + 192);
                  if ( (*(_BYTE *)(v163 + 306) & 1) == 0 )
                    sub_AAFCFC(v163);
                  v164 = **(CommonUI_o ***)(v163 + 184);
                  v165 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
                  v166 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
                  v171 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v167,
                                                                  v168,
                                                                  v169,
                                                                  v170);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v171,
                    (Il2CppObject *)v30,
                    Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                    0LL);
                  if ( !v164 )
                    goto LABEL_117;
                  CommonUI__OpenConfirmDecideDlg(
                    v164,
                    v173,
                    v161,
                    v165,
                    v166,
                    v171,
                    28,
                    0.0,
                    15.0,
                    0,
                    0,
                    0,
                    240,
                    0,
                    0LL);
                  return;
                }
LABEL_118:
                sub_B17100(Name, v122, v123);
                sub_B170A0();
              }
            }
          }
        }
      }
    }
    sub_B170F4(Name);
    sub_B170A0();
  }
}


void __fastcall CommandCardEquipmentControl__OpenLockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *commandCardDialog; // x21
  CommandCardDialog_ClickDelegate_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_40FA559 & 1) == 0 )
  {
    sub_B16FFC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_CommandCardEquipmentControl__OpenLockDialog_b__91_0__, v6);
    byte_40FA559 = 1;
  }
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || ((data = targetCommandCardData->fields.data) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(data, 0LL)),
        commandCardDialog = this->fields.commandCardDialog,
        v11 = (CommandCardDialog_ClickDelegate_o *)sub_B170CC(
                                                     CommandCardDialog_ClickDelegate_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4),
        CommandCardDialog_ClickDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenLockDialog_b__91_0__,
          0LL),
        !commandCardDialog) )
  {
    sub_B170D4();
  }
  CommandCardDialog__OpenLockEquipSlot(commandCardDialog, IsEnableCommandCode, v11, v12);
}


void __fastcall CommandCardEquipmentControl__OpenReturnDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommandCardDialog_ClickDelegate_o *v12; // x23
  const MethodInfo *v13; // x4

  if ( (byte_40FA55A & 1) == 0 )
  {
    sub_B16FFC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__92_0__, v3);
    byte_40FA55A = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v12 = (CommandCardDialog_ClickDelegate_o *)sub_B170CC(
                                                     CommandCardDialog_ClickDelegate_TypeInfo,
                                                     v8,
                                                     v9,
                                                     v10,
                                                     v11),
        CommandCardDialog_ClickDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__92_0__,
          0LL),
        !commandCardDialog) )
  {
    sub_B170D4();
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v12, v13);
}


void __fastcall CommandCardEquipmentControl__OpenUnlockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommandCardDialog_ClickDelegate_o *v12; // x23
  const MethodInfo *v13; // x4

  if ( (byte_40FA558 & 1) == 0 )
  {
    sub_B16FFC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__90_0__, v3);
    byte_40FA558 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v12 = (CommandCardDialog_ClickDelegate_o *)sub_B170CC(
                                                     CommandCardDialog_ClickDelegate_TypeInfo,
                                                     v8,
                                                     v9,
                                                     v10,
                                                     v11),
        CommandCardDialog_ClickDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__90_0__,
          0LL),
        !commandCardDialog) )
  {
    sub_B170D4();
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayEquipEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  CommandCodeEffectComponent_o *AttachEffectOnCode; // x0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  CommandCodeEffectComponent_o *v9; // x19
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  CommandCodeEffectComponent_o *AttachEffectOnCard; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CommandCodeEffectComponent_o *v21; // x22
  CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x0
  CombineCommandCardEquipmentComponent_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FA56B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_40FA56B = 1;
  }
  AttachEffectOnCode = CommandCardEquipmentControl__CreateAttachEffectOnCode(this, *(const MethodInfo **)&targetCardIdx);
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_14;
  v9 = AttachEffectOnCode;
  v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v11;
  *(_QWORD *)&v26.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
  AttachEffectOnCard = CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v12, v13);
  if ( !AttachEffectOnCard )
    goto LABEL_14;
  v21 = AttachEffectOnCard;
  if ( callback )
  {
    AttachEffectOnCard->fields.commandCodeDetachAction = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&AttachEffectOnCard->fields.commandCodeDetachAction,
      (System_Int32_array **)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  commandCardEquipmentIcon = this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon
    || (CombineCommandCardEquipmentComponent__HideStatusInfo(commandCardEquipmentIcon, 0LL),
        (v23 = this->fields.commandCardEquipmentIcon) == 0LL)
    || (CombineCommandCardEquipmentComponent__SetEquippedInfo(v23, 0, -1, 0LL), !v9) )
  {
LABEL_14:
    sub_B170D4();
  }
  CommandCodeEffectComponent__PlayAnimation(v9, v24);
  CommandCodeEffectComponent__PlayAnimation(v21, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayLockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t lockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *lockEffect; // x19
  UnityEngine_GameObject_o *v10; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Component_o *v18; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v23; // x21
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0
  UnityEngine_Transform_o *v30; // x20
  int v31; // s0
  const MethodInfo *v34; // x1

  if ( (byte_40FA56A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&lockCardIdx);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FA56A = 1;
  }
  lockEffect = this->fields.lockEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)lockEffect,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_17;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v10,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  v18 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( callback )
  {
    Component_srcLineSprite[1].fields.mcLineSprite = (struct UISprite_o *)callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcLineSprite,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  transform = UnityEngine_Component__get_transform(v18, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_17;
  if ( commandCardList->max_length <= lockCardIdx )
  {
    sub_B17100(transform, v20, v21);
    sub_B170A0();
  }
  v23 = transform;
  v24 = (UnityEngine_Component_o *)commandCardList->m_Items[lockCardIdx];
  if ( !v24
    || (v25 = UnityEngine_Component__get_transform(v24, 0LL), !v23)
    || (UnityEngine_Transform__set_parent(v23, v25, 0LL),
        v26 = UnityEngine_Component__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL),
        !v26)
    || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        v30 = UnityEngine_Component__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL),
        !v30) )
  {
LABEL_17:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v18, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayRemoveEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  int32_t v31; // w0
  const MethodInfo *v32; // x3
  CommandCodeEffectComponent_o *v33; // x0
  struct UnityEngine_GameObject_o *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v35; // x22
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v38; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v40; // x24
  int v41; // s0
  UnityEngine_Transform_o *v44; // x24
  int v45; // s0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x24
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Action_o *v60; // x24
  __int64 v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  CombineCommandCardComponent_o *v70; // x0
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40FA56C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&targetCardIdx);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__0__, v12);
    sub_B16FFC(&Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__1__, v13);
    sub_B16FFC(&CommandCardEquipmentControl___c__DisplayClass121_0_TypeInfo, v14);
    byte_40FA56C = 1;
  }
  v15 = sub_B170CC(
          CommandCardEquipmentControl___c__DisplayClass121_0_TypeInfo,
          *(_QWORD *)&targetCardIdx,
          callback,
          method,
          v4);
  CommandCardEquipmentControl___c__DisplayClass121_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass121_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_25;
  v30 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v30;
  *(_QWORD *)&v73.fields.fakeValue = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
  v33 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v31, v32);
  commandCodeDetachEffect = this->fields.commandCodeDetachEffect;
  v35 = v33;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeDetachEffect,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v36 )
    goto LABEL_25;
  Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v36,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  v38 = Component_srcLineSprite;
  transform = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_parent(transform, this->fields.detachEffectPos, 0LL);
  v40 = UnityEngine_Component__get_transform(v38, 0LL);
  *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v40 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
  v44 = UnityEngine_Component__get_transform(v38, 0LL);
  *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_one(0LL);
  if ( !v44 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v15,
    Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__0__,
    0LL);
  if ( v52 )
  {
    v38[8].klass = (UnityEngine_Component_c *)v52;
    sub_B16F98((BattleServantConfConponent_o *)&v38[8], (System_Int32_array **)v52, v54, v55, v56, v57, v58, v59);
  }
  v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v15,
    Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__1__,
    0LL);
  if ( v60 )
  {
    *(_QWORD *)&v38[7].fields.m_CachedPtr = v60;
    sub_B16F98((BattleServantConfConponent_o *)&v38[7].fields, (System_Int32_array **)v60, v63, v64, v65, v66, v67, v68);
  }
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_25;
  if ( commandCardList->max_length <= targetCardIdx )
  {
    sub_B17100(v61, v62, v63);
    sub_B170A0();
  }
  v70 = commandCardList->m_Items[targetCardIdx];
  if ( !v70
    || (CombineCommandCardComponent__HideCommandCodeSprite(v70, 0LL),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v38, v71),
        !v35) )
  {
LABEL_25:
    sub_B170D4();
  }
  CommandCodeEffectComponent__PlayAnimation(v35, v72);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CommandCardEquipmentControl__PlayReplaceEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FA56D & 1) == 0 )
  {
    sub_B16FFC(&CommandCardEquipmentControl__PlayReplaceEffect_d__122_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_40FA56D = 1;
  }
  v8 = sub_B170CC(
         CommandCardEquipmentControl__PlayReplaceEffect_d__122_TypeInfo,
         *(_QWORD *)&targetCardIdx,
         callback,
         method,
         v4);
  CommandCardEquipmentControl__PlayReplaceEffect_d__122___ctor(
    (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = targetCardIdx;
  *(_QWORD *)(v8 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect(
        CommandCardEquipmentControl_o *this,
        int32_t removeCardIdx,
        int32_t attachCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FA56E & 1) == 0 )
  {
    sub_B16FFC(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_TypeInfo, *(_QWORD *)&removeCardIdx);
    byte_40FA56E = 1;
  }
  v9 = sub_B170CC(
         CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_TypeInfo,
         *(_QWORD *)&removeCardIdx,
         *(_QWORD *)&attachCardIdx,
         callback,
         method);
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123___ctor(
    (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayUnlockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t unlockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *unlockEffect; // x21
  UnityEngine_GameObject_o *v10; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Component_o *v18; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Transform_o *v26; // x22
  int v27; // s0
  UnityEngine_Transform_o *v30; // x22
  int v31; // s0
  struct CombineCommandCardComponent_array *v34; // x8
  CombineCommandCardComponent_o *v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_40FA569 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&unlockCardIdx);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FA569 = 1;
  }
  unlockEffect = this->fields.unlockEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)unlockEffect,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_20;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v10,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  v18 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( callback )
  {
    Component_srcLineSprite[1].fields.mcLineSprite = (struct UISprite_o *)callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&Component_srcLineSprite[1].fields.mcLineSprite,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  transform = UnityEngine_Component__get_transform(v18, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_20;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_21;
  v23 = transform;
  v24 = (UnityEngine_Component_o *)commandCardList->m_Items[unlockCardIdx];
  if ( !v24 )
    goto LABEL_20;
  v25 = UnityEngine_Component__get_transform(v24, 0LL);
  if ( !v23 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v23, v25, 0LL);
  v26 = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v26
    || (UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL),
        v30 = UnityEngine_Component__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL),
        !v30)
    || (UnityEngine_Transform__set_localScale(v30, *(UnityEngine_Vector3_o *)&v31, 0LL),
        (v34 = this->fields.commandCardList) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  if ( v34->max_length <= unlockCardIdx )
  {
LABEL_21:
    sub_B17100(transform, v20, v21);
    sub_B170A0();
  }
  v35 = v34->m_Items[unlockCardIdx];
  if ( !v35 )
    goto LABEL_20;
  CombineCommandCardComponent__HideUnlockInfo(v35, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v18, v36);
}


void __fastcall CommandCardEquipmentControl__SetBaseServantCommandCardList(
        CommandCardEquipmentControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array *baseServantAssetList; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x2
  struct System_String_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct System_String_array *v31; // x20
  __int64 v32; // x21
  __int64 v33; // x22
  int32_t v34; // w0
  struct UserServantEntity_o *v35; // x8
  int32_t v36; // w21
  int32_t v37; // w22
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_array *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_40FA54E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AssetManager_TypeInfo, v10);
    sub_B16FFC(&Method_CommandCardEquipmentControl_SetCommandCardList__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v13);
    sub_B16FFC(&string___TypeInfo, v14);
    byte_40FA54E = 1;
  }
  baseServantAssetList = this->fields.baseServantAssetList;
  if ( baseServantAssetList )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_29955940(baseServantAssetList, 0LL);
    this->fields.baseServantAssetList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseServantAssetList, 0LL, v16, v17, v18, v19, v20, v21);
  }
  if ( !this->fields.baseUserServantEntity )
  {
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, (const MethodInfo *)callback);
    if ( callback )
    {
      System_Action__Invoke(callback, 0LL);
      return;
    }
LABEL_27:
    sub_B170D4();
  }
  this->fields.LoadAfterCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.LoadAfterCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v23 = (struct System_String_array *)sub_B17014(string___TypeInfo, 1LL, v22);
  this->fields.baseServantAssetList = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseServantAssetList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v31 = this->fields.baseServantAssetList;
  v33 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v33;
  *(_QWORD *)&v53.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
  v35 = this->fields.baseUserServantEntity;
  if ( !v35 )
    goto LABEL_27;
  v36 = v34;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35->fields.limitCount, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v36, v37, 0LL);
  if ( !v31 )
    goto LABEL_27;
  v46 = (System_Int32_array **)CommandCardLoadFolderName;
  if ( CommandCardLoadFolderName )
  {
    CommandCardLoadFolderName = (System_String_o *)sub_B170BC(
                                                     CommandCardLoadFolderName,
                                                     v31->obj.klass->_1.element_class);
    if ( !CommandCardLoadFolderName )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v31->max_length )
  {
    sub_B17100(CommandCardLoadFolderName, v39, v40);
    sub_B170A0();
  }
  v31->m_Items[0] = (System_String_o *)v46;
  sub_B16F98((BattleServantConfConponent_o *)v31->m_Items, v46, v40, v41, v42, v43, v44, v45);
  v47 = this->fields.baseServantAssetList;
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(v47, v52, 1, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetBaseSvtCardImg(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitImageMaster_o *v19; // x22
  int32_t v20; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v23; // w21
  UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40FA549 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FA549 = 1;
  }
  this->fields.baseUserServantEntity = userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v13);
  if ( !userServantEntity )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v18;
  *(_QWORD *)&v32.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
  if ( !v19 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v19,
                                 v20,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v23 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                               this->fields.charaGraphBase,
                               userServantEntity,
                               v23,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882832,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    return;
  }
  if ( !*p_charaGraph )
LABEL_16:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, userServantEntity, v23, 0LL, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetCommandCardEquipmentSkill(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  System_String_o *MargeExplanation_23617588; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  SkillIconComponent_o *commandCardEquipmentSkillIcon; // x0
  UILabel_o *commandCardEquipmentSkillName; // x0
  System_String_array *explanationList; // [xsp+8h] [xbp-28h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-20h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-18h] BYREF

  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  if ( !userCommandCode )
    goto LABEL_9;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0LL);
  MargeExplanation_23617588 = SkillInfo__GetMargeExplanation_23617588(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v7 = MargeExplanation_23617588;
  commandCardEquipmentSkillIcon = this->fields.commandCardEquipmentSkillIcon;
  if ( !commandCardEquipmentSkillIcon
    || (SkillIconComponent__Set_23613360(commandCardEquipmentSkillIcon, idList->m_Items[1], 1, 0LL), !titleList) )
  {
LABEL_9:
    sub_B170D4();
  }
  if ( !titleList->max_length )
  {
LABEL_10:
    sub_B17100(MargeExplanation_23617588, v5, v6);
    sub_B170A0();
  }
  commandCardEquipmentSkillName = this->fields.commandCardEquipmentSkillName;
  if ( !commandCardEquipmentSkillName )
    goto LABEL_9;
  UILabel__set_text(commandCardEquipmentSkillName, titleList->m_Items[0], 0LL);
  WrapControlText__textBBCodeAdjust(this->fields.commandCardEquipmentSkillDetail, v7, 22, 0, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetCommandCardList(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  int32_t v16; // w0
  int32_t v17; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w27
  WebViewManager_o *v23; // x0
  WarQuestSelectionMaster_o *v24; // x0
  struct UserServantEntity_o *v25; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x22
  int32_t v27; // w0
  WarEntity_o *v28; // x22
  WebViewManager_o *v29; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v30; // x21
  WebViewManager_o *v31; // x0
  UserServantCommandCardMaster_o *v32; // x24
  int64_t UserId; // x0
  int64_t v34; // x25
  int32_t v35; // w0
  __int64 v36; // x0
  const MethodInfo *v37; // x1
  int64_t v38; // x2
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v40; // x8
  unsigned __int64 v41; // x28
  signed __int64 v42; // x23
  __int64 v43; // x8
  unsigned __int64 v44; // x9
  int32_t v45; // w26
  struct CombineCommandCardComponent_array *v46; // x8
  CombineCommandCardComponent_o *v47; // x24
  System_Int32_array **gameObject; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BattleCommandData_o *v59; // x25
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCardEquipmentControl_o *v62; // x26
  int32_t v63; // w19
  int32_t v64; // w20
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v65; // x27
  UserServantEntity_o *v66; // x0
  __int64 v67; // x21
  struct UserServantCommandCodeEntity_o *v68; // x8
  struct System_Int64_array *v69; // x8
  struct System_Int32_array *commandCardParam; // x8
  int32_t v71; // w3
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Action_o *LoadAfterCallback; // x20
  __int64 value; // [xsp+0h] [xbp-60h]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_40FA54F & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FA54F = 1;
  }
  entity = 0LL;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_59;
  v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v81.fields.currentCryptoKey = v15;
  *(_QWORD *)&v81.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v81, 0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_59;
  v17 = v16;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_59;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 v17,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23 )
    goto LABEL_59;
  v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v23,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = this->fields.baseUserServantEntity;
  if ( !v25 )
    goto LABEL_59;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)v24;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25->fields.svtId, 0LL);
  if ( !v26 )
    goto LABEL_59;
  v28 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v26,
          v27,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_59;
  v30 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v29,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v31 )
    goto LABEL_59;
  v32 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v31,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v28
    || (v34 = UserId,
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v28->fields.id,
                0LL),
        !v32)
    || (v36 = UserServantCommandCardMaster__TryGetEntity(v32, &entity, v34, v35, 0LL),
        (commandCardList = this->fields.commandCardList) == 0LL) )
  {
LABEL_59:
    sub_B170D4();
  }
  v40 = *(_QWORD *)&commandCardList->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0LL;
    v42 = (int)v40;
    do
    {
      v43 = *(_QWORD *)&v28[1].fields.id;
      if ( v43 )
      {
        v44 = *(unsigned int *)(v43 + 24);
        if ( (__int64)v41 < (int)v44 )
        {
          if ( v41 >= v44 )
            goto LABEL_60;
          v45 = *(_DWORD *)(v43 + 4 * v41 + 32);
          if ( (unsigned int)(v45 - 1) <= 2 )
          {
            v46 = this->fields.commandCardList;
            if ( !v46 )
              goto LABEL_59;
            if ( v41 >= v46->max_length )
              goto LABEL_60;
            v47 = v46->m_Items[v41];
            gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
            if ( !v47 )
              goto LABEL_59;
            v47->fields.target = (struct UnityEngine_GameObject_o *)gameObject;
            sub_B16F98((BattleServantConfConponent_o *)&v47->fields.target, gameObject, v49, v50, v51, v52, v53, v54);
            v59 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v55, v56, v57, v58);
            BattleCommandData___ctor_18691260(v59, v45, v17, ServantImageLimitSealAfter, 0, 0LL);
            if ( !v59 )
              goto LABEL_59;
            v59->fields.markindex = v41;
            baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
            if ( baseUserServantCommandCodeEntity )
            {
              userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
              if ( !userCommandCodeIds )
                goto LABEL_59;
              if ( v41 >= userCommandCodeIds->max_length )
              {
LABEL_60:
                sub_B17100(v36, v37, v38);
                sub_B170A0();
              }
              v37 = (const MethodInfo *)userCommandCodeIds->m_Items[v41];
              v59->fields.userCommandCodeId = (int64_t)v37;
              if ( (__int64)v37 >= 1 )
              {
                if ( !v30 )
                  goto LABEL_59;
                v62 = this;
                v63 = v17;
                v64 = ServantImageLimitSealAfter;
                v65 = v30;
                v66 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                        v30,
                        (int64_t)v37,
                        (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                if ( !v66 )
                  goto LABEL_59;
                v67 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
                *(_QWORD *)&v82.fields.fakeValue = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v82.fields.fakeValue = value;
                }
                *(_QWORD *)&v82.fields.currentCryptoKey = v67;
                v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
                v30 = v65;
                ServantImageLimitSealAfter = v64;
                v17 = v63;
                this = v62;
                v59->fields.commandCodeId = v36;
              }
              v68 = this->fields.baseUserServantCommandCodeEntity;
              if ( !v68 )
                goto LABEL_59;
              v69 = v68->fields.userCommandCodeIds;
              if ( !v69 )
                goto LABEL_59;
              if ( v41 >= v69->max_length )
                goto LABEL_60;
              v38 = v69->m_Items[v41];
            }
            else
            {
              v38 = -1LL;
            }
            if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
            {
              if ( v41 >= commandCardParam->max_length )
                goto LABEL_60;
              v71 = commandCardParam->m_Items[v41 + 1];
            }
            else
            {
              v71 = 0;
            }
            v59->fields.commandCardParam = v71;
            CombineCommandCardComponent__DispCommandCard(v47, v59, v38, v71, 0, 0, 0LL);
          }
        }
      }
      ++v41;
    }
    while ( (__int64)v41 < v42 );
  }
  CommandCardEquipmentControl__SetExecuteButtonState(this, v37);
  LoadAfterCallback = this->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    this->fields.LoadAfterCallback = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.LoadAfterCallback, 0LL, v72, v73, v74, v75, v76, v77);
    System_Action__Invoke(LoadAfterCallback, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__SetEffectAfterInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *qpInfoObj; // x0
  UnityEngine_Component_o *lockButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  CommandCardEquipmentControl__InitCommandCodeInfo(this, method);
  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL),
        (lockButton = (UnityEngine_Component_o *)this->fields.lockButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(lockButton, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CommandCardEquipmentControl__InitCommandCardSelectStatus(this, v6);
  CommandCardEquipmentControl__InitDisplayInfo(this, v7);
}


void __fastcall CommandCardEquipmentControl__SetExecuteButtonState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *targetCommandCardData; // x20
  bool v5; // w0
  UnityEngine_Object_o *v6; // x20
  bool v7; // zf
  struct CombineCommandCardComponent_o *v8; // x8
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x9
  struct BattleCommandData_o *data; // x8
  __int128 v11; // q1
  int64_t userCommandCodeId; // x20
  _BOOL4 v13; // w20
  struct UICommonButton_o *executeButton; // x0
  UnityEngine_Behaviour_o *v15; // x0
  struct UICommonButton_o *v16; // x0
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_40FA564 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_40FA564 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  v6 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !v5 )
    goto LABEL_37;
  if ( !v6 )
    goto LABEL_34;
  if ( v6[26].fields.m_CachedPtr == 1 )
  {
    v7 = this->fields.baseUserCommandCodeEntity == 0LL;
  }
  else
  {
LABEL_37:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
      goto LABEL_22;
    v8 = this->fields.targetCommandCardData;
    if ( !v8 )
      goto LABEL_34;
    if ( v8->fields._NowKind_k__BackingField == 2 )
    {
      baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
      {
        v13 = 0;
        goto LABEL_26;
      }
      data = v8->fields.data;
      if ( !data )
        goto LABEL_34;
      v11 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
      userCommandCodeId = data->fields.userCommandCodeId;
      *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v19.fields.fakeValue = v11;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v18 = v19;
      v7 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
    }
    else
    {
LABEL_22:
      v7 = !this->fields.isCanCombine;
    }
  }
  v13 = !v7;
LABEL_26:
  executeButton = this->fields.executeButton;
  if ( !executeButton
    || (((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, Il2CppMethodPointer))executeButton->klass->vtable._5_set_isEnabled.method)(
          executeButton,
          v13,
          executeButton->klass->vtable._6_OnInit.methodPtr),
        (v15 = (UnityEngine_Behaviour_o *)this->fields.executeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(v15, v13, 0LL), (v16 = this->fields.executeButton) == 0LL) )
  {
LABEL_34:
    sub_B170D4();
  }
  if ( v13 )
    v17 = 0LL;
  else
    v17 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._14_SetState.method)(
    v16,
    v17,
    1LL,
    v16->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CommandCardEquipmentControl__SetHaveQpInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *haveQpLabel; // x20
  System_String_o *v5; // x0

  if ( (byte_40FA563 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236, method);
    byte_40FA563 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = SelfUserGame->fields.qp,
        v5 = System_Int32__ToString_38275808((int)this + 436, (System_String_o *)StringLiteral_9236, 0LL),
        !haveQpLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(haveQpLabel, v5, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetRemoveButttonState(
        CommandCardEquipmentControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *removeButton; // x0
  bool v5; // w21
  UnityEngine_Behaviour_o *v7; // x0
  struct UICommonButton_o *v8; // x0
  __int64 v9; // x1

  removeButton = this->fields.removeButton;
  if ( !removeButton
    || (v5 = isEnable,
        ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))removeButton->klass->vtable._5_set_isEnabled.method)(
          removeButton,
          isEnable,
          removeButton->klass->vtable._6_OnInit.methodPtr),
        (v7 = (UnityEngine_Behaviour_o *)this->fields.removeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(v7, v5, 0LL), (v8 = this->fields.removeButton) == 0LL) )
  {
    sub_B170D4();
  }
  if ( isEnable )
    v9 = 0LL;
  else
    v9 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
    v8,
    v9,
    1LL,
    v8->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CommandCardEquipmentControl__SetReplaceButtonState(
        CommandCardEquipmentControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *replaceButton; // x0
  bool v5; // w21
  UnityEngine_Behaviour_o *v7; // x0
  struct UICommonButton_o *v8; // x0
  __int64 v9; // x1

  replaceButton = this->fields.replaceButton;
  if ( !replaceButton
    || (v5 = isEnable,
        ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))replaceButton->klass->vtable._5_set_isEnabled.method)(
          replaceButton,
          isEnable,
          replaceButton->klass->vtable._6_OnInit.methodPtr),
        (v7 = (UnityEngine_Behaviour_o *)this->fields.replaceButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(v7, v5, 0LL), (v8 = this->fields.replaceButton) == 0LL) )
  {
    sub_B170D4();
  }
  if ( isEnable )
    v9 = 0LL;
  else
    v9 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
    v8,
    v9,
    1LL,
    v8->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CommandCardEquipmentControl__SetReplaceDispInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *overwriteWarningLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  overwriteWarningLabel = (UnityEngine_Component_o *)this->fields.overwriteWarningLabel;
  if ( !overwriteWarningLabel || (gameObject = UnityEngine_Component__get_gameObject(overwriteWarningLabel, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v5);
  CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v6);
  CommandCardEquipmentControl__SetExecuteButtonState(this, v7);
}


void __fastcall CommandCardEquipmentControl__SetSelectedCommandCodeInfo(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        bool dispEquippedInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *commandCardInfoObj; // x0
  UnityEngine_GameObject_o *unlockItemInfoObj; // x0
  UnityEngine_GameObject_o *commandCardNotEquippedInfoObj; // x0
  UnityEngine_Component_o *commandCardEquipmentIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *commandCardEquipmentSkillIcon; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *qpInfoObj; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  bool IsEnableCommandCode; // w0
  int v27; // w25
  struct CombineCommandCardComponent_o *v28; // x8
  struct BattleCommandData_o *v29; // x8
  __int128 v30; // q1
  int64_t userCommandCodeId; // x24
  struct CombineCommandCardComponent_o *v32; // x8
  struct BattleCommandData_o *v33; // x8
  __int128 v34; // q0
  int64_t v35; // x22
  __int64 v36; // x0
  const MethodInfo *v37; // x1
  __int64 v38; // x2
  struct CombineCommandCardComponent_o *v39; // x8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  int max_length; // w26
  il2cpp_array_size_t v43; // w27
  struct System_Int64_array *v44; // x8
  int64_t v45; // x22
  __int64 v46; // x23
  __int64 v47; // x24
  bool v48; // w23
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v50; // x0
  struct UserServantCommandCodeEntity_o *v51; // x8
  __int128 v52; // q1
  CombineCommandCardEquipmentComponent_o *v53; // x0
  const MethodInfo *v54; // x2
  bool v55; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_40FA553 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_40FA553 = 1;
  }
  commandCardInfoObj = this->fields.commandCardInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(commandCardInfoObj, 1, 0LL);
  unlockItemInfoObj = this->fields.unlockItemInfoObj;
  if ( !unlockItemInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(unlockItemInfoObj, 0, 0LL);
  commandCardNotEquippedInfoObj = this->fields.commandCardNotEquippedInfoObj;
  if ( !commandCardNotEquippedInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(commandCardNotEquippedInfoObj, 0, 0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !gameObject )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  commandCardEquipmentSkillIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentSkillIcon;
  if ( !commandCardEquipmentSkillIcon )
    goto LABEL_65;
  v16 = UnityEngine_Component__get_gameObject(commandCardEquipmentSkillIcon, 0LL);
  if ( !v16 )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    goto LABEL_65;
  data = targetCommandCardData->fields.data;
  if ( data )
  {
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(data, 0LL);
    v27 = 0;
    if ( userCommandCode && IsEnableCommandCode )
    {
      v28 = this->fields.targetCommandCardData;
      if ( !v28 )
        goto LABEL_65;
      v29 = v28->fields.data;
      if ( !v29 )
        goto LABEL_65;
      v30 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v29->fields.userCommandCodeId;
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v59.fields.fakeValue = v30;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v58 = v59;
      v27 = userCommandCodeId != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
      if ( dispEquippedInfo )
      {
        v32 = this->fields.targetCommandCardData;
        if ( !v32 )
          goto LABEL_65;
        v33 = v32->fields.data;
        if ( !v33 )
          goto LABEL_65;
        v34 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v35 = v33->fields.userCommandCodeId;
        *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v59.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v57 = v59;
        dispEquippedInfo = v35 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v57, 0LL);
      }
      else
      {
        dispEquippedInfo = 0;
      }
    }
  }
  else
  {
    v27 = 0;
  }
  this->fields.baseUserCommandCodeEntity = userCommandCode;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v39 = this->fields.targetCommandCardData;
  if ( !v39 )
    goto LABEL_65;
  if ( ((v39->fields._NowKind_k__BackingField == 2) & ~v27) != 0 )
  {
    LODWORD(baseUserServantCommandCodeEntity) = 0;
    v48 = 1;
  }
  else if ( userCommandCode )
  {
    baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
    if ( baseUserServantCommandCodeEntity )
    {
      userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
      if ( !userCommandCodeIds )
        goto LABEL_65;
      max_length = userCommandCodeIds->max_length;
      if ( max_length < 1 )
      {
        v48 = 0;
      }
      else
      {
        v55 = dispEquippedInfo;
        v43 = 0;
        while ( 1 )
        {
          v44 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
          if ( !v44 )
            goto LABEL_65;
          if ( v43 >= v44->max_length )
          {
            sub_B17100(v36, v37, v38);
            sub_B170A0();
          }
          v45 = v44->m_Items[v43];
          v47 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v46 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v60.fields.currentCryptoKey = v47;
          *(_QWORD *)&v60.fields.fakeValue = v46;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
          if ( v45 == (int)v36 )
          {
            v48 = 1;
            goto LABEL_51;
          }
          if ( (int)++v43 >= max_length )
            break;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          if ( !baseUserServantCommandCodeEntity )
            goto LABEL_65;
        }
        v48 = 0;
LABEL_51:
        dispEquippedInfo = v55;
      }
      LODWORD(baseUserServantCommandCodeEntity) = 1;
    }
    else
    {
      v48 = 0;
    }
  }
  else
  {
    v48 = 0;
    LODWORD(baseUserServantCommandCodeEntity) = 0;
  }
  if ( (unsigned int)baseUserServantCommandCodeEntity | v27 )
  {
    CommandCardEquipmentControl__SetReplaceDispInfo(this, v37);
    cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
    if ( !cancelButton )
      goto LABEL_65;
    v50 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
    if ( !v50 )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive(v50, 1, 0LL);
  }
  v51 = this->fields.baseUserServantCommandCodeEntity;
  if ( v51 )
  {
    v52 = *(_OWORD *)&v51->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v51->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v59.fields.fakeValue = v52;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v56 = v59;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v56, 0LL) == equippedSvtId )
      equippedSvtId = -1;
  }
  v53 = this->fields.commandCardEquipmentIcon;
  if ( !v53 )
LABEL_65:
    sub_B170D4();
  CombineCommandCardEquipmentComponent__SetIcon(v53, userCommandCode, v48, dispEquippedInfo, equippedSvtId, 0LL);
  CommandCardEquipmentControl__SetCommandCardEquipmentSkill(this, userCommandCode, v54);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetStateInfoMsg(
        CommandCardEquipmentControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  UIWidget_o *detailLabel; // x20
  CommandCardEquipmentControl_c *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  UISprite_o *messageTxtLabelSprite; // x21
  struct UISprite_o *v24; // x0
  UISprite_o *executeButtonSprite; // x0
  UILabel_o *baseSelectInfoLabel; // x21
  __int64 *v27; // x8
  struct CombineCommandCardComponent_o *v28; // x8
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int128 v30; // q1
  int64_t v31; // x0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v33; // q0
  __int64 *v34; // x8
  UnityEngine_Object_o *targetCommandCardData; // x21
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineCommandCardComponent_o *v38; // x8
  int32_t NowKind_k__BackingField; // w8
  UIWidget_o *v40; // x20
  int v41; // s0
  __int64 *v45; // x8
  System_String_o *v46; // x0
  UISprite_o *v47; // x21
  struct UISprite_o *v48; // x0
  UISprite_o *v49; // x0
  System_String_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  System_String_o *v53; // x0
  UISprite_o *v54; // x21
  System_String_o *REPLACE_EXE_BTN_SPRITE_NAME; // x1
  System_String_o *v56; // x0
  UISprite_o *v57; // x21
  struct UISprite_o *v58; // x0
  System_String_o *v59; // x0
  UISprite_o *v60; // x21
  struct UISprite_o *v61; // x0
  UISprite_o *v62; // x0
  System_String_o *EQUIP_EXE_BTN_SPRITE_NAME; // x1
  UIWidget_o *v64; // x20
  int v65; // s0
  System_String_o *v69; // x0
  UISprite_o *v70; // x21
  struct UISprite_o *v71; // x0
  UISprite_o *v72; // x0
  System_String_o *v73; // x0
  UISprite_o *v74; // x21
  struct UISprite_o *v75; // x0
  struct UISprite_o *v76; // x0
  UILabel_o *v77; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+40h] [xbp-40h]

  if ( (byte_40FA565 & 1) == 0 )
  {
    sub_B16FFC(&CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3152, v8);
    sub_B16FFC(&StringLiteral_3149, v9);
    sub_B16FFC(&StringLiteral_3150, v10);
    sub_B16FFC(&StringLiteral_3156, v11);
    sub_B16FFC(&StringLiteral_3154, v12);
    sub_B16FFC(&StringLiteral_3153, v13);
    sub_B16FFC(&StringLiteral_12161, v14);
    sub_B16FFC(&StringLiteral_3158, v15);
    sub_B16FFC(&StringLiteral_12162, v16);
    sub_B16FFC(&StringLiteral_3155, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    byte_40FA565 = 1;
  }
  detailLabel = (UIWidget_o *)this->fields.detailLabel;
  v20 = CommandCardEquipmentControl_TypeInfo;
  if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
    v20 = CommandCardEquipmentControl_TypeInfo;
  }
  if ( !detailLabel )
    goto LABEL_129;
  UIWidget__set_color(detailLabel, v20->static_fields->defaultDetailColor, 0LL);
  v21 = (System_String_o *)StringLiteral_1;
  switch ( state )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3149, 0LL);
      messageTxtLabelSprite = this->fields.messageTxtLabelSprite;
      v21 = v22;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !messageTxtLabelSprite )
        goto LABEL_129;
      UISprite__set_spriteName(
        messageTxtLabelSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
        0LL);
      v24 = this->fields.messageTxtLabelSprite;
      if ( !v24 )
        goto LABEL_129;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v24->klass->vtable._33_MakePixelPerfect.method)(
        v24,
        v24->klass->vtable._34_get_minWidth.methodPtr);
      executeButtonSprite = this->fields.executeButtonSprite;
      if ( !executeButtonSprite )
        goto LABEL_129;
      UISprite__set_spriteName(
        executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      baseSelectInfoLabel = this->fields.baseSelectInfoLabel;
      v27 = &StringLiteral_3150;
      goto LABEL_55;
    case 1:
      targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
        goto LABEL_127;
      v36 = (UnityEngine_Component_o *)this->fields.baseSelectInfoLabel;
      if ( !v36 )
        goto LABEL_129;
      gameObject = UnityEngine_Component__get_gameObject(v36, 0LL);
      if ( !gameObject )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      v38 = this->fields.targetCommandCardData;
      if ( !v38 )
        goto LABEL_129;
      NowKind_k__BackingField = v38->fields._NowKind_k__BackingField;
      if ( NowKind_k__BackingField == 2 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3155, 0LL);
        v60 = this->fields.messageTxtLabelSprite;
        v21 = v59;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v60 )
        {
          UISprite__set_spriteName(
            v60,
            CommandCardEquipmentControl_TypeInfo->static_fields->EQUIPED_MESSAGE_SPRITE_NAME,
            0LL);
          v61 = this->fields.messageTxtLabelSprite;
          if ( v61 )
          {
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v61->klass->vtable._33_MakePixelPerfect.method)(
              v61,
              v61->klass->vtable._34_get_minWidth.methodPtr);
            v62 = this->fields.executeButtonSprite;
            if ( v62 )
            {
              EQUIP_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
LABEL_124:
              UISprite__set_spriteName(v62, EQUIP_EXE_BTN_SPRITE_NAME, 0LL);
              goto LABEL_125;
            }
          }
        }
      }
      else if ( NowKind_k__BackingField )
      {
        if ( this->fields.baseUserCommandCodeEntity )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3154, 0LL);
          goto LABEL_127;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_3156, 0LL);
        v70 = this->fields.messageTxtLabelSprite;
        v21 = v69;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v70 )
        {
          UISprite__set_spriteName(
            v70,
            CommandCardEquipmentControl_TypeInfo->static_fields->NOT_EQUIPED_MESSAGE_SPRITE_NAME,
            0LL);
          v71 = this->fields.messageTxtLabelSprite;
          if ( v71 )
          {
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v71->klass->vtable._33_MakePixelPerfect.method)(
              v71,
              v71->klass->vtable._34_get_minWidth.methodPtr);
            v72 = this->fields.executeButtonSprite;
            if ( v72 )
            {
              UISprite__set_spriteName(
                v72,
                CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
                0LL);
              goto LABEL_127;
            }
          }
        }
      }
      else
      {
        if ( this->fields.isShortQp )
        {
          v40 = (UIWidget_o *)this->fields.detailLabel;
          *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
          if ( !v40 )
            goto LABEL_129;
          UIWidget__set_color(v40, *(UnityEngine_Color_o *)&v41, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = &StringLiteral_12162;
        }
        else if ( this->fields.isShortNeedItem )
        {
          v64 = (UIWidget_o *)this->fields.detailLabel;
          *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
          if ( !v64 )
            goto LABEL_129;
          UIWidget__set_color(v64, *(UnityEngine_Color_o *)&v65, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = &StringLiteral_12161;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = &StringLiteral_3158;
        }
        v73 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
        v74 = this->fields.messageTxtLabelSprite;
        v21 = v73;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v74 )
        {
          UISprite__set_spriteName(
            v74,
            CommandCardEquipmentControl_TypeInfo->static_fields->UNLOCK_MESSAGE_SPRITE_NAME,
            0LL);
          v75 = this->fields.messageTxtLabelSprite;
          if ( v75 )
          {
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v75->klass->vtable._33_MakePixelPerfect.method)(
              v75,
              v75->klass->vtable._34_get_minWidth.methodPtr);
            v62 = this->fields.executeButtonSprite;
            if ( v62 )
            {
              EQUIP_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->UNLOCK_EXE_BTN_SPRITE_NAME;
              goto LABEL_124;
            }
          }
        }
      }
      goto LABEL_129;
    case 2:
      v28 = this->fields.targetCommandCardData;
      if ( !v28 )
        goto LABEL_129;
      if ( v28->fields._NowKind_k__BackingField == 2 )
      {
        nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
        if ( nowEquipedUserCommandCodeEntity )
        {
          v30 = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v80.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v79 = v80;
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v79, 0LL);
          baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
          if ( baseUserCommandCodeEntity )
          {
            v33 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v78.fields.fakeValue = v33;
            if ( v31 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v78, 0LL) )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v34 = &StringLiteral_3155;
              goto LABEL_63;
            }
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3155, 0LL);
            v54 = this->fields.executeButtonSprite;
            v21 = v56;
            if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
            }
            if ( v54 )
            {
              REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->REPLACE_EXE_BTN_SPRITE_NAME;
              goto LABEL_76;
            }
          }
        }
LABEL_129:
        sub_B170D4();
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = &StringLiteral_3154;
LABEL_63:
      v53 = LocalizationManager__Get((System_String_o *)*v34, 0LL);
      v54 = this->fields.executeButtonSprite;
      v21 = v53;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v54 )
        goto LABEL_129;
      REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
LABEL_76:
      UISprite__set_spriteName(v54, REPLACE_EXE_BTN_SPRITE_NAME, 0LL);
      v57 = this->fields.messageTxtLabelSprite;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v57 )
        goto LABEL_129;
      UISprite__set_spriteName(
        v57,
        CommandCardEquipmentControl_TypeInfo->static_fields->SELECTED_MESSAGE_SPRITE_NAME,
        0LL);
      v58 = this->fields.messageTxtLabelSprite;
      if ( !v58 )
        goto LABEL_129;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v58->klass->vtable._33_MakePixelPerfect.method)(
        v58,
        v58->klass->vtable._34_get_minWidth.methodPtr);
LABEL_125:
      v76 = this->fields.executeButtonSprite;
      if ( !v76 )
        goto LABEL_129;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v76->klass->vtable._33_MakePixelPerfect.method)(
        v76,
        v76->klass->vtable._34_get_minWidth.methodPtr);
LABEL_127:
      v77 = this->fields.detailLabel;
      if ( !v77 )
        goto LABEL_129;
      UILabel__set_text(v77, v21, 0LL);
      return;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3152, 0LL);
      v47 = this->fields.messageTxtLabelSprite;
      v21 = v46;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v47 )
        goto LABEL_129;
      UISprite__set_spriteName(
        v47,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
        0LL);
      v48 = this->fields.messageTxtLabelSprite;
      if ( !v48 )
        goto LABEL_129;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v48->klass->vtable._33_MakePixelPerfect.method)(
        v48,
        v48->klass->vtable._34_get_minWidth.methodPtr);
      v49 = this->fields.executeButtonSprite;
      if ( !v49 )
        goto LABEL_129;
      UISprite__set_spriteName(
        v49,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      baseSelectInfoLabel = this->fields.baseSelectInfoLabel;
      v27 = &StringLiteral_3153;
LABEL_55:
      v50 = LocalizationManager__Get((System_String_o *)*v27, 0LL);
      if ( !baseSelectInfoLabel )
        goto LABEL_129;
      UILabel__set_text(baseSelectInfoLabel, v50, 0LL);
      v51 = (UnityEngine_Component_o *)this->fields.baseSelectInfoLabel;
      if ( !v51 )
        goto LABEL_129;
      v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( !v52 )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive(v52, 1, 0LL);
      goto LABEL_127;
    default:
      goto LABEL_127;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetTargetIndexSelectSprite(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w21
  il2cpp_array_size_t v7; // w22
  CombineCommandCardComponent_o *v8; // x0

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_8;
  max_length = commandCardList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= commandCardList->max_length )
      {
        sub_B17100(this, *(_QWORD *)&index, method);
        sub_B170A0();
      }
      v8 = commandCardList->m_Items[v7];
      if ( !v8 )
        break;
      CombineCommandCardComponent__SetSelectedSprite(v8, index == v7++, 0LL);
      if ( (int)v7 >= max_length )
        return;
      commandCardList = this->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_8:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetUnlockItemInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantCommandCodeUnlockMaster_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  int32_t v14; // w21
  int32_t MarkIndex; // w0
  ServantCommandCodeUnlockEntity_o *Entity; // x0
  UILabel_o *spendQpLabel; // x21
  ServantCommandCodeUnlockEntity_o *v18; // x20
  System_String_o *v19; // x0
  int64_t UserId; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  struct System_Int32_array *itemIds; // x21
  __int64 v25; // x9
  __int64 v26; // x10
  struct System_Int32_array *itemNums; // x23
  signed __int64 v28; // x24
  unsigned __int64 v29; // x22
  __int64 v30; // x27
  bool v31; // w9
  Il2CppClass **v32; // x8
  LimitCntUpItemComponent_o *v33; // x20
  int32_t spendQpVal; // w8
  int32_t haveQpVal; // w9
  UIWidget_o *v36; // x20
  int v37; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_40FA55B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_9236, v6);
    byte_40FA55B = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_38;
  v10 = (ServantCommandCodeUnlockMaster_o *)MasterData_WarQuestSelectionMaster;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v12;
  *(_QWORD *)&v41.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_38;
  v14 = v13;
  MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)this->fields.targetCommandCardData, 0LL);
  if ( !v10 )
    goto LABEL_38;
  Entity = ServantCommandCodeUnlockMaster__GetEntity(v10, v14, MarkIndex, 0LL);
  if ( !Entity )
    goto LABEL_38;
  spendQpLabel = this->fields.spendQpLabel;
  v18 = Entity;
  this->fields.spendQpVal = Entity->fields.qp;
  v19 = System_Int32__ToString_38275808((int)this + 432, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !spendQpLabel )
    goto LABEL_38;
  UILabel__set_text(spendQpLabel, v19, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_38;
  itemIds = v18->fields.itemIds;
  if ( !itemIds )
    goto LABEL_38;
  v25 = *(_QWORD *)&unlockItemInfoList->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = *(_QWORD *)&itemIds->max_length;
    itemNums = v18->fields.itemNums;
    v28 = (int)v25;
    v29 = 0LL;
    v30 = (int)v26;
    v31 = v26 << 32 > 0;
    do
    {
      if ( v29 >= unlockItemInfoList->max_length )
      {
LABEL_39:
        sub_B17100(UserId, v21, v22);
        sub_B170A0();
      }
      v32 = &unlockItemInfoList->obj.klass + v29;
      v33 = (LimitCntUpItemComponent_o *)v32[4];
      if ( v31 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( v29 >= itemIds->max_length )
          goto LABEL_39;
        if ( !itemNums )
          break;
        if ( v29 >= itemNums->max_length )
          goto LABEL_39;
        if ( !v33 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v33,
          UserId,
          itemIds->m_Items[v29 + 1],
          itemNums->m_Items[v29 + 1],
          0LL);
        if ( !v33->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      else
      {
        if ( !v33 )
          break;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)v32[4], 0LL);
      }
      if ( (__int64)++v29 >= v28 )
        goto LABEL_32;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v31 = (__int64)v29 < v30;
    }
    while ( unlockItemInfoList );
LABEL_38:
    sub_B170D4();
  }
LABEL_32:
  spendQpVal = this->fields.spendQpVal;
  haveQpVal = this->fields.haveQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = spendQpVal > haveQpVal;
  if ( spendQpVal > haveQpVal )
  {
    v36 = (UIWidget_o *)this->fields.spendQpLabel;
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_red(0LL);
    if ( !v36 )
      goto LABEL_38;
    UIWidget__set_color(v36, *(UnityEngine_Color_o *)&v37, 0LL);
    this->fields.isCanCombine = 0;
  }
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v21);
}


void __fastcall CommandCardEquipmentControl___OpenLockDialog_b__91_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_25813212(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestLockCommandCode(combineRootComponent, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
}


void __fastcall CommandCardEquipmentControl___OpenReturnDialog_b__92_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    sub_B170D4();
  CommandCardDialog__Close_25813212(commandCardDialog, 0LL, method);
}


void __fastcall CommandCardEquipmentControl___OpenUnlockDialog_b__90_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_25813212(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestUnlockCommandCode(combineRootComponent, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
}


int64_t __fastcall CommandCardEquipmentControl__get_GetSelectedUserCommandCodeId(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40FA568 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40FA568 = 1;
  }
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    return -1LL;
  v4 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  BattleCommandComponent_o *v4; // x0

  if ( (byte_40FA567 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA567 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    return -1;
  v4 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v4 )
    sub_B170D4();
  return BattleCommandComponent__getMarkIndex(v4, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_B170D4();
  return BattleCommandComponent__getCommandType(targetCommandCardData, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_selectedSelfAttachCommandCardIdx(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  return this->fields._selectedSelfAttachCommandCardIdx_k__BackingField;
}


void __fastcall CommandCardEquipmentControl__set_selectedSelfAttachCommandCardIdx(
        CommandCardEquipmentControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__touchCommandCard(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *targetCommandCardData; // x22
  BattleCommandComponent_o **p_targetCommandCardData; // x21
  int32_t MarkIndex; // w0
  SeManager_c *v9; // x8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  System_Int32_array **v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2

  if ( (byte_40FA550 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&SeManager_TypeInfo, v5);
    byte_40FA550 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_targetCommandCardData = (BattleCommandComponent_o **)&this->fields.targetCommandCardData;
    if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    {
      if ( !*p_targetCommandCardData )
        goto LABEL_24;
      MarkIndex = BattleCommandComponent__getMarkIndex(*p_targetCommandCardData, 0LL);
      v9 = SeManager_TypeInfo;
      if ( MarkIndex == index )
      {
        if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        }
        SeManager__PlaySystemSe(2, 0LL);
        return;
      }
      if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
LABEL_20:
        SeManager__PlaySystemSe(0, 0LL);
        this->fields.baseUserCommandCodeEntity = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity,
          0LL,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v16);
        commandCardList = this->fields.commandCardList;
        if ( commandCardList )
        {
          if ( commandCardList->max_length <= index )
          {
            sub_B17100(v17, v18, v19);
            sub_B170A0();
          }
          v26 = (System_Int32_array **)commandCardList->m_Items[index];
          *p_targetCommandCardData = (BattleCommandComponent_o *)v26;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.targetCommandCardData,
            v26,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          if ( *p_targetCommandCardData )
          {
            CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
              this,
              (int32_t)(*p_targetCommandCardData)[1].fields.bg,
              v27);
            CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v28);
            return;
          }
        }
LABEL_24:
        sub_B170D4();
      }
    }
    else
    {
      v9 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_20;
    }
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    goto LABEL_20;
  }
}


void __fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__122___ctor(
        CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__122__MoveNext(
        CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t targetCardIdx; // w21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  CommandCodeEffectComponent_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v19; // x9
  CommandCodeEffectComponent_o *v20; // x20
  Il2CppObject *v21; // x22
  System_Action_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UnityEngine_WaitForSeconds_o *v27; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool result; // w0
  CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v38; // w21
  __int64 v39; // x22
  __int64 v40; // x23
  int32_t v41; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  UnityEngine_WaitForSeconds_o *v46; // x20
  Il2CppObject **v47; // x19
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Action_o *callback; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40F7139 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_40F7139 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( nowEquipedUserCommandCodeEntity )
        {
          targetCardIdx = this->fields.targetCardIdx;
          v11 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
          v10 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v55.fields.currentCryptoKey = v11;
          *(_QWORD *)&v55.fields.fakeValue = v10;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL);
          v13 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(_4__this, targetCardIdx, v12, 0LL);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v19 = this->fields.targetCardIdx;
            if ( (unsigned int)v19 >= commandCardList->max_length )
            {
              sub_B17100(v13, v14, v15);
              sub_B170A0();
            }
            v20 = v13;
            v21 = (Il2CppObject *)commandCardList->m_Items[v19];
            v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
            System_Action___ctor(v22, v21, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v20 )
            {
              CommandCodeEffectComponent__SetDetachEffect(v20, v22, 0LL);
              CommandCodeEffectComponent__PlayDetachEffect(v20, 0LL);
              v27 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v23, v24, v25, v26);
              UnityEngine_WaitForSeconds___ctor(v27, 0.3, 0LL);
              this->fields.__2__current = (Il2CppObject *)v27;
              p__2__current = &this->fields.__2__current;
              sub_B16F98(
                (BattleServantConfConponent_o *)p__2__current,
                (System_Int32_array **)v27,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
LABEL_24:
      sub_B170D4();
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_24;
  CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, 0LL);
  commandCardEquipmentIcon = _4__this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_24;
  CombineCommandCardEquipmentComponent__SetEquippedInfo(commandCardEquipmentIcon, 0, -1, 0LL);
  baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_24;
  v38 = this->fields.targetCardIdx;
  v40 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v40;
  *(_QWORD *)&v56.fields.fakeValue = v39;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v38, v41, 0LL);
  v46 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v42, v43, v44, v45);
  UnityEngine_WaitForSeconds___ctor(v46, 3.1, 0LL);
  this->fields.__2__current = (Il2CppObject *)v46;
  v47 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v47, (System_Int32_array **)v46, v48, v49, v50, v51, v52, v53);
  *((_DWORD *)v47 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommandCardEquipmentControl__PlayReplaceEffect_d__122__System_Collections_IEnumerator_Reset(
        CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__122_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__122__System_Collections_IEnumerator_get_Current(
        CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__122__System_IDisposable_Dispose(
        CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123___ctor(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123__MoveNext(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t removeCardIdx; // w21
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w0
  CommandCodeEffectComponent_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v19; // x9
  CommandCodeEffectComponent_o *v20; // x21
  Il2CppObject *v21; // x23
  System_Action_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v29; // x22
  __int64 v30; // x23
  int32_t v31; // w0
  __int64 v32; // x3
  __int64 v33; // x4
  struct CombineCommandCardComponent_array *v34; // x8
  __int64 v35; // x9
  CommandCodeEffectComponent_o *v36; // x20
  Il2CppObject *v37; // x22
  System_Action_o *v38; // x21
  UnityEngine_WaitForSeconds_o *v39; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x0
  struct UserCommandCodeEntity_o *v50; // x8
  int32_t v51; // w21
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t v54; // w0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  UnityEngine_WaitForSeconds_o *v59; // x20
  Il2CppObject **v60; // x19
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_40F713A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_40F713A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
        goto LABEL_35;
      removeCardIdx = this->fields.removeCardIdx;
      v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v67.fields.currentCryptoKey = v11;
      *(_QWORD *)&v67.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v67, 0LL);
      v13 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(_4__this, removeCardIdx, v12, 0LL);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_35;
      v19 = this->fields.removeCardIdx;
      if ( (unsigned int)v19 < commandCardList->max_length )
      {
        v20 = v13;
        v21 = (Il2CppObject *)commandCardList->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
        System_Action___ctor(v22, v21, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v20 )
          goto LABEL_35;
        CommandCodeEffectComponent__SetDetachEffect(v20, v22, 0LL);
        CommandCodeEffectComponent__PlayDetachEffect(v20, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
        {
LABEL_22:
          v39 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v23, v24, v25, v26);
          UnityEngine_WaitForSeconds___ctor(v39, 0.3, 0LL);
          this->fields.__2__current = (Il2CppObject *)v39;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)v39,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        attachCardIdx = this->fields.attachCardIdx;
        v30 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v29 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v68.fields.currentCryptoKey = v30;
        *(_QWORD *)&v68.fields.fakeValue = v29;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v68, 0LL);
        v13 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(_4__this, attachCardIdx, v31, 0LL);
        v34 = _4__this->fields.commandCardList;
        if ( !v34 )
LABEL_35:
          sub_B170D4();
        v35 = this->fields.attachCardIdx;
        if ( (unsigned int)v35 < v34->max_length )
        {
          v36 = v13;
          v37 = (Il2CppObject *)v34->m_Items[v35];
          v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v32, v33);
          System_Action___ctor(v38, v37, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v36 )
          {
            CommandCodeEffectComponent__SetDetachEffect(v36, v38, 0LL);
            CommandCodeEffectComponent__PlayDetachEffect(v36, 0LL);
            goto LABEL_22;
          }
          goto LABEL_35;
        }
      }
      sub_B17100(v13, v14, v15);
      sub_B170A0();
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_35;
  if ( _4__this->fields.nowEquipedUserCommandCodeEntity )
    CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, 0LL);
  else
    CommandCardEquipmentControl__CreateAttachEffectOnCode(_4__this, 0LL);
  commandCardEquipmentIcon = _4__this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_35;
  CombineCommandCardEquipmentComponent__SetEquippedInfo(commandCardEquipmentIcon, 0, -1, 0LL);
  v50 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v50 )
    goto LABEL_35;
  v51 = this->fields.attachCardIdx;
  v53 = *(_QWORD *)&v50->fields.commandCodeId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&v50->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v53;
  *(_QWORD *)&v69.fields.fakeValue = v52;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v69, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v51, v54, 0LL);
  v59 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v55, v56, v57, v58);
  UnityEngine_WaitForSeconds___ctor(v59, 3.1, 0LL);
  this->fields.__2__current = (Il2CppObject *)v59;
  v60 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v60, (System_Int32_array **)v59, v61, v62, v63, v64, v65, v66);
  *((_DWORD *)v60 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123__System_Collections_IEnumerator_Reset(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123__System_Collections_IEnumerator_get_Current(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123__System_IDisposable_Dispose(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandCardEquipmentControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7135 & 1) == 0 )
  {
    sub_B16FFC(&CommandCardEquipmentControl___c_TypeInfo, v1);
    byte_40F7135 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CommandCardEquipmentControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandCardEquipmentControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall CommandCardEquipmentControl___c___ctor(
        CommandCardEquipmentControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___c___OnLongPushCommandCode_b__102_0(
        CommandCardEquipmentControl___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7136 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7136 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass121_0___ctor(
        CommandCardEquipmentControl___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass121_0___PlayRemoveEffect_b__0(
        CommandCardEquipmentControl___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  struct CommandCardEquipmentControl_o *_4__this; // x8
  UnityEngine_Component_o *commandCardEquipmentIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct CommandCardEquipmentControl_o *v6; // x8
  UnityEngine_Component_o *commandCardEquipmentSkillIcon; // x0
  UnityEngine_GameObject_o *v8; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (commandCardEquipmentIcon = (UnityEngine_Component_o *)_4__this->fields.commandCardEquipmentIcon) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (v6 = this->fields.__4__this) == 0LL)
    || (commandCardEquipmentSkillIcon = (UnityEngine_Component_o *)v6->fields.commandCardEquipmentSkillIcon) == 0LL
    || (v8 = UnityEngine_Component__get_gameObject(commandCardEquipmentSkillIcon, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass121_0___PlayRemoveEffect_b__1(
        CommandCardEquipmentControl___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass89_0___ctor(
        CommandCardEquipmentControl___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___c__DisplayClass89_0___OpenEquippedCommandCodeAttachDialog_b__0(
        CommandCardEquipmentControl___c__DisplayClass89_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct CommandCardEquipmentControl_o *_4__this; // x8
  CombineRootComponent_o *combineRootComponent; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F7137 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7137 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this || (combineRootComponent = _4__this->fields.combineRootComponent) == 0LL )
LABEL_9:
      sub_B170D4();
    CombineRootComponent__RequestSelfAttachReplaceCommandCode(combineRootComponent, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___c__DisplayClass89_0___OpenEquippedCommandCodeAttachDialog_b__1(
        CommandCardEquipmentControl___c__DisplayClass89_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct CommandCardEquipmentControl_o *_4__this; // x8
  CombineRootComponent_o *combineRootComponent; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F7138 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7138 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this || (combineRootComponent = _4__this->fields.combineRootComponent) == 0LL )
LABEL_11:
      sub_B170D4();
    if ( this->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode(combineRootComponent, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode(combineRootComponent, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}