void __fastcall CommandCardEquipmentControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t v17; // x1
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x0
  int64_t v19; // x1
  struct CommandCardEquipmentControl_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  struct CommandCardEquipmentControl_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct CommandCardEquipmentControl_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  struct CommandCardEquipmentControl_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  void *v51; // x1
  struct CommandCardEquipmentControl_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  struct CommandCardEquipmentControl_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  struct CommandCardEquipmentControl_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  struct CommandCardEquipmentControl_StaticFields *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7

  if ( (byte_4B6A4CE & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardEquipmentControl_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_20816/*"img_txt_equipcc_3"*/, v8);
    sub_1BE4ACC(&StringLiteral_20815/*"img_txt_equipcc_1"*/, v9);
    sub_1BE4ACC(&StringLiteral_20360/*"icon_arrow_pink"*/, v10);
    sub_1BE4ACC(&StringLiteral_17828/*"btn_txt_replace"*/, v11);
    sub_1BE4ACC(&StringLiteral_20890/*"img_txt_unlockcc"*/, v12);
    sub_1BE4ACC(&StringLiteral_17800/*"btn_txt_equipcc"*/, v13);
    sub_1BE4ACC(&StringLiteral_20817/*"img_txt_equipcc_4"*/, v14);
    sub_1BE4ACC(&StringLiteral_17855/*"btn_txt_unlockcc"*/, v15);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v16);
    byte_4B6A4CE = 1;
  }
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = (struct UnityEngine_Color_o)xmmword_BE3240;
  v17 = StringLiteral_20360/*"icon_arrow_pink"*/;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20360/*"icon_arrow_pink"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME, v17, v2, v3, v4, v5, v6, v7);
  v19 = StringLiteral_20890/*"img_txt_unlockcc"*/;
  v20 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v20->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20890/*"img_txt_unlockcc"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v20->UNLOCK_MESSAGE_SPRITE_NAME, v19, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_20815/*"img_txt_equipcc_1"*/;
  v28 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v28->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20815/*"img_txt_equipcc_1"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v28->EQUIPED_MESSAGE_SPRITE_NAME, v27, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_20816/*"img_txt_equipcc_3"*/;
  v36 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v36->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20816/*"img_txt_equipcc_3"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v36->SELECTED_MESSAGE_SPRITE_NAME, v35, v37, v38, v39, v40, v41, v42);
  v43 = StringLiteral_20817/*"img_txt_equipcc_4"*/;
  v44 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v44->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20817/*"img_txt_equipcc_4"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v44->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v43, v45, v46, v47, v48, v49, v50);
  v51 = StringLiteral_1/*""*/;
  v52 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v52->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v52->DEFAULT_EXE_BTN_SPRITE_NAME,
    (int64_t)v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = StringLiteral_17855/*"btn_txt_unlockcc"*/;
  v60 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v60->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17855/*"btn_txt_unlockcc"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v60->UNLOCK_EXE_BTN_SPRITE_NAME, v59, v61, v62, v63, v64, v65, v66);
  v67 = StringLiteral_17800/*"btn_txt_equipcc"*/;
  v68 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v68->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17800/*"btn_txt_equipcc"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v68->EQUIP_EXE_BTN_SPRITE_NAME, v67, v69, v70, v71, v72, v73, v74);
  v75 = StringLiteral_17828/*"btn_txt_replace"*/;
  v76 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v76->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17828/*"btn_txt_replace"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v76->REPLACE_EXE_BTN_SPRITE_NAME, v75, v77, v78, v79, v80, v81, v82);
}


void __fastcall CommandCardEquipmentControl___ctor(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A4CD & 1) == 0 )
  {
    sub_1BE4ACC(&CombineMenuControl_TypeInfo, method);
    byte_4B6A4CD = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v19; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  int64_t v22; // x21
  Il2CppObject *Entity; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
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
  UILabel_o *commandCardNotEquippedDetail; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-40h]

  if ( (byte_4B6A4A8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&nowKind);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BE4ACC(&StringLiteral_3699/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, v9);
    byte_4B6A4A8 = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    0LL,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_46;
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
                goto LABEL_45;
              }
            }
          }
        }
      }
    }
    goto LABEL_46;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
  if ( nowKind == 1 )
  {
    if ( !this->fields.baseUserCommandCodeEntity )
    {
      lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
      if ( !lockButton )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
      if ( !lockButton )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v38);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v39);
      lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
      if ( !lockButton )
        goto LABEL_46;
      lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
      if ( !lockButton )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
      if ( !lockButton )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
      lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
      if ( !lockButton )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
    }
    commandCardNotEquippedDetail = this->fields.commandCardNotEquippedDetail;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3699/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1BE4D28(lockButton, v17);
  }
  if ( nowKind != 2 )
    goto LABEL_45;
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardInfoObj;
  if ( !lockButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 1, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.unlockItemInfoObj;
  if ( !lockButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.commandCardNotEquippedInfoObj;
  if ( !lockButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v19);
  lockButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.qpInfoObj;
  if ( !lockButton )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
  if ( !baseUserServantCommandCodeEntity )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)this->fields.targetCommandCardData;
  if ( !lockButton )
    goto LABEL_46;
  userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
  lockButton = (UnityEngine_Component_o *)BattleCommandComponent__getMarkIndex(
                                            (BattleCommandComponent_o *)lockButton,
                                            0LL);
  if ( !userCommandCodeIds )
    goto LABEL_46;
  if ( (unsigned int)lockButton >= userCommandCodeIds->max_length )
    sub_1BE4D30(lockButton, v17);
  v22 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)lockButton,
             v22,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    (int64_t)Entity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_46;
  v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v31;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = v42;
  v32 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v41, 0LL);
  v34 = CommandCardEquipmentControl__EnableReplace(v32, (int64_t)v32, v33);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v34, v35);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v36);
LABEL_45:
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v17);
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
  if ( (byte_4B6A4AD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, dic);
    this = (CommandCardEquipmentControl_o *)sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B6A4AD = 1;
  }
  baseUserCommandCodeEntity = v4->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_8;
  v7 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v9, 0LL);
  if ( !dic )
LABEL_8:
    sub_1BE4D28(this, dic);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_328C26C *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
}


void __fastcall CommandCardEquipmentControl__CheckOpenDialogType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *targetCommandCardData; // x20
  UserServantCommandCodeMaster_o *Master_object; // x0
  const MethodInfo *v7; // x1
  struct CombineCommandCardComponent_o *v8; // x8
  BattleCommandData_o *data; // x21
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_long__long__o *EquippedCommandCodeDic; // x20
  const MethodInfo *v12; // x3
  CommandCardEquipmentControl_o *v13; // x0
  System_Collections_Generic_Dictionary_long__long__o *v14; // x1
  bool v15; // w2

  if ( (byte_4B6A4AC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6A4AC = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (UserServantCommandCodeMaster_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
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
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
      if ( Master_object )
      {
        EquippedCommandCodeDic = UserServantCommandCodeMaster__GetEquippedCommandCodeDic(Master_object, 0LL);
        if ( data && BattleCommandData__IsEnableCommandCode(data, 0LL) )
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v10) )
          {
            v13 = this;
            v14 = EquippedCommandCodeDic;
            v15 = 0;
LABEL_18:
            CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(v13, v14, v15, v12);
            return;
          }
          Master_object = (UserServantCommandCodeMaster_o *)this->fields.combineRootComponent;
          if ( Master_object )
          {
            CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)Master_object, 0LL);
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
            goto LABEL_18;
          }
          Master_object = (UserServantCommandCodeMaster_o *)this->fields.combineRootComponent;
          if ( Master_object )
          {
            CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)Master_object, 0LL);
            return;
          }
        }
      }
    }
    sub_1BE4D28(Master_object, v7);
  }
}


void __fastcall CommandCardEquipmentControl__CheckSelectedBaseServant(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v6; // q1
  int64_t v7; // x0
  __int128 v8; // q1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *baseSelectInfoObj; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-40h]

  if ( (byte_4B6A4A4 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4B6A4A4 = 1;
  }
  if ( !selectBase )
  {
    CommandCardEquipmentControl__InitDispBaseServantInfo(this, (const MethodInfo *)selectBase);
    CommandCardEquipmentControl__InitDisplayInfo(this, v18);
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v19);
    baseSelectInfoObj = this->fields.baseSelectInfoObj;
    if ( baseSelectInfoObj )
    {
      UnityEngine_GameObject__SetActive(baseSelectInfoObj, 1, 0LL);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v20);
      goto LABEL_13;
    }
LABEL_14:
    sub_1BE4D28(baseSelectInfoObj, selectBase);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v23.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v22 = v23;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v22, 0LL);
    v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v8;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v21, 0LL) )
    {
      CommandCardEquipmentControl__InitDisplayInfo(this, (const MethodInfo *)selectBase);
      CommandCardEquipmentControl__InitDispCommandCardInfo(this, v9);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v10);
    }
  }
  baseSelectInfoObj = this->fields.baseSelectInfoObj;
  if ( !baseSelectInfoObj )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(baseSelectInfoObj, 0, 0LL);
LABEL_13:
  this->fields.baseUserServantEntity = selectBase;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)selectBase,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  CommandCardDialog__Close_45882472(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BE4D28(commandCardDialog, isDecide);
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
  Il2CppObject *commandCodeAppearEffect; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21

  if ( (byte_4B6A4C7 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6A4C7 = 1;
  }
  commandCodeAppearEffect = (Il2CppObject *)this->fields.commandCodeAppearEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeAppearEffect,
                                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v12 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1BE4D30(Component_object, v11);
  v14 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E1 = 1;
  }
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E6 = 1;
  }
  if ( !v16 )
LABEL_18:
    sub_1BE4D28(Component_object, v11);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, 0LL);
  return (CommandCodeEffectComponent_o *)v12;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *commandCodeFlashEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B6A4C9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6A4C9 = 1;
  }
  commandCodeFlashEffect = (Il2CppObject *)this->fields.commandCodeFlashEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeFlashEffect,
                                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v8 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v10 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v10 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v8, 0LL);
  v11 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B612E1 = 1;
  }
  if ( !v11 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v8, 0LL);
  v12 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B612E6 = 1;
  }
  if ( !v12 )
LABEL_17:
    sub_1BE4D28(Component_object, v7);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  Il2CppObject *commandCardDetachEffect; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21

  if ( (byte_4B6A4C6 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6A4C6 = 1;
  }
  commandCardDetachEffect = (Il2CppObject *)this->fields.commandCardDetachEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCardDetachEffect,
                                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v12 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1BE4D30(Component_object, v11);
  v14 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E1 = 1;
  }
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E6 = 1;
  }
  if ( !v16 )
LABEL_18:
    sub_1BE4D28(Component_object, v11);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v12, commandCodeId, 0LL);
  return (CommandCodeEffectComponent_o *)v12;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateReplaceEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *commandCodeReplaceEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B6A4C8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6A4C8 = 1;
  }
  commandCodeReplaceEffect = (Il2CppObject *)this->fields.commandCodeReplaceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeReplaceEffect,
                                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v8 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v10 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v10 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v8, 0LL);
  v11 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B612E1 = 1;
  }
  if ( !v11 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v8, 0LL);
  v12 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B612E6 = 1;
  }
  if ( !v12 )
LABEL_17:
    sub_1BE4D28(Component_object, v7);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  int64_t Master_object; // x0
  __int64 v10; // x1
  UserCommandCodeEntity_array *List; // x0
  UserCommandCodeEntity_array *v12; // x20
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  int max_length; // w23
  System_Collections_Generic_List_long__o *v15; // x21
  BalanceConfig_c *v16; // x8
  int v17; // w24
  il2cpp_array_size_t v18; // w25
  UserCommandCodeEntity_o *v19; // x28
  __int128 v20; // q0
  __int128 v21; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-80h]

  if ( (byte_4B6A4A9 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, nowEquipedUserCommandCodeId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Contains__, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_4B6A4A9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_32;
  List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Master_object, 0LL);
  if ( !List || (v12 = List, !*(_QWORD *)&List->max_length) )
  {
LABEL_29:
    LOBYTE(Master_object) = 1;
    return Master_object;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_object )
LABEL_32:
    sub_1BE4D28(Master_object, v10);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_object,
                             0LL);
  max_length = v12->max_length;
  v15 = EquipedCommandCodeList;
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  Master_object = 1LL;
  if ( v16->static_fields->CommandCodeFrameMax <= max_length && max_length >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v12->max_length )
        sub_1BE4D30(Master_object, v10);
      v19 = v12->m_Items[v18];
      if ( !v19 )
        goto LABEL_32;
      v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v25.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v24 = v25;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v24, 0LL);
      if ( Master_object != nowEquipedUserCommandCodeId )
      {
        v21 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v25.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v23 = v25;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v23, 0LL);
        if ( !v15 )
          goto LABEL_32;
        Master_object = System_Collections_Generic_List_long___Contains(
                          v15,
                          Master_object,
                          (const MethodInfo_35D45D0 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( ++v17 >= *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL) )
            break;
        }
      }
      if ( max_length == ++v18 )
        goto LABEL_29;
    }
    LOBYTE(Master_object) = 0;
  }
  return Master_object;
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
  Il2CppObject **p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  if ( (byte_4B6A4BD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B6A4BD = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = (Il2CppObject **)&this->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0LL;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v12);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    p_baseUserServantEntity,
    v10,
    (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return (UserServantEntity_o *)*p_baseUserServantEntity;
}


int32_t __fastcall CommandCardEquipmentControl__GetCommandCodeId(
        CommandCardEquipmentControl_o *this,
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

  if ( (byte_4B6A4A3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B6A4A3 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BE4D28(Instance, v8);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = klass;
  *(_QWORD *)&v12.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v12, 0LL);
}


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_4B6A4AB & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A4AB = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BE4D28(this, index);
  if ( userCommandCodeIds->max_length <= index )
    sub_1BE4D30(this, *(_QWORD *)&index);
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
  int64_t v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w20
  CommandCardEquipmentControl_o *v10; // x19
  il2cpp_array_size_t v11; // w21
  CombineCommandCardComponent_o *v12; // x8

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
        sub_1BE4D30(this, method);
      v12 = commandCardList->m_Items[v11];
      if ( !v12 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)this,
        v12->fields.selectedSprite,
        0,
        v3);
      if ( max_length == ++v11 )
        goto LABEL_9;
      commandCardList = v10->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_8:
    sub_1BE4D28(this, method);
  }
LABEL_9:
  v10->fields.targetCommandCardData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v10->fields.targetCommandCardData, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
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
    sub_1BE4D28(commandCardInfoObj, method);
  }
  UnityEngine_GameObject__SetActive(commandCardInfoObj, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitCommnadCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  LimitCntUpItemComponent_o *baseSelectInfoObj; // x0
  const MethodInfo *v5; // x1
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  int max_length; // w20
  il2cpp_array_size_t v8; // w21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, method);
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
        sub_1BE4D30(baseSelectInfoObj, v5);
      baseSelectInfoObj = unlockItemInfoList->m_Items[v8];
      if ( !baseSelectInfoObj )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(baseSelectInfoObj, 0LL);
      if ( max_length == ++v8 )
        goto LABEL_9;
      unlockItemInfoList = this->fields.unlockItemInfoList;
    }
    while ( unlockItemInfoList );
LABEL_8:
    sub_1BE4D28(baseSelectInfoObj, v5);
  }
LABEL_9:
  CommandCardEquipmentControl__InitTransformInfo(this, v5);
  CommandCardEquipmentControl__InitDisplayInfo(this, v9);
  CommandCardEquipmentControl__InitDispCommandCardInfo(this, v10);
  CommandCardEquipmentControl__InitDispBaseServantInfo(this, v11);
  baseSelectInfoObj = (LimitCntUpItemComponent_o *)this->fields.baseSelectInfoObj;
  if ( !baseSelectInfoObj )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSelectInfoObj, 1, 0LL);
}


void __fastcall CommandCardEquipmentControl__InitDispBaseServantInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B6A49F & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A49F = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCodeEntity,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    cardSwitchButton = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)cardSwitchButton,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BE4A70(p_charaGraph, 0LL, v32, v33, v34, v35, v36, v37);
      return;
    }
LABEL_12:
    sub_1BE4D28(cardSwitchButton, v27);
  }
}


void __fastcall CommandCardEquipmentControl__InitDispCommandCardInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v11; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w21
  il2cpp_array_size_t v14; // w22
  CombineCommandCardComponent_o *v15; // x20
  const MethodInfo *v16; // x2

  this->fields.targetCommandCardData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
  lockButton = (UnityEngine_Component_o *)this->fields.lockButton;
  if ( !lockButton )
    goto LABEL_12;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  lockButton = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
  if ( !lockButton )
    goto LABEL_12;
  lockButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockButton, 0LL);
  if ( !lockButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockButton, 0, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_12;
  max_length = commandCardList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= commandCardList->max_length )
        sub_1BE4D30(lockButton, v9);
      v15 = commandCardList->m_Items[v14];
      if ( !v15 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)lockButton,
        v15->fields.selectedSprite,
        0,
        v11);
      CombineCommandCardComponent__SetCommandCardEnable(v15, 0, v16);
      if ( max_length == ++v14 )
        return;
      commandCardList = this->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_12:
    sub_1BE4D28(lockButton, v9);
  }
}


void __fastcall CommandCardEquipmentControl__InitDisplayInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *qpInfoObj; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL),
        (qpInfoObj = (UnityEngine_GameObject_o *)this->fields.spendQpLabel) == 0LL) )
  {
    sub_1BE4D28(qpInfoObj, method);
  }
  v6.fields.r = 1.0;
  v6.fields.g = 1.0;
  v6.fields.b = 1.0;
  v6.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)qpInfoObj, v6, 0LL);
  this->fields.isShortNeedItem = 0;
  *(_WORD *)&this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v4);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, v5);
}


void __fastcall CommandCardEquipmentControl__InitTransformInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  const MethodInfo *v4; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t TransformCount; // w0

  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton
    || (UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL),
        (cardSwitchButton = (UnityEngine_GameObject_o *)this->fields.servantName) == 0LL)
    || (cardSwitchButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cardSwitchButton, 0LL)) == 0LL )
  {
    sub_1BE4D28(cardSwitchButton, method);
  }
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  this->fields.displayTransformIndex = 0;
  if ( baseUserServantEntity )
    TransformCount = UserServantEntity__GetTransformCount(baseUserServantEntity, 1, 0LL);
  else
    TransformCount = 1;
  this->fields.transformTotal = TransformCount;
  CombineMenuControl__SetInfoBgSprite((CombineMenuControl_o *)this, v4);
}


bool __fastcall CommandCardEquipmentControl__IsSelectedCommandCard(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_4B6A4CB & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A4CB = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__ModifyCommandCard(
        CommandCardEquipmentControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v4; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  CombineCommandCardComponent_o *v6; // x21
  BattleCommandData_o *data; // x23
  BattleCommandData_o *v8; // x22
  const MethodInfo *v9; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int64_t v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  v4 = this;
  if ( (byte_4B6A4A2 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_1BE4ACC(&BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex);
    byte_4B6A4A2 = 1;
  }
  commandCardList = v4->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v6 = commandCardList->m_Items[cardIndex];
  if ( !v6
    || (data = v6->fields.data,
        v8 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_44330188(v8, data, 0LL),
        (baseUserServantCommandCodeEntity = v4->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_1BE4D28(this, *(_QWORD *)&cardIndex);
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
LABEL_12:
    sub_1BE4D30(this, *(_QWORD *)&cardIndex);
  if ( !v8 )
    goto LABEL_11;
  v12 = userCommandCodeIds->m_Items[cardIndex];
  v8->fields.userCommandCodeId = v12;
  v8->fields.commandCodeId = CommandCardEquipmentControl__GetCommandCodeId(this, v12, v9);
  CombineCommandCardComponent__ModifyCommandCard(v6, v8, v12, v13);
  CombineCommandCardComponent__SetLayout(v6, v4->fields.positionOffsetY, v4->fields.scaleOffset, v14);
}


void __fastcall CommandCardEquipmentControl__MoidfyUserSvtCommandCode(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v11; // x20
  __int64 v12; // x23
  int64_t v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UserServantCommandCodeEntity_o *v20; // x1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B6A4A1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userServantEntity);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B6A4A1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !userServantEntity )
    goto LABEL_18;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v13 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v12;
  *(_QWORD *)&v23.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v23, 0LL);
  if ( !MasterData_object )
LABEL_18:
    sub_1BE4D28(Instance, v9);
  if ( UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         v13,
         (int)Instance,
         0LL) )
  {
    v20 = entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v20 = 0LL;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)p_baseUserServantCommandCodeEntity,
    (int64_t)v20,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B6A4B8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnClickCommandCode__, method);
    byte_4B6A4B8 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickCommandCode__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickCommandCode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnClickCommandCode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BE4D28(0LL, v5);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickEmptyEquip(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B6A4B7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnClickEmptyEquip__, method);
    byte_4B6A4B7 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickEmptyEquip__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickEmptyEquip__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BE4D28(0LL, v5);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickSwitchButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UserServantEntity_o *baseUserServantEntity; // x0
  UISprite_o *executeButtonSprite; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  bool v17; // w1
  UnityEngine_Object_o *targetCommandCardData; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *v21; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6A4CA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnClickSwitchButton__, method);
    sub_1BE4ACC(&CommandCardEquipmentControl_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6A4CA = 1;
  }
  transformInfo = 0LL;
  this->fields.displayTransformIndex = (this->fields.displayTransformIndex + 1) % this->fields.transformTotal;
  CommandCardEquipmentControl__SetCommandCardList(this, method);
  if ( this->fields.transformTotal > 1 )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_30;
    baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                     baseUserServantEntity,
                                                     &transformInfo,
                                                     this->fields.displayTransformIndex,
                                                     0LL);
    if ( !transformInfo )
      goto LABEL_30;
    baseUserServantEntity = (UserServantEntity_o *)this->fields.servantName;
    if ( !baseUserServantEntity )
      goto LABEL_30;
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  if ( this->fields.displayTransformIndex >= 1 )
  {
    this->fields.baseUserCommandCodeEntity = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v6, v7, v8, v9, v10, v11);
    baseUserServantEntity = (UserServantEntity_o *)CommandCardEquipmentControl_TypeInfo;
    executeButtonSprite = this->fields.executeButtonSprite;
    if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
    if ( executeButtonSprite )
    {
      UISprite__set_spriteName(
        executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v14);
      CommandCardEquipmentControl__InitDisplayInfo(this, v15);
      baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
      if ( baseUserServantEntity )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL);
        baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( baseUserServantEntity )
        {
          baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)baseUserServantEntity,
                                                           0LL);
          if ( baseUserServantEntity )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, 0, 0LL);
            baseUserServantEntity = (UserServantEntity_o *)this->fields.lockButton;
            if ( baseUserServantEntity )
            {
              baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)baseUserServantEntity,
                                                               0LL);
              if ( baseUserServantEntity )
              {
                v17 = 0;
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
    goto LABEL_30;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.targetCommandCardData;
    if ( !baseUserServantEntity )
      goto LABEL_30;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0LL);
    CommandCardEquipmentControl__SetCommandCardDisplay(this, MarkIndex, v20);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
  if ( !baseUserServantEntity
    || (v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v21, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_30:
    sub_1BE4D28(baseUserServantEntity, v5);
  }
  v17 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v17, 0LL);
  v22 = Method_CommandCardEquipmentControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnClickSwitchButton__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B6A4B3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__, method);
    byte_4B6A4B3 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  CommandCardEquipmentControl__OpenLockDialog(this, v5);
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
  PartyOrganizationUtility_o *p_baseUserCommandCodeEntity; // x19
  PartyOrganizationUtility_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  Il2CppObject *Entity; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  CommandCardEquipmentControl___c_c *v26; // x8
  UserCommandCodeEntity_o *v27; // x19
  CommonUI_o *v28; // x20
  ServantStatusDialog_EndDelegate_o *_9__105_0; // x21
  Il2CppObject *v30; // x22
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-50h]

  if ( (byte_4B6A4B9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnLongPushCommandCode__, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__, v9);
    sub_1BE4ACC(&CommandCardEquipmentControl___c_TypeInfo, v10);
    byte_4B6A4B9 = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    p_baseUserCommandCodeEntity = (PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_20;
    byval_arg = klass->_1.byval_arg;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v39.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v38 = v39;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v38, 0LL);
    if ( !v16 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__long___GetEntity(
               v16,
               (int64_t)Instance,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (PartyOrganizationUtility_c *)Entity;
    sub_1BE4A70(p_baseUserCommandCodeEntity, (int64_t)Entity, v18, v19, v20, v21, v22, v23);
    v24 = Method_CommandCardEquipmentControl_OnLongPushCommandCode__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLongPushCommandCode__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = CommandCardEquipmentControl___c_TypeInfo;
    v27 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v28 = (CommonUI_o *)Instance;
    if ( !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo);
      v26 = CommandCardEquipmentControl___c_TypeInfo;
    }
    _9__105_0 = v26->static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = CommandCardEquipmentControl___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v26->static_fields->__9;
      _9__105_0 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        _9__105_0,
        v30,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__,
        0LL);
      static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = _9__105_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__105_0,
        (int64_t)_9__105_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( !v28 )
LABEL_20:
      sub_1BE4D28(Instance, v12);
    CommonUI__OpenServantStatusDialog_30886368(v28, 0, v27, _9__105_0, 0LL, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnRemoveCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x21
  CommandCardDialog_ClickDelegate_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4B6A4B4 & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__, v3);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__, v4);
    byte_4B6A4B4 = 1;
  }
  v5 = Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v9 = (CommandCardDialog_ClickDelegate_o *)sub_1BE4D18(CommandCardDialog_ClickDelegate_TypeInfo);
  CommandCardDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    v10);
  if ( !commandCardDialog )
    sub_1BE4D28(v11, v12);
  CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v9, v13);
}


void __fastcall CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B6A4B5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__, method);
    byte_4B6A4B5 = 1;
  }
  if ( this->fields.nowEquipedUserCommandCodeEntity )
  {
    v3 = Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      sub_1BE4D28(0LL, v5);
    CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnReplaceReset(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v15; // x2

  if ( (byte_4B6A4B6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_OnReplaceReset__, method);
    byte_4B6A4B6 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnReplaceReset__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_OnReplaceReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v5, v6, v7, v8, v9, v10);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1BE4D28(v11, v12);
  CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
    this,
    targetCommandCardData->fields._NowKind_k__BackingField,
    v13);
  CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v15);
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
  __int64 v29; // x27
  __int64 Item; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *v38; // x26
  System_String_o *v39; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v41; // x19
  __int64 v42; // x23
  __int64 v43; // x24
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v45; // q0
  int v46; // w23
  struct UserCommandCodeEntity_o *v47; // x8
  __int128 v48; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  long double v50; // q0
  __int64 v51; // x0
  __int64 v52; // x0
  CommonUI_o *v53; // x21
  System_String_o *v54; // x22
  System_String_o *v55; // x23
  CommonConfirmDialog_ClickDelegate_o *v56; // x24
  struct UserServantEntity_o *v57; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x19
  __int64 v59; // x24
  __int64 v60; // x25
  Il2CppObject *v61; // x19
  struct UserServantEntity_o *v62; // x8
  int64_t v63; // x25
  UserServantCollectionEntity_o *v64; // x0
  int32_t maxLimitCount; // w27
  struct UserServantEntity_o *v66; // x8
  ServantLimitMaster_o *v67; // x19
  __int64 v68; // x24
  __int64 v69; // x25
  ServantLimitEntity_o *v70; // x25
  struct UserCommandCodeEntity_o *v71; // x8
  __int128 v72; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x19
  Il2CppObject *v74; // x26
  Il2CppObject *v75; // x19
  struct UserCommandCodeEntity_o *v76; // x8
  __int128 v77; // q0
  int64_t v78; // x28
  int64_t v79; // x0
  UserServantCollectionEntity_o *v80; // x0
  int32_t v81; // w28
  struct UserCommandCodeEntity_o *v82; // x8
  __int128 v83; // q0
  ServantLimitMaster_o *v84; // x19
  int64_t v85; // x0
  ServantLimitEntity_o *v86; // x0
  ServantLimitEntity_o *v87; // x29
  struct UserServantEntity_o *v88; // x8
  __int64 v89; // x19
  __int64 v90; // x23
  __int64 v91; // x24
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x27
  struct UserCommandCodeEntity_o *v99; // x8
  __int128 v100; // q0
  int64_t v101; // x0
  int32_t v102; // w0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x21
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x21
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int64_t v123; // x21
  int32_t rarity; // w21
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x21
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x21
  System_String_o *v139; // x19
  long double v140; // q0
  __int64 v141; // x8
  __int64 v142; // x0
  CommonUI_o *v143; // x21
  System_String_o *v144; // x22
  System_String_o *v145; // x23
  CommonConfirmDialog_ClickDelegate_o *v146; // x24
  __int64 v147; // x0
  System_String_o *format; // [xsp+48h] [xbp-168h]
  Il2CppObject *v149; // [xsp+50h] [xbp-160h]
  System_String_o *v150; // [xsp+58h] [xbp-158h]
  ServantLimitImageMaster_o *Master_object; // [xsp+60h] [xbp-150h]
  ServantEntity_o *Entity; // [xsp+68h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+130h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_4B6A4AE & 1) == 0 )
  {
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, dic);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1BE4ACC(&DataManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v13);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    sub_1BE4ACC(&object___TypeInfo, v16);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1BE4ACC(&Rarity_TypeInfo, v19);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v20);
    sub_1BE4ACC(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
      v21);
    sub_1BE4ACC(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
      v22);
    sub_1BE4ACC(&CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo, v23);
    sub_1BE4ACC(&StringLiteral_3773/*"COMMAND_CODE_REATTACH_TITLE"*/, v24);
    sub_1BE4ACC(&StringLiteral_3771/*"COMMAND_CODE_REATTACH_MSG"*/, v25);
    sub_1BE4ACC(&StringLiteral_3772/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, v26);
    sub_1BE4ACC(&StringLiteral_3799/*"COMMON_CONFIRM_NO"*/, v27);
    sub_1BE4ACC(&StringLiteral_3804/*"COMMON_CONFIRM_YES"*/, v28);
    byte_4B6A4AE = 1;
  }
  v29 = sub_1BE4D18(CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo);
  CommandCardEquipmentControl___c__DisplayClass92_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass92_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_112;
  *(_QWORD *)(v29 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)this, v32, v33, v34, v35, v36, v37);
  *(_BYTE *)(v29 + 24) = isCommandCardEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"COMMAND_CODE_REATTACH_TITLE"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v41 = v39;
    v43 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v160.fields.currentCryptoKey = v43;
    *(_QWORD *)&v160.fields.fakeValue = v42;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v160, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_112;
    v45 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v46 = Item;
    *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v159.fields.fakeValue = v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v158 = v159;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v158, 0LL);
    if ( !dic )
      goto LABEL_112;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_328BFD8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v46 )
    {
      v47 = this->fields.baseUserCommandCodeEntity;
      if ( v47 )
      {
        v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v159.fields.fakeValue = v48;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v157 = v159;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v157, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0LL);
          v51 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
          if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
            v51 = sub_1C369A8(v50);
          v52 = *(_QWORD *)(*(_QWORD *)(v51 + 192) + 16LL);
          if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
            v52 = sub_1C369A8(v50);
          v53 = **(CommonUI_o ***)(v52 + 184);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_CONFIRM_YES"*/, 0LL);
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_NO"*/, 0LL);
          v56 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v56,
            (Il2CppObject *)v29,
            Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v53 )
          {
            CommonUI__OpenConfirmDecideDlg(v53, v38, v41, v54, v55, v56, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0, 0LL);
            return;
          }
        }
      }
LABEL_112:
      sub_1BE4D28(Item, v31);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  v57 = this->fields.baseUserServantEntity;
  if ( !v57 )
    goto LABEL_112;
  v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v161.fields.currentCryptoKey = v60;
  *(_QWORD *)&v161.fields.fakeValue = v59;
  v149 = (Il2CppObject *)v29;
  v150 = v38;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v161, 0LL);
  if ( !v58 )
    goto LABEL_112;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                v58,
                                Item,
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v31);
    byte_4B61717 = 1;
  }
  Item = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Item = (__int64)NetworkManager_TypeInfo;
  }
  v62 = this->fields.baseUserServantEntity;
  if ( !v62 )
    goto LABEL_112;
  v63 = *(_QWORD *)(*(_QWORD *)(Item + 184) + 64LL);
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v62->fields.svtId, 0LL);
  if ( !v61 )
    goto LABEL_112;
  v64 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v61, v63, Item, 0LL);
  if ( v64 )
    maxLimitCount = v64->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v66 = this->fields.baseUserServantEntity;
  if ( !v66 )
    goto LABEL_112;
  v67 = (ServantLimitMaster_o *)Item;
  v68 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v162.fields.currentCryptoKey = v68;
  *(_QWORD *)&v162.fields.fakeValue = v69;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v162, 0LL);
  if ( !v67 )
    goto LABEL_112;
  v70 = ServantLimitMaster__GetEntity(v67, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  v71 = this->fields.baseUserCommandCodeEntity;
  if ( !v71 )
    goto LABEL_112;
  v72 = *(_OWORD *)&v71->fields.id.fields.fakeValue;
  v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v71->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v159.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v156 = v159;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v156, 0LL);
  if ( !dic )
    goto LABEL_112;
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           Item,
           (const MethodInfo_328BFD8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v73 )
    goto LABEL_112;
  v74 = DataMasterBase_object__object__int___GetEntity(
          v73,
          Item,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v75 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v31);
    byte_4B61717 = 1;
  }
  Item = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Item = (__int64)NetworkManager_TypeInfo;
  }
  v76 = this->fields.baseUserCommandCodeEntity;
  if ( !v76 )
    goto LABEL_112;
  v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
  v78 = *(_QWORD *)(*(_QWORD *)(Item + 184) + 64LL);
  *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v155.fields.fakeValue = v77;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v155, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v79,
           (const MethodInfo_328BFD8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v75 )
    goto LABEL_112;
  v80 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v75, v78, Item, 0LL);
  if ( v80 )
    v81 = v80->fields.maxLimitCount;
  else
    v81 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v82 = this->fields.baseUserCommandCodeEntity;
  if ( !v82 )
    goto LABEL_112;
  v83 = *(_OWORD *)&v82->fields.id.fields.fakeValue;
  v84 = (ServantLimitMaster_o *)Item;
  *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v82->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v159.fields.fakeValue = v83;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v154 = v159;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v154, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v85,
           (const MethodInfo_328BFD8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v84 )
    goto LABEL_112;
  v86 = ServantLimitMaster__GetEntity(v84, Item, v81, 0LL);
  if ( v70 )
  {
    if ( Entity )
    {
      if ( v74 )
      {
        v87 = v86;
        if ( v86 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          format = LocalizationManager__Get((System_String_o *)StringLiteral_3771/*"COMMAND_CODE_REATTACH_MSG"*/, 0LL);
          Item = sub_1BE4B74(object___TypeInfo, 6LL);
          v88 = this->fields.baseUserServantEntity;
          if ( !v88 )
            goto LABEL_112;
          v89 = Item;
          v90 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
          v91 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v163.fields.currentCryptoKey = v90;
          *(_QWORD *)&v163.fields.fakeValue = v91;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v163, 0LL);
          if ( !Master_object )
            goto LABEL_112;
          Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            Master_object,
                            Item,
                            maxLimitCount,
                            0LL);
          if ( !v89 )
            goto LABEL_112;
          v98 = Item;
          if ( !Item || (Item = sub_1BE4C08(Item, *(_QWORD *)(*(_QWORD *)v89 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v89 + 24) )
              goto LABEL_113;
            *(_QWORD *)(v89 + 32) = v98;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v89 + 32), v98, v92, v93, v94, v95, v96, v97);
            v99 = this->fields.baseUserCommandCodeEntity;
            if ( !v99 )
              goto LABEL_112;
            v100 = *(_OWORD *)&v99->fields.id.fields.fakeValue;
            *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v99->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v159.fields.fakeValue = v100;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v153 = v159;
            v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v153, 0LL);
            v102 = System_Collections_Generic_Dictionary_long__long___get_Item(
                     dic,
                     v101,
                     (const MethodInfo_328BFD8 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
            Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(Master_object, v102, v81, 0LL);
            v109 = Item;
            if ( !Item || (Item = sub_1BE4C08(Item, *(_QWORD *)(*(_QWORD *)v89 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v89 + 24) <= 1u )
                goto LABEL_113;
              *(_QWORD *)(v89 + 40) = v109;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v89 + 40), v109, v103, v104, v105, v106, v107, v108);
              Item = (__int64)ServantEntity__getClassName(Entity, 0LL);
              v116 = Item;
              if ( !Item || (Item = sub_1BE4C08(Item, *(_QWORD *)(*(_QWORD *)v89 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v89 + 24) <= 2u )
                  goto LABEL_113;
                *(_QWORD *)(v89 + 48) = v116;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v89 + 48), v116, v110, v111, v112, v113, v114, v115);
                Item = (__int64)ServantEntity__getClassName((ServantEntity_o *)v74, 0LL);
                v123 = Item;
                if ( !Item || (Item = sub_1BE4C08(Item, *(_QWORD *)(*(_QWORD *)v89 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v89 + 24) <= 3u )
                    goto LABEL_113;
                  *(_QWORD *)(v89 + 56) = v123;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v89 + 56), v123, v117, v118, v119, v120, v121, v122);
                  rarity = v70->fields.rarity;
                  if ( !Rarity_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                  Item = (__int64)Rarity__getRarityType(rarity, 0LL);
                  v131 = Item;
                  if ( !Item || (Item = sub_1BE4C08(Item, *(_QWORD *)(*(_QWORD *)v89 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v89 + 24) <= 4u )
                      goto LABEL_113;
                    *(_QWORD *)(v89 + 64) = v131;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v89 + 64), v131, v125, v126, v127, v128, v129, v130);
                    Item = (__int64)Rarity__getRarityType(v87->fields.rarity, 0LL);
                    v138 = Item;
                    if ( !Item || (Item = sub_1BE4C08(Item, *(_QWORD *)(*(_QWORD *)v89 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v89 + 24) > 5u )
                      {
                        *(_QWORD *)(v89 + 72) = v138;
                        sub_1BE4A70((PartyOrganizationUtility_o *)(v89 + 72), v138, v132, v133, v134, v135, v136, v137);
                        v139 = System_String__Format_62713316(format, (System_Object_array *)v89, 0LL);
                        v141 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
                        if ( (*(_BYTE *)(v141 + 309) & 1) == 0 )
                          v141 = sub_1C369A8(v140);
                        v142 = *(_QWORD *)(*(_QWORD *)(v141 + 192) + 16LL);
                        if ( (*(_BYTE *)(v142 + 309) & 1) == 0 )
                          v142 = sub_1C369A8(v140);
                        v143 = **(CommonUI_o ***)(v142 + 184);
                        v144 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_CONFIRM_YES"*/, 0LL);
                        v145 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_NO"*/, 0LL);
                        v146 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v146,
                          v149,
                          Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                          0LL);
                        if ( !v143 )
                          goto LABEL_112;
                        CommonUI__OpenConfirmDecideDlg(
                          v143,
                          v150,
                          v139,
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
                          1,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_113:
                      sub_1BE4D30(Item, v31);
                    }
                  }
                }
              }
            }
          }
          v147 = sub_1BE4D4C(Item);
          sub_1BE4BF4(v147, 0LL);
        }
      }
    }
  }
}


void __fastcall CommandCardEquipmentControl__OpenLockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  BattleCommandData_o *v5; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *klass; // x21
  CommandCardDialog_ClickDelegate_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_4B6A4B0 & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    this = (CommandCardEquipmentControl_o *)sub_1BE4ACC(
                                              &Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__,
                                              v3);
    byte_4B6A4B0 = 1;
  }
  monitor = v2[31].monitor;
  if ( !monitor
    || ((v5 = (BattleCommandData_o *)*((_QWORD *)monitor + 47)) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(v5, 0LL)),
        klass = (CommandCardDialog_o *)v2[24].klass,
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_1BE4D18(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(v8, v2, Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__, v9),
        !klass) )
  {
    sub_1BE4D28(this, method);
  }
  CommandCardDialog__OpenLockEquipSlot(klass, IsEnableCommandCode, v8, v10);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4B6A4B1 & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__, v3);
    byte_4B6A4B1 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_1BE4D18(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__,
          v9),
        !commandCardDialog) )
  {
    sub_1BE4D28(targetCommandCardData, method);
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v8, v10);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4B6A4AF & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__, v3);
    byte_4B6A4AF = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v8 = (CommandCardDialog_ClickDelegate_o *)sub_1BE4D18(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__,
          v9),
        !commandCardDialog) )
  {
    sub_1BE4D28(targetCommandCardData, method);
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v8, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayEquipEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  CommandCodeEffectComponent_o *AttachEffectOnCode; // x0
  const MethodInfo *v8; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  CommandCodeEffectComponent_o *v10; // x19
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  CommandCodeEffectComponent_o *v15; // x22
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B6A4C2 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_4B6A4C2 = 1;
  }
  AttachEffectOnCode = CommandCardEquipmentControl__CreateAttachEffectOnCode(this, *(const MethodInfo **)&targetCardIdx);
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_12;
  v10 = AttachEffectOnCode;
  v12 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v17, 0LL);
  AttachEffectOnCode = CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v13, v14);
  if ( !AttachEffectOnCode
    || (v15 = AttachEffectOnCode,
        CommandCodeEffectComponent__SetEndEffectCallbak(AttachEffectOnCode, callback, 0LL),
        (AttachEffectOnCode = (CommandCodeEffectComponent_o *)this->fields.commandCardEquipmentIcon) == 0LL)
    || (CombineCommandCardEquipmentComponent__HideStatusInfo(
          (CombineCommandCardEquipmentComponent_o *)AttachEffectOnCode,
          v8),
        (commandCardEquipmentIcon = this->fields.commandCardEquipmentIcon) == 0LL)
    || (AttachEffectOnCode = (CommandCodeEffectComponent_o *)commandCardEquipmentIcon->fields.equippedInfo) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AttachEffectOnCode, 0, 0LL), !v10) )
  {
LABEL_12:
    sub_1BE4D28(AttachEffectOnCode, v8);
  }
  CommandCodeEffectComponent__PlayAnimation(v10, 0LL);
  CommandCodeEffectComponent__PlayAnimation(v15, 0LL);
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
  Il2CppObject *lockEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Transform_o *v16; // x20

  if ( (byte_4B6A4C1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&lockCardIdx);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6A4C1 = 1;
  }
  lockEffect = (Il2CppObject *)this->fields.lockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   lockEffect,
                                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v12 = (UnityEngine_Component_o *)Component_object;
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= lockCardIdx )
    sub_1BE4D30(Component_object, v11);
  v14 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[lockCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E1 = 1;
  }
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E6 = 1;
  }
  if ( !v16 )
LABEL_18:
    sub_1BE4D28(Component_object, v11);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v12, 0LL);
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
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v30; // x22
  __int64 v31; // x23
  int32_t v32; // w0
  const MethodInfo *v33; // x3
  CommandCodeEffectComponent_o *v34; // x0
  Il2CppObject *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v36; // x22
  UnityEngine_Component_o *v37; // x23
  UnityEngine_Transform_o *v38; // x24
  UnityEngine_Transform_o *v39; // x24
  System_Action_o *v40; // x24
  System_Action_o *v41; // x24
  struct CombineCommandCardComponent_array *commandCardList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B6A4C3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&targetCardIdx);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, v7);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__, v11);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__, v12);
    sub_1BE4ACC(&CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo, v13);
    byte_4B6A4C3 = 1;
  }
  v14 = sub_1BE4D18(CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo);
  CommandCardEquipmentControl___c__DisplayClass124_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass124_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_23;
  v31 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v31;
  *(_QWORD *)&v43.fields.fakeValue = v30;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v43, 0LL);
  v34 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v32, v33);
  commandCodeDetachEffect = (Il2CppObject *)this->fields.commandCodeDetachEffect;
  v36 = v34;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeDetachEffect,
                                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_23;
  v37 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !Component_object )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.detachEffectPos, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v37, 0LL);
  v38 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4B612E1 = 1;
  }
  if ( !v38 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(v38, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v37, 0LL);
  v39 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4B612E6 = 1;
  }
  if ( !v39 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v40 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__,
    0LL);
  CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v37, v40, 0LL);
  v41 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v14,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__,
    0LL);
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)v37, v41, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_23;
  if ( commandCardList->max_length <= targetCardIdx )
    sub_1BE4D30(Component_object, v16);
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_object
    || (CombineCommandCardComponent__HideCommandCodeSprite((CombineCommandCardComponent_o *)Component_object, v16),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v37, 0LL),
        !v36) )
  {
LABEL_23:
    sub_1BE4D28(Component_object, v16);
  }
  CommandCodeEffectComponent__PlayAnimation(v36, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B6A4C4 & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo, *(_QWORD *)&targetCardIdx);
    byte_4B6A4C4 = 1;
  }
  v7 = sub_1BE4D18(CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo);
  CommandCardEquipmentControl__PlayReplaceEffect_d__125___ctor(
    (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1BE4D28(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v16, v17, v18, v19, v20, v21);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B6A4C5 & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo, *(_QWORD *)&removeCardIdx);
    byte_4B6A4C5 = 1;
  }
  v9 = sub_1BE4D18(CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo);
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126___ctor(
    (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_1BE4D28(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)callback, v18, v19, v20, v21, v22, v23);
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
  Il2CppObject *unlockEffect; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *v12; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x22
  struct CombineCommandCardComponent_array *v17; // x8

  if ( (byte_4B6A4C0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&unlockCardIdx);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6A4C0 = 1;
  }
  unlockEffect = (Il2CppObject *)this->fields.unlockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   unlockEffect,
                                                   (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_21;
  v12 = (UnityEngine_Component_o *)Component_object;
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_21;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_22;
  v14 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v14 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E1 = 1;
  }
  if ( !v15 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B612E6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4B612E6 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v17 = this->fields.commandCardList) == 0LL) )
  {
LABEL_21:
    sub_1BE4D28(Component_object, v11);
  }
  if ( v17->max_length <= unlockCardIdx )
LABEL_22:
    sub_1BE4D30(Component_object, v11);
  Component_object = (UnityEngine_GameObject_o *)v17->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_21;
  CombineCommandCardComponent__HideUnlockInfo((CombineCommandCardComponent_o *)Component_object, v11);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v12, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetBaseServantCommandCardList(
        CommandCardEquipmentControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array *assetList; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 transformTotal; // x1
  int64_t messageTxtLabelSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_array *v35; // x20
  unsigned __int64 v36; // x21
  __int64 v37; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v39; // w22
  __int64 v40; // x23
  __int64 v41; // x24
  int32_t v42; // w23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Action_o *v49; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4B6A4A5 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&AssetManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_SetCommandCardList__, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1BE4ACC(&string___TypeInfo, v9);
    byte_4B6A4A5 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_38706752(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v11, v12, v13, v14, v15, v16);
  }
  CommandCardEquipmentControl__InitTransformInfo(this, (const MethodInfo *)callback);
  messageTxtLabelSprite = (int64_t)this->fields.messageTxtLabelSprite;
  if ( !messageTxtLabelSprite )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageTxtLabelSprite, 0LL);
  messageTxtLabelSprite = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !messageTxtLabelSprite )
    goto LABEL_35;
  messageTxtLabelSprite = (int64_t)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)messageTxtLabelSprite,
                                     0LL);
  if ( !messageTxtLabelSprite )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0LL);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, v20);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.LoadAfterCallback = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.LoadAfterCallback,
      (int64_t)callback,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    transformTotal = (unsigned int)this->fields.transformTotal;
    if ( (int)transformTotal > 1 )
    {
      messageTxtLabelSprite = (int64_t)this->fields.cardSwitchButton;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0LL);
      messageTxtLabelSprite = (int64_t)this->fields.servantName;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      messageTxtLabelSprite = (int64_t)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)messageTxtLabelSprite,
                                         0LL);
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0LL);
      messageTxtLabelSprite = (int64_t)this->fields.baseUserServantEntity;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      messageTxtLabelSprite = UserServantEntity__GetTransformedServantInfo(
                                (UserServantEntity_o *)messageTxtLabelSprite,
                                &transformInfo,
                                this->fields.displayTransformIndex,
                                0LL);
      if ( !transformInfo )
        goto LABEL_35;
      messageTxtLabelSprite = (int64_t)this->fields.servantName;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      UILabel__set_text((UILabel_o *)messageTxtLabelSprite, transformInfo->fields.titleText, 0LL);
      transformTotal = (unsigned int)this->fields.transformTotal;
    }
    v28 = (struct System_String_array *)sub_1BE4B74(string___TypeInfo, transformTotal);
    this->fields.assetList = v28;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetList, (int64_t)v28, v29, v30, v31, v32, v33, v34);
    v35 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v36 = 0LL;
      v37 = 32LL;
      while ( 1 )
      {
        messageTxtLabelSprite = (int64_t)this->fields.baseUserServantEntity;
        if ( !messageTxtLabelSprite )
          break;
        messageTxtLabelSprite = UserServantEntity__GetTransformedServantId(
                                  (UserServantEntity_o *)messageTxtLabelSprite,
                                  v36,
                                  0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v39 = messageTxtLabelSprite;
        v41 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v40 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v41;
        *(_QWORD *)&v51.fields.fakeValue = v40;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v51, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        messageTxtLabelSprite = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderName(v39, v42, 0LL);
        if ( !v35 )
          break;
        if ( v36 >= v35->max_length )
          sub_1BE4D30(messageTxtLabelSprite, transformTotal);
        *(Il2CppClass **)((char *)&v35->obj.klass + v37) = (Il2CppClass *)messageTxtLabelSprite;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)((char *)v35 + v37),
          messageTxtLabelSprite,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        v35 = this->fields.assetList;
        ++v36;
        v37 += 8LL;
        if ( (__int64)v36 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1BE4D28(messageTxtLabelSprite, transformTotal);
    }
LABEL_30:
    v49 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_38704408(v35, v49, 1, 0LL);
  }
  else
  {
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v21);
    if ( !callback )
      goto LABEL_35;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
}


void __fastcall CommandCardEquipmentControl__SetBaseSvtCardImg(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  ServantLimitImageMaster_o *v20; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v23; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38813936; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B6A4A0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B6A4A0 = 1;
  }
  this->fields.baseUserServantEntity = userServantEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v13);
  if ( !userServantEntity )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v20 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v19;
  *(_QWORD *)&v32.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v32, 0LL);
  if ( !v20 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v20,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v23 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38813936 = CharaGraphManager__CreateTexturePrefab_38813936(
                               this->fields.charaGraphBase,
                               userServantEntity,
                               v23,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_38813936;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_38813936,
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
LABEL_14:
    sub_1BE4D28(Instance, v15);
  UICharaGraphTexture__SetCharacter_41797436((UICharaGraphTexture_o *)Instance, userServantEntity, v23, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetCommandCardDisplay(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v11; // x2
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct CombineCommandCardComponent_array *v18; // x8
  struct CombineCommandCardComponent_o *v19; // x1
  const MethodInfo *v20; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v22; // x2

  if ( (index & 0x80000000) == 0 )
  {
    commandCardList = this->fields.commandCardList;
    if ( !commandCardList )
      goto LABEL_9;
    if ( (signed int)commandCardList->max_length > index )
    {
      this->fields.baseUserCommandCodeEntity = 0LL;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity,
        0LL,
        (int64_t)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v11);
      v18 = this->fields.commandCardList;
      if ( v18 )
      {
        if ( v18->max_length <= index )
          sub_1BE4D30(this, *(_QWORD *)&index);
        v19 = v18->m_Items[index];
        this->fields.targetCommandCardData = v19;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.targetCommandCardData,
          (int64_t)v19,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        targetCommandCardData = this->fields.targetCommandCardData;
        if ( targetCommandCardData )
        {
          CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
            this,
            targetCommandCardData->fields._NowKind_k__BackingField,
            v20);
          CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v22);
          return;
        }
      }
LABEL_9:
      sub_1BE4D28(this, *(_QWORD *)&index);
    }
  }
}


void __fastcall CommandCardEquipmentControl__SetCommandCardEquipmentSkill(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v3; // x19
  CommandCardEquipmentControl_o *v4; // x20
  System_String_array *explanationList; // [xsp+0h] [xbp-30h] BYREF
  System_String_array *titleList; // [xsp+8h] [xbp-28h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-18h] BYREF

  explanationList = 0LL;
  titleList = 0LL;
  if ( !userCommandCode )
    goto LABEL_9;
  v3 = this;
  UserCommandCodeEntity__GetSkillInfo(userCommandCode, &idList, &titleList, &explanationList, 0LL);
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_41503860(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v4 = this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_39141652((SkillIconComponent_o *)this, idList->m_Items[1], 1, 0LL), !titleList) )
LABEL_9:
    sub_1BE4D28(this, userCommandCode);
  if ( !titleList->max_length )
LABEL_10:
    sub_1BE4D30(this, userCommandCode);
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillName;
  if ( !this )
    goto LABEL_9;
  UILabel__set_text((UILabel_o *)this, titleList->m_Items[0], 0LL);
  WrapControlText__textBBCodeAdjust(v3->fields.commandCardEquipmentSkillDetail, (System_String_o *)v4, 22, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t baseUserServantEntity; // x0
  int32_t v14; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *v17; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v19; // x24
  struct UserServantEntity_o *v20; // x8
  __int64 v21; // x26
  __int64 v22; // x27
  int64_t v23; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v26; // s1
  float v27; // s0
  int v28; // s2
  __int64 v29; // x11
  float v30; // s0
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v32; // x8
  unsigned __int64 v33; // x29
  __int64 v34; // x28
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  int32_t v37; // w26
  struct CombineCommandCardComponent_array *v38; // x8
  CombineCommandCardComponent_o *v39; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  BattleCommandData_o *v46; // x25
  const MethodInfo *v47; // x6
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  Il2CppObject *v50; // x23
  __int64 v51; // x21
  __int64 v52; // x26
  struct System_Int64_array *v53; // x8
  int64_t v54; // x2
  struct System_Int32_array *commandCardParam; // x8
  int32_t v56; // w3
  const MethodInfo *v57; // x1
  float v58; // s3
  float v59; // s0
  float v60; // s1
  float v61; // s2
  const MethodInfo *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Action_o *LoadAfterCallback; // x20
  int32_t limitCount; // [xsp+4h] [xbp-7Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4B6A4A6 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommandData_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B6A4A6 = 1;
  }
  entity = 0LL;
  baseUserServantEntity = (int64_t)this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_70;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_70;
  v14 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  limitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                 v14,
                 LimitCountByImageLimitCostumeIn,
                 0LL);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  baseUserServantEntity = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  v17 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
          v14,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseUserServantEntity,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  baseUserServantEntity = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_70;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)baseUserServantEntity,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B61717 = 1;
  }
  baseUserServantEntity = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    baseUserServantEntity = (int64_t)NetworkManager_TypeInfo;
  }
  v20 = this->fields.baseUserServantEntity;
  if ( !v20 )
    goto LABEL_70;
  v22 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
  v23 = *(_QWORD *)(*(_QWORD *)(baseUserServantEntity + 184) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v22;
  *(_QWORD *)&v72.fields.fakeValue = v21;
  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v72, 0LL);
  if ( !v19 )
    goto LABEL_70;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)v19,
    &entity,
    v23,
    (int)baseUserServantEntity,
    0LL);
  baseUserServantEntity = (int64_t)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_70;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL);
  transformTotal = this->fields.transformTotal;
  v26 = -18.0;
  if ( transformTotal <= 1 )
    v26 = -15.5;
  v27 = transformTotal <= 1 ? -258.0 : -270.0;
  v28 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v26 - 1), 0LL);
  baseUserServantEntity = (int64_t)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_70;
  v29 = *(_QWORD *)baseUserServantEntity;
  v30 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v30 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v30;
  baseUserServantEntity = (*(__int64 (**)(void))(v29 + 440))();
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_70;
  v32 = *(_QWORD *)&commandCardList->max_length;
  if ( (int)v32 >= 1 )
  {
    if ( v17 )
    {
      v33 = 0LL;
      v34 = (unsigned int)v32;
      while ( 1 )
      {
        klass = v17[9].klass;
        if ( klass )
        {
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)v33 < (int)namespaze_low )
          {
            if ( v33 >= namespaze_low )
              goto LABEL_71;
            v37 = *((_DWORD *)&klass->_1.byval_arg.data + v33);
            if ( (unsigned int)(v37 - 1) <= 2 )
            {
              v38 = this->fields.commandCardList;
              if ( !v38 )
                break;
              if ( v33 >= v38->max_length )
                goto LABEL_71;
              v39 = v38->m_Items[v33];
              baseUserServantEntity = (int64_t)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( !v39 )
                break;
              v39->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&v39->fields.target,
                baseUserServantEntity,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
              v46 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_44329868(v46, v37, v14, limitCount, 0, -1, 0LL);
              if ( !v46 )
                break;
              v46->fields.markindex = v33;
              v46->fields.servantCardIdsIndex = v33;
              baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
              if ( baseUserServantCommandCodeEntity )
              {
                userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !userCommandCodeIds )
                  break;
                if ( v33 >= userCommandCodeIds->max_length )
LABEL_71:
                  sub_1BE4D30(baseUserServantEntity, method);
                method = (const MethodInfo *)userCommandCodeIds->m_Items[v33];
                v46->fields.userCommandCodeId = (int64_t)method;
                if ( (__int64)method >= 1 )
                {
                  if ( !MasterData_object )
                    break;
                  v50 = MasterData_object;
                  baseUserServantEntity = (int64_t)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                     (int64_t)method,
                                                     (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                  if ( !baseUserServantEntity )
                    break;
                  v51 = *(_QWORD *)(baseUserServantEntity + 80);
                  v52 = *(_QWORD *)(baseUserServantEntity + 88);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v73.fields.currentCryptoKey = v51;
                  *(_QWORD *)&v73.fields.fakeValue = v52;
                  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v73, 0LL);
                  v46->fields.commandCodeId = baseUserServantEntity;
                  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
                  MasterData_object = v50;
                  if ( !baseUserServantCommandCodeEntity )
                    break;
                }
                v53 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !v53 )
                  break;
                if ( v33 >= v53->max_length )
                  goto LABEL_71;
                v54 = v53->m_Items[v33];
              }
              else
              {
                v54 = -1LL;
              }
              if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
              {
                if ( v33 >= commandCardParam->max_length )
                  goto LABEL_71;
                v56 = commandCardParam->m_Items[v33 + 1];
              }
              else
              {
                v56 = 0;
              }
              v46->fields.commandCardParam = v56;
              CombineCommandCardComponent__DispCommandCard(v39, v46, v54, v56, 0, 0, v47);
              v58 = 1.0;
              if ( this->fields.displayTransformIndex <= 0 )
                v59 = 1.0;
              else
                v59 = 0.5;
              v60 = v59;
              v61 = v59;
              CombineCommandCardComponent__SetColor(v39, *(UnityEngine_Color_o *)(&v58 - 3), v57);
              CombineCommandCardComponent__SetLayout(v39, this->fields.positionOffsetY, this->fields.scaleOffset, v62);
            }
          }
        }
        if ( v34 == ++v33 )
          goto LABEL_67;
      }
    }
LABEL_70:
    sub_1BE4D28(baseUserServantEntity, method);
  }
LABEL_67:
  CommandCardEquipmentControl__SetExecuteButtonState(this, method);
  LoadAfterCallback = this->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    this->fields.LoadAfterCallback = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.LoadAfterCallback, 0LL, v63, v64, v65, v66, v67, v68);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))LoadAfterCallback->fields.m_target)(
      LoadAfterCallback->fields.original_method_info,
      *(_QWORD *)&LoadAfterCallback->fields.extra_arg);
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
  const MethodInfo *v7; // x1

  CommandCardEquipmentControl__InitCommandCodeInfo(this, method);
  qpInfoObj = this->fields.qpInfoObj;
  if ( !qpInfoObj
    || (UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL),
        (qpInfoObj = (UnityEngine_GameObject_o *)this->fields.lockButton) == 0LL)
    || (qpInfoObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)qpInfoObj, 0LL)) == 0LL )
  {
    sub_1BE4D28(qpInfoObj, v3);
  }
  UnityEngine_GameObject__SetActive(qpInfoObj, 0, 0LL);
  CommandCardEquipmentControl__InitCommandCardSelectStatus(this, v5);
  CommandCardEquipmentControl__InitDisplayInfo(this, v6);
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v7);
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

  if ( (byte_4B6A4BB & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    byte_4B6A4BB = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  if ( ((unsigned __int8)executeButton & 1) != 0 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !v7 )
      goto LABEL_32;
    if ( v7[27].fields.m_CachedPtr == 1 )
    {
      v8 = this->fields.baseUserCommandCodeEntity == 0LL;
      goto LABEL_21;
    }
  }
  else
  {
    v7 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)executeButton & 1) == 0 )
    goto LABEL_20;
  v9 = this->fields.targetCommandCardData;
  if ( !v9 )
    goto LABEL_32;
  if ( v9->fields._NowKind_k__BackingField == 2 )
  {
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
    {
      v14 = 0;
      goto LABEL_24;
    }
    data = v9->fields.data;
    if ( !data )
      goto LABEL_32;
    v12 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    userCommandCodeId = data->fields.userCommandCodeId;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v12;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v16 = v17;
    v8 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v16, 0LL);
  }
  else
  {
LABEL_20:
    v8 = !this->fields.isCanCombine;
  }
LABEL_21:
  v14 = !v8;
LABEL_24:
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
LABEL_32:
    sub_1BE4D28(executeButton, v6);
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

  if ( (byte_4B6A4BA & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, method);
    byte_4B6A4BA = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63504416((int)this + 524, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL),
        !haveQpLabel) )
  {
    sub_1BE4D28(SelfUserGame, v4);
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
    sub_1BE4D28(removeButton, isEnable);
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
    sub_1BE4D28(replaceButton, isEnable);
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
    sub_1BE4D28(overwriteWarningLabel, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  int v19; // w26
  struct CombineCommandCardComponent_o *v20; // x8
  struct BattleCommandData_o *v21; // x8
  __int128 v22; // q0
  int64_t userCommandCodeId; // x23
  struct CombineCommandCardComponent_o *v24; // x8
  struct BattleCommandData_o *v25; // x8
  __int128 v26; // q0
  int64_t v27; // x22
  const MethodInfo *v28; // x5
  struct CombineCommandCardComponent_o *v29; // x8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  int max_length; // w9
  int v33; // w27
  il2cpp_array_size_t v34; // w28
  struct System_Int64_array *v35; // x8
  int64_t v36; // x25
  __int64 v37; // x23
  __int64 v38; // x24
  char v39; // w23
  int32_t v40; // w24
  struct UserServantCommandCodeEntity_o *v41; // x8
  __int128 v42; // q0
  const MethodInfo *v43; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B6A4AA & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4B6A4AA = 1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  commandCardInfoObj = (int64_t)this->fields.unlockItemInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0LL);
  commandCardInfoObj = (int64_t)this->fields.commandCardNotEquippedInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0LL);
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
    goto LABEL_57;
  commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)commandCardInfoObj,
                                  0LL);
  if ( !commandCardInfoObj )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentSkillIcon;
  if ( !commandCardInfoObj )
    goto LABEL_57;
  commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)commandCardInfoObj,
                                  0LL);
  if ( !commandCardInfoObj )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  commandCardInfoObj = (int64_t)this->fields.qpInfoObj;
  if ( !commandCardInfoObj )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 0, 0LL);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    goto LABEL_57;
  data = targetCommandCardData->fields.data;
  if ( data )
  {
    commandCardInfoObj = BattleCommandData__IsEnableCommandCode(data, 0LL);
    v19 = 0;
    if ( userCommandCode && (commandCardInfoObj & 1) != 0 )
    {
      v20 = this->fields.targetCommandCardData;
      if ( !v20 )
        goto LABEL_57;
      v21 = v20->fields.data;
      if ( !v21 )
        goto LABEL_57;
      v22 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v21->fields.userCommandCodeId;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v46 = v47;
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v46, 0LL);
      v19 = userCommandCodeId != commandCardInfoObj;
      if ( dispEquippedInfo )
      {
        v24 = this->fields.targetCommandCardData;
        if ( !v24 )
          goto LABEL_57;
        v25 = v24->fields.data;
        if ( !v25 )
          goto LABEL_57;
        v26 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v27 = v25->fields.userCommandCodeId;
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v47.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v47;
        dispEquippedInfo = v27 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v45, 0LL);
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
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity,
    (int64_t)userCommandCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v29 = this->fields.targetCommandCardData;
  if ( !v29 )
    goto LABEL_57;
  if ( ((v29->fields._NowKind_k__BackingField == 2) & ~v19) != 0 )
  {
    LODWORD(baseUserServantCommandCodeEntity) = 0;
    v39 = 1;
  }
  else if ( userCommandCode )
  {
    baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
    if ( baseUserServantCommandCodeEntity )
    {
      userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
      if ( !userCommandCodeIds )
        goto LABEL_57;
      max_length = userCommandCodeIds->max_length;
      v33 = max_length - 1;
      if ( max_length >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          v35 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
          if ( !v35 )
            goto LABEL_57;
          if ( v34 >= v35->max_length )
            sub_1BE4D30(commandCardInfoObj, userCommandCode);
          v36 = v35->m_Items[v34];
          v38 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v37 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = v38;
          *(_QWORD *)&v48.fields.fakeValue = v37;
          commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v48, 0LL);
          v39 = v36 == (int)commandCardInfoObj;
          LODWORD(baseUserServantCommandCodeEntity) = 1;
          if ( v36 == (int)commandCardInfoObj || v33 == v34 )
            goto LABEL_46;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          ++v34;
          if ( !baseUserServantCommandCodeEntity )
            goto LABEL_57;
        }
      }
      v39 = 0;
      LODWORD(baseUserServantCommandCodeEntity) = 1;
    }
    else
    {
      v39 = 0;
    }
  }
  else
  {
    v39 = 0;
    LODWORD(baseUserServantCommandCodeEntity) = 0;
  }
LABEL_46:
  v40 = equippedSvtId;
  if ( (unsigned int)baseUserServantCommandCodeEntity | v19 )
  {
    CommandCardEquipmentControl__SetReplaceDispInfo(this, (const MethodInfo *)userCommandCode);
    commandCardInfoObj = (int64_t)this->fields.cancelButton;
    if ( !commandCardInfoObj )
      goto LABEL_57;
    commandCardInfoObj = (int64_t)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)commandCardInfoObj,
                                    0LL);
    if ( !commandCardInfoObj )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandCardInfoObj, 1, 0LL);
  }
  v41 = this->fields.baseUserServantCommandCodeEntity;
  if ( v41 )
  {
    v42 = *(_OWORD *)&v41->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v41->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v47.fields.fakeValue = v42;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v44 = v47;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v44, 0LL) == equippedSvtId )
      v40 = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_57:
    sub_1BE4D28(commandCardInfoObj, userCommandCode);
  CombineCommandCardEquipmentComponent__SetIcon(
    (CombineCommandCardEquipmentComponent_o *)commandCardInfoObj,
    userCommandCode,
    v39,
    dispEquippedInfo,
    v40,
    v28);
  CommandCardEquipmentControl__SetCommandCardEquipmentSkill(this, userCommandCode, v43);
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
  UnityEngine_Color_o **executeButtonSprite; // x0
  UIWidget_o *detailLabel; // x20
  System_String_o *v21; // x20
  UISprite_o *messageTxtLabelSprite; // x21
  UILabel_o *baseSelectInfoLabel; // x21
  __int64 *v24; // x8
  UnityEngine_Object_o *targetCommandCardData; // x21
  struct CombineCommandCardComponent_o *v26; // x8
  int32_t NowKind_k__BackingField; // w8
  __int64 *v28; // x8
  struct CombineCommandCardComponent_o *v29; // x8
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int128 v31; // q1
  struct UserCommandCodeEntity_o *v32; // x8
  __int128 v33; // q0
  UnityEngine_Color_o **v34; // x21
  int64_t v35; // x22
  CommandCardEquipmentControl_c *v36; // x8
  struct UISprite_o *v37; // x23
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x8
  System_String_o *REPLACE_EXE_BTN_SPRITE_NAME; // x1
  UISprite_o *v40; // x21
  struct UISprite_o *v41; // x21
  UISprite_o *v42; // x0
  UISprite_o *v43; // x21
  UISprite_o *v44; // x21
  System_String_o *EQUIP_EXE_BTN_SPRITE_NAME; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x20
  UISprite_o *v47; // x21
  UISprite_o *v48; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-60h]
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6A4BC & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_3694/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, v8);
    sub_1BE4ACC(&StringLiteral_3691/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, v9);
    sub_1BE4ACC(&StringLiteral_3692/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/, v10);
    sub_1BE4ACC(&StringLiteral_3698/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v11);
    sub_1BE4ACC(&StringLiteral_3696/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, v12);
    sub_1BE4ACC(&StringLiteral_3695/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/, v13);
    sub_1BE4ACC(&StringLiteral_12297/*"SHORT_ITEM_INFO_MSG"*/, v14);
    sub_1BE4ACC(&StringLiteral_3700/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/, v15);
    sub_1BE4ACC(&StringLiteral_12298/*"SHORT_QP_INFO_MSG"*/, v16);
    sub_1BE4ACC(&StringLiteral_3697/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, v17);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v18);
    byte_4B6A4BC = 1;
  }
  executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
  detailLabel = (UIWidget_o *)this->fields.detailLabel;
  if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
    executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
  }
  if ( !detailLabel )
    goto LABEL_104;
  UIWidget__set_color(detailLabel, *executeButtonSprite[23], 0LL);
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( state )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0LL);
      messageTxtLabelSprite = this->fields.messageTxtLabelSprite;
      v21 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      if ( !messageTxtLabelSprite )
        goto LABEL_104;
      UISprite__set_spriteName(
        messageTxtLabelSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
        0LL);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
      if ( !executeButtonSprite )
        goto LABEL_104;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
      if ( !executeButtonSprite )
        goto LABEL_104;
      UISprite__set_spriteName(
        (UISprite_o *)executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      baseSelectInfoLabel = this->fields.baseSelectInfoLabel;
      v24 = &StringLiteral_3692/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
      goto LABEL_49;
    case 1:
      targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
        goto LABEL_102;
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.baseSelectInfoLabel;
      if ( !executeButtonSprite )
        goto LABEL_104;
      executeButtonSprite = (UnityEngine_Color_o **)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)executeButtonSprite,
                                                      0LL);
      if ( !executeButtonSprite )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)executeButtonSprite, 0, 0LL);
      v26 = this->fields.targetCommandCardData;
      if ( !v26 )
        goto LABEL_104;
      NowKind_k__BackingField = v26->fields._NowKind_k__BackingField;
      if ( NowKind_k__BackingField == 2 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3697/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                        0LL);
        v44 = this->fields.messageTxtLabelSprite;
        v21 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
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
LABEL_99:
              UISprite__set_spriteName((UISprite_o *)executeButtonSprite, EQUIP_EXE_BTN_SPRITE_NAME, 0LL);
              goto LABEL_100;
            }
          }
        }
      }
      else if ( NowKind_k__BackingField )
      {
        baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( baseUserCommandCodeEntity )
        {
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0LL);
          goto LABEL_102;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3698/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
                                                        0LL);
        v47 = this->fields.messageTxtLabelSprite;
        v21 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        if ( v47 )
        {
          UISprite__set_spriteName(
            v47,
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
              goto LABEL_102;
            }
          }
        }
      }
      else
      {
        if ( this->fields.isShortQp )
        {
          executeButtonSprite = (UnityEngine_Color_o **)this->fields.detailLabel;
          if ( !executeButtonSprite )
            goto LABEL_104;
          v52.fields.r = 1.0;
          v52.fields.g = 1.0;
          v52.fields.b = 1.0;
          v52.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)executeButtonSprite, v52, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = &StringLiteral_12298/*"SHORT_QP_INFO_MSG"*/;
        }
        else if ( this->fields.isShortNeedItem )
        {
          executeButtonSprite = (UnityEngine_Color_o **)this->fields.detailLabel;
          if ( !executeButtonSprite )
            goto LABEL_104;
          v53.fields.r = 1.0;
          v53.fields.g = 1.0;
          v53.fields.b = 1.0;
          v53.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)executeButtonSprite, v53, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = &StringLiteral_12297/*"SHORT_ITEM_INFO_MSG"*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = &StringLiteral_3700/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v28, 0LL);
        v48 = this->fields.messageTxtLabelSprite;
        v21 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        if ( v48 )
        {
          UISprite__set_spriteName(
            v48,
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
              goto LABEL_99;
            }
          }
        }
      }
      goto LABEL_104;
    case 2:
      v29 = this->fields.targetCommandCardData;
      if ( !v29 )
        goto LABEL_104;
      if ( v29->fields._NowKind_k__BackingField != 2 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3696/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/,
                                                        0LL);
        v41 = this->fields.executeButtonSprite;
        v21 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        if ( v41 )
        {
          v42 = v41;
          REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
          goto LABEL_62;
        }
LABEL_104:
        sub_1BE4D28(executeButtonSprite, *(_QWORD *)&state);
      }
      nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
      if ( !nowEquipedUserCommandCodeEntity )
        goto LABEL_104;
      v31 = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v51.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v50 = v51;
      executeButtonSprite = (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(
                                                      &v50,
                                                      0LL);
      v32 = this->fields.baseUserCommandCodeEntity;
      if ( !v32 )
        goto LABEL_104;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      v34 = executeButtonSprite;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v49.fields.fakeValue = v33;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v49, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3697/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, 0LL);
      v36 = CommandCardEquipmentControl_TypeInfo;
      v37 = this->fields.executeButtonSprite;
      v21 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        v36 = CommandCardEquipmentControl_TypeInfo;
      }
      static_fields = v36->static_fields;
      if ( v34 == (UnityEngine_Color_o **)v35 )
      {
        if ( !v37 )
          goto LABEL_104;
        REPLACE_EXE_BTN_SPRITE_NAME = static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !v37 )
          goto LABEL_104;
        REPLACE_EXE_BTN_SPRITE_NAME = static_fields->REPLACE_EXE_BTN_SPRITE_NAME;
      }
      v42 = v37;
LABEL_62:
      UISprite__set_spriteName(v42, REPLACE_EXE_BTN_SPRITE_NAME, 0LL);
      executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
      v43 = this->fields.messageTxtLabelSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      if ( !v43 )
        goto LABEL_104;
      UISprite__set_spriteName(
        v43,
        CommandCardEquipmentControl_TypeInfo->static_fields->SELECTED_MESSAGE_SPRITE_NAME,
        0LL);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
      if ( !executeButtonSprite )
        goto LABEL_104;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
LABEL_100:
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
      if ( !executeButtonSprite )
        goto LABEL_104;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
LABEL_102:
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.detailLabel;
      if ( !executeButtonSprite )
        goto LABEL_104;
      UILabel__set_text((UILabel_o *)executeButtonSprite, v21, 0LL);
      return;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0LL);
      v40 = this->fields.messageTxtLabelSprite;
      v21 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      if ( !v40 )
        goto LABEL_104;
      UISprite__set_spriteName(
        v40,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_MESSAGE_SPRITE_NAME,
        0LL);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.messageTxtLabelSprite;
      if ( !executeButtonSprite )
        goto LABEL_104;
      (*(void (__fastcall **)(UnityEngine_Color_o **, _QWORD))&(*executeButtonSprite)[52].fields.b)(
        executeButtonSprite,
        *(_QWORD *)&(*executeButtonSprite)[53].fields.r);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.executeButtonSprite;
      if ( !executeButtonSprite )
        goto LABEL_104;
      UISprite__set_spriteName(
        (UISprite_o *)executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      baseSelectInfoLabel = this->fields.baseSelectInfoLabel;
      v24 = &StringLiteral_3695/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
LABEL_49:
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v24, 0LL);
      if ( !baseSelectInfoLabel )
        goto LABEL_104;
      UILabel__set_text(baseSelectInfoLabel, (System_String_o *)executeButtonSprite, 0LL);
      executeButtonSprite = (UnityEngine_Color_o **)this->fields.baseSelectInfoLabel;
      if ( !executeButtonSprite )
        goto LABEL_104;
      executeButtonSprite = (UnityEngine_Color_o **)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)executeButtonSprite,
                                                      0LL);
      if ( !executeButtonSprite )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)executeButtonSprite, 1, 0LL);
      goto LABEL_102;
    default:
      goto LABEL_102;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetTargetIndexSelectSprite(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w9
  int v6; // w21
  il2cpp_array_size_t v9; // w22
  CombineCommandCardComponent_o *v10; // x8

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_8;
  max_length = commandCardList->max_length;
  v6 = max_length - 1;
  if ( max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= commandCardList->max_length )
        sub_1BE4D30(this, *(_QWORD *)&index);
      v10 = commandCardList->m_Items[v9];
      if ( !v10 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)this,
        v10->fields.selectedSprite,
        index == v9,
        v3);
      if ( v6 == v9 )
        return;
      commandCardList = this->fields.commandCardList;
      ++v9;
    }
    while ( commandCardList );
LABEL_8:
    sub_1BE4D28(this, *(_QWORD *)&index);
  }
}


void __fastcall CommandCardEquipmentControl__SetUnlockItemInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  const MethodInfo *v8; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantCommandCodeUnlockMaster_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  UILabel_o *spendQpLabel; // x20
  _QWORD *v15; // x21
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  __int64 v17; // x22
  __int64 max_length; // x9
  __int64 v19; // x10
  __int64 v20; // x24
  __int64 v21; // x25
  unsigned __int64 v22; // x23
  __int64 v23; // x26
  __int64 v24; // x28
  __int64 v25; // x29
  bool v26; // w9
  Il2CppClass **v27; // x8
  LimitCntUpItemComponent_o *v28; // x21
  const MethodInfo *v29; // x3
  int32_t spendQpVal; // w8
  int32_t haveQpVal; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6A4B2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, v6);
    byte_4B6A4B2 = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_43;
  v10 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v12 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v12;
  *(_QWORD *)&v32.fields.fakeValue = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v32, 0LL);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_43;
  v13 = (int)Instance;
  Instance = (void *)BattleCommandComponent__getMarkIndex(
                       (BattleCommandComponent_o *)this->fields.targetCommandCardData,
                       0LL);
  if ( !v10 )
    goto LABEL_43;
  Instance = ServantCommandCodeUnlockMaster__GetEntity(v10, v13, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_43;
  spendQpLabel = this->fields.spendQpLabel;
  this->fields.spendQpVal = *((_DWORD *)Instance + 6);
  v15 = Instance;
  Instance = System_Int32__ToString_63504416((int)this + 520, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_43;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_43;
  v17 = v15[5];
  if ( !v17 )
    goto LABEL_43;
  max_length = unlockItemInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = *(_QWORD *)(v17 + 24);
    v20 = v15[4];
    v21 = max_length - 1;
    v22 = 0LL;
    v23 = v17 + 32;
    v24 = (int)v19;
    v25 = v20 + 32;
    v26 = v19 << 32 > 0;
    do
    {
      if ( v22 >= unlockItemInfoList->max_length )
LABEL_42:
        sub_1BE4D30(Instance, v8);
      v27 = &unlockItemInfoList->obj.klass + v22;
      v28 = (LimitCntUpItemComponent_o *)v27[4];
      if ( v26 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
          byte_4B61717 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        if ( v22 >= *(unsigned int *)(v17 + 24) )
          goto LABEL_42;
        if ( !v20 )
          break;
        if ( v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_42;
        if ( !v28 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v28,
          *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
          *(_DWORD *)(v23 + 4 * v22),
          *(_DWORD *)(v25 + 4 * v22),
          0LL);
        if ( v22 >= *(unsigned int *)(v17 + 24) || v22 >= *(unsigned int *)(v20 + 24) )
          goto LABEL_42;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *(_DWORD *)(v23 + 4 * v22),
          *(_DWORD *)(v25 + 4 * v22),
          v29);
        if ( !v28->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      else
      {
        if ( !v28 )
          break;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)v27[4], 0LL);
      }
      if ( v21 == v22 )
        goto LABEL_36;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v26 = (__int64)++v22 < v24;
    }
    while ( unlockItemInfoList );
LABEL_43:
    sub_1BE4D28(Instance, v8);
  }
LABEL_36:
  spendQpVal = this->fields.spendQpVal;
  haveQpVal = this->fields.haveQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = spendQpVal > haveQpVal;
  if ( spendQpVal > haveQpVal )
  {
    Instance = this->fields.spendQpLabel;
    if ( !Instance )
      goto LABEL_43;
    v33.fields.r = 1.0;
    v33.fields.g = 0.0;
    v33.fields.b = 0.0;
    v33.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v33, 0LL);
    this->fields.isCanCombine = 0;
  }
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v8);
}


void __fastcall CommandCardEquipmentControl__UpdateItemLinkListWindowButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  bool v10; // w1

  if ( (byte_4B6A4CC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B6A4CC = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0LL, 0LL);
  gameObject = 0LL;
  if ( v6 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0
        && this->fields.baseUserServantEntity
        && (Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                    (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___),
            ((unsigned __int8)Instance & 1) != 0) )
      {
        if ( gameObject )
        {
          v10 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive(gameObject, v10, 0LL);
          return;
        }
      }
      else if ( gameObject )
      {
        v10 = 0;
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1BE4D28(Instance, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___OpenLockDialog_b__94_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_45882472(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BE4D28(commandCardDialog, isDecide);
  }
}


void __fastcall CommandCardEquipmentControl___OpenReturnDialog_b__95_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    sub_1BE4D28(0LL, isDecide);
  CommandCardDialog__Close_45882472(commandCardDialog, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___OpenUnlockDialog_b__93_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    goto LABEL_6;
  CommandCardDialog__Close_45882472(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BE4D28(commandCardDialog, isDecide);
  }
}


int64_t __fastcall CommandCardEquipmentControl__get_GetSelectedUserCommandCodeId(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4B6A4BF & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B6A4BF = 1;
  }
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    return -1LL;
  v4 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_4B6A4BE & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A4BE = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v5 )
    sub_1BE4D28(0LL, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1BE4D28(0LL, method);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UnityEngine_Object_o *targetCommandCardData; // x21
  __int64 v9; // x1
  BattleCommandComponent_o *v10; // x0
  _BOOL4 v11; // w21
  _QWORD *v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_4B6A4A7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardEquipmentControl_touchCommandCard__, *(_QWORD *)&index);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6A4A7 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( this->fields.displayTransformIndex >= 1 )
    {
      v6 = Method_CommandCardEquipmentControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_touchCommandCard__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
LABEL_18:
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
      return;
    }
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    {
      v10 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
      if ( !v10 )
        sub_1BE4D28(0LL, v9);
      v11 = BattleCommandComponent__getMarkIndex(v10, 0LL) == index;
    }
    else
    {
      v11 = 0;
    }
    v12 = Method_CommandCardEquipmentControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BE4AE4(Method_CommandCardEquipmentControl_touchCommandCard__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
    if ( v11 )
      goto LABEL_18;
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    CommandCardEquipmentControl__SetCommandCardDisplay(this, index, v13);
  }
}


void __fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__125___ctor(
        CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__125__MoveNext(
        CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *this,
        const MethodInfo *method)
{
  CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *v2; // x19
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
  CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *v15; // x20
  Il2CppObject *v16; // x22
  System_Action_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_o *klass; // x0
  UnityEngine_WaitForSeconds_o *v25; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v36; // w21
  __int64 v37; // x22
  __int64 v38; // x23
  int32_t v39; // w0
  UnityEngine_WaitForSeconds_o *v40; // x20
  PartyOrganizationUtility_o *v41; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v2 = this;
  if ( (byte_4B6A4D3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)sub_1BE4ACC(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v5);
    byte_4B6A4D3 = 1;
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
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = v11;
          *(_QWORD *)&v48.fields.fakeValue = v10;
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v48, 0LL);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v12,
                                                                              0LL);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v14 = v2->fields.targetCardIdx;
            if ( (unsigned int)v14 >= commandCardList->max_length )
              sub_1BE4D30(this, method);
            v15 = this;
            v16 = (Il2CppObject *)commandCardList->m_Items[v14];
            v17 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
            System_Action___ctor(v17, v16, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v15 )
            {
              if ( v17 )
              {
                v15[4].klass = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_c *)v17;
                sub_1BE4A70((PartyOrganizationUtility_o *)&v15[4], (int64_t)v17, v18, v19, v20, v21, v22, v23);
              }
              klass = (System_Action_o *)v15[4].klass;
              if ( klass )
                ActionExtensions__Call(klass, 0LL);
              v25 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v25, 0.3, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v25;
              p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1BE4A70(p__2__current, (int64_t)v25, v27, v28, v29, v30, v31, v32);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
      }
LABEL_26:
      sub_1BE4D28(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
  CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, 0LL);
  this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)_4__this->fields.commandCardEquipmentIcon;
  if ( !this )
    goto LABEL_26;
  CombineCommandCardEquipmentComponent__SetEquippedInfo((CombineCommandCardEquipmentComponent_o *)this, 0, -1, 0LL);
  baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_26;
  v36 = v2->fields.targetCardIdx;
  v38 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v38;
  *(_QWORD *)&v49.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v49, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v36, v39, 0LL);
  v40 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v40, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v40;
  v41 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1BE4A70(v41, (int64_t)v40, v42, v43, v44, v45, v46, v47);
  *(_DWORD *)&v41[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
  return 1;
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__125__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommandCardEquipmentControl__PlayReplaceEffect_d__125__System_Collections_IEnumerator_Reset(
        CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__125_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__125__System_Collections_IEnumerator_get_Current(
        CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommandCardEquipmentControl__PlayReplaceEffect_d__125__System_IDisposable_Dispose(
        CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126___ctor(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126__MoveNext(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *this,
        const MethodInfo *method)
{
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v2; // x19
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
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v15; // x21
  Il2CppObject *v16; // x23
  System_Action_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_o *klass; // x0
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w0
  struct CombineCommandCardComponent_array *v30; // x8
  __int64 v31; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v32; // x20
  Il2CppObject *v33; // x22
  System_Action_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Action_o *v41; // x0
  UnityEngine_WaitForSeconds_o *v42; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  struct UserCommandCodeEntity_o *v52; // x8
  int32_t v53; // w21
  __int64 v54; // x22
  __int64 v55; // x23
  int32_t v56; // w0
  UnityEngine_WaitForSeconds_o *v57; // x20
  PartyOrganizationUtility_o *v58; // x19
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v2 = this;
  if ( (byte_4B6A4D4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)sub_1BE4ACC(
                                                                                  &UnityEngine_WaitForSeconds_TypeInfo,
                                                                                  v5);
    byte_4B6A4D4 = 1;
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
        goto LABEL_39;
      baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
        goto LABEL_39;
      removeCardIdx = v2->fields.removeCardIdx;
      v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v10 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v65.fields.currentCryptoKey = v11;
      *(_QWORD *)&v65.fields.fakeValue = v10;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v65, 0LL);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v12,
                                                                                    0LL);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_39;
      v14 = v2->fields.removeCardIdx;
      if ( (unsigned int)v14 < commandCardList->max_length )
      {
        v15 = this;
        v16 = (Il2CppObject *)commandCardList->m_Items[v14];
        v17 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v17, v16, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v15 )
          goto LABEL_39;
        if ( v17 )
        {
          v15[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v17;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v15[4], (int64_t)v17, v18, v19, v20, v21, v22, v23);
        }
        klass = (System_Action_o *)v15[4].klass;
        if ( klass )
          ActionExtensions__Call(klass, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
          goto LABEL_27;
        attachCardIdx = v2->fields.attachCardIdx;
        v28 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v66.fields.currentCryptoKey = v28;
        *(_QWORD *)&v66.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v66, 0LL);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v29,
                                                                                      0LL);
        v30 = _4__this->fields.commandCardList;
        if ( !v30 )
LABEL_39:
          sub_1BE4D28(this, method);
        v31 = v2->fields.attachCardIdx;
        if ( (unsigned int)v31 < v30->max_length )
        {
          v32 = this;
          v33 = (Il2CppObject *)v30->m_Items[v31];
          v34 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(v34, v33, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v32 )
          {
            if ( v34 )
            {
              v32[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v34;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v32[4], (int64_t)v34, v35, v36, v37, v38, v39, v40);
            }
            v41 = (System_Action_o *)v32[4].klass;
            if ( v41 )
              ActionExtensions__Call(v41, 0LL);
LABEL_27:
            v42 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v42, 0.3, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v42;
            p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
            sub_1BE4A70(p__2__current, (int64_t)v42, v44, v45, v46, v47, v48, v49);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return result;
          }
          goto LABEL_39;
        }
      }
      sub_1BE4D30(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  if ( _4__this->fields.nowEquipedUserCommandCodeEntity )
    CommandCardEquipmentControl__CreateReplaceEffectOnCode(_4__this, 0LL);
  else
    CommandCardEquipmentControl__CreateAttachEffectOnCode(_4__this, 0LL);
  this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)_4__this->fields.commandCardEquipmentIcon;
  if ( !this )
    goto LABEL_39;
  CombineCommandCardEquipmentComponent__SetEquippedInfo((CombineCommandCardEquipmentComponent_o *)this, 0, -1, 0LL);
  v52 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v52 )
    goto LABEL_39;
  v53 = v2->fields.attachCardIdx;
  v55 = *(_QWORD *)&v52->fields.commandCodeId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&v52->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v55;
  *(_QWORD *)&v67.fields.fakeValue = v54;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v67, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v53, v56, 0LL);
  v57 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v57, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v57;
  v58 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1BE4A70(v58, (int64_t)v57, v59, v60, v61, v62, v63, v64);
  *(_DWORD *)&v58[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
  return 1;
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126__System_Collections_IEnumerator_Reset(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126__System_Collections_IEnumerator_get_Current(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126__System_IDisposable_Dispose(
        CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CommandCardEquipmentControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A4CF & 1) == 0 )
  {
    sub_1BE4ACC(&CommandCardEquipmentControl___c_TypeInfo, v1);
    byte_4B6A4CF = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(CommandCardEquipmentControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommandCardEquipmentControl___c_TypeInfo->static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)CommandCardEquipmentControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall CommandCardEquipmentControl___c___ctor(
        CommandCardEquipmentControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___c___OnLongPushCommandCode_b__105_0(
        CommandCardEquipmentControl___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B6A4D0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B6A4D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass124_0___ctor(
        CommandCardEquipmentControl___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass124_0___PlayRemoveEffect_b__0(
        CommandCardEquipmentControl___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  struct CommandCardEquipmentControl_o *_4__this; // x8
  CommandCardEquipmentControl___c__DisplayClass124_0_o *v3; // x19
  struct CommandCardEquipmentControl_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (CommandCardEquipmentControl___c__DisplayClass124_0_o *)_4__this->fields.commandCardEquipmentIcon) == 0LL)
    || (this = (CommandCardEquipmentControl___c__DisplayClass124_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (CommandCardEquipmentControl___c__DisplayClass124_0_o *)v4->fields.commandCardEquipmentSkillIcon) == 0LL
    || (this = (CommandCardEquipmentControl___c__DisplayClass124_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
  {
    sub_1BE4D28(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass124_0___PlayRemoveEffect_b__1(
        CommandCardEquipmentControl___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall CommandCardEquipmentControl___c__DisplayClass92_0___ctor(
        CommandCardEquipmentControl___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___c__DisplayClass92_0___OpenEquippedCommandCodeAttachDialog_b__0(
        CommandCardEquipmentControl___c__DisplayClass92_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardEquipmentControl___c__DisplayClass92_0_o *v4; // x20
  struct CommandCardEquipmentControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B6A4D1 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1BE4ACC(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_4B6A4D1 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_9:
      sub_1BE4D28(this, isDecide);
    }
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___c__DisplayClass92_0___OpenEquippedCommandCodeAttachDialog_b__1(
        CommandCardEquipmentControl___c__DisplayClass92_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardEquipmentControl___c__DisplayClass92_0_o *v4; // x19
  struct CommandCardEquipmentControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B6A4D2 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1BE4ACC(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide);
    byte_4B6A4D2 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_11:
      sub_1BE4D28(this, isDecide);
    }
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}