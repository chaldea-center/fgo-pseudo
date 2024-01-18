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

  if ( (byte_41880BC & 1) == 0 )
  {
    sub_B2C35C(&CommandCardEquipmentControl_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19682/*"img_txt_equipcc_3"*/, v6);
    sub_B2C35C(&StringLiteral_19681/*"img_txt_equipcc_1"*/, v7);
    sub_B2C35C(&StringLiteral_19276/*"icon_arrow_pink"*/, v8);
    sub_B2C35C(&StringLiteral_17080/*"btn_txt_replace"*/, v9);
    sub_B2C35C(&StringLiteral_19753/*"img_txt_unlockcc"*/, v10);
    sub_B2C35C(&StringLiteral_17052/*"btn_txt_equipcc"*/, v11);
    sub_B2C35C(&StringLiteral_19683/*"img_txt_equipcc_4"*/, v12);
    sub_B2C35C(&StringLiteral_17103/*"btn_txt_unlockcc"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_41880BC = 1;
  }
  v15 = 1063321600;
  v16 = 1065156608;
  v17 = 0;
  v90 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v90);
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = v90;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_19276/*"icon_arrow_pink"*/;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19276/*"icon_arrow_pink"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_19753/*"img_txt_unlockcc"*/;
  v26->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19753/*"img_txt_unlockcc"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->UNLOCK_MESSAGE_SPRITE_NAME, v27, v28, v29, v30, v31, v32, v33);
  v34 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_19681/*"img_txt_equipcc_1"*/;
  v34->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19681/*"img_txt_equipcc_1"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->EQUIPED_MESSAGE_SPRITE_NAME, v35, v36, v37, v38, v39, v40, v41);
  v42 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_19682/*"img_txt_equipcc_3"*/;
  v42->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19682/*"img_txt_equipcc_3"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->SELECTED_MESSAGE_SPRITE_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_19683/*"img_txt_equipcc_4"*/;
  v50->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19683/*"img_txt_equipcc_4"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v51, v52, v53, v54, v55, v56, v57);
  v58 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_1/*""*/;
  v58->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v58->DEFAULT_EXE_BTN_SPRITE_NAME, v59, v60, v61, v62, v63, v64, v65);
  v66 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_17103/*"btn_txt_unlockcc"*/;
  v66->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17103/*"btn_txt_unlockcc"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v66->UNLOCK_EXE_BTN_SPRITE_NAME, v67, v68, v69, v70, v71, v72, v73);
  v74 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_17052/*"btn_txt_equipcc"*/;
  v74->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17052/*"btn_txt_equipcc"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v74->EQUIP_EXE_BTN_SPRITE_NAME, v75, v76, v77, v78, v79, v80, v81);
  v82 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v83 = (System_Int32_array **)StringLiteral_17080/*"btn_txt_replace"*/;
  v82->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17080/*"btn_txt_replace"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v82->REPLACE_EXE_BTN_SPRITE_NAME, v83, v84, v85, v86, v87, v88, v89);
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
  __int64 v17; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v19; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  int64_t v22; // x21
  System_Int32_array **Entity; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserCommandCodeEntity_o *v30; // x8
  __int128 v31; // q1
  CommandCardEquipmentControl_o *v32; // x0
  const MethodInfo *v33; // x2
  bool v34; // w0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  UILabel_o *commandCardNotEquippedDetail; // x19
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-40h]

  if ( (byte_418809A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&nowKind);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_3166/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, v9);
    byte_418809A = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_B2C2F8(
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
                CommandCardEquipmentControl__SetUnlockItemInfo(this, v37);
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
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v38);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v39);
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
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3166/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0LL);
      return;
    }
LABEL_48:
    sub_B2C434(lockButton, v17);
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
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v19);
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
    v41 = sub_B2C460(lockButton);
    sub_B2C400(v41, 0LL);
  }
  v22 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_48;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_48;
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)lockButton,
                                    v22,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    Entity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_48;
  v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v31;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v42 = v43;
  v32 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v42, 0LL);
  v34 = CommandCardEquipmentControl__EnableReplace(v32, (int64_t)v32, v33);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v34, v35);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v36);
}


bool __fastcall CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v4; // x20
  __int64 v5; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_418809F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, dic);
    this = (CommandCardEquipmentControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_418809F = 1;
  }
  baseUserCommandCodeEntity = v4->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_9;
  v7 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v9, 0LL);
  if ( !dic )
LABEL_9:
    sub_B2C434(this, dic);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_2E55830 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
}


void __fastcall CommandCardEquipmentControl__CheckOpenDialogType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *targetCommandCardData; // x20
  UserServantCommandCodeMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  struct CombineCommandCardComponent_o *v8; // x8
  BattleCommandData_o *data; // x21
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_long__long__o *EquippedCommandCodeDic; // x20
  const MethodInfo *v12; // x3
  CommandCardEquipmentControl_o *v13; // x0
  System_Collections_Generic_Dictionary_long__long__o *v14; // x1
  bool v15; // w2

  if ( (byte_418809E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418809E = 1;
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
    v8 = this->fields.targetCommandCardData;
    if ( v8 )
    {
      if ( !v8->fields._NowKind_k__BackingField )
      {
        CommandCardEquipmentControl__OpenUnlockDialog(this, v7);
        return;
      }
      data = v8->fields.data;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
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
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v10) )
          {
            v15 = 1;
            v13 = this;
            v14 = EquippedCommandCodeDic;
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
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
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

  if ( (byte_4188096 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4188096 = 1;
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
    sub_B2C434(baseSelectInfoObj, selectBase);
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v23, 0LL);
    v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v9;
    if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v22, 0LL) )
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
  sub_B2C2F8(p_baseUserServantEntity, (System_Int32_array **)selectBase, v13, v14, v15, v16, v17, v18);
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
  CommandCardDialog__Close_25843252(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_B2C434(commandCardDialog, isDecide);
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
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *transform; // x21
  int v16; // s0
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  const MethodInfo *v23; // x2
  __int64 v25; // x0

  if ( (byte_41880B9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41880B9 = 1;
  }
  commandCodeAppearEffect = this->fields.commandCodeAppearEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeAppearEffect,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v12 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_15;
  if ( commandCardList->max_length <= targetCommandCardIdx )
  {
    v25 = sub_B2C460(Component_srcLineSprite);
    sub_B2C400(v25, 0LL);
  }
  v14 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                0LL),
        !v14)
    || (UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL),
        v19 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
        !v19) )
  {
LABEL_15:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, v23);
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
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *transform; // x20
  int v12; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0

  if ( (byte_41880BB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41880BB = 1;
  }
  commandCodeFlashEffect = this->fields.commandCodeFlashEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeFlashEffect,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  v8 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_14;
  v10 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                Component_srcLineSprite,
                                                                0LL),
        !v10)
    || (UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_14:
    sub_B2C434(Component_srcLineSprite, v7);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
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
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *transform; // x21
  int v16; // s0
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  const MethodInfo *v23; // x2
  __int64 v25; // x0

  if ( (byte_41880B8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41880B8 = 1;
  }
  commandCardDetachEffect = this->fields.commandCardDetachEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCardDetachEffect,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  v12 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_15;
  if ( commandCardList->max_length <= targetCommandCardIdx )
  {
    v25 = sub_B2C460(Component_srcLineSprite);
    sub_B2C400(v25, 0LL);
  }
  v14 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                0LL),
        !v14)
    || (UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL),
        v19 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
        !v19) )
  {
LABEL_15:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, v23);
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
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *transform; // x20
  int v12; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0

  if ( (byte_41880BA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41880BA = 1;
  }
  commandCodeReplaceEffect = this->fields.commandCodeReplaceEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeReplaceEffect,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  v8 = (UnityEngine_Component_o *)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_14;
  v10 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                Component_srcLineSprite,
                                                                0LL),
        !v10)
    || (UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_Component__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_14:
    sub_B2C434(Component_srcLineSprite, v7);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
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
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  UserCommandCodeEntity_array *List; // x0
  UserCommandCodeEntity_array *v12; // x20
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  int max_length; // w23
  System_Collections_Generic_List_long__o *v15; // x21
  BalanceConfig_c *v16; // x8
  __int64 v17; // x24
  int v18; // w25
  UserCommandCodeEntity_o *v19; // x22
  __int128 v20; // q0
  __int128 v21; // q0
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-70h]

  if ( (byte_418809B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, nowEquipedUserCommandCodeId);
    sub_B2C35C(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_418809B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( !List || (v12 = List, !*(_QWORD *)&List->max_length) )
  {
LABEL_35:
    LOBYTE(Master_WarQuestSelectionMaster) = 1;
    return Master_WarQuestSelectionMaster;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_38:
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_WarQuestSelectionMaster,
                             0LL);
  max_length = v12->max_length;
  v15 = EquipedCommandCodeList;
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  Master_WarQuestSelectionMaster = 1LL;
  if ( v16->static_fields->CommandCodeFrameMax <= max_length && max_length >= 1 )
  {
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= v12->max_length )
      {
        v22 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v22, 0LL);
      }
      v19 = v12->m_Items[v17];
      if ( !v19 )
        goto LABEL_38;
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v25 = v26;
      Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v25, 0LL);
      if ( Master_WarQuestSelectionMaster != nowEquipedUserCommandCodeId )
      {
        v21 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v26.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v24 = v26;
        Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
        if ( !v15 )
          goto LABEL_38;
        Master_WarQuestSelectionMaster = System_Collections_Generic_List_long___Contains(
                                           v15,
                                           Master_WarQuestSelectionMaster,
                                           (const MethodInfo_2F6D3FC *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (Master_WarQuestSelectionMaster & 1) != 0 )
        {
          ++v18;
          Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_WarQuestSelectionMaster = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( v18 >= *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 144LL) )
            break;
        }
      }
      if ( (int)++v17 >= max_length )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  UserServantEntity_o **p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-30h]

  if ( (byte_41880AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_41880AF = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0LL;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v14, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v12);
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
    Master_WarQuestSelectionMaster,
    p_baseUserServantEntity,
    v10,
    (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x19
  Il2CppObject *lockCountObj; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4188095 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4188095 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                      userCommandCodeId,
                                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  lockCountObj = Instance->fields.lockCountObj;
  v9 = *(_QWORD *)&Instance->fields.nowLoadCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = lockCountObj;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
}


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_418809D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418809D = 1;
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
    sub_B2C434(this, index);
  if ( userCommandCodeIds->max_length <= index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
    sub_B2C434(this, method);
  }
LABEL_9:
  v10->fields.targetCommandCardData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(commandCardInfoObj, method);
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
        v11 = sub_B2C460(baseSelectInfoObj);
        sub_B2C400(v11, 0LL);
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
    sub_B2C434(baseSelectInfoObj, v5);
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

  if ( (byte_4188091 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188091 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  p_baseUserServantEntity = &this->fields.baseUserServantEntity;
  sub_B2C2F8((BattleServantConfConponent_o *)p_baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseUserServantEntity[45] = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_baseUserServantEntity + 45), 0LL, v10, v11, v12, v13, v14, v15);
  p_baseUserServantEntity[46] = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_baseUserServantEntity + 46), 0LL, v16, v17, v18, v19, v20, v21);
  p_baseUserServantEntity[48] = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_baseUserServantEntity + 48), 0LL, v22, v23, v24, v25, v26, v27);
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
      sub_B2C434(0LL, v29);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v30, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *v30 = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)v30, 0LL, v32, v33, v34, v35, v36, v37);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
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
        v16 = sub_B2C460(lockButton);
        sub_B2C400(v16, 0LL);
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
    sub_B2C434(lockButton, v9);
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
    sub_B2C434(qpInfoObj, method);
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
  if ( (byte_4188094 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_B2C35C(&BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex);
    byte_4188094 = 1;
  }
  commandCardList = v4->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v6 = commandCardList->m_Items[cardIndex];
  if ( !v6
    || (data = v6->fields.data,
        v8 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_18398436(v8, data, 0LL),
        (baseUserServantCommandCodeEntity = v4->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&cardIndex);
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
  {
LABEL_12:
    v13 = sub_B2C460(this);
    sub_B2C400(v13, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  __int64 v9; // x1
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v11; // x22
  __int64 v12; // x20
  __int64 v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4188093 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userServantEntity);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188093 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !userServantEntity )
    goto LABEL_16;
  v11 = Instance;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B2C434(Instance, v9);
  if ( UserServantCommandCodeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v11, (int)Instance, 0LL) )
  {
    v20 = (System_Int32_array **)entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v20 = 0LL;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_baseUserServantCommandCodeEntity, v20, v14, v15, v16, v17, v18, v19);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_41880AA & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41880AA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickEmptyEquip(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_41880A9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41880A9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_41880A5 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41880A5 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  BattleServantConfConponent_o *p_baseUserCommandCodeEntity; // x19
  BattleServantConfConponent_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x20
  System_Int32_array **Entity; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UserCommandCodeEntity_o *v24; // x19
  CommonUI_o *v25; // x20
  CommandCardEquipmentControl___c_c *v26; // x8
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x9
  ServantStatusDialog_EndDelegate_o *_9__102_0; // x21
  Il2CppObject *v29; // x22
  struct CommandCardEquipmentControl___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-50h]

  if ( (byte_41880AB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v3);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__102_0__, v9);
    sub_B2C35C(&CommandCardEquipmentControl___c_TypeInfo, v10);
    byte_41880AB = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    p_baseUserCommandCodeEntity = (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_24;
    byval_arg = klass->_1.byval_arg;
    v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v38.fields.fakeValue = byval_arg;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v37 = v38;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v37, 0LL);
    if ( !v16 )
      goto LABEL_24;
    Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      v16,
                                      (int64_t)Instance,
                                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (BattleServantConfConponent_c *)Entity;
    sub_B2C2F8(p_baseUserCommandCodeEntity, Entity, v18, v19, v20, v21, v22, v23);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v25 = (CommonUI_o *)Instance;
    v26 = CommandCardEquipmentControl___c_TypeInfo;
    if ( (BYTE3(CommandCardEquipmentControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo);
      v26 = CommandCardEquipmentControl___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__102_0 = static_fields->__9__102_0;
    if ( !_9__102_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__102_0 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        _9__102_0,
        v29,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__102_0__,
        0LL);
      v30 = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      v30->__9__102_0 = _9__102_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v30->__9__102_0,
        (System_Int32_array **)_9__102_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    if ( !v25 )
LABEL_24:
      sub_B2C434(Instance, v12);
    CommonUI__OpenServantStatusDialog_17984316(v25, 0, v24, _9__102_0, 0LL, 0LL);
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
  CommandCardDialog_ClickDelegate_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_41880A6 & 1) == 0 )
  {
    sub_B2C35C(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41880A6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v7 = (CommandCardDialog_ClickDelegate_o *)sub_B2C42C(CommandCardDialog_ClickDelegate_TypeInfo);
  CommandCardDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    0LL);
  if ( !commandCardDialog )
    sub_B2C434(v8, v9);
  CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v7, v10);
}


void __fastcall CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_41880A7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41880A7 = 1;
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
      sub_B2C434(0LL, v3);
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

  if ( (byte_41880A8 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41880A8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v3, v4, v5, v6, v7, v8);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_B2C434(v9, v10);
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
  __int64 v29; // x20
  __int64 Item; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *v38; // x27
  System_String_o *v39; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v41; // x23
  __int64 v42; // x24
  __int64 v43; // x25
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v45; // q1
  int v46; // w24
  struct UserCommandCodeEntity_o *v47; // x8
  __int128 v48; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  __int64 v50; // x21
  __int64 v51; // x21
  CommonUI_o *v52; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x24
  CommonConfirmDialog_ClickDelegate_o *v55; // x25
  struct UserServantEntity_o *v56; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x23
  __int64 v58; // x24
  __int64 v59; // x25
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  struct UserServantEntity_o *v61; // x8
  int64_t v62; // x25
  UserServantCollectionEntity_o *v63; // x0
  int32_t maxLimitCount; // w25
  struct UserServantEntity_o *v65; // x8
  ServantLimitMaster_o *v66; // x24
  __int64 v67; // x26
  __int64 v68; // x27
  ServantLimitEntity_o *v69; // x24
  struct UserServantEntity_o *v70; // x8
  ServantLimitImageMaster_o *v71; // x26
  int32_t ServantLimitCountSealAfter; // w27
  struct UserCommandCodeEntity_o *v73; // x8
  __int128 v74; // q1
  DataMasterBase_WarMaster__WarEntity__int__o *v75; // x25
  ServantEntity_o *v76; // x25
  UserServantCollectionMaster_o *v77; // x27
  struct UserCommandCodeEntity_o *v78; // x8
  __int128 v79; // q0
  int64_t v80; // x28
  int64_t v81; // x0
  UserServantCollectionEntity_o *v82; // x0
  int32_t v83; // w28
  struct UserCommandCodeEntity_o *v84; // x8
  __int128 v85; // q0
  ServantLimitMaster_o *v86; // x27
  int64_t v87; // x0
  ServantLimitEntity_o *v88; // x27
  struct UserCommandCodeEntity_o *v89; // x8
  __int128 v90; // q0
  ServantLimitImageMaster_o *v91; // x21
  int64_t v92; // x0
  int32_t v93; // w0
  int32_t v94; // w28
  System_String_o *v95; // x21
  __int64 v96; // x22
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x26
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x26
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x23
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x23
  int32_t rarity; // w23
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x23
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x23
  System_String_o *v140; // x21
  __int64 v141; // x22
  __int64 v142; // x22
  CommonUI_o *v143; // x22
  System_String_o *v144; // x23
  System_String_o *v145; // x24
  CommonConfirmDialog_ClickDelegate_o *v146; // x25
  __int64 v147; // x0
  __int64 v148; // x0
  int32_t limitCount; // [xsp+3Ch] [xbp-154h]
  System_String_o *v150; // [xsp+40h] [xbp-150h]
  ServantEntity_o *Entity; // [xsp+48h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+110h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_41880A0 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, dic);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&object___TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B2C35C(&Rarity_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v20);
    sub_B2C35C(
      &Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__0__,
      v21);
    sub_B2C35C(
      &Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__1__,
      v22);
    sub_B2C35C(&CommandCardEquipmentControl___c__DisplayClass89_0_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_3240/*"COMMAND_CODE_REATTACH_TITLE"*/, v24);
    sub_B2C35C(&StringLiteral_3238/*"COMMAND_CODE_REATTACH_MSG"*/, v25);
    sub_B2C35C(&StringLiteral_3239/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, v26);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v27);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v28);
    byte_41880A0 = 1;
  }
  v29 = sub_B2C42C(CommandCardEquipmentControl___c__DisplayClass89_0_TypeInfo);
  CommandCardEquipmentControl___c__DisplayClass89_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass89_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_117;
  *(_QWORD *)(v29 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v29 + 16), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_BYTE *)(v29 + 24) = isCommandCardEmpty;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3240/*"COMMAND_CODE_REATTACH_TITLE"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3239/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v41 = v39;
    v43 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v159.fields.currentCryptoKey = v43;
    *(_QWORD *)&v159.fields.fakeValue = v42;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v159, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_117;
    v45 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v46 = Item;
    *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v158.fields.fakeValue = v45;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v157 = v158;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v157, 0LL);
    if ( !dic )
      goto LABEL_117;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_2E554F8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v46 )
    {
      v47 = this->fields.baseUserCommandCodeEntity;
      if ( v47 )
      {
        v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v158.fields.fakeValue = v48;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v156 = v158;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v156, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0LL);
          v50 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
          if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
            sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
          v51 = **(_QWORD **)(v50 + 192);
          if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
            sub_AC505C(v51);
          v52 = **(CommonUI_o ***)(v51 + 184);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
          v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v55,
            (Il2CppObject *)v29,
            Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v52 )
          {
            CommonUI__OpenConfirmDecideDlg(v52, v38, v41, v53, v54, v55, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
            return;
          }
        }
      }
LABEL_117:
      sub_B2C434(Item, v31);
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v56 = this->fields.baseUserServantEntity;
  if ( !v56 )
    goto LABEL_117;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)Item;
  v59 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v160.fields.currentCryptoKey = v59;
  *(_QWORD *)&v160.fields.fakeValue = v58;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v160, 0LL);
  if ( !v57 )
    goto LABEL_117;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v57,
                                Item,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Item = NetworkManager__get_UserId(0LL);
  v61 = this->fields.baseUserServantEntity;
  if ( !v61 )
    goto LABEL_117;
  v62 = Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v61->fields.svtId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_117;
  v63 = UserServantCollectionMaster__GetEntity(Master_WarQuestSelectionMaster, v62, Item, 0LL);
  if ( v63 )
    maxLimitCount = v63->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v150 = v38;
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v65 = this->fields.baseUserServantEntity;
  if ( !v65 )
    goto LABEL_117;
  v66 = (ServantLimitMaster_o *)Item;
  v68 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v161.fields.currentCryptoKey = v68;
  *(_QWORD *)&v161.fields.fakeValue = v67;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v161, 0LL);
  if ( !v66 )
    goto LABEL_117;
  v69 = ServantLimitMaster__GetEntity(v66, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v70 = this->fields.baseUserServantEntity;
  if ( !v70 )
    goto LABEL_117;
  v71 = (ServantLimitImageMaster_o *)Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70->fields.svtId, 0LL);
  if ( !v71 )
    goto LABEL_117;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v71, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v73 = this->fields.baseUserCommandCodeEntity;
  if ( !v73 )
    goto LABEL_117;
  v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
  v75 = (DataMasterBase_WarMaster__WarEntity__int__o *)Item;
  *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v158.fields.fakeValue = v74;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v155 = v158;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v155, 0LL);
  if ( !dic )
    goto LABEL_117;
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           Item,
           (const MethodInfo_2E554F8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v75 )
    goto LABEL_117;
  limitCount = ServantLimitCountSealAfter;
  v76 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v75,
                             Item,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v77 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Item = NetworkManager__get_UserId(0LL);
  v78 = this->fields.baseUserCommandCodeEntity;
  if ( !v78 )
    goto LABEL_117;
  v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
  v80 = Item;
  *(_OWORD *)&v154.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v154.fields.fakeValue = v79;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v154, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v81,
           (const MethodInfo_2E554F8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v77 )
    goto LABEL_117;
  v82 = UserServantCollectionMaster__GetEntity(v77, v80, Item, 0LL);
  if ( v82 )
    v83 = v82->fields.maxLimitCount;
  else
    v83 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v84 = this->fields.baseUserCommandCodeEntity;
  if ( !v84 )
    goto LABEL_117;
  v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
  v86 = (ServantLimitMaster_o *)Item;
  *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v158.fields.fakeValue = v85;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v153 = v158;
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v153, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v87,
           (const MethodInfo_2E554F8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v86 )
    goto LABEL_117;
  v88 = ServantLimitMaster__GetEntity(v86, Item, v83, 0LL);
  Item = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v89 = this->fields.baseUserCommandCodeEntity;
  if ( !v89 )
    goto LABEL_117;
  v90 = *(_OWORD *)&v89->fields.id.fields.fakeValue;
  v91 = (ServantLimitImageMaster_o *)Item;
  *(_OWORD *)&v152.fields.currentCryptoKey = *(_OWORD *)&v89->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v152.fields.fakeValue = v90;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v152, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v92,
           (const MethodInfo_2E554F8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v91 )
    goto LABEL_117;
  v93 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v91, Item, v83, 0LL);
  if ( v69 && Entity && v76 && v88 )
  {
    v94 = v93;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3238/*"COMMAND_CODE_REATTACH_MSG"*/, 0LL);
    v96 = sub_B2C374(object___TypeInfo, 6LL);
    Item = (__int64)ServantEntity__getName(Entity, limitCount, -1, 0LL);
    if ( !v96 )
      goto LABEL_117;
    v103 = (System_Int32_array **)Item;
    if ( !Item || (Item = sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v96 + 24) )
        goto LABEL_118;
      *(_QWORD *)(v96 + 32) = v103;
      sub_B2C2F8((BattleServantConfConponent_o *)(v96 + 32), v103, v97, v98, v99, v100, v101, v102);
      Item = (__int64)ServantEntity__getName(v76, v94, -1, 0LL);
      v110 = (System_Int32_array **)Item;
      if ( !Item || (Item = sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v96 + 24) <= 1u )
          goto LABEL_118;
        *(_QWORD *)(v96 + 40) = v110;
        sub_B2C2F8((BattleServantConfConponent_o *)(v96 + 40), v110, v104, v105, v106, v107, v108, v109);
        Item = (__int64)ServantEntity__getClassName(Entity, 0LL);
        v117 = (System_Int32_array **)Item;
        if ( !Item || (Item = sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v96 + 24) <= 2u )
            goto LABEL_118;
          *(_QWORD *)(v96 + 48) = v117;
          sub_B2C2F8((BattleServantConfConponent_o *)(v96 + 48), v117, v111, v112, v113, v114, v115, v116);
          Item = (__int64)ServantEntity__getClassName(v76, 0LL);
          v124 = (System_Int32_array **)Item;
          if ( !Item || (Item = sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v96 + 24) <= 3u )
              goto LABEL_118;
            *(_QWORD *)(v96 + 56) = v124;
            sub_B2C2F8((BattleServantConfConponent_o *)(v96 + 56), v124, v118, v119, v120, v121, v122, v123);
            rarity = v69->fields.rarity;
            if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Item = (__int64)Rarity__getRarityType(rarity, 0LL);
            v132 = (System_Int32_array **)Item;
            if ( !Item || (Item = sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v96 + 24) <= 4u )
                goto LABEL_118;
              *(_QWORD *)(v96 + 64) = v132;
              sub_B2C2F8((BattleServantConfConponent_o *)(v96 + 64), v132, v126, v127, v128, v129, v130, v131);
              Item = (__int64)Rarity__getRarityType(v88->fields.rarity, 0LL);
              v139 = (System_Int32_array **)Item;
              if ( !Item || (Item = sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v96 + 24) > 5u )
                {
                  *(_QWORD *)(v96 + 72) = v139;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v96 + 72), v139, v133, v134, v135, v136, v137, v138);
                  v140 = System_String__Format_44384256(v95, (System_Object_array *)v96, 0LL);
                  v141 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
                  if ( (*(_BYTE *)(v141 + 306) & 1) == 0 )
                    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
                  v142 = **(_QWORD **)(v141 + 192);
                  if ( (*(_BYTE *)(v142 + 306) & 1) == 0 )
                    sub_AC505C(v142);
                  v143 = **(CommonUI_o ***)(v142 + 184);
                  v144 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v145 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v146 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v146,
                    (Il2CppObject *)v29,
                    Method_CommandCardEquipmentControl___c__DisplayClass89_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                    0LL);
                  if ( !v143 )
                    goto LABEL_117;
                  CommonUI__OpenConfirmDecideDlg(
                    v143,
                    v150,
                    v140,
                    v144,
                    v145,
                    v146,
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
                v147 = sub_B2C460(Item);
                sub_B2C400(v147, 0LL);
              }
            }
          }
        }
      }
    }
    v148 = sub_B2C454(Item);
    sub_B2C400(v148, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OpenLockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  BattleCommandData_o *methodPtr; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *v7; // x21
  CommandCardDialog_ClickDelegate_o *v8; // x22
  const MethodInfo *v9; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_41880A2 & 1) == 0 )
  {
    sub_B2C35C(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    this = (CommandCardEquipmentControl_o *)sub_B2C35C(
                                              &Method_CommandCardEquipmentControl__OpenLockDialog_b__91_0__,
                                              v3);
    byte_41880A2 = 1;
  }
  klass = v2[26].klass;
  if ( !klass
    || ((methodPtr = (BattleCommandData_o *)klass->vtable[3].methodPtr) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(methodPtr, 0LL)),
        v7 = (CommandCardDialog_o *)v2[20].klass,
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_B2C42C(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v8,
          v2,
          Method_CommandCardEquipmentControl__OpenLockDialog_b__91_0__,
          0LL),
        !v7) )
  {
    sub_B2C434(this, method);
  }
  CommandCardDialog__OpenLockEquipSlot(v7, IsEnableCommandCode, v8, v9);
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
  CommandCardDialog_ClickDelegate_o *v8; // x23
  const MethodInfo *v9; // x4

  if ( (byte_41880A3 & 1) == 0 )
  {
    sub_B2C35C(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__92_0__, v3);
    byte_41880A3 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_B2C42C(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__92_0__,
          0LL),
        !commandCardDialog) )
  {
    sub_B2C434(targetCommandCardData, method);
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v8, v9);
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
  CommandCardDialog_ClickDelegate_o *v8; // x23
  const MethodInfo *v9; // x4

  if ( (byte_41880A1 & 1) == 0 )
  {
    sub_B2C35C(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__90_0__, v3);
    byte_41880A1 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_B2C42C(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__90_0__,
          0LL),
        !commandCardDialog) )
  {
    sub_B2C434(targetCommandCardData, method);
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v8, v9);
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

  if ( (byte_41880B4 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_41880B4 = 1;
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
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v13, v14);
  if ( !AttachEffectOnCode )
    goto LABEL_14;
  v21 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  if ( callback )
  {
    *((_QWORD *)AttachEffectOnCode + 25) = callback;
    sub_B2C2F8(
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
    sub_B2C434(AttachEffectOnCode, v8);
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
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *lockEffect; // x19
  CombineCommandCardComponent_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Component_o *v18; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v20; // x21
  UnityEngine_Transform_o *transform; // x20
  int v22; // s0
  UnityEngine_Transform_o *v25; // x20
  int v26; // s0
  const MethodInfo *v29; // x1
  __int64 v30; // x0

  if ( (byte_41880B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&lockCardIdx);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41880B3 = 1;
  }
  lockEffect = this->fields.lockEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)lockEffect,
                                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  v18 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( callback )
  {
    Component_srcLineSprite->fields.effect_addcritical = (struct UnityEngine_GameObject_o *)callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.effect_addcritical,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v18, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_17;
  if ( commandCardList->max_length <= lockCardIdx )
  {
    v30 = sub_B2C460(Component_srcLineSprite);
    sub_B2C400(v30, 0LL);
  }
  v20 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = commandCardList->m_Items[lockCardIdx];
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                     0LL),
        !v20)
    || (UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL),
        transform = UnityEngine_Component__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL),
        v25 = UnityEngine_Component__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL),
        !v25) )
  {
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v18, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayRemoveEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v30; // x22
  __int64 v31; // x23
  int32_t v32; // w0
  const MethodInfo *v33; // x3
  CommandCodeEffectComponent_o *v34; // x0
  struct UnityEngine_GameObject_o *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v36; // x22
  UnityEngine_GameObject_o *v37; // x23
  UnityEngine_Transform_o *transform; // x24
  int v39; // s0
  UnityEngine_Transform_o *v42; // x24
  int v43; // s0
  System_Action_o *v46; // x24
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Action_o *v53; // x24
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v61; // x1
  __int64 v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_41880B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&targetCardIdx);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__0__, v11);
    sub_B2C35C(&Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__1__, v12);
    sub_B2C35C(&CommandCardEquipmentControl___c__DisplayClass121_0_TypeInfo, v13);
    byte_41880B5 = 1;
  }
  v14 = sub_B2C42C(CommandCardEquipmentControl___c__DisplayClass121_0_TypeInfo);
  CommandCardEquipmentControl___c__DisplayClass121_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass121_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_25;
  *(_QWORD *)(v14 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)callback, v23, v24, v25, v26, v27, v28);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_25;
  v31 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v31;
  *(_QWORD *)&v63.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63, 0LL);
  v34 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v32, v33);
  commandCodeDetachEffect = this->fields.commandCodeDetachEffect;
  v36 = v34;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandCodeDetachEffect,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  v37 = Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_25;
  UnityEngine_Transform__set_parent(
    (UnityEngine_Transform_o *)Component_srcLineSprite,
    this->fields.detachEffectPos,
    0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v37, 0LL);
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
  v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v37, 0LL);
  *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
  if ( !v42 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__0__,
    0LL);
  if ( v46 )
  {
    *(_QWORD *)&v37[8].fields.m_CachedPtr = v46;
    sub_B2C2F8((BattleServantConfConponent_o *)&v37[8].fields, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  }
  v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass121_0__PlayRemoveEffect_b__1__,
    0LL);
  if ( v53 )
  {
    v37[8].monitor = v53;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v37[8].monitor,
      (System_Int32_array **)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_25;
  if ( commandCardList->max_length <= targetCardIdx )
  {
    v62 = sub_B2C460(Component_srcLineSprite);
    sub_B2C400(v62, 0LL);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_srcLineSprite
    || (CombineCommandCardComponent__HideCommandCodeSprite(
          (CombineCommandCardComponent_o *)Component_srcLineSprite,
          0LL),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v37, v61),
        !v36) )
  {
LABEL_25:
    sub_B2C434(Component_srcLineSprite, v16);
  }
  CommandCodeEffectComponent__PlayAnimation(v36, v16);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_41880B6 & 1) == 0 )
  {
    sub_B2C35C(&CommandCardEquipmentControl__PlayReplaceEffect_d__122_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_41880B6 = 1;
  }
  v7 = sub_B2C42C(CommandCardEquipmentControl__PlayReplaceEffect_d__122_TypeInfo);
  CommandCardEquipmentControl__PlayReplaceEffect_d__122___ctor(
    (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
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

  if ( (byte_41880B7 & 1) == 0 )
  {
    sub_B2C35C(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_TypeInfo, *(_QWORD *)&removeCardIdx);
    byte_41880B7 = 1;
  }
  v9 = sub_B2C42C(CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_TypeInfo);
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123___ctor(
    (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
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
  CombineCommandCardComponent_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Component_o *v18; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v20; // x22
  UnityEngine_Transform_o *transform; // x22
  int v22; // s0
  UnityEngine_Transform_o *v25; // x22
  int v26; // s0
  struct CombineCommandCardComponent_array *v29; // x8
  const MethodInfo *v30; // x1
  __int64 v31; // x0

  if ( (byte_41880B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&unlockCardIdx);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41880B2 = 1;
  }
  unlockEffect = this->fields.unlockEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)unlockEffect,
                                                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  v18 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( callback )
  {
    Component_srcLineSprite->fields.effect_addcritical = (struct UnityEngine_GameObject_o *)callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.effect_addcritical,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v18, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_20;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_21;
  v20 = (UnityEngine_Transform_o *)Component_srcLineSprite;
  Component_srcLineSprite = commandCardList->m_Items[unlockCardIdx];
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  Component_srcLineSprite = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)Component_srcLineSprite,
                                                               0LL);
  if ( !v20 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)Component_srcLineSprite, 0LL);
  transform = UnityEngine_Component__get_transform(v18, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL),
        v25 = UnityEngine_Component__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL),
        !v25)
    || (UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL),
        (v29 = this->fields.commandCardList) == 0LL) )
  {
LABEL_20:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  if ( v29->max_length <= unlockCardIdx )
  {
LABEL_21:
    v31 = sub_B2C460(Component_srcLineSprite);
    sub_B2C400(v31, 0LL);
  }
  Component_srcLineSprite = v29->m_Items[unlockCardIdx];
  if ( !Component_srcLineSprite )
    goto LABEL_20;
  CombineCommandCardComponent__HideUnlockInfo(Component_srcLineSprite, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v18, v30);
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
  struct System_String_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v30; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  struct System_String_array *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  struct UserServantEntity_o *v35; // x8
  int32_t v36; // w21
  int32_t v37; // w22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array *v45; // x20
  System_Action_o *v46; // x21
  __int64 v47; // x0
  __int64 v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4188097 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AssetManager_TypeInfo, v10);
    sub_B2C35C(&Method_CommandCardEquipmentControl_SetCommandCardList__, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v13);
    sub_B2C35C(&string___TypeInfo, v14);
    byte_4188097 = 1;
  }
  baseServantAssetList = this->fields.baseServantAssetList;
  if ( baseServantAssetList )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_30161248(baseServantAssetList, 0LL);
    this->fields.baseServantAssetList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseServantAssetList, 0LL, v16, v17, v18, v19, v20, v21);
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
    sub_B2C434(CommandCardLoadFolderName, v30);
  }
  this->fields.LoadAfterCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.LoadAfterCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v22 = (struct System_String_array *)sub_B2C374(string___TypeInfo, 1LL);
  this->fields.baseServantAssetList = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseServantAssetList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v32 = this->fields.baseServantAssetList;
  v34 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v34;
  *(_QWORD *)&v49.fields.fakeValue = v33;
  CommandCardLoadFolderName = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v49,
                                                   0LL);
  v35 = this->fields.baseUserServantEntity;
  if ( !v35 )
    goto LABEL_27;
  v36 = (int)CommandCardLoadFolderName;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35->fields.limitCount, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v36, v37, 0LL);
  if ( !v32 )
    goto LABEL_27;
  v44 = (System_Int32_array **)CommandCardLoadFolderName;
  if ( CommandCardLoadFolderName )
  {
    CommandCardLoadFolderName = (System_String_o *)sub_B2C41C(
                                                     CommandCardLoadFolderName,
                                                     v32->obj.klass->_1.element_class);
    if ( !CommandCardLoadFolderName )
    {
      v48 = sub_B2C454(0LL);
      sub_B2C400(v48, 0LL);
    }
  }
  if ( !v32->max_length )
  {
    v47 = sub_B2C460(CommandCardLoadFolderName);
    sub_B2C400(v47, 0LL);
  }
  v32->m_Items[0] = (System_String_o *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)v32->m_Items, v44, v38, v39, v40, v41, v42, v43);
  v45 = this->fields.baseServantAssetList;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(v45, v46, 1, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  ServantLimitImageMaster_o *v20; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v23; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_25402508; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4188092 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4188092 = 1;
  }
  this->fields.baseUserServantEntity = userServantEntity;
  sub_B2C2F8(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v20 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v19;
  *(_QWORD *)&v32.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
  if ( !v20 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v20,
                                 (int32_t)Instance,
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
    TexturePrefab_25402508 = CharaGraphManager__CreateTexturePrefab_25402508(
                               this->fields.charaGraphBase,
                               userServantEntity,
                               v23,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_25402508;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_25402508,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B2C434(Instance, v15);
  UICharaGraphTexture__SetCharacter_35719956((UICharaGraphTexture_o *)Instance, userServantEntity, v23, 0LL, 0, 0LL);
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
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_23791504(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v4 = (System_String_o *)this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_23787276((SkillIconComponent_o *)this, idList->m_Items[1], 1, 0LL), !titleList) )
LABEL_9:
    sub_B2C434(this, userCommandCode);
  if ( !titleList->max_length )
  {
LABEL_10:
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  int32_t v16; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  int32_t ServantImageLimitSealAfter; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  WarEntity_o *v22; // x22
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCommandCardMaster_o *v24; // x24
  CommandCardEquipmentControl_o *v25; // x25
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v27; // x8
  unsigned __int64 v28; // x28
  signed __int64 v29; // x23
  __int64 v30; // x8
  unsigned __int64 v31; // x9
  int32_t v32; // w26
  struct CombineCommandCardComponent_array *v33; // x8
  CombineCommandCardComponent_o *v34; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleCommandData_o *v41; // x25
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCardEquipmentControl_o *v44; // x26
  int32_t v45; // w19
  int32_t v46; // w20
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v47; // x27
  struct MenuListControl_o *menuListCtr; // x21
  struct UserServantCommandCodeEntity_o *v49; // x8
  struct System_Int64_array *v50; // x8
  int64_t v51; // x2
  struct System_Int32_array *commandCardParam; // x8
  int32_t v53; // w3
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Action_o *LoadAfterCallback; // x20
  __int64 v61; // x0
  struct UserServantEntity_o *value; // [xsp+0h] [xbp-60h]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v2 = this;
  if ( (byte_4188098 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    this = (CommandCardEquipmentControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4188098 = 1;
  }
  entity = 0LL;
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_59;
  v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v15;
  *(_QWORD *)&v64.fields.fakeValue = v14;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
  if ( !v2->fields.baseUserServantEntity )
    goto LABEL_59;
  v16 = (int)this;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(v2->fields.baseUserServantEntity, 0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (CommandCardEquipmentControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_59;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)this,
                                 v16,
                                 LimitCountByImageLimitCostumeIn,
                                 0LL);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (CommandCardEquipmentControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseUserServantEntity;
  if ( !v20 )
    goto LABEL_59;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                            v20[5],
                                            0LL);
  if ( !v21 )
    goto LABEL_59;
  v22 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v21,
          (int32_t)this,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)this, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  this = (CommandCardEquipmentControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  v24 = (UserServantCommandCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (CommandCardEquipmentControl_o *)NetworkManager__get_UserId(0LL);
  if ( !v22
    || (v25 = this,
        this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v22->fields.id,
                                                  0LL),
        !v24)
    || (this = (CommandCardEquipmentControl_o *)UserServantCommandCardMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  (int64_t)v25,
                                                  (int)this,
                                                  0LL),
        (commandCardList = v2->fields.commandCardList) == 0LL) )
  {
LABEL_59:
    sub_B2C434(this, method);
  }
  v27 = *(_QWORD *)&commandCardList->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    v29 = (int)v27;
    do
    {
      v30 = *(_QWORD *)&v22[1].fields.id;
      if ( v30 )
      {
        v31 = *(unsigned int *)(v30 + 24);
        if ( (__int64)v28 < (int)v31 )
        {
          if ( v28 >= v31 )
            goto LABEL_60;
          v32 = *(_DWORD *)(v30 + 4 * v28 + 32);
          if ( (unsigned int)(v32 - 1) <= 2 )
          {
            v33 = v2->fields.commandCardList;
            if ( !v33 )
              goto LABEL_59;
            if ( v28 >= v33->max_length )
              goto LABEL_60;
            v34 = v33->m_Items[v28];
            this = (CommandCardEquipmentControl_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v2,
                                                      0LL);
            if ( !v34 )
              goto LABEL_59;
            v34->fields.target = (struct UnityEngine_GameObject_o *)this;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v34->fields.target,
              (System_Int32_array **)this,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            v41 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
            BattleCommandData___ctor_18363144(v41, v32, v16, ServantImageLimitSealAfter, 0, 0LL);
            if ( !v41 )
              goto LABEL_59;
            v41->fields.markindex = v28;
            baseUserServantCommandCodeEntity = v2->fields.baseUserServantCommandCodeEntity;
            if ( baseUserServantCommandCodeEntity )
            {
              userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
              if ( !userCommandCodeIds )
                goto LABEL_59;
              if ( v28 >= userCommandCodeIds->max_length )
              {
LABEL_60:
                v61 = sub_B2C460(this);
                sub_B2C400(v61, 0LL);
              }
              method = (const MethodInfo *)userCommandCodeIds->m_Items[v28];
              v41->fields.userCommandCodeId = (int64_t)method;
              if ( (__int64)method >= 1 )
              {
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_59;
                v44 = v2;
                v45 = v16;
                v46 = ServantImageLimitSealAfter;
                v47 = MasterData_WarQuestSelectionMaster;
                this = (CommandCardEquipmentControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (int64_t)method,
                                                          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                if ( !this )
                  goto LABEL_59;
                menuListCtr = this->fields.menuListCtr;
                *(_QWORD *)&v65.fields.fakeValue = this->fields.selectMaterialUsrSvtEntity;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  value = this->fields.selectMaterialUsrSvtEntity;
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v65.fields.fakeValue = value;
                }
                *(_QWORD *)&v65.fields.currentCryptoKey = menuListCtr;
                this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          v65,
                                                          0LL);
                MasterData_WarQuestSelectionMaster = v47;
                ServantImageLimitSealAfter = v46;
                v16 = v45;
                v2 = v44;
                v41->fields.commandCodeId = (int)this;
              }
              v49 = v2->fields.baseUserServantCommandCodeEntity;
              if ( !v49 )
                goto LABEL_59;
              v50 = v49->fields.userCommandCodeIds;
              if ( !v50 )
                goto LABEL_59;
              if ( v28 >= v50->max_length )
                goto LABEL_60;
              v51 = v50->m_Items[v28];
            }
            else
            {
              v51 = -1LL;
            }
            if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
            {
              if ( v28 >= commandCardParam->max_length )
                goto LABEL_60;
              v53 = commandCardParam->m_Items[v28 + 1];
            }
            else
            {
              v53 = 0;
            }
            v41->fields.commandCardParam = v53;
            CombineCommandCardComponent__DispCommandCard(v34, v41, v51, v53, 0, 0, 0LL);
          }
        }
      }
      ++v28;
    }
    while ( (__int64)v28 < v29 );
  }
  CommandCardEquipmentControl__SetExecuteButtonState(v2, method);
  LoadAfterCallback = v2->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    v2->fields.LoadAfterCallback = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.LoadAfterCallback, 0LL, v54, v55, v56, v57, v58, v59);
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
    sub_B2C434(qpInfoObj, v3);
  }
  UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL);
  CommandCardEquipmentControl__InitCommandCardSelectStatus(this, v5);
  CommandCardEquipmentControl__InitDisplayInfo(this, v6);
}


void __fastcall CommandCardEquipmentControl__SetExecuteButtonState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *targetCommandCardData; // x20
  struct UICommonButton_o *executeButton; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  bool v8; // zf
  struct CombineCommandCardComponent_o *v9; // x8
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x9
  struct BattleCommandData_o *data; // x8
  __int128 v12; // q1
  int64_t userCommandCodeId; // x20
  _BOOL4 v14; // w20
  __int64 v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  if ( (byte_41880AD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_41880AD = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  v7 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( ((unsigned __int8)executeButton & 1) == 0 )
    goto LABEL_37;
  if ( !v7 )
    goto LABEL_34;
  if ( v7[26].fields.m_CachedPtr == 1 )
  {
    v8 = this->fields.baseUserCommandCodeEntity == 0LL;
  }
  else
  {
LABEL_37:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)executeButton & 1) == 0 )
      goto LABEL_22;
    v9 = this->fields.targetCommandCardData;
    if ( !v9 )
      goto LABEL_34;
    if ( v9->fields._NowKind_k__BackingField == 2 )
    {
      baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
      {
        v14 = 0;
        goto LABEL_26;
      }
      data = v9->fields.data;
      if ( !data )
        goto LABEL_34;
      v12 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
      userCommandCodeId = data->fields.userCommandCodeId;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v16 = v17;
      v8 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v16, 0LL);
    }
    else
    {
LABEL_22:
      v8 = !this->fields.isCanCombine;
    }
  }
  v14 = !v8;
LABEL_26:
  executeButton = this->fields.executeButton;
  if ( !executeButton
    || (((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, Il2CppMethodPointer))executeButton->klass->vtable._5_set_isEnabled.method)(
          executeButton,
          v14,
          executeButton->klass->vtable._6_OnInit.methodPtr),
        (executeButton = this->fields.executeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)executeButton, v14, 0LL),
        (executeButton = this->fields.executeButton) == 0LL) )
  {
LABEL_34:
    sub_B2C434(executeButton, v6);
  }
  if ( v14 )
    v15 = 0LL;
  else
    v15 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))executeButton->klass->vtable._14_SetState.method)(
    executeButton,
    v15,
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

  if ( (byte_41880AC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, method);
    byte_41880AC = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_38381416((int)this + 436, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
        !haveQpLabel) )
  {
    sub_B2C434(SelfUserGame, v4);
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
    sub_B2C434(removeButton, isEnable);
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
    sub_B2C434(replaceButton, isEnable);
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
    sub_B2C434(overwriteWarningLabel, method);
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
  __int64 v9; // x1
  int64_t commandCardInfoObj; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  int v19; // w25
  struct CombineCommandCardComponent_o *v20; // x8
  struct BattleCommandData_o *v21; // x8
  __int128 v22; // q1
  int64_t userCommandCodeId; // x24
  struct CombineCommandCardComponent_o *v24; // x8
  struct BattleCommandData_o *v25; // x8
  __int128 v26; // q0
  int64_t v27; // x22
  struct CombineCommandCardComponent_o *v28; // x8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  int max_length; // w26
  il2cpp_array_size_t v32; // w27
  struct System_Int64_array *v33; // x8
  int64_t v34; // x22
  __int64 v35; // x23
  __int64 v36; // x24
  bool v37; // w23
  struct UserServantCommandCodeEntity_o *v38; // x8
  __int128 v39; // q1
  const MethodInfo *v40; // x2
  __int64 v41; // x0
  bool v42; // [xsp+Ch] [xbp-D4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+50h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+70h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_418809C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_418809C = 1;
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
    v19 = 0;
    if ( userCommandCode && (commandCardInfoObj & 1) != 0 )
    {
      v20 = this->fields.targetCommandCardData;
      if ( !v20 )
        goto LABEL_65;
      v21 = v20->fields.data;
      if ( !v21 )
        goto LABEL_65;
      v22 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v21->fields.userCommandCodeId;
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v46.fields.fakeValue = v22;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v45 = v46;
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v45, 0LL);
      v19 = userCommandCodeId != commandCardInfoObj;
      if ( dispEquippedInfo )
      {
        v24 = this->fields.targetCommandCardData;
        if ( !v24 )
          goto LABEL_65;
        v25 = v24->fields.data;
        if ( !v25 )
          goto LABEL_65;
        v26 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v27 = v25->fields.userCommandCodeId;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v26;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v44 = v46;
        dispEquippedInfo = v27 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v44, 0LL);
      }
      else
      {
        dispEquippedInfo = 0;
      }
    }
  }
  else
  {
    v19 = 0;
  }
  this->fields.baseUserCommandCodeEntity = userCommandCode;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v28 = this->fields.targetCommandCardData;
  if ( !v28 )
    goto LABEL_65;
  if ( ((v28->fields._NowKind_k__BackingField == 2) & ~v19) != 0 )
  {
    LODWORD(baseUserServantCommandCodeEntity) = 0;
    v37 = 1;
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
        v37 = 0;
      }
      else
      {
        v42 = dispEquippedInfo;
        v32 = 0;
        while ( 1 )
        {
          v33 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
          if ( !v33 )
            goto LABEL_65;
          if ( v32 >= v33->max_length )
          {
            v41 = sub_B2C460(commandCardInfoObj);
            sub_B2C400(v41, 0LL);
          }
          v34 = v33->m_Items[v32];
          v36 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v35 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v47.fields.currentCryptoKey = v36;
          *(_QWORD *)&v47.fields.fakeValue = v35;
          commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
          if ( v34 == (int)commandCardInfoObj )
          {
            v37 = 1;
            goto LABEL_51;
          }
          if ( (int)++v32 >= max_length )
            break;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          if ( !baseUserServantCommandCodeEntity )
            goto LABEL_65;
        }
        v37 = 0;
LABEL_51:
        dispEquippedInfo = v42;
      }
      LODWORD(baseUserServantCommandCodeEntity) = 1;
    }
    else
    {
      v37 = 0;
    }
  }
  else
  {
    v37 = 0;
    LODWORD(baseUserServantCommandCodeEntity) = 0;
  }
  if ( (unsigned int)baseUserServantCommandCodeEntity | v19 )
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
  v38 = this->fields.baseUserServantCommandCodeEntity;
  if ( v38 )
  {
    v39 = *(_OWORD *)&v38->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v38->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v39;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v43 = v46;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v43, 0LL) == equippedSvtId )
      equippedSvtId = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_65:
    sub_B2C434(commandCardInfoObj, userCommandCode);
  CombineCommandCardEquipmentComponent__SetIcon(
    (CombineCommandCardEquipmentComponent_o *)commandCardInfoObj,
    userCommandCode,
    v37,
    dispEquippedInfo,
    equippedSvtId,
    0LL);
  CommandCardEquipmentControl__SetCommandCardEquipmentSkill(this, userCommandCode, v40);
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
  UnityEngine_Color_o **executeButtonSprite; // x0
  System_String_o *v21; // x20
  UISprite_o *messageTxtLabelSprite; // x21
  UILabel_o *baseSelectInfoLabel; // x21
  __int64 *v24; // x8
  struct CombineCommandCardComponent_o *v25; // x8
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int128 v27; // q1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v29; // q0
  __int64 *v30; // x8
  UnityEngine_Object_o *targetCommandCardData; // x21
  struct CombineCommandCardComponent_o *v32; // x8
  int32_t NowKind_k__BackingField; // w8
  UIWidget_o *v34; // x20
  int v35; // s0
  __int64 *v39; // x8
  UISprite_o *v40; // x21
  UISprite_o *v41; // x21
  System_String_o *REPLACE_EXE_BTN_SPRITE_NAME; // x1
  UISprite_o *v43; // x21
  UISprite_o *v44; // x21
  System_String_o *EQUIP_EXE_BTN_SPRITE_NAME; // x1
  UIWidget_o *v46; // x20
  int v47; // s0
  UISprite_o *v51; // x21
  UISprite_o *v52; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-40h]

  if ( (byte_41880AE & 1) == 0 )
  {
    sub_B2C35C(&CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3161/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, v8);
    sub_B2C35C(&StringLiteral_3158/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, v9);
    sub_B2C35C(&StringLiteral_3159/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/, v10);
    sub_B2C35C(&StringLiteral_3165/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v11);
    sub_B2C35C(&StringLiteral_3163/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, v12);
    sub_B2C35C(&StringLiteral_3162/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/, v14);
    sub_B2C35C(&StringLiteral_3167/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/, v15);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v16);
    sub_B2C35C(&StringLiteral_3164/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    byte_41880AE = 1;
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
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( state )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3158/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0LL);
      messageTxtLabelSprite = this->fields.messageTxtLabelSprite;
      v21 = (System_String_o *)executeButtonSprite;
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
      v24 = &StringLiteral_3159/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
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
      v32 = this->fields.targetCommandCardData;
      if ( !v32 )
        goto LABEL_129;
      NowKind_k__BackingField = v32->fields._NowKind_k__BackingField;
      if ( NowKind_k__BackingField == 2 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3164/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                        0LL);
        v44 = this->fields.messageTxtLabelSprite;
        v21 = (System_String_o *)executeButtonSprite;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v44 )
        {
          UISprite__set_spriteName(
            v44,
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
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3163/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0LL);
          goto LABEL_127;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3165/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
                                                        0LL);
        v51 = this->fields.messageTxtLabelSprite;
        v21 = (System_String_o *)executeButtonSprite;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v51 )
        {
          UISprite__set_spriteName(
            v51,
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
          v34 = (UIWidget_o *)this->fields.detailLabel;
          *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
          if ( !v34 )
            goto LABEL_129;
          UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v39 = &StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/;
        }
        else if ( this->fields.isShortNeedItem )
        {
          v46 = (UIWidget_o *)this->fields.detailLabel;
          *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_white(0LL);
          if ( !v46 )
            goto LABEL_129;
          UIWidget__set_color(v46, *(UnityEngine_Color_o *)&v47, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v39 = &StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/;
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v39 = &StringLiteral_3167/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v39, 0LL);
        v52 = this->fields.messageTxtLabelSprite;
        v21 = (System_String_o *)executeButtonSprite;
        if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        }
        if ( v52 )
        {
          UISprite__set_spriteName(
            v52,
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
      v25 = this->fields.targetCommandCardData;
      if ( !v25 )
        goto LABEL_129;
      if ( v25->fields._NowKind_k__BackingField == 2 )
      {
        nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
        if ( nowEquipedUserCommandCodeEntity )
        {
          v27 = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v55.fields.fakeValue = v27;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v54 = v55;
          executeButtonSprite = (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                          &v54,
                                                          0LL);
          baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
          if ( baseUserCommandCodeEntity )
          {
            v29 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
            *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v53.fields.fakeValue = v29;
            if ( executeButtonSprite == (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                                  &v53,
                                                                  0LL) )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v30 = &StringLiteral_3164/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/;
              goto LABEL_63;
            }
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3164/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                            0LL);
            v41 = this->fields.executeButtonSprite;
            v21 = (System_String_o *)executeButtonSprite;
            if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
            }
            if ( v41 )
            {
              REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->REPLACE_EXE_BTN_SPRITE_NAME;
              goto LABEL_76;
            }
          }
        }
LABEL_129:
        sub_B2C434(executeButtonSprite, *(_QWORD *)&state);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = &StringLiteral_3163/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/;
LABEL_63:
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v30, 0LL);
      v41 = this->fields.executeButtonSprite;
      v21 = (System_String_o *)executeButtonSprite;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v41 )
        goto LABEL_129;
      REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
LABEL_76:
      UISprite__set_spriteName(v41, REPLACE_EXE_BTN_SPRITE_NAME, 0LL);
      executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
      v43 = this->fields.messageTxtLabelSprite;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v43 )
        goto LABEL_129;
      UISprite__set_spriteName(
        v43,
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
      UILabel__set_text((UILabel_o *)executeButtonSprite, v21, 0LL);
      return;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3161/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0LL);
      v40 = this->fields.messageTxtLabelSprite;
      v21 = (System_String_o *)executeButtonSprite;
      if ( (BYTE3(CommandCardEquipmentControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      }
      if ( !v40 )
        goto LABEL_129;
      UISprite__set_spriteName(
        v40,
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
      v24 = &StringLiteral_3162/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
LABEL_55:
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v24, 0LL);
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
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&index);
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
  int64_t Instance; // x0
  const MethodInfo *v8; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantCommandCodeUnlockMaster_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  UILabel_o *spendQpLabel; // x21
  int64_t v15; // x20
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  __int64 v17; // x21
  __int64 v18; // x9
  __int64 v19; // x10
  __int64 v20; // x23
  signed __int64 v21; // x24
  unsigned __int64 v22; // x22
  __int64 v23; // x27
  bool v24; // w9
  Il2CppClass **v25; // x8
  LimitCntUpItemComponent_o *v26; // x20
  int32_t spendQpVal; // w8
  int32_t haveQpVal; // w9
  UIWidget_o *v29; // x20
  int v30; // s0
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_41880A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v6);
    byte_41880A4 = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_38;
  v10 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v12;
  *(_QWORD *)&v35.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35, 0LL);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_38;
  v13 = Instance;
  Instance = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)this->fields.targetCommandCardData, 0LL);
  if ( !v10 )
    goto LABEL_38;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v10, v13, Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  spendQpLabel = this->fields.spendQpLabel;
  v15 = Instance;
  this->fields.spendQpVal = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)System_Int32__ToString_38381416((int)this + 432, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_38;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_38;
  v17 = *(_QWORD *)(v15 + 40);
  if ( !v17 )
    goto LABEL_38;
  v18 = *(_QWORD *)&unlockItemInfoList->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = *(_QWORD *)(v17 + 24);
    v20 = *(_QWORD *)(v15 + 32);
    v21 = (int)v18;
    v22 = 0LL;
    v23 = (int)v19;
    v24 = v19 << 32 > 0;
    do
    {
      if ( v22 >= unlockItemInfoList->max_length )
      {
LABEL_39:
        v34 = sub_B2C460(Instance);
        sub_B2C400(v34, 0LL);
      }
      v25 = &unlockItemInfoList->obj.klass + v22;
      v26 = (LimitCntUpItemComponent_o *)v25[4];
      if ( v24 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v22 >= *(unsigned int *)(v17 + 24) )
          goto LABEL_39;
        if ( !v20 )
          break;
        if ( v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_39;
        if ( !v26 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v26,
          Instance,
          *(_DWORD *)(v17 + 32 + 4 * v22),
          *(_DWORD *)(v20 + 32 + 4 * v22),
          0LL);
        if ( !v26->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      else
      {
        if ( !v26 )
          break;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)v25[4], 0LL);
      }
      if ( (__int64)++v22 >= v21 )
        goto LABEL_32;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v24 = (__int64)v22 < v23;
    }
    while ( unlockItemInfoList );
LABEL_38:
    sub_B2C434(Instance, v8);
  }
LABEL_32:
  spendQpVal = this->fields.spendQpVal;
  haveQpVal = this->fields.haveQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = spendQpVal > haveQpVal;
  if ( spendQpVal > haveQpVal )
  {
    v29 = (UIWidget_o *)this->fields.spendQpLabel;
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_red(0LL);
    if ( !v29 )
      goto LABEL_38;
    UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v30, 0LL);
    this->fields.isCanCombine = 0;
  }
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v8);
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
  CommandCardDialog__Close_25843252(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_B2C434(commandCardDialog, isDecide);
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
    sub_B2C434(0LL, isDecide);
  CommandCardDialog__Close_25843252(commandCardDialog, 0LL, method);
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
  CommandCardDialog__Close_25843252(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_B2C434(commandCardDialog, isDecide);
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

  if ( (byte_41880B1 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_41880B1 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_41880B0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41880B0 = 1;
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
    sub_B2C434(0LL, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_B2C434(0LL, method);
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
  struct CombineCommandCardComponent_o **p_targetCommandCardData; // x21
  __int64 v8; // x1
  BattleCommandComponent_o *v9; // x0
  int32_t MarkIndex; // w0
  SeManager_c *v11; // x8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
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
  __int64 v29; // x0

  if ( (byte_4188099 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&SeManager_TypeInfo, v5);
    byte_4188099 = 1;
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
      v9 = (BattleCommandComponent_o *)*p_targetCommandCardData;
      if ( !*p_targetCommandCardData )
        goto LABEL_24;
      MarkIndex = BattleCommandComponent__getMarkIndex(v9, 0LL);
      v11 = SeManager_TypeInfo;
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
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.baseUserCommandCodeEntity,
          0LL,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v18);
        commandCardList = this->fields.commandCardList;
        if ( commandCardList )
        {
          if ( commandCardList->max_length <= index )
          {
            v29 = sub_B2C460(v9);
            sub_B2C400(v29, 0LL);
          }
          v26 = (System_Int32_array **)commandCardList->m_Items[index];
          *p_targetCommandCardData = (struct CombineCommandCardComponent_o *)v26;
          sub_B2C2F8(
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
              (*p_targetCommandCardData)->fields._NowKind_k__BackingField,
              v27);
            CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v28);
            return;
          }
        }
LABEL_24:
        sub_B2C434(v9, v8);
      }
    }
    else
    {
      v11 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_20;
    }
    if ( !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
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
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v14; // x9
  CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *v15; // x20
  Il2CppObject *v16; // x22
  System_Action_o *v17; // x21
  UnityEngine_WaitForSeconds_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v22; // w21
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w0
  UnityEngine_WaitForSeconds_o *v26; // x20
  Il2CppObject **v27; // x19
  System_Action_o *callback; // x0
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v2 = this;
  if ( (byte_4184F42 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)sub_B2C35C(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v5);
    byte_4184F42 = 1;
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
          v11 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
          v10 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v30.fields.currentCryptoKey = v11;
          *(_QWORD *)&v30.fields.fakeValue = v10;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__122_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v12,
                                                                              0LL);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v14 = v2->fields.targetCardIdx;
            if ( (unsigned int)v14 >= commandCardList->max_length )
            {
              v29 = sub_B2C460(this);
              sub_B2C400(v29, 0LL);
            }
            v15 = this;
            v16 = (Il2CppObject *)commandCardList->m_Items[v14];
            v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v17, v16, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v15 )
            {
              CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v15, v17, 0LL);
              CommandCodeEffectComponent__PlayDetachEffect((CommandCodeEffectComponent_o *)v15, 0LL);
              v18 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v18, 0.3, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v18;
              p__2__current = &v2->fields.__2__current;
              sub_B2C2F8(p__2__current, v18);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
        }
      }
LABEL_24:
      sub_B2C434(this, method);
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
  v22 = v2->fields.targetCardIdx;
  v24 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v24;
  *(_QWORD *)&v31.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v22, v25, 0LL);
  v26 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v26, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v26;
  v27 = &v2->fields.__2__current;
  sub_B2C2F8(v27, v26);
  *((_DWORD *)v27 - 2) = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__122_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v14; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *v15; // x21
  Il2CppObject *v16; // x23
  System_Action_o *v17; // x22
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w0
  struct CombineCommandCardComponent_array *v23; // x8
  __int64 v24; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *v25; // x20
  Il2CppObject *v26; // x22
  System_Action_o *v27; // x21
  UnityEngine_WaitForSeconds_o *v28; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callback; // x0
  struct UserCommandCodeEntity_o *v32; // x8
  int32_t v33; // w21
  __int64 v34; // x22
  __int64 v35; // x23
  int32_t v36; // w0
  UnityEngine_WaitForSeconds_o *v37; // x20
  Il2CppObject **v38; // x19
  __int64 v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v2 = this;
  if ( (byte_4184F43 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)sub_B2C35C(
                                                                                  &UnityEngine_WaitForSeconds_TypeInfo,
                                                                                  v5);
    byte_4184F43 = 1;
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
      v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v40.fields.currentCryptoKey = v11;
      *(_QWORD *)&v40.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v12,
                                                                                    0LL);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_35;
      v14 = v2->fields.removeCardIdx;
      if ( (unsigned int)v14 < commandCardList->max_length )
      {
        v15 = this;
        v16 = (Il2CppObject *)commandCardList->m_Items[v14];
        v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v17, v16, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v15 )
          goto LABEL_35;
        CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v15, v17, 0LL);
        CommandCodeEffectComponent__PlayDetachEffect((CommandCodeEffectComponent_o *)v15, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
        {
LABEL_22:
          v28 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v28, 0.3, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v28;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, v28);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        attachCardIdx = v2->fields.attachCardIdx;
        v21 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v41.fields.currentCryptoKey = v21;
        *(_QWORD *)&v41.fields.fakeValue = v20;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v22,
                                                                                      0LL);
        v23 = _4__this->fields.commandCardList;
        if ( !v23 )
LABEL_35:
          sub_B2C434(this, method);
        v24 = v2->fields.attachCardIdx;
        if ( (unsigned int)v24 < v23->max_length )
        {
          v25 = this;
          v26 = (Il2CppObject *)v23->m_Items[v24];
          v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v27, v26, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v25 )
          {
            CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v25, v27, 0LL);
            CommandCodeEffectComponent__PlayDetachEffect((CommandCodeEffectComponent_o *)v25, 0LL);
            goto LABEL_22;
          }
          goto LABEL_35;
        }
      }
      v39 = sub_B2C460(this);
      sub_B2C400(v39, 0LL);
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
  v32 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v32 )
    goto LABEL_35;
  v33 = v2->fields.attachCardIdx;
  v35 = *(_QWORD *)&v32->fields.commandCodeId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v32->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v35;
  *(_QWORD *)&v42.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v33, v36, 0LL);
  v37 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v37, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v37;
  v38 = &v2->fields.__2__current;
  sub_B2C2F8(v38, v37);
  *((_DWORD *)v38 - 2) = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__123_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x0

  if ( (byte_4184F3E & 1) == 0 )
  {
    sub_B2C35C(&CommandCardEquipmentControl___c_TypeInfo, v1);
    byte_4184F3E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CommandCardEquipmentControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x1

  if ( (byte_4184F3F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4184F3F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(this, method);
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
  if ( (byte_4184F40 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)sub_B2C35C(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_4184F40 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_9:
      sub_B2C434(this, isDecide);
    }
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( (byte_4184F41 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)sub_B2C35C(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_4184F41 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_11:
      sub_B2C434(this, isDecide);
    }
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass89_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}