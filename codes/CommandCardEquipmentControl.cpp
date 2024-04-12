// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int v5; // s1
  int v6; // s2
  int v7; // s0
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CommandCardEquipmentControl_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CommandCardEquipmentControl_StaticFields *v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct CommandCardEquipmentControl_StaticFields *v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CommandCardEquipmentControl_StaticFields *v40; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct CommandCardEquipmentControl_StaticFields *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct CommandCardEquipmentControl_StaticFields *v56; // x0
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct CommandCardEquipmentControl_StaticFields *v64; // x0
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct CommandCardEquipmentControl_StaticFields *v72; // x0
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct UnityEngine_Color_o v80; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42B00C6 & 1) == 0 )
  {
    sub_B52984(&CommandCardEquipmentControl_TypeInfo);
    sub_B52984(&StringLiteral_19829/*"img_txt_equipcc_3"*/);
    sub_B52984(&StringLiteral_19828/*"img_txt_equipcc_1"*/);
    sub_B52984(&StringLiteral_19422/*"icon_arrow_pink"*/);
    sub_B52984(&StringLiteral_17198/*"btn_txt_replace"*/);
    sub_B52984(&StringLiteral_19900/*"img_txt_unlockcc"*/);
    sub_B52984(&StringLiteral_17170/*"btn_txt_equipcc"*/);
    sub_B52984(&StringLiteral_19830/*"img_txt_equipcc_4"*/);
    sub_B52984(&StringLiteral_17222/*"btn_txt_unlockcc"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B00C6 = 1;
  }
  v5 = 1063321600;
  v6 = 1065156608;
  v7 = 0;
  v80 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v80);
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = v80;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  v9 = (System_Int32_array **)StringLiteral_19422/*"icon_arrow_pink"*/;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19422/*"icon_arrow_pink"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_19900/*"img_txt_unlockcc"*/;
  v16->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19900/*"img_txt_unlockcc"*/;
  sub_B52920((BattleServantConfConponent_o *)&v16->UNLOCK_MESSAGE_SPRITE_NAME, v17, v18, v19, v20, v21, v22, v23);
  v24 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v25 = (System_Int32_array **)StringLiteral_19828/*"img_txt_equipcc_1"*/;
  v24->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19828/*"img_txt_equipcc_1"*/;
  sub_B52920((BattleServantConfConponent_o *)&v24->EQUIPED_MESSAGE_SPRITE_NAME, v25, v26, v27, v28, v29, v30, v31);
  v32 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_19829/*"img_txt_equipcc_3"*/;
  v32->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19829/*"img_txt_equipcc_3"*/;
  sub_B52920((BattleServantConfConponent_o *)&v32->SELECTED_MESSAGE_SPRITE_NAME, v33, v34, v35, v36, v37, v38, v39);
  v40 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v41 = (System_Int32_array **)StringLiteral_19830/*"img_txt_equipcc_4"*/;
  v40->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19830/*"img_txt_equipcc_4"*/;
  sub_B52920((BattleServantConfConponent_o *)&v40->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v41, v42, v43, v44, v45, v46, v47);
  v48 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v49 = (System_Int32_array **)StringLiteral_1/*""*/;
  v48->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&v48->DEFAULT_EXE_BTN_SPRITE_NAME, v49, v50, v51, v52, v53, v54, v55);
  v56 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v57 = (System_Int32_array **)StringLiteral_17222/*"btn_txt_unlockcc"*/;
  v56->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17222/*"btn_txt_unlockcc"*/;
  sub_B52920((BattleServantConfConponent_o *)&v56->UNLOCK_EXE_BTN_SPRITE_NAME, v57, v58, v59, v60, v61, v62, v63);
  v64 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v65 = (System_Int32_array **)StringLiteral_17170/*"btn_txt_equipcc"*/;
  v64->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17170/*"btn_txt_equipcc"*/;
  sub_B52920((BattleServantConfConponent_o *)&v64->EQUIP_EXE_BTN_SPRITE_NAME, v65, v66, v67, v68, v69, v70, v71);
  v72 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v73 = (System_Int32_array **)StringLiteral_17198/*"btn_txt_replace"*/;
  v72->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17198/*"btn_txt_replace"*/;
  sub_B52920((BattleServantConfConponent_o *)&v72->REPLACE_EXE_BTN_SPRITE_NAME, v73, v74, v75, v76, v77, v78, v79);
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
  struct UserCommandCodeEntity_o **p_nowEquipedUserCommandCodeEntity; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v14; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  int64_t v17; // x21
  System_Int32_array **Entity; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UserCommandCodeEntity_o *v25; // x8
  __int128 v26; // q1
  CommandCardEquipmentControl_o *v27; // x0
  const MethodInfo *v28; // x2
  bool v29; // w0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  UILabel_o *commandCardNotEquippedDetail; // x19
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-40h]

  if ( (byte_42B00A4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3198/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/);
    byte_42B00A4 = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    0LL,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_48;
  if ( !nowKind )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
    lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
    if ( lockButton )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
      if ( lockButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
        lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
        if ( lockButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
          lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
          if ( lockButton )
          {
            lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
            if ( lockButton )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
              lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
              if ( lockButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
                CommandCardEquipmentControl__SetUnlockItemInfo(this, v32);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
  if ( nowKind == 1 )
  {
    if ( !this->fields.baseUserCommandCodeEntity )
    {
      lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v33);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v34);
      lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
      if ( !lockButton )
        goto LABEL_48;
      lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
      if ( !lockButton )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
    }
    commandCardNotEquippedDetail = this->fields.commandCardNotEquippedDetail;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3198/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0LL);
      return;
    }
LABEL_48:
    sub_B52A5C(lockButton, v12);
  }
  if ( nowKind != 2 )
    return;
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v14);
  lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
  if ( !lockButton )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)this->fields.targetCommandCardData;
  if ( !lockButton )
    goto LABEL_48;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  lockButton = (UnityEngine_Component_o *)BattleCommandComponent__getMarkIndex(
                                            (BattleCommandComponent_o *)lockButton,
                                            0LL);
  if ( !userCommandCodeIds )
    goto LABEL_48;
  if ( (unsigned int)lockButton >= userCommandCodeIds->max_length )
  {
    v36 = sub_B52A88(lockButton);
    sub_B52A28(v36, 0LL);
  }
  v17 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_48;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)lockButton,
                                    v17,
                                    (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    Entity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_48;
  v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v26;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v37 = v38;
  v27 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v37, 0LL);
  v29 = CommandCardEquipmentControl__EnableReplace(v27, (int64_t)v27, v28);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v29, v30);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v31);
}


bool __fastcall CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v4; // x20
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_42B00A9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
    this = (CommandCardEquipmentControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00A9 = 1;
  }
  baseUserCommandCodeEntity = v4->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v8, 0LL);
  if ( !dic )
LABEL_9:
    sub_B52A5C(this, dic);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_2F4EA4C *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
}


void __fastcall CommandCardEquipmentControl__CheckOpenDialogType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  UserServantCommandCodeMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v5; // x1
  struct CombineCommandCardComponent_o *v6; // x8
  BattleCommandData_o *data; // x21
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_long__long__o *EquippedCommandCodeDic; // x20
  const MethodInfo *v10; // x3
  CommandCardEquipmentControl_o *v11; // x0
  System_Collections_Generic_Dictionary_long__long__o *v12; // x1
  bool v13; // w2

  if ( (byte_42B00A8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00A8 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)UnityEngine_Object__op_Inequality(
                                                                       targetCommandCardData,
                                                                       0LL,
                                                                       0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v6 = this->fields.targetCommandCardData;
    if ( v6 )
    {
      if ( !v6->fields._NowKind_k__BackingField )
      {
        CommandCardEquipmentControl__OpenUnlockDialog(this, v5);
        return;
      }
      data = v6->fields.data;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        EquippedCommandCodeDic = UserServantCommandCodeMaster__GetEquippedCommandCodeDic(
                                   Master_WarQuestSelectionMaster,
                                   0LL);
        if ( data && BattleCommandData__IsEnableCommandCode(data, 0LL) )
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v8) )
          {
            v11 = this;
            v12 = EquippedCommandCodeDic;
            v13 = 0;
LABEL_20:
            CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(v11, v12, v13, v10);
            return;
          }
          Master_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)this->fields.combineRootComponent;
          if ( Master_WarQuestSelectionMaster )
          {
            CombineRootComponent__RequestReplaceCommandCode(
              (CombineRootComponent_o *)Master_WarQuestSelectionMaster,
              0LL);
            return;
          }
        }
        else
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v8) )
          {
            v13 = 1;
            v11 = this;
            v12 = EquippedCommandCodeDic;
            goto LABEL_20;
          }
          Master_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)this->fields.combineRootComponent;
          if ( Master_WarQuestSelectionMaster )
          {
            CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)Master_WarQuestSelectionMaster, 0LL);
            return;
          }
        }
      }
    }
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
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
  UnityEngine_GameObject_o *baseSelectInfoObj; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-40h]

  if ( (byte_42B00A0 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00A0 = 1;
  }
  if ( !selectBase )
  {
    CommandCardEquipmentControl__InitDispBaseServantInfo(this, (const MethodInfo *)selectBase);
    CommandCardEquipmentControl__InitDisplayInfo(this, v19);
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v20);
    baseSelectInfoObj = this->fields.baseSelectInfoObj;
    this->fields.isBaseSelect = 0;
    if ( baseSelectInfoObj )
    {
      UnityEngine_GameObject__SetActive(baseSelectInfoObj, 1, 0LL);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v21);
      p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
      goto LABEL_14;
    }
LABEL_15:
    sub_B52A5C(baseSelectInfoObj, selectBase);
  }
  p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v23 = v24;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v23, 0LL);
    v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v9;
    if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v22, 0LL) )
    {
      CommandCardEquipmentControl__InitDisplayInfo(this, (const MethodInfo *)selectBase);
      CommandCardEquipmentControl__InitDispCommandCardInfo(this, v10);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v11);
    }
  }
  baseSelectInfoObj = this->fields.baseSelectInfoObj;
  if ( !baseSelectInfoObj )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(baseSelectInfoObj, 0, 0LL);
  this->fields.isBaseSelect = 1;
LABEL_14:
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B52920(p_baseUserServantEntity, (System_Int32_array **)selectBase, v13, v14, v15, v16, v17, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__CloseRemoveCommandCodeDialog(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_25178048(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_B52A5C(commandCardDialog, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCard(
        CommandCardEquipmentControl_o *this,
        int32_t targetCommandCardIdx,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *commandCodeAppearEffect; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *transform; // x21
  int v14; // s0
  UnityEngine_Transform_o *v17; // x21
  int v18; // s0
  const MethodInfo *v21; // x2
  __int64 v23; // x0

  if ( (byte_42B00C3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00C3 = 1;
  }
  commandCodeAppearEffect = this->fields.commandCodeAppearEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeAppearEffect,
                                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_15;
  if ( commandCardList->max_length <= targetCommandCardIdx )
  {
    v23 = sub_B52A88(Component_srcLineSprite);
    sub_B52A28(v23, 0LL);
  }
  v12 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                0LL),
        !v12)
    || (UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL),
        v17 = UnityEngine_Component__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
        !v17) )
  {
LABEL_15:
    sub_B52A5C(Component_srcLineSprite, v9);
  }
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v10, commandCodeId, v21);
  return (CommandCodeEffectComponent_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *commandCodeFlashEffect; // x19
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0

  if ( (byte_42B00C5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00C5 = 1;
  }
  commandCodeFlashEffect = this->fields.commandCodeFlashEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeFlashEffect,
                                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  v6 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_14;
  v8 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                Component_srcLineSprite,
                                                                0LL),
        !v8)
    || (UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v6, 0LL),
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        v13 = UnityEngine_Component__get_transform(v6, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL),
        !v13) )
  {
LABEL_14:
    sub_B52A5C(Component_srcLineSprite, v5);
  }
  UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
  return (CommandCodeEffectComponent_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateRemoveEffectOnCard(
        CommandCardEquipmentControl_o *this,
        int32_t targetCommandCardIdx,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *commandCardDetachEffect; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *transform; // x21
  int v14; // s0
  UnityEngine_Transform_o *v17; // x21
  int v18; // s0
  const MethodInfo *v21; // x2
  __int64 v23; // x0

  if ( (byte_42B00C2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00C2 = 1;
  }
  commandCardDetachEffect = this->fields.commandCardDetachEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardDetachEffect,
                                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_15;
  if ( commandCardList->max_length <= targetCommandCardIdx )
  {
    v23 = sub_B52A88(Component_srcLineSprite);
    sub_B52A28(v23, 0LL);
  }
  v12 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                0LL),
        !v12)
    || (UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL),
        v17 = UnityEngine_Component__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
        !v17) )
  {
LABEL_15:
    sub_B52A5C(Component_srcLineSprite, v9);
  }
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v10, commandCodeId, v21);
  return (CommandCodeEffectComponent_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateReplaceEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *commandCodeReplaceEffect; // x19
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0

  if ( (byte_42B00C4 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00C4 = 1;
  }
  commandCodeReplaceEffect = this->fields.commandCodeReplaceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeReplaceEffect,
                                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  v6 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_14;
  v8 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                Component_srcLineSprite,
                                                                0LL),
        !v8)
    || (UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v6, 0LL),
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        v13 = UnityEngine_Component__get_transform(v6, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL),
        !v13) )
  {
LABEL_14:
    sub_B52A5C(Component_srcLineSprite, v5);
  }
  UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
  return (CommandCodeEffectComponent_o *)v6;
}


bool __fastcall CommandCardEquipmentControl__EnableReplace(
        CommandCardEquipmentControl_o *this,
        int64_t nowEquipedUserCommandCodeId,
        const MethodInfo *method)
{
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  UserCommandCodeEntity_array *List; // x0
  UserCommandCodeEntity_array *v7; // x20
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  int max_length; // w23
  System_Collections_Generic_List_long__o *v10; // x21
  BalanceConfig_c *v11; // x8
  __int64 v12; // x24
  int v13; // w25
  UserCommandCodeEntity_o *v14; // x22
  __int128 v15; // q0
  __int128 v16; // q0
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-70h]

  if ( (byte_42B00A5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Contains__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00A5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( !List || (v7 = List, !*(_QWORD *)&List->max_length) )
  {
LABEL_35:
    LOBYTE(Master_WarQuestSelectionMaster) = 1;
    return Master_WarQuestSelectionMaster;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_38:
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_WarQuestSelectionMaster,
                             0LL);
  max_length = v7->max_length;
  v10 = EquipedCommandCodeList;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  Master_WarQuestSelectionMaster = 1LL;
  if ( v11->static_fields->CommandCodeFrameMax <= max_length && max_length >= 1 )
  {
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= v7->max_length )
      {
        v17 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v17, 0LL);
      }
      v14 = v7->m_Items[v12];
      if ( !v14 )
        goto LABEL_38;
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v21.fields.fakeValue = v15;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v20 = v21;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v20, 0LL);
      if ( Master_WarQuestSelectionMaster != nowEquipedUserCommandCodeId )
      {
        v16 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v21.fields.fakeValue = v16;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v19 = v21;
        Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v19, 0LL);
        if ( !v10 )
          goto LABEL_38;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_long___Contains(
                                           v10,
                                           Master_WarQuestSelectionMaster,
                                           (const MethodInfo_2FE2220 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) != 0 )
        {
          ++v13;
          Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( v13 >= *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 144LL) )
            break;
        }
      }
      if ( (int)++v12 >= max_length )
        goto LABEL_35;
    }
    LOBYTE(Master_WarQuestSelectionMaster) = 0;
  }
  return Master_WarQuestSelectionMaster;
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
  struct UserServantEntity_o *v3; // x8
  UserServantEntity_o **p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-30h]

  if ( (byte_42B00B9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00B9 = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0LL;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v11, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v9);
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    Master_WarQuestSelectionMaster,
    p_baseUserServantEntity,
    v7,
    (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return *p_baseUserServantEntity;
}


int32_t __fastcall CommandCardEquipmentControl__GetCommandCodeId(
        CommandCardEquipmentControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x19
  Il2CppObject *lockCountObj; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42B009F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B009F = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userCommandCodeId,
                                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v5);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
}


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_42B00A7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00A7 = 1;
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


int64_t __fastcall CommandCardEquipmentControl__GetTargetIndexCommandCodeId(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  __int64 v6; // x0

  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    return -1LL;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    sub_B52A5C(this, index);
  if ( userCommandCodeIds->max_length <= index )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
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
  CommandCardEquipmentControl_o *v10; // x19
  il2cpp_array_size_t v11; // w21
  __int64 v12; // x0

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_8;
  max_length = commandCardList->max_length;
  v10 = this;
  if ( max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= commandCardList->max_length )
      {
        v12 = sub_B52A88(this);
        sub_B52A28(v12, 0LL);
      }
      this = (CommandCardEquipmentControl_o *)commandCardList->m_Items[v11];
      if ( !this )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)this, 0, 0LL);
      if ( (int)++v11 >= max_length )
        goto LABEL_9;
      commandCardList = v10->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_8:
    sub_B52A5C(this, method);
  }
LABEL_9:
  v10->fields.targetCommandCardData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v10->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
  this = (CommandCardEquipmentControl_o *)v10->fields.lockButton;
  if ( !this )
    goto LABEL_8;
  this = (CommandCardEquipmentControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitCommandCodeInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandCardInfoObj; // x0

  commandCardInfoObj = this->fields.commandCardInfoObj;
  if ( !commandCardInfoObj
    || (UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0LL),
        (commandCardInfoObj = this->fields.unlockItemInfoObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0LL),
        (commandCardInfoObj = this->fields.commandCardNotEquippedInfoObj) == 0LL) )
  {
    sub_B52A5C(commandCardInfoObj, method);
  }
  UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitCommnadCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct UnityEngine_GameObject_o *baseSelectInfoObj; // x0
  const MethodInfo *v5; // x1
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  int max_length; // w20
  il2cpp_array_size_t v8; // w21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x0

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
    v8 = 0;
    do
    {
      if ( v8 >= unlockItemInfoList->max_length )
      {
        v11 = sub_B52A88(baseSelectInfoObj);
        sub_B52A28(v11, 0LL);
      }
      baseSelectInfoObj = (struct UnityEngine_GameObject_o *)unlockItemInfoList->m_Items[v8];
      if ( !baseSelectInfoObj )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)baseSelectInfoObj, 0LL);
      if ( (int)++v8 >= max_length )
        goto LABEL_9;
      unlockItemInfoList = this->fields.unlockItemInfoList;
    }
    while ( unlockItemInfoList );
LABEL_8:
    sub_B52A5C(baseSelectInfoObj, v5);
  }
LABEL_9:
  CommandCardEquipmentControl__InitDisplayInfo(this, v5);
  CommandCardEquipmentControl__InitDispCommandCardInfo(this, v9);
  CommandCardEquipmentControl__InitDispBaseServantInfo(this, v10);
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
  __int64 v29; // x1
  UnityEngine_Component_o **v30; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42B009B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B009B = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_B52920((BattleServantConfConponent_o *)p_baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseUserServantEntity[45] = 0LL;
  sub_B52920((BattleServantConfConponent_o *)(p_baseUserServantEntity + 45), 0LL, v10, v11, v12, v13, v14, v15);
  p_baseUserServantEntity[46] = 0LL;
  sub_B52920((BattleServantConfConponent_o *)(p_baseUserServantEntity + 46), 0LL, v16, v17, v18, v19, v20, v21);
  p_baseUserServantEntity[48] = 0LL;
  sub_B52920((BattleServantConfConponent_o *)(p_baseUserServantEntity + 48), 0LL, v22, v23, v24, v25, v26, v27);
  v28 = (UnityEngine_Object_o *)p_baseUserServantEntity[44];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    v30 = (UnityEngine_Component_o **)(p_baseUserServantEntity + 44);
    if ( !*v30 )
      sub_B52A5C(0LL, v29);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v30, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *v30 = 0LL;
    sub_B52920((BattleServantConfConponent_o *)v30, 0LL, v32, v33, v34, v35, v36, v37);
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
  __int64 v9; // x1
  UnityEngine_Component_o *lockButton; // x0
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w21
  il2cpp_array_size_t v13; // w22
  Il2CppClass **v14; // x8
  CombineCommandCardComponent_o *v15; // x20
  __int64 v16; // x0

  this->fields.targetCommandCardData = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_10;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_10;
  max_length = commandCardList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= commandCardList->max_length )
      {
        v16 = sub_B52A88(lockButton);
        sub_B52A28(v16, 0LL);
      }
      v14 = &commandCardList->obj.klass + (int)v13;
      v15 = (CombineCommandCardComponent_o *)v14[4];
      if ( !v15 )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)v14[4], 0, 0LL);
      CombineCommandCardComponent__SetCommandCardEnable(v15, 0, 0LL);
      if ( (int)++v13 >= max_length )
        return;
      commandCardList = this->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_10:
    sub_B52A5C(lockButton, v9);
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
    sub_B52A5C(qpInfoObj, method);
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
  CommandCardEquipmentControl_o *v4; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  CombineCommandCardComponent_o *v6; // x20
  BattleCommandData_o *data; // x23
  BattleCommandData_o *v8; // x22
  const MethodInfo *v9; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int64_t v12; // x19
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42B009E & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_B52984(&BattleCommandData_TypeInfo);
    byte_42B009E = 1;
  }
  commandCardList = v4->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v6 = commandCardList->m_Items[cardIndex];
  if ( !v6
    || (data = v6->fields.data,
        v8 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_19047848(v8, data, 0LL),
        (baseUserServantCommandCodeEntity = v4->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_B52A5C(this, *(_QWORD *)&cardIndex);
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
LABEL_12:
    v13 = sub_B52A88(this);
    sub_B52A28(v13, 0LL);
  }
  if ( !v8 )
    goto LABEL_11;
  v12 = userCommandCodeIds->m_Items[cardIndex];
  v8->fields.userCommandCodeId = v12;
  v8->fields.commandCodeId = CommandCardEquipmentControl__GetCommandCodeId(this, v12, v9);
  CombineCommandCardComponent__ModifyCommandCard(v6, v8, v12, 0LL);
}


void __fastcall CommandCardEquipmentControl__MoidfyUserSvtCommandCode(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v8; // x22
  __int64 v9; // x20
  __int64 v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42B009D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B009D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !userServantEntity )
    goto LABEL_16;
  v8 = Instance;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v10;
  *(_QWORD *)&v20.fields.fakeValue = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B52A5C(Instance, v6);
  if ( UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v8, (int)Instance, 0LL) )
  {
    v17 = (System_Int32_array **)entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v17 = 0LL;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)p_baseUserServantCommandCodeEntity, v17, v11, v12, v13, v14, v15, v16);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42B00B4 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00B4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B52A5C(0LL, v3);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickEmptyEquip(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42B00B3 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00B3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B52A5C(0LL, v3);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42B00AF & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00AF = 1;
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  BattleServantConfConponent_o *p_baseUserCommandCodeEntity; // x19
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v8; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UserCommandCodeEntity_o *v16; // x19
  CommonUI_o *v17; // x20
  CommandCardEquipmentControl___c_c *v18; // x8
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__102_0; // x21
  Il2CppObject *v21; // x22
  struct CommandCardEquipmentControl___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  if ( (byte_42B00B5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__102_0__);
    sub_B52984(&CommandCardEquipmentControl___c_TypeInfo);
    byte_42B00B5 = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    p_baseUserCommandCodeEntity = (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_24;
    byval_arg = klass->_1.byval_arg;
    v8 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v30.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v29 = v30;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v29, 0LL);
    if ( !v8 )
      goto LABEL_24;
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v8,
                                      (int64_t)Instance,
                                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B52920(p_baseUserCommandCodeEntity, Entity, v10, v11, v12, v13, v14, v15);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v17 = (CommonUI_o *)Instance;
    v18 = CommandCardEquipmentControl___c_TypeInfo;
    if ( (BYTE3(CommandCardEquipmentControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo);
      v18 = CommandCardEquipmentControl___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__102_0 = static_fields->__9__102_0;
    if ( !_9__102_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__102_0 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        _9__102_0,
        v21,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__102_0__,
        0LL);
      v22 = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      v22->__9__102_0 = _9__102_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v22->__9__102_0,
        (System_Int32_array **)_9__102_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( !v17 )
LABEL_24:
      sub_B52A5C(Instance, v4);
    CommonUI__OpenServantStatusDialog_18171260(v17, 0, v16, _9__102_0, 0LL, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnRemoveCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x20
  UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x21
  CommandCardDialog_ClickDelegate_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_42B00B0 & 1) == 0 )
  {
    sub_B52984(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00B0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v5 = (CommandCardDialog_ClickDelegate_o *)sub_B52A54(CommandCardDialog_ClickDelegate_TypeInfo);
  CommandCardDialog_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    0LL);
  if ( !commandCardDialog )
    sub_B52A5C(v6, v7);
  CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v5, v8);
}


void __fastcall CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42B00B1 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00B1 = 1;
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
      sub_B52A5C(0LL, v3);
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
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v13; // x2

  if ( (byte_42B00B2 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B00B2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v3, v4, v5, v6, v7, v8);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_B52A5C(v9, v10);
  CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
    this,
    targetCommandCardData->fields._NowKind_k__BackingField,
    v11);
  CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v13);
}


void __fastcall CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        bool isCommandCardEmpty,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 Item; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *v16; // x27
  System_String_o *v17; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v23; // q1
  int v24; // w24
  struct UserCommandCodeEntity_o *v25; // x8
  __int128 v26; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  __int64 v28; // x21
  __int64 v29; // x21
  CommonUI_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x24
  CommonConfirmDialog_ClickDelegate_o *v33; // x25
  struct UserServantEntity_o *v34; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x23
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  struct UserServantEntity_o *v39; // x8
  int64_t v40; // x25
  UserServantCollectionEntity_o *v41; // x0
  int32_t maxLimitCount; // w25
  struct UserServantEntity_o *v43; // x8
  ServantLimitMaster_o *v44; // x24
  __int64 v45; // x26
  __int64 v46; // x27
  ServantLimitEntity_o *v47; // x24
  struct UserServantEntity_o *v48; // x8
  ServantLimitImageMaster_o *v49; // x26
  int32_t ServantLimitCountSealAfter; // w27
  struct UserCommandCodeEntity_o *v51; // x8
  __int128 v52; // q1
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x25
  ServantEntity_o *v54; // x25
  UserServantCollectionMaster_o *v55; // x27
  struct UserCommandCodeEntity_o *v56; // x8
  __int128 v57; // q0
  int64_t v58; // x28
  int64_t v59; // x0
  UserServantCollectionEntity_o *v60; // x0
  int32_t v61; // w28
  struct UserCommandCodeEntity_o *v62; // x8
  __int128 v63; // q0
  ServantLimitMaster_o *v64; // x27
  int64_t v65; // x0
  ServantLimitEntity_o *v66; // x27
  struct UserCommandCodeEntity_o *v67; // x8
  __int128 v68; // q0
  ServantLimitImageMaster_o *v69; // x21
  int64_t v70; // x0
  int32_t v71; // w0
  int32_t v72; // w28
  System_String_o *v73; // x21
  __int64 v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x26
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x26
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x23
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x23
  int32_t rarity; // w23
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x23
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x23
  System_String_o *v118; // x21
  __int64 v119; // x22
  __int64 v120; // x22
  CommonUI_o *v121; // x22
  System_String_o *v122; // x23
  System_String_o *v123; // x24
  CommonConfirmDialog_ClickDelegate_o *v124; // x25
  __int64 v125; // x0
  __int64 v126; // x0
  int32_t limitCount; // [xsp+3Ch] [xbp-154h]
  System_String_o *v128; // [xsp+40h] [xbp-150h]
  ServantEntity_o *Entity; // [xsp+48h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+110h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  if ( (byte_42B00AA & 1) == 0 )
  {
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Rarity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_B52984(&Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__0__);
    sub_B52984(&Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__1__);
    sub_B52984(&CommandCardEquipmentControl___c__DisplayClass89_0_TypeInfo);
    sub_B52984(&StringLiteral_3272/*"COMMAND_CODE_REATTACH_TITLE"*/);
    sub_B52984(&StringLiteral_3270/*"COMMAND_CODE_REATTACH_MSG"*/);
    sub_B52984(&StringLiteral_3271/*"COMMAND_CODE_REATTACH_SELF_MSG"*/);
    sub_B52984(&StringLiteral_3297/*"COMMON_CONFIRM_NO"*/);
    sub_B52984(&StringLiteral_3300/*"COMMON_CONFIRM_YES"*/);
    byte_42B00AA = 1;
  }
  v7 = sub_B52A54(CommandCardEquipmentControl___c__DisplayClass89_0_TypeInfo);
  CommandCardEquipmentControl___c__DisplayClass89_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass89_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_117;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 24) = isCommandCardEmpty;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3272/*"COMMAND_CODE_REATTACH_TITLE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3271/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v19 = v17;
    v21 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v137.fields.currentCryptoKey = v21;
    *(_QWORD *)&v137.fields.fakeValue = v20;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v137, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_117;
    v23 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v24 = Item;
    *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v136.fields.fakeValue = v23;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v135 = v136;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v135, 0LL);
    if ( !dic )
      goto LABEL_117;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_2F4E714 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v24 )
    {
      v25 = this->fields.baseUserCommandCodeEntity;
      if ( v25 )
      {
        v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v136.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v134 = v136;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v134, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0LL);
          v28 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
          if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
            sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
          v29 = **(_QWORD **)(v28 + 192);
          if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
            sub_AEB684(v29);
          v30 = **(CommonUI_o ***)(v29 + 184);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3300/*"COMMON_CONFIRM_YES"*/, 0LL);
          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3297/*"COMMON_CONFIRM_NO"*/, 0LL);
          v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v33,
            (Il2CppObject *)v7,
            Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v30 )
          {
            CommonUI__OpenConfirmDecideDlg(v30, v16, v19, v31, v32, v33, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0LL);
            return;
          }
        }
      }
LABEL_117:
      sub_B52A5C(Item, v9);
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  v34 = this->fields.baseUserServantEntity;
  if ( !v34 )
    goto LABEL_117;
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)Item;
  v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v138.fields.currentCryptoKey = v37;
  *(_QWORD *)&v138.fields.fakeValue = v36;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v138, 0LL);
  if ( !v35 )
    goto LABEL_117;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v35,
                                Item,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Item = NetworkManager__get_UserId(0LL);
  v39 = this->fields.baseUserServantEntity;
  if ( !v39 )
    goto LABEL_117;
  v40 = Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39->fields.svtId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_117;
  v41 = UserServantCollectionMaster__GetEntity(Master_WarQuestSelectionMaster, v40, Item, 0LL);
  if ( v41 )
    maxLimitCount = v41->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v128 = v16;
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v43 = this->fields.baseUserServantEntity;
  if ( !v43 )
    goto LABEL_117;
  v44 = (ServantLimitMaster_o *)Item;
  v46 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v139.fields.currentCryptoKey = v46;
  *(_QWORD *)&v139.fields.fakeValue = v45;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v139, 0LL);
  if ( !v44 )
    goto LABEL_117;
  v47 = ServantLimitMaster__GetEntity(v44, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v48 = this->fields.baseUserServantEntity;
  if ( !v48 )
    goto LABEL_117;
  v49 = (ServantLimitImageMaster_o *)Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v48->fields.svtId, 0LL);
  if ( !v49 )
    goto LABEL_117;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v49, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  v51 = this->fields.baseUserCommandCodeEntity;
  if ( !v51 )
    goto LABEL_117;
  v52 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
  v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)Item;
  *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v136.fields.fakeValue = v52;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v133 = v136;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v133, 0LL);
  if ( !dic )
    goto LABEL_117;
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           Item,
           (const MethodInfo_2F4E714 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v53 )
    goto LABEL_117;
  limitCount = ServantLimitCountSealAfter;
  v54 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v53,
                             Item,
                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v55 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Item = NetworkManager__get_UserId(0LL);
  v56 = this->fields.baseUserCommandCodeEntity;
  if ( !v56 )
    goto LABEL_117;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  v58 = Item;
  *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v132.fields.fakeValue = v57;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v132, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v59,
           (const MethodInfo_2F4E714 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v55 )
    goto LABEL_117;
  v60 = UserServantCollectionMaster__GetEntity(v55, v58, Item, 0LL);
  if ( v60 )
    v61 = v60->fields.maxLimitCount;
  else
    v61 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v62 = this->fields.baseUserCommandCodeEntity;
  if ( !v62 )
    goto LABEL_117;
  v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
  v64 = (ServantLimitMaster_o *)Item;
  *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v136.fields.fakeValue = v63;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v131 = v136;
  v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v131, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v65,
           (const MethodInfo_2F4E714 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v64 )
    goto LABEL_117;
  v66 = ServantLimitMaster__GetEntity(v64, Item, v61, 0LL);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v67 = this->fields.baseUserCommandCodeEntity;
  if ( !v67 )
    goto LABEL_117;
  v68 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
  v69 = (ServantLimitImageMaster_o *)Item;
  *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v130.fields.fakeValue = v68;
  v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v130, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v70,
           (const MethodInfo_2F4E714 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v69 )
    goto LABEL_117;
  v71 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v69, Item, v61, 0LL);
  if ( v47 && Entity && v54 && v66 )
  {
    v72 = v71;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_3270/*"COMMAND_CODE_REATTACH_MSG"*/, 0LL);
    v74 = sub_B5299C(object___TypeInfo, 6LL);
    Item = (__int64)ServantEntity__getName(Entity, limitCount, -1, 0LL);
    if ( !v74 )
      goto LABEL_117;
    v81 = (System_Int32_array **)Item;
    if ( !Item || (Item = sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v74 + 24) )
        goto LABEL_118;
      *(_QWORD *)(v74 + 32) = v81;
      sub_B52920((BattleServantConfConponent_o *)(v74 + 32), v81, v75, v76, v77, v78, v79, v80);
      Item = (__int64)ServantEntity__getName(v54, v72, -1, 0LL);
      v88 = (System_Int32_array **)Item;
      if ( !Item || (Item = sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v74 + 24) <= 1u )
          goto LABEL_118;
        *(_QWORD *)(v74 + 40) = v88;
        sub_B52920((BattleServantConfConponent_o *)(v74 + 40), v88, v82, v83, v84, v85, v86, v87);
        Item = (__int64)ServantEntity__getClassName(Entity, 0LL);
        v95 = (System_Int32_array **)Item;
        if ( !Item || (Item = sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v74 + 24) <= 2u )
            goto LABEL_118;
          *(_QWORD *)(v74 + 48) = v95;
          sub_B52920((BattleServantConfConponent_o *)(v74 + 48), v95, v89, v90, v91, v92, v93, v94);
          Item = (__int64)ServantEntity__getClassName(v54, 0LL);
          v102 = (System_Int32_array **)Item;
          if ( !Item || (Item = sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v74 + 24) <= 3u )
              goto LABEL_118;
            *(_QWORD *)(v74 + 56) = v102;
            sub_B52920((BattleServantConfConponent_o *)(v74 + 56), v102, v96, v97, v98, v99, v100, v101);
            rarity = v47->fields.rarity;
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Item = (__int64)Rarity__getRarityType(rarity, 0LL);
            v110 = (System_Int32_array **)Item;
            if ( !Item || (Item = sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v74 + 24) <= 4u )
                goto LABEL_118;
              *(_QWORD *)(v74 + 64) = v110;
              sub_B52920((BattleServantConfConponent_o *)(v74 + 64), v110, v104, v105, v106, v107, v108, v109);
              Item = (__int64)Rarity__getRarityType(v66->fields.rarity, 0LL);
              v117 = (System_Int32_array **)Item;
              if ( !Item || (Item = sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v74 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v74 + 24) > 5u )
                {
                  *(_QWORD *)(v74 + 72) = v117;
                  sub_B52920((BattleServantConfConponent_o *)(v74 + 72), v117, v111, v112, v113, v114, v115, v116);
                  v118 = System_String__Format_44647040(v73, (System_Object_array *)v74, 0LL);
                  v119 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
                  if ( (*(_BYTE *)(v119 + 306) & 1) == 0 )
                    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
                  v120 = **(_QWORD **)(v119 + 192);
                  if ( (*(_BYTE *)(v120 + 306) & 1) == 0 )
                    sub_AEB684(v120);
                  v121 = **(CommonUI_o ***)(v120 + 184);
                  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_3300/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v123 = LocalizationManager__Get((System_String_o *)StringLiteral_3297/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v124 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v124,
                    (Il2CppObject *)v7,
                    Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                    0LL);
                  if ( !v121 )
                    goto LABEL_117;
                  CommonUI__OpenConfirmDecideDlg(
                    v121,
                    v128,
                    v118,
                    v122,
                    v123,
                    v124,
                    28,
                    0.0,
                    15.0,
                    0,
                    0,
                    0,
                    240,
                    0,
                    1,
                    0LL);
                  return;
                }
LABEL_118:
                v125 = sub_B52A88(Item);
                sub_B52A28(v125, 0LL);
              }
            }
          }
        }
      }
    }
    v126 = sub_B52A7C(Item);
    sub_B52A28(v126, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OpenLockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  BattleCommandData_o *methodPtr; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *v6; // x21
  CommandCardDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_42B00AC & 1) == 0 )
  {
    sub_B52984(&CommandCardDialog_ClickDelegate_TypeInfo);
    this = (CommandCardEquipmentControl_o *)sub_B52984(&Method_CommandCardEquipmentControl__OpenLockDialog_b__91_0__);
    byte_42B00AC = 1;
  }
  klass = v2[26].klass;
  if ( !klass
    || ((methodPtr = (BattleCommandData_o *)klass->vtable[3].methodPtr) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(methodPtr, 0LL)),
        v6 = (CommandCardDialog_o *)v2[20].klass,
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_B52A54(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v7,
          v2,
          Method_CommandCardEquipmentControl__OpenLockDialog_b__91_0__,
          0LL),
        !v6) )
  {
    sub_B52A5C(this, method);
  }
  CommandCardDialog__OpenLockEquipSlot(v6, IsEnableCommandCode, v7, v8);
}


void __fastcall CommandCardEquipmentControl__OpenReturnDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  CommandCardDialog_ClickDelegate_o *v7; // x23
  const MethodInfo *v8; // x4

  if ( (byte_42B00AD & 1) == 0 )
  {
    sub_B52984(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__92_0__);
    byte_42B00AD = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_B52A54(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__92_0__,
          0LL),
        !commandCardDialog) )
  {
    sub_B52A5C(targetCommandCardData, method);
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v7, v8);
}


void __fastcall CommandCardEquipmentControl__OpenUnlockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  CommandCardDialog_ClickDelegate_o *v7; // x23
  const MethodInfo *v8; // x4

  if ( (byte_42B00AB & 1) == 0 )
  {
    sub_B52984(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__90_0__);
    byte_42B00AB = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_B52A54(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__90_0__,
          0LL),
        !commandCardDialog) )
  {
    sub_B52A5C(targetCommandCardData, method);
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayEquipEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  char *AttachEffectOnCode; // x0
  const MethodInfo *v8; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  CommandCodeEffectComponent_o *v10; // x19
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CommandCodeEffectComponent_o *v21; // x22
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42B00BE & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B00BE = 1;
  }
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCode(
                                 this,
                                 *(const MethodInfo **)&targetCardIdx);
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_14;
  v10 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  v12 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v12;
  *(_QWORD *)&v23.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v23, 0LL);
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v13, v14);
  if ( !AttachEffectOnCode )
    goto LABEL_14;
  v21 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  if ( callback )
  {
    *((_QWORD *)AttachEffectOnCode + 25) = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)(AttachEffectOnCode + 200),
      (System_Int32_array **)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  AttachEffectOnCode = (char *)this->fields.commandCardEquipmentIcon;
  if ( !AttachEffectOnCode
    || (CombineCommandCardEquipmentComponent__HideStatusInfo(
          (CombineCommandCardEquipmentComponent_o *)AttachEffectOnCode,
          0LL),
        (AttachEffectOnCode = (char *)this->fields.commandCardEquipmentIcon) == 0LL)
    || (CombineCommandCardEquipmentComponent__SetEquippedInfo(
          (CombineCommandCardEquipmentComponent_o *)AttachEffectOnCode,
          0,
          -1,
          0LL),
        !v10) )
  {
LABEL_14:
    sub_B52A5C(AttachEffectOnCode, v8);
  }
  CommandCodeEffectComponent__PlayAnimation(v10, v8);
  CommandCodeEffectComponent__PlayAnimation(v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayLockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t lockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *lockEffect; // x19
  CombineCommandCardComponent_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *v16; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *transform; // x20
  int v20; // s0
  UnityEngine_Transform_o *v23; // x20
  int v24; // s0
  const MethodInfo *v27; // x1
  __int64 v28; // x0

  if ( (byte_42B00BD & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00BD = 1;
  }
  lockEffect = this->fields.lockEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)lockEffect,
                                                               (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  v16 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( callback )
  {
    Component_srcLineSprite->fields.effect_addcritical = (struct UnityEngine_GameObject_o *)callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.effect_addcritical,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_17;
  if ( commandCardList->max_length <= lockCardIdx )
  {
    v28 = sub_B52A88(Component_srcLineSprite);
    sub_B52A28(v28, 0LL);
  }
  v18 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = commandCardList->m_Items[lockCardIdx];
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                     0LL),
        !v18)
    || (UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v16, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v20, 0LL),
        v23 = UnityEngine_Component__get_transform(v16, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL),
        !v23) )
  {
LABEL_17:
    sub_B52A5C(Component_srcLineSprite, v9);
  }
  UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v16, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayRemoveEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v9; // x1
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
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w0
  const MethodInfo *v26; // x3
  CommandCodeEffectComponent_o *v27; // x0
  struct UnityEngine_GameObject_o *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v29; // x22
  UnityEngine_GameObject_o *v30; // x23
  UnityEngine_Transform_o *transform; // x24
  int v32; // s0
  UnityEngine_Transform_o *v35; // x24
  int v36; // s0
  System_Action_o *v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Action_o *v46; // x24
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v54; // x1
  __int64 v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_42B00BF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__0__);
    sub_B52984(&Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__1__);
    sub_B52984(&CommandCardEquipmentControl___c__DisplayClass121_0_TypeInfo);
    byte_42B00BF = 1;
  }
  v7 = sub_B52A54(CommandCardEquipmentControl___c__DisplayClass121_0_TypeInfo);
  CommandCardEquipmentControl___c__DisplayClass121_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass121_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_25;
  v24 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v24;
  *(_QWORD *)&v56.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v56, 0LL);
  v27 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v25, v26);
  commandCodeDetachEffect = this->fields.commandCodeDetachEffect;
  v29 = v27;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeDetachEffect,
                                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  v30 = Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  UnityEngine_Transform__set_parent(
    (UnityEngine_Transform_o *)Component_srcLineSprite,
    this->fields.detachEffectPos,
    0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
  *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
  v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
  if ( !v35 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
  v39 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v7,
    Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__0__,
    0LL);
  if ( v39 )
  {
    *(_QWORD *)&v30[8].fields.m_CachedPtr = v39;
    sub_B52920((BattleServantConfConponent_o *)&v30[8].fields, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v7,
    Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__1__,
    0LL);
  if ( v46 )
  {
    v30[8].monitor = v46;
    sub_B52920(
      (BattleServantConfConponent_o *)&v30[8].monitor,
      (System_Int32_array **)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_25;
  if ( commandCardList->max_length <= targetCardIdx )
  {
    v55 = sub_B52A88(Component_srcLineSprite);
    sub_B52A28(v55, 0LL);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_srcLineSprite
    || (CombineCommandCardComponent__HideCommandCodeSprite(
          (CombineCommandCardComponent_o *)Component_srcLineSprite,
          0LL),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v30, v54),
        !v29) )
  {
LABEL_25:
    sub_B52A5C(Component_srcLineSprite, v9);
  }
  CommandCodeEffectComponent__PlayAnimation(v29, v9);
}


System_Collections_IEnumerator_o *__fastcall CommandCardEquipmentControl__PlayReplaceEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
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

  if ( (byte_42B00C0 & 1) == 0 )
  {
    sub_B52984(&CommandCardEquipmentControl__PlayReplaceEffect_d__122_TypeInfo);
    byte_42B00C0 = 1;
  }
  v7 = sub_B52A54(CommandCardEquipmentControl__PlayReplaceEffect_d__122_TypeInfo);
  CommandCardEquipmentControl__PlayReplaceEffect_d__122___ctor(
    (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect(
        CommandCardEquipmentControl_o *this,
        int32_t removeCardIdx,
        int32_t attachCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B00C1 & 1) == 0 )
  {
    sub_B52984(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_TypeInfo);
    byte_42B00C1 = 1;
  }
  v9 = sub_B52A54(CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_TypeInfo);
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123___ctor(
    (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayUnlockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t unlockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *unlockEffect; // x21
  CombineCommandCardComponent_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *v16; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *transform; // x22
  int v20; // s0
  UnityEngine_Transform_o *v23; // x22
  int v24; // s0
  struct CombineCommandCardComponent_array *v27; // x8
  const MethodInfo *v28; // x1
  __int64 v29; // x0

  if ( (byte_42B00BC & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00BC = 1;
  }
  unlockEffect = this->fields.unlockEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)unlockEffect,
                                                               (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  v16 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( callback )
  {
    Component_srcLineSprite->fields.effect_addcritical = (struct UnityEngine_GameObject_o *)callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.effect_addcritical,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v16, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_20;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_21;
  v18 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = commandCardList->m_Items[unlockCardIdx];
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)Component_srcLineSprite,
                                                               0LL);
  if ( !v18 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL);
  transform = UnityEngine_Component__get_transform(v16, 0LL);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v20, 0LL),
        v23 = UnityEngine_Component__get_transform(v16, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL),
        !v23)
    || (UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL),
        (v27 = this->fields.commandCardList) == 0LL) )
  {
LABEL_20:
    sub_B52A5C(Component_srcLineSprite, v9);
  }
  if ( v27->max_length <= unlockCardIdx )
  {
LABEL_21:
    v29 = sub_B52A88(Component_srcLineSprite);
    sub_B52A28(v29, 0LL);
  }
  Component_srcLineSprite = v27->m_Items[unlockCardIdx];
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  CombineCommandCardComponent__HideUnlockInfo(Component_srcLineSprite, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v16, v28);
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
  System_String_array *baseServantAssetList; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v25; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct System_String_array *v27; // x20
  __int64 v28; // x21
  __int64 v29; // x22
  struct UserServantEntity_o *v30; // x8
  int32_t v31; // w21
  int32_t v32; // w22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x21
  System_String_array *v40; // x20
  System_Action_o *v41; // x21
  __int64 v42; // x0
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_42B00A1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CommandCardEquipmentControl_SetCommandCardList__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    byte_42B00A1 = 1;
  }
  baseServantAssetList = this->fields.baseServantAssetList;
  if ( baseServantAssetList )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30368500(baseServantAssetList, 0LL);
    this->fields.baseServantAssetList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.baseServantAssetList, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_B52A5C(CommandCardLoadFolderName, v25);
  }
  this->fields.LoadAfterCallback = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.LoadAfterCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = (struct System_String_array *)sub_B5299C(string___TypeInfo, 1LL);
  this->fields.baseServantAssetList = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseServantAssetList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v27 = this->fields.baseServantAssetList;
  v29 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v29;
  *(_QWORD *)&v44.fields.fakeValue = v28;
  CommandCardLoadFolderName = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                   v44,
                                                   0LL);
  v30 = this->fields.baseUserServantEntity;
  if ( !v30 )
    goto LABEL_27;
  v31 = (int)CommandCardLoadFolderName;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v30->fields.limitCount, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v31, v32, 0LL);
  if ( !v27 )
    goto LABEL_27;
  v39 = (System_Int32_array **)CommandCardLoadFolderName;
  if ( CommandCardLoadFolderName )
  {
    CommandCardLoadFolderName = (System_String_o *)sub_B52A44(
                                                     CommandCardLoadFolderName,
                                                     v27->obj.klass->_1.element_class);
    if ( !CommandCardLoadFolderName )
    {
      v43 = sub_B52A7C(0LL);
      sub_B52A28(v43, 0LL);
    }
  }
  if ( !v27->max_length )
  {
    v42 = sub_B52A88(CommandCardLoadFolderName);
    sub_B52A28(v42, 0LL);
  }
  v27->m_Items[0] = (System_String_o *)v39;
  sub_B52920((BattleServantConfConponent_o *)v27->m_Items, v39, v33, v34, v35, v36, v37, v38);
  v40 = this->fields.baseServantAssetList;
  v41 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30366456(v40, v41, 1, 0LL);
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
  const MethodInfo *v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitImageMaster_o *v17; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v20; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_24904472; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42B009C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B009C = 1;
  }
  this->fields.baseUserServantEntity = userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v10);
  if ( !userServantEntity )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v17 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v16;
  *(_QWORD *)&v29.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v29, 0LL);
  if ( !v17 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v17,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v20 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24904472 = CharaGraphManager__CreateTexturePrefab_24904472(
                               this->fields.charaGraphBase,
                               userServantEntity,
                               v20,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_24904472;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_24904472,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B52A5C(Instance, v12);
  UICharaGraphTexture__SetCharacter_35944152((UICharaGraphTexture_o *)Instance, userServantEntity, v20, 0LL, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetCommandCardEquipmentSkill(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v3; // x19
  System_String_o *v4; // x20
  __int64 v5; // x0
  System_String_array *explanationList; // [xsp+8h] [xbp-28h] BYREF
  System_String_array *titleList; // [xsp+10h] [xbp-20h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-18h] BYREF

  titleList = 0LL;
  idList = 0LL;
  explanationList = 0LL;
  if ( !userCommandCode )
    goto LABEL_9;
  v3 = this;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0LL);
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_26541972(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v4 = (System_String_o *)this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_26537744((SkillIconComponent_o *)this, idList->m_Items[1], 1, 0LL), !titleList) )
LABEL_9:
    sub_B52A5C(this, userCommandCode);
  if ( !titleList->max_length )
  {
LABEL_10:
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillName;
  if ( !this )
    goto LABEL_9;
  UILabel__set_text((UILabel_o *)this, titleList->m_Items[0], 0LL);
  WrapControlText__textBBCodeAdjust(v3->fields.commandCardEquipmentSkillDetail, v4, 22, 0, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetCommandCardList(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v2; // x19
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v10; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x22
  WarEntity_o *v12; // x22
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCommandCardMaster_o *v14; // x24
  CommandCardEquipmentControl_o *v15; // x25
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v17; // x8
  unsigned __int64 v18; // x28
  signed __int64 v19; // x23
  __int64 v20; // x8
  unsigned __int64 v21; // x9
  int32_t v22; // w26
  struct CombineCommandCardComponent_array *v23; // x8
  CombineCommandCardComponent_o *v24; // x24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleCommandData_o *v31; // x25
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCardEquipmentControl_o *v34; // x26
  int32_t v35; // w19
  int32_t v36; // w20
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v37; // x27
  struct MenuListControl_o *menuListCtr; // x21
  struct UserServantCommandCodeEntity_o *v39; // x8
  struct System_Int64_array *v40; // x8
  int64_t v41; // x2
  struct System_Int32_array *commandCardParam; // x8
  int32_t v43; // w3
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Action_o *LoadAfterCallback; // x20
  __int64 v51; // x0
  struct UserServantEntity_o *value; // [xsp+0h] [xbp-60h]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v2 = this;
  if ( (byte_42B00A2 & 1) == 0 )
  {
    sub_B52984(&BattleCommandData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_B52984(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CommandCardEquipmentControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B00A2 = 1;
  }
  entity = 0LL;
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_59;
  v5 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v5;
  *(_QWORD *)&v54.fields.fakeValue = v4;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v54, 0LL);
  if ( !v2->fields.baseUserServantEntity )
    goto LABEL_59;
  v6 = (int)this;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(v2->fields.baseUserServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (CommandCardEquipmentControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_59;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v6,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (CommandCardEquipmentControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUserServantEntity;
  if ( !v10 )
    goto LABEL_59;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                            v10[5],
                                            0LL);
  if ( !v11 )
    goto LABEL_59;
  v12 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v11,
          (int32_t)this,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)this, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  v14 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (CommandCardEquipmentControl_o *)NetworkManager__get_UserId(0LL);
  if ( !v12
    || (v15 = this,
        this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v12->fields.id,
                                                  0LL),
        !v14)
    || (this = (CommandCardEquipmentControl_o *)UserServantCommandCardMaster__TryGetEntity(
                                                  v14,
                                                  &entity,
                                                  (int64_t)v15,
                                                  (int)this,
                                                  0LL),
        (commandCardList = v2->fields.commandCardList) == 0LL) )
  {
LABEL_59:
    sub_B52A5C(this, method);
  }
  v17 = *(_QWORD *)&commandCardList->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v19 = (int)v17;
    do
    {
      v20 = *(_QWORD *)&v12[1].fields.id;
      if ( v20 )
      {
        v21 = *(unsigned int *)(v20 + 24);
        if ( (__int64)v18 < (int)v21 )
        {
          if ( v18 >= v21 )
            goto LABEL_60;
          v22 = *(_DWORD *)(v20 + 4 * v18 + 32);
          if ( (unsigned int)(v22 - 1) <= 2 )
          {
            v23 = v2->fields.commandCardList;
            if ( !v23 )
              goto LABEL_59;
            if ( v18 >= v23->max_length )
              goto LABEL_60;
            v24 = v23->m_Items[v18];
            this = (CommandCardEquipmentControl_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v2,
                                                      0LL);
            if ( !v24 )
              goto LABEL_59;
            v24->fields.target = (struct UnityEngine_GameObject_o *)this;
            sub_B52920(
              (BattleServantConfConponent_o *)&v24->fields.target,
              (System_Int32_array **)this,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            v31 = (BattleCommandData_o *)sub_B52A54(BattleCommandData_TypeInfo);
            BattleCommandData___ctor_19012556(v31, v22, v6, ServantImageLimitSealAfter, 0, 0LL);
            if ( !v31 )
              goto LABEL_59;
            v31->fields.markindex = v18;
            baseUserServantCommandCodeEntity = v2->fields.baseUserServantCommandCodeEntity;
            if ( baseUserServantCommandCodeEntity )
            {
              userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
              if ( !userCommandCodeIds )
                goto LABEL_59;
              if ( v18 >= userCommandCodeIds->max_length )
              {
LABEL_60:
                v51 = sub_B52A88(this);
                sub_B52A28(v51, 0LL);
              }
              method = (const MethodInfo *)userCommandCodeIds->m_Items[v18];
              v31->fields.userCommandCodeId = (int64_t)method;
              if ( (__int64)method >= 1 )
              {
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_59;
                v34 = v2;
                v35 = v6;
                v36 = ServantImageLimitSealAfter;
                v37 = MasterData_WarQuestSelectionMaster;
                this = (CommandCardEquipmentControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (int64_t)method,
                                                          (const MethodInfo_23E2500 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                if ( !this )
                  goto LABEL_59;
                menuListCtr = this->fields.menuListCtr;
                *(_QWORD *)&v55.fields.fakeValue = this->fields.selectMaterialUsrSvtEntity;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = this->fields.selectMaterialUsrSvtEntity;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v55.fields.fakeValue = value;
                }
                *(_QWORD *)&v55.fields.currentCryptoKey = menuListCtr;
                this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                          v55,
                                                          0LL);
                MasterData_WarQuestSelectionMaster = v37;
                ServantImageLimitSealAfter = v36;
                v6 = v35;
                v2 = v34;
                v31->fields.commandCodeId = (int)this;
              }
              v39 = v2->fields.baseUserServantCommandCodeEntity;
              if ( !v39 )
                goto LABEL_59;
              v40 = v39->fields.userCommandCodeIds;
              if ( !v40 )
                goto LABEL_59;
              if ( v18 >= v40->max_length )
                goto LABEL_60;
              v41 = v40->m_Items[v18];
            }
            else
            {
              v41 = -1LL;
            }
            if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
            {
              if ( v18 >= commandCardParam->max_length )
                goto LABEL_60;
              v43 = commandCardParam->m_Items[v18 + 1];
            }
            else
            {
              v43 = 0;
            }
            v31->fields.commandCardParam = v43;
            CombineCommandCardComponent__DispCommandCard(v24, v31, v41, v43, 0, 0, 0LL);
          }
        }
      }
      ++v18;
    }
    while ( (__int64)v18 < v19 );
  }
  CommandCardEquipmentControl__SetExecuteButtonState(v2, method);
  LoadAfterCallback = v2->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    v2->fields.LoadAfterCallback = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v2->fields.LoadAfterCallback, 0LL, v44, v45, v46, v47, v48, v49);
    System_Action__Invoke(LoadAfterCallback, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__SetEffectAfterInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *qpInfoObj; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  CommandCardEquipmentControl__InitCommandCodeInfo(this, method);
  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL),
        (qpInfoObj = (UnityEngine_GameObject_o *)this->fields.lockButton) == 0LL)
    || (qpInfoObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)qpInfoObj, 0LL)) == 0LL )
  {
    sub_B52A5C(qpInfoObj, v3);
  }
  UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL);
  CommandCardEquipmentControl__InitCommandCardSelectStatus(this, v5);
  CommandCardEquipmentControl__InitDisplayInfo(this, v6);
}


void __fastcall CommandCardEquipmentControl__SetExecuteButtonState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  struct UICommonButton_o *executeButton; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  bool v7; // zf
  struct CombineCommandCardComponent_o *v8; // x8
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x9
  struct BattleCommandData_o *data; // x8
  __int128 v11; // q1
  int64_t userCommandCodeId; // x20
  _BOOL4 v13; // w20
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_42B00B7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00B7 = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  v6 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( ((unsigned __int8)executeButton & 1) == 0 )
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
    executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)executeButton & 1) == 0 )
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
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v11;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v15 = v16;
      v7 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v15, 0LL);
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
        (executeButton = this->fields.executeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)executeButton, v13, 0LL),
        (executeButton = this->fields.executeButton) == 0LL) )
  {
LABEL_34:
    sub_B52A5C(executeButton, v5);
  }
  if ( v13 )
    v14 = 0LL;
  else
    v14 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))executeButton->klass->vtable._14_SetState.method)(
    executeButton,
    v14,
    1LL,
    executeButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CommandCardEquipmentControl__SetHaveQpInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLabel; // x20

  if ( (byte_42B00B6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B00B6 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39387012((int)this + 436, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
        !haveQpLabel) )
  {
    sub_B52A5C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLabel, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetRemoveButttonState(
        CommandCardEquipmentControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *removeButton; // x0
  bool v5; // w21
  __int64 v7; // x1

  removeButton = (UnityEngine_Behaviour_o *)this->fields.removeButton;
  if ( !removeButton
    || (v5 = isEnable,
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, void *))removeButton->klass[1]._1.namespaze)(
          removeButton,
          isEnable,
          removeButton->klass[1]._1.byval_arg.data),
        (removeButton = (UnityEngine_Behaviour_o *)this->fields.removeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(removeButton, v5, 0LL),
        (removeButton = (UnityEngine_Behaviour_o *)this->fields.removeButton) == 0LL) )
  {
    sub_B52A5C(removeButton, isEnable);
  }
  if ( isEnable )
    v7 = 0LL;
  else
    v7 = 3LL;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))removeButton->klass[1]._1.implementedInterfaces)(
    removeButton,
    v7,
    1LL,
    removeButton->klass[1]._1.interfaceOffsets);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetReplaceButtonState(
        CommandCardEquipmentControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *replaceButton; // x0
  bool v5; // w21
  __int64 v7; // x1

  replaceButton = (UnityEngine_Behaviour_o *)this->fields.replaceButton;
  if ( !replaceButton
    || (v5 = isEnable,
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, void *))replaceButton->klass[1]._1.namespaze)(
          replaceButton,
          isEnable,
          replaceButton->klass[1]._1.byval_arg.data),
        (replaceButton = (UnityEngine_Behaviour_o *)this->fields.replaceButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(replaceButton, v5, 0LL),
        (replaceButton = (UnityEngine_Behaviour_o *)this->fields.replaceButton) == 0LL) )
  {
    sub_B52A5C(replaceButton, isEnable);
  }
  if ( isEnable )
    v7 = 0LL;
  else
    v7 = 3LL;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))replaceButton->klass[1]._1.implementedInterfaces)(
    replaceButton,
    v7,
    1LL,
    replaceButton->klass[1]._1.interfaceOffsets);
}


void __fastcall CommandCardEquipmentControl__SetReplaceDispInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *overwriteWarningLabel; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  overwriteWarningLabel = (UnityEngine_Component_o *)this->fields.overwriteWarningLabel;
  if ( !overwriteWarningLabel
    || (overwriteWarningLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             overwriteWarningLabel,
                                                             0LL)) == 0LL )
  {
    sub_B52A5C(overwriteWarningLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overwriteWarningLabel, 0, 0LL);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v4);
  CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v5);
  CommandCardEquipmentControl__SetExecuteButtonState(this, v6);
}


void __fastcall CommandCardEquipmentControl__SetSelectedCommandCodeInfo(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        bool dispEquippedInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  int64_t commandCardInfoObj; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  int v18; // w25
  struct CombineCommandCardComponent_o *v19; // x8
  struct BattleCommandData_o *v20; // x8
  __int128 v21; // q1
  int64_t userCommandCodeId; // x24
  struct CombineCommandCardComponent_o *v23; // x8
  struct BattleCommandData_o *v24; // x8
  __int128 v25; // q0
  int64_t v26; // x22
  struct CombineCommandCardComponent_o *v27; // x8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  int max_length; // w26
  il2cpp_array_size_t v31; // w27
  struct System_Int64_array *v32; // x8
  int64_t v33; // x22
  __int64 v34; // x23
  __int64 v35; // x24
  bool v36; // w23
  struct UserServantCommandCodeEntity_o *v37; // x8
  __int128 v38; // q1
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  bool v41; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42B00A6 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00A6 = 1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  commandCardInfoObj = (int64_t)this->fields.unlockItemInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0LL);
  commandCardInfoObj = (int64_t)this->fields.commandCardNotEquippedInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0LL);
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
    goto LABEL_65;
  commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)commandCardInfoObj,
                                  0LL);
  if ( !commandCardInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentSkillIcon;
  if ( !commandCardInfoObj )
    goto LABEL_65;
  commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)commandCardInfoObj,
                                  0LL);
  if ( !commandCardInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  commandCardInfoObj = (int64_t)this->fields.qpInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0LL);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    goto LABEL_65;
  data = targetCommandCardData->fields.data;
  if ( data )
  {
    commandCardInfoObj = BattleCommandData__IsEnableCommandCode(data, 0LL);
    v18 = 0;
    if ( userCommandCode && (commandCardInfoObj & 1) != 0 )
    {
      v19 = this->fields.targetCommandCardData;
      if ( !v19 )
        goto LABEL_65;
      v20 = v19->fields.data;
      if ( !v20 )
        goto LABEL_65;
      v21 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v20->fields.userCommandCodeId;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v21;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v44 = v45;
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v44, 0LL);
      v18 = userCommandCodeId != commandCardInfoObj;
      if ( dispEquippedInfo )
      {
        v23 = this->fields.targetCommandCardData;
        if ( !v23 )
          goto LABEL_65;
        v24 = v23->fields.data;
        if ( !v24 )
          goto LABEL_65;
        v25 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v26 = v24->fields.userCommandCodeId;
        *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v45.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v43 = v45;
        dispEquippedInfo = v26 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v43, 0LL);
      }
      else
      {
        dispEquippedInfo = 0;
      }
    }
  }
  else
  {
    v18 = 0;
  }
  this->fields.baseUserCommandCodeEntity = userCommandCode;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v27 = this->fields.targetCommandCardData;
  if ( !v27 )
    goto LABEL_65;
  if ( ((v27->fields._NowKind_k__BackingField == 2) & ~v18) != 0 )
  {
    LODWORD(baseUserServantCommandCodeEntity) = 0;
    v36 = 1;
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
        v36 = 0;
      }
      else
      {
        v41 = dispEquippedInfo;
        v31 = 0;
        while ( 1 )
        {
          v32 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
          if ( !v32 )
            goto LABEL_65;
          if ( v31 >= v32->max_length )
          {
            v40 = sub_B52A88(commandCardInfoObj);
            sub_B52A28(v40, 0LL);
          }
          v33 = v32->m_Items[v31];
          v35 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v46.fields.currentCryptoKey = v35;
          *(_QWORD *)&v46.fields.fakeValue = v34;
          commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v46, 0LL);
          if ( v33 == (int)commandCardInfoObj )
          {
            v36 = 1;
            goto LABEL_51;
          }
          if ( (int)++v31 >= max_length )
            break;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          if ( !baseUserServantCommandCodeEntity )
            goto LABEL_65;
        }
        v36 = 0;
LABEL_51:
        dispEquippedInfo = v41;
      }
      LODWORD(baseUserServantCommandCodeEntity) = 1;
    }
    else
    {
      v36 = 0;
    }
  }
  else
  {
    v36 = 0;
    LODWORD(baseUserServantCommandCodeEntity) = 0;
  }
  if ( (unsigned int)baseUserServantCommandCodeEntity | v18 )
  {
    CommandCardEquipmentControl__SetReplaceDispInfo(this, (const MethodInfo *)userCommandCode);
    commandCardInfoObj = (int64_t)this->fields.cancelButton;
    if ( !commandCardInfoObj )
      goto LABEL_65;
    commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)commandCardInfoObj,
                                    0LL);
    if ( !commandCardInfoObj )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  }
  v37 = this->fields.baseUserServantCommandCodeEntity;
  if ( v37 )
  {
    v38 = *(_OWORD *)&v37->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v37->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v45.fields.fakeValue = v38;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v42 = v45;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v42, 0LL) == equippedSvtId )
      equippedSvtId = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_65:
    sub_B52A5C(commandCardInfoObj, userCommandCode);
  CombineCommandCardEquipmentComponent__SetIcon(
    (CombineCommandCardEquipmentComponent_o *)commandCardInfoObj,
    userCommandCode,
    v36,
    dispEquippedInfo,
    equippedSvtId,
    0LL);
  CommandCardEquipmentControl__SetCommandCardEquipmentSkill(this, userCommandCode, v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetStateInfoMsg(
        CommandCardEquipmentControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UIWidget_o *detailLabel; // x20
  UnityEngine_Color_o **executeButtonSprite; // x0
  System_String_o *v7; // x20
  UISprite_o *messageTxtLabelSprite; // x21
  UILabel_o *baseSelectInfoLabel; // x21
  __int64 *v10; // x8
  struct CombineCommandCardComponent_o *v11; // x8
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int128 v13; // q1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v15; // q0
  __int64 *v16; // x8
  UnityEngine_Object_o *targetCommandCardData; // x21
  struct CombineCommandCardComponent_o *v18; // x8
  int32_t NowKind_k__BackingField; // w8
  UIWidget_o *v20; // x20
  int v21; // s0
  __int64 *v25; // x8
  UISprite_o *v26; // x21
  UISprite_o *v27; // x21
  System_String_o *REPLACE_EXE_BTN_SPRITE_NAME; // x1
  UISprite_o *v29; // x21
  UISprite_o *v30; // x21
  System_String_o *EQUIP_EXE_BTN_SPRITE_NAME; // x1
  UIWidget_o *v32; // x20
  int v33; // s0
  UISprite_o *v37; // x21
  UISprite_o *v38; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-40h]

  if ( (byte_42B00B8 & 1) == 0 )
  {
    sub_B52984(&CommandCardEquipmentControl_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&StringLiteral_3193/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_3190/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_3191/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/);
    sub_B52984(&StringLiteral_3197/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/);
    sub_B52984(&StringLiteral_3195/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_3194/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/);
    sub_B52984(&StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B52984(&StringLiteral_3199/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    sub_B52984(&StringLiteral_3196/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B00B8 = 1;
  }
  detailLabel = (UIWidget_o *)this->fields.detailLabel;
  executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
  if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
    executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
  }
  if ( !detailLabel )
    goto LABEL_129;
  UIWidget__set_color(detailLabel, *executeButtonSprite[23], 0LL);
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( state )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3190/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0LL);
      messageTxtLabelSprite = this->fields.messageTxtLabelSprite;
      v7 = (System_String_o *)executeButtonSprite;
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
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
      if ( !executeButtonSprite )
        goto LABEL_129;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
      if ( !executeButtonSprite )
        goto LABEL_129;
      UISprite__set_spriteName(
        (UISprite_o *)executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      baseSelectInfoLabel = this->fields.baseSelectInfoLabel;
      v10 = &StringLiteral_3191/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
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
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.baseSelectInfoLabel;
      if ( !executeButtonSprite )
        goto LABEL_129;
      executeButtonSprite = (UnityEngine_Color_o **)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)executeButtonSprite,
                                                      0LL);
      if ( !executeButtonSprite )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)executeButtonSprite, 0, 0LL);
      v18 = this->fields.targetCommandCardData;
      if ( !v18 )
        goto LABEL_129;
      NowKind_k__BackingField = v18->fields._NowKind_k__BackingField;
      if ( NowKind_k__BackingField == 2 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3196/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                        0LL);
        v30 = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)executeButtonSprite;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v30 )
        {
          UISprite__set_spriteName(
            v30,
            CommandCardEquipmentControl_TypeInfo->static_fields->EQUIPED_MESSAGE_SPRITE_NAME,
            0LL);
          executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
          if ( executeButtonSprite )
          {
            (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
              executeButtonSprite,
              *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
            executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
            if ( executeButtonSprite )
            {
              EQUIP_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
LABEL_124:
              UISprite__set_spriteName((UISprite_o *)executeButtonSprite, EQUIP_EXE_BTN_SPRITE_NAME, 0LL);
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
          v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3195/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0LL);
          goto LABEL_127;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3197/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
                                                        0LL);
        v37 = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)executeButtonSprite;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v37 )
        {
          UISprite__set_spriteName(
            v37,
            CommandCardEquipmentControl_TypeInfo->static_fields->NOT_EQUIPED_MESSAGE_SPRITE_NAME,
            0LL);
          executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
          if ( executeButtonSprite )
          {
            (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
              executeButtonSprite,
              *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
            executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
            if ( executeButtonSprite )
            {
              UISprite__set_spriteName(
                (UISprite_o *)executeButtonSprite,
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
          v20 = (UIWidget_o *)this->fields.detailLabel;
          *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
          if ( !v20 )
            goto LABEL_129;
          UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = &StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/;
        }
        else if ( this->fields.isShortNeedItem )
        {
          v32 = (UIWidget_o *)this->fields.detailLabel;
          *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
          if ( !v32 )
            goto LABEL_129;
          UIWidget__set_color(v32, *(UnityEngine_Color_o *)&v33, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = &StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = &StringLiteral_3199/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v25, 0LL);
        v38 = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)executeButtonSprite;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v38 )
        {
          UISprite__set_spriteName(
            v38,
            CommandCardEquipmentControl_TypeInfo->static_fields->UNLOCK_MESSAGE_SPRITE_NAME,
            0LL);
          executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
          if ( executeButtonSprite )
          {
            (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
              executeButtonSprite,
              *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
            executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
            if ( executeButtonSprite )
            {
              EQUIP_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->UNLOCK_EXE_BTN_SPRITE_NAME;
              goto LABEL_124;
            }
          }
        }
      }
      goto LABEL_129;
    case 2:
      v11 = this->fields.targetCommandCardData;
      if ( !v11 )
        goto LABEL_129;
      if ( v11->fields._NowKind_k__BackingField == 2 )
      {
        nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
        if ( nowEquipedUserCommandCodeEntity )
        {
          v13 = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v41.fields.fakeValue = v13;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v40 = v41;
          executeButtonSprite = (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                          &v40,
                                                          0LL);
          baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
          if ( baseUserCommandCodeEntity )
          {
            v15 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v39.fields.fakeValue = v15;
            if ( executeButtonSprite == (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                                                  &v39,
                                                                  0LL) )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v16 = &StringLiteral_3196/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/;
              goto LABEL_63;
            }
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3196/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                            0LL);
            v27 = this->fields.executeButtonSprite;
            v7 = (System_String_o *)executeButtonSprite;
            if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
            }
            if ( v27 )
            {
              REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->REPLACE_EXE_BTN_SPRITE_NAME;
              goto LABEL_76;
            }
          }
        }
LABEL_129:
        sub_B52A5C(executeButtonSprite, *(_QWORD *)&state);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_3195/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/;
LABEL_63:
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v16, 0LL);
      v27 = this->fields.executeButtonSprite;
      v7 = (System_String_o *)executeButtonSprite;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v27 )
        goto LABEL_129;
      REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
LABEL_76:
      UISprite__set_spriteName(v27, REPLACE_EXE_BTN_SPRITE_NAME, 0LL);
      executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
      v29 = this->fields.messageTxtLabelSprite;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v29 )
        goto LABEL_129;
      UISprite__set_spriteName(
        v29,
        CommandCardEquipmentControl_TypeInfo->static_fields->SELECTED_MESSAGE_SPRITE_NAME,
        0LL);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
      if ( !executeButtonSprite )
        goto LABEL_129;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
LABEL_125:
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
      if ( !executeButtonSprite )
        goto LABEL_129;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
LABEL_127:
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.detailLabel;
      if ( !executeButtonSprite )
        goto LABEL_129;
      UILabel__set_text((UILabel_o *)executeButtonSprite, v7, 0LL);
      return;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3193/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0LL);
      v26 = this->fields.messageTxtLabelSprite;
      v7 = (System_String_o *)executeButtonSprite;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v26 )
        goto LABEL_129;
      UISprite__set_spriteName(
        v26,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
        0LL);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
      if ( !executeButtonSprite )
        goto LABEL_129;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
      if ( !executeButtonSprite )
        goto LABEL_129;
      UISprite__set_spriteName(
        (UISprite_o *)executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      baseSelectInfoLabel = this->fields.baseSelectInfoLabel;
      v10 = &StringLiteral_3194/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
LABEL_55:
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v10, 0LL);
      if ( !baseSelectInfoLabel )
        goto LABEL_129;
      UILabel__set_text(baseSelectInfoLabel, (System_String_o *)executeButtonSprite, 0LL);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.baseSelectInfoLabel;
      if ( !executeButtonSprite )
        goto LABEL_129;
      executeButtonSprite = (UnityEngine_Color_o **)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)executeButtonSprite,
                                                      0LL);
      if ( !executeButtonSprite )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)executeButtonSprite, 1, 0LL);
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
  CommandCardEquipmentControl_o *v5; // x19
  il2cpp_array_size_t v7; // w22
  __int64 v8; // x0

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_8;
  max_length = commandCardList->max_length;
  if ( max_length >= 1 )
  {
    v5 = this;
    v7 = 0;
    do
    {
      if ( v7 >= commandCardList->max_length )
      {
        v8 = sub_B52A88(this);
        sub_B52A28(v8, 0LL);
      }
      this = (CommandCardEquipmentControl_o *)commandCardList->m_Items[v7];
      if ( !this )
        break;
      CombineCommandCardComponent__SetSelectedSprite((CombineCommandCardComponent_o *)this, index == v7++, 0LL);
      if ( (int)v7 >= max_length )
        return;
      commandCardList = v5->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_8:
    sub_B52A5C(this, *(_QWORD *)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetUnlockItemInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantCommandCodeUnlockMaster_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w21
  UILabel_o *spendQpLabel; // x21
  int64_t v11; // x20
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  __int64 v13; // x21
  __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x23
  signed __int64 v17; // x24
  unsigned __int64 v18; // x22
  __int64 v19; // x27
  bool v20; // w9
  Il2CppClass **v21; // x8
  LimitCntUpItemComponent_o *v22; // x20
  int32_t spendQpVal; // w8
  int32_t haveQpVal; // w9
  UIWidget_o *v25; // x20
  int v26; // s0
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42B00AE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B00AE = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_38;
  v6 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v8;
  *(_QWORD *)&v31.fields.fakeValue = v7;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v31, 0LL);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_38;
  v9 = Instance;
  Instance = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)this->fields.targetCommandCardData, 0LL);
  if ( !v6 )
    goto LABEL_38;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v6, v9, Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  spendQpLabel = this->fields.spendQpLabel;
  v11 = Instance;
  this->fields.spendQpVal = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)System_Int32__ToString_39387012((int)this + 432, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_38;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_38;
  v13 = *(_QWORD *)(v11 + 40);
  if ( !v13 )
    goto LABEL_38;
  v14 = *(_QWORD *)&unlockItemInfoList->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = *(_QWORD *)(v13 + 24);
    v16 = *(_QWORD *)(v11 + 32);
    v17 = (int)v14;
    v18 = 0LL;
    v19 = (int)v15;
    v20 = v15 << 32 > 0;
    do
    {
      if ( v18 >= unlockItemInfoList->max_length )
      {
LABEL_39:
        v30 = sub_B52A88(Instance);
        sub_B52A28(v30, 0LL);
      }
      v21 = &unlockItemInfoList->obj.klass + v18;
      v22 = (LimitCntUpItemComponent_o *)v21[4];
      if ( v20 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v18 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_39;
        if ( !v16 )
          break;
        if ( v18 >= *(unsigned int *)(v16 + 24) )
          goto LABEL_39;
        if ( !v22 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v22,
          Instance,
          *(_DWORD *)(v13 + 32 + 4 * v18),
          *(_DWORD *)(v16 + 32 + 4 * v18),
          0LL);
        if ( !v22->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      else
      {
        if ( !v22 )
          break;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)v21[4], 0LL);
      }
      if ( (__int64)++v18 >= v17 )
        goto LABEL_32;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v20 = (__int64)v18 < v19;
    }
    while ( unlockItemInfoList );
LABEL_38:
    sub_B52A5C(Instance, v4);
  }
LABEL_32:
  spendQpVal = this->fields.spendQpVal;
  haveQpVal = this->fields.haveQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = spendQpVal > haveQpVal;
  if ( spendQpVal > haveQpVal )
  {
    v25 = (UIWidget_o *)this->fields.spendQpLabel;
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_red(0LL);
    if ( !v25 )
      goto LABEL_38;
    UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
    this->fields.isCanCombine = 0;
  }
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___OpenLockDialog_b__91_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_25178048(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_B52A5C(commandCardDialog, isDecide);
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
    sub_B52A5C(0LL, isDecide);
  CommandCardDialog__Close_25178048(commandCardDialog, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___OpenUnlockDialog_b__90_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_25178048(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_B52A5C(commandCardDialog, isDecide);
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

  if ( (byte_42B00BB & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B00BB = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_42B00BA & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B00BA = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v5 )
    sub_B52A5C(0LL, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_B52A5C(0LL, method);
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


void __fastcall CommandCardEquipmentControl__touchCommandCard(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x22
  struct CombineCommandCardComponent_o **p_targetCommandCardData; // x21
  __int64 v7; // x1
  BattleCommandComponent_o *v8; // x0
  int32_t MarkIndex; // w0
  SeManager_c *v10; // x8
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  System_Int32_array **v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  __int64 v28; // x0

  if ( (byte_42B00A3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SeManager_TypeInfo);
    byte_42B00A3 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_targetCommandCardData = &this->fields.targetCommandCardData;
    if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    {
      v8 = (BattleCommandComponent_o *)*p_targetCommandCardData;
      if ( !*p_targetCommandCardData )
        goto LABEL_24;
      MarkIndex = BattleCommandComponent__getMarkIndex(v8, 0LL);
      v10 = SeManager_TypeInfo;
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
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity,
          0LL,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v17);
        commandCardList = this->fields.commandCardList;
        if ( commandCardList )
        {
          if ( commandCardList->max_length <= index )
          {
            v28 = sub_B52A88(v8);
            sub_B52A28(v28, 0LL);
          }
          v25 = (System_Int32_array **)commandCardList->m_Items[index];
          *p_targetCommandCardData = (struct CombineCommandCardComponent_o *)v25;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.targetCommandCardData,
            v25,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          if ( *p_targetCommandCardData )
          {
            CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
              this,
              (*p_targetCommandCardData)->fields._NowKind_k__BackingField,
              v26);
            CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v27);
            return;
          }
        }
LABEL_24:
        sub_B52A5C(v8, v7);
      }
    }
    else
    {
      v10 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_20;
    }
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
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
  CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *v2; // x19
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t targetCardIdx; // w21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v11; // x9
  CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *v12; // x20
  Il2CppObject *v13; // x22
  System_Action_o *v14; // x21
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v19; // w21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w0
  UnityEngine_WaitForSeconds_o *v23; // x20
  Il2CppObject **v24; // x19
  System_Action_o *callback; // x0
  __int64 v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v2 = this;
  if ( (byte_42AD721 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineCommandCardComponent_HideCommandCodeSprite__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD721 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( nowEquipedUserCommandCodeEntity )
        {
          targetCardIdx = v2->fields.targetCardIdx;
          v8 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
          v7 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v27.fields.currentCryptoKey = v8;
          *(_QWORD *)&v27.fields.fakeValue = v7;
          v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v9,
                                                                              0LL);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v11 = v2->fields.targetCardIdx;
            if ( (unsigned int)v11 >= commandCardList->max_length )
            {
              v26 = sub_B52A88(this);
              sub_B52A28(v26, 0LL);
            }
            v12 = this;
            v13 = (Il2CppObject *)commandCardList->m_Items[v11];
            v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(v14, v13, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v12 )
            {
              CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v12, v14, 0LL);
              CommandCodeEffectComponent__PlayDetachEffect((CommandCodeEffectComponent_o *)v12, 0LL);
              v15 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v15, 0.3, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v15;
              p__2__current = &v2->fields.__2__current;
              sub_B52920(p__2__current);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
LABEL_24:
      sub_B52A5C(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_24;
  CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, 0LL);
  this = (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)_4__this->fields.commandCardEquipmentIcon;
  if ( !this )
    goto LABEL_24;
  CombineCommandCardEquipmentComponent__SetEquippedInfo((CombineCommandCardEquipmentComponent_o *)this, 0, -1, 0LL);
  baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_24;
  v19 = v2->fields.targetCardIdx;
  v21 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v21;
  *(_QWORD *)&v28.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v28, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v19, v22, 0LL);
  v23 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v23, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v23;
  v24 = &v2->fields.__2__current;
  sub_B52920(v24);
  *((_DWORD *)v24 - 2) = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__122_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *v2; // x19
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t removeCardIdx; // w21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v11; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *v12; // x21
  Il2CppObject *v13; // x23
  System_Action_o *v14; // x22
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w0
  struct CombineCommandCardComponent_array *v20; // x8
  __int64 v21; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *v22; // x20
  Il2CppObject *v23; // x22
  System_Action_o *v24; // x21
  UnityEngine_WaitForSeconds_o *v25; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callback; // x0
  struct UserCommandCodeEntity_o *v29; // x8
  int32_t v30; // w21
  __int64 v31; // x22
  __int64 v32; // x23
  int32_t v33; // w0
  UnityEngine_WaitForSeconds_o *v34; // x20
  Il2CppObject **v35; // x19
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v2 = this;
  if ( (byte_42AD722 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CombineCommandCardComponent_HideCommandCodeSprite__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD722 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
        goto LABEL_35;
      removeCardIdx = v2->fields.removeCardIdx;
      v8 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v7 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v8;
      *(_QWORD *)&v37.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v37, 0LL);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v9,
                                                                                    0LL);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_35;
      v11 = v2->fields.removeCardIdx;
      if ( (unsigned int)v11 < commandCardList->max_length )
      {
        v12 = this;
        v13 = (Il2CppObject *)commandCardList->m_Items[v11];
        v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v14, v13, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v12 )
          goto LABEL_35;
        CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v12, v14, 0LL);
        CommandCodeEffectComponent__PlayDetachEffect((CommandCodeEffectComponent_o *)v12, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
        {
LABEL_22:
          v25 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v25, 0.3, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v25;
          p__2__current = &v2->fields.__2__current;
          sub_B52920(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        attachCardIdx = v2->fields.attachCardIdx;
        v18 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v38.fields.currentCryptoKey = v18;
        *(_QWORD *)&v38.fields.fakeValue = v17;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v19,
                                                                                      0LL);
        v20 = _4__this->fields.commandCardList;
        if ( !v20 )
LABEL_35:
          sub_B52A5C(this, method);
        v21 = v2->fields.attachCardIdx;
        if ( (unsigned int)v21 < v20->max_length )
        {
          v22 = this;
          v23 = (Il2CppObject *)v20->m_Items[v21];
          v24 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v24, v23, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v22 )
          {
            CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v22, v24, 0LL);
            CommandCodeEffectComponent__PlayDetachEffect((CommandCodeEffectComponent_o *)v22, 0LL);
            goto LABEL_22;
          }
          goto LABEL_35;
        }
      }
      v36 = sub_B52A88(this);
      sub_B52A28(v36, 0LL);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_35;
  if ( _4__this->fields.nowEquipedUserCommandCodeEntity )
    CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, 0LL);
  else
    CommandCardEquipmentControl__CreateAttachEffectOnCode(_4__this, 0LL);
  this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)_4__this->fields.commandCardEquipmentIcon;
  if ( !this )
    goto LABEL_35;
  CombineCommandCardEquipmentComponent__SetEquippedInfo((CombineCommandCardEquipmentComponent_o *)this, 0, -1, 0LL);
  v29 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v29 )
    goto LABEL_35;
  v30 = v2->fields.attachCardIdx;
  v32 = *(_QWORD *)&v29->fields.commandCodeId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v32;
  *(_QWORD *)&v39.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v30, v33, 0LL);
  v34 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v34, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v34;
  v35 = &v2->fields.__2__current;
  sub_B52920(v35);
  *((_DWORD *)v35 - 2) = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x0

  if ( (byte_42AD71D & 1) == 0 )
  {
    sub_B52984(&CommandCardEquipmentControl___c_TypeInfo);
    byte_42AD71D = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CommandCardEquipmentControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall CommandCardEquipmentControl___c___ctor(
        CommandCardEquipmentControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CommandCardEquipmentControl___c___OnLongPushCommandCode_b__102_0(
        CommandCardEquipmentControl___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AD71E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD71E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
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
  CommandCardEquipmentControl___c__DisplayClass121_0_o *v3; // x19
  struct CommandCardEquipmentControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (CommandCardEquipmentControl___c__DisplayClass121_0_o *)_4__this->fields.commandCardEquipmentIcon) == 0LL)
    || (this = (CommandCardEquipmentControl___c__DisplayClass121_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (CommandCardEquipmentControl___c__DisplayClass121_0_o *)v4->fields.commandCardEquipmentSkillIcon) == 0LL
    || (this = (CommandCardEquipmentControl___c__DisplayClass121_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
  {
    sub_B52A5C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
  CommandCardEquipmentControl___c__DisplayClass89_0_o *v4; // x20
  struct CommandCardEquipmentControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_42AD71F & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD71F = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_9:
      sub_B52A5C(this, isDecide);
    }
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___c__DisplayClass89_0___OpenEquippedCommandCodeAttachDialog_b__1(
        CommandCardEquipmentControl___c__DisplayClass89_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardEquipmentControl___c__DisplayClass89_0_o *v4; // x19
  struct CommandCardEquipmentControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_42AD720 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD720 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_11:
      sub_B52A5C(this, isDecide);
    }
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}