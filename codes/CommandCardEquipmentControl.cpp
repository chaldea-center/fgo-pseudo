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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  int64_t v26; // x1
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x0
  int64_t v28; // x1
  struct CommandCardEquipmentControl_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct CommandCardEquipmentControl_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct CommandCardEquipmentControl_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct CommandCardEquipmentControl_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  void *v60; // x1
  struct CommandCardEquipmentControl_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct CommandCardEquipmentControl_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  struct CommandCardEquipmentControl_StaticFields *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  struct CommandCardEquipmentControl_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7

  if ( (byte_4B19A4F & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardEquipmentControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20746/*"img_txt_equipcc_3"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20745/*"img_txt_equipcc_1"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20292/*"icon_arrow_pink"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17780/*"btn_txt_replace"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_20820/*"img_txt_unlockcc"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17752/*"btn_txt_equipcc"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_20747/*"img_txt_equipcc_4"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_17805/*"btn_txt_unlockcc"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B19A4F = 1;
  }
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = (struct UnityEngine_Color_o)xmmword_BD3CE0;
  v26 = StringLiteral_20292/*"icon_arrow_pink"*/;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20292/*"icon_arrow_pink"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME, v26, v2, v3, v4, v5, v6, v7);
  v28 = StringLiteral_20820/*"img_txt_unlockcc"*/;
  v29 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v29->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20820/*"img_txt_unlockcc"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v29->UNLOCK_MESSAGE_SPRITE_NAME, v28, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_20745/*"img_txt_equipcc_1"*/;
  v37 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v37->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20745/*"img_txt_equipcc_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->EQUIPED_MESSAGE_SPRITE_NAME, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_20746/*"img_txt_equipcc_3"*/;
  v45 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v45->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20746/*"img_txt_equipcc_3"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->SELECTED_MESSAGE_SPRITE_NAME, v44, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_20747/*"img_txt_equipcc_4"*/;
  v53 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v53->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20747/*"img_txt_equipcc_4"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v52, v54, v55, v56, v57, v58, v59);
  v60 = StringLiteral_1/*""*/;
  v61 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v61->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v61->DEFAULT_EXE_BTN_SPRITE_NAME,
    (int64_t)v60,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = StringLiteral_17805/*"btn_txt_unlockcc"*/;
  v69 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v69->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17805/*"btn_txt_unlockcc"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v69->UNLOCK_EXE_BTN_SPRITE_NAME, v68, v70, v71, v72, v73, v74, v75);
  v76 = StringLiteral_17752/*"btn_txt_equipcc"*/;
  v77 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v77->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17752/*"btn_txt_equipcc"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v77->EQUIP_EXE_BTN_SPRITE_NAME, v76, v78, v79, v80, v81, v82, v83);
  v84 = StringLiteral_17780/*"btn_txt_replace"*/;
  v85 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v85->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17780/*"btn_txt_replace"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->REPLACE_EXE_BTN_SPRITE_NAME, v84, v86, v87, v88, v89, v90, v91);
}


void __fastcall CommandCardEquipmentControl___ctor(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19A4E & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19A4E = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
        CommandCardEquipmentControl_o *this,
        int32_t nowKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct UserCommandCodeEntity_o **p_nowEquipedUserCommandCodeEntity; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v24; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  int64_t v27; // x21
  Il2CppObject *Entity; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UserCommandCodeEntity_o *v35; // x8
  __int128 v36; // q1
  CommandCardEquipmentControl_o *v37; // x0
  const MethodInfo *v38; // x2
  bool v39; // w0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  UILabel_o *commandCardNotEquippedDetail; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19A29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&nowKind, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_3690/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, v13, v14);
    byte_4B19A29 = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    0LL,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
                CommandCardEquipmentControl__SetUnlockItemInfo(this, v42);
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
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v43);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v44);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1BCAA3C(lockButton, v22);
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
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v24);
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
    sub_1BCAA44(lockButton, v22);
  v27 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)lockButton,
             v27,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    (int64_t)Entity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_46;
  v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
  v46 = v47;
  v37 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
  v39 = CommandCardEquipmentControl__EnableReplace(v37, (int64_t)v37, v38);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v39, v40);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v41);
LABEL_45:
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v22);
}


bool __fastcall CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        const MethodInfo *method)
{
  CommandCardEquipmentControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v8; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4B19A2E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__, dic, method);
    this = (CommandCardEquipmentControl_o *)sub_1BCA7E0(
                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                              v5,
                                              v6);
    byte_4B19A2E = 1;
  }
  baseUserCommandCodeEntity = v4->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_8;
  v8 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, dic);
  v10 = v11;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                            &v10,
                                            0LL);
  if ( !dic )
LABEL_8:
    sub_1BCAA3C(this, dic);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_32412A8 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
}


void __fastcall CommandCardEquipmentControl__CheckOpenDialogType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *targetCommandCardData; // x20
  UserServantCommandCodeMaster_o *Master_object; // x0
  const MethodInfo *v10; // x1
  struct CombineCommandCardComponent_o *v11; // x8
  BattleCommandData_o *data; // x21
  const MethodInfo *v13; // x2
  System_Collections_Generic_Dictionary_long__long__o *EquippedCommandCodeDic; // x20
  const MethodInfo *v15; // x3
  CommandCardEquipmentControl_o *v16; // x0
  System_Collections_Generic_Dictionary_long__long__o *v17; // x1
  bool v18; // w2

  if ( (byte_4B19A2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19A2D = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Master_object = (UserServantCommandCodeMaster_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v11 = this->fields.targetCommandCardData;
    if ( v11 )
    {
      if ( !v11->fields._NowKind_k__BackingField )
      {
        CommandCardEquipmentControl__OpenUnlockDialog(this, v10);
        return;
      }
      data = v11->fields.data;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
      Master_object = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
      if ( Master_object )
      {
        EquippedCommandCodeDic = UserServantCommandCodeMaster__GetEquippedCommandCodeDic(Master_object, 0LL);
        if ( data && BattleCommandData__IsEnableCommandCode(data, 0LL) )
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v13) )
          {
            v16 = this;
            v17 = EquippedCommandCodeDic;
            v18 = 0;
LABEL_18:
            CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(v16, v17, v18, v15);
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
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v13) )
          {
            v18 = 1;
            v16 = this;
            v17 = EquippedCommandCodeDic;
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
    sub_1BCAA3C(Master_object, v10);
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

  if ( (byte_4B19A25 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
    byte_4B19A25 = 1;
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
    sub_1BCAA3C(baseSelectInfoObj, selectBase);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v23.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    v22 = v23;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v22, 0LL);
    v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v8;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v21, 0LL) )
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
  sub_1BCA784(
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
  CommandCardDialog__Close_45609196(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BCAA3C(commandCardDialog, isDecide);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *commandCodeAppearEffect; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v16; // x22
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x21
  __int64 v19; // x2
  UnityEngine_Transform_o *v20; // x21

  if ( (byte_4B19A48 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx,
      *(_QWORD *)&commandCodeId);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19A48 = 1;
  }
  commandCodeAppearEffect = (Il2CppObject *)this->fields.commandCodeAppearEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetCommandCardIdx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeAppearEffect,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v14 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1BCAA44(Component_object, v13);
  v16 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v19);
    byte_4B109C6 = 1;
  }
  if ( !v20 )
LABEL_18:
    sub_1BCAA3C(Component_object, v13);
  UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v14, commandCodeId, 0LL);
  return (CommandCodeEffectComponent_o *)v14;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *commandCodeFlashEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v13; // x20
  __int64 v14; // x2
  UnityEngine_Transform_o *v15; // x20
  __int64 v16; // x2
  UnityEngine_Transform_o *v17; // x20

  if ( (byte_4B19A4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19A4A = 1;
  }
  commandCodeFlashEffect = (Il2CppObject *)this->fields.commandCodeFlashEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeFlashEffect,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v11 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v13 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v13 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v14);
    byte_4B109C1 = 1;
  }
  if ( !v15 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v17 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v16);
    byte_4B109C6 = 1;
  }
  if ( !v17 )
LABEL_17:
    sub_1BCAA3C(Component_object, v10);
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (CommandCodeEffectComponent_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateRemoveEffectOnCard(
        CommandCardEquipmentControl_o *this,
        int32_t targetCommandCardIdx,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *commandCardDetachEffect; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v16; // x22
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x21
  __int64 v19; // x2
  UnityEngine_Transform_o *v20; // x21

  if ( (byte_4B19A47 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&targetCommandCardIdx,
      *(_QWORD *)&commandCodeId);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19A47 = 1;
  }
  commandCardDetachEffect = (Il2CppObject *)this->fields.commandCardDetachEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetCommandCardIdx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCardDetachEffect,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v14 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1BCAA44(Component_object, v13);
  v16 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v19);
    byte_4B109C6 = 1;
  }
  if ( !v20 )
LABEL_18:
    sub_1BCAA3C(Component_object, v13);
  UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v14, commandCodeId, 0LL);
  return (CommandCodeEffectComponent_o *)v14;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateReplaceEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *commandCodeReplaceEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v13; // x20
  __int64 v14; // x2
  UnityEngine_Transform_o *v15; // x20
  __int64 v16; // x2
  UnityEngine_Transform_o *v17; // x20

  if ( (byte_4B19A49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19A49 = 1;
  }
  commandCodeReplaceEffect = (Il2CppObject *)this->fields.commandCodeReplaceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeReplaceEffect,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v11 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v13 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v13 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v14);
    byte_4B109C1 = 1;
  }
  if ( !v15 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v11, 0LL);
  v17 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v16);
    byte_4B109C6 = 1;
  }
  if ( !v17 )
LABEL_17:
    sub_1BCAA3C(Component_object, v10);
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (CommandCodeEffectComponent_o *)v11;
}


bool __fastcall CommandCardEquipmentControl__EnableReplace(
        CommandCardEquipmentControl_o *this,
        int64_t nowEquipedUserCommandCodeId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t Master_object; // x0
  __int64 v15; // x1
  UserCommandCodeEntity_array *List; // x0
  __int64 v17; // x1
  UserCommandCodeEntity_array *v18; // x20
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  int max_length; // w23
  System_Collections_Generic_List_long__o *v21; // x21
  BalanceConfig_c *v22; // x8
  int v23; // w24
  il2cpp_array_size_t v24; // w25
  UserCommandCodeEntity_o *v25; // x28
  __int128 v26; // q0
  __int128 v27; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]

  if ( (byte_4B19A2A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, nowEquipedUserCommandCodeId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Contains__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13);
    byte_4B19A2A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, nowEquipedUserCommandCodeId);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_32;
  List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Master_object, 0LL);
  if ( !List || (v18 = List, !*(_QWORD *)&List->max_length) )
  {
LABEL_29:
    LOBYTE(Master_object) = 1;
    return Master_object;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_object )
LABEL_32:
    sub_1BCAA3C(Master_object, v15);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_object,
                             0LL);
  max_length = v18->max_length;
  v21 = EquipedCommandCodeList;
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
    v22 = BalanceConfig_TypeInfo;
  }
  Master_object = 1LL;
  if ( v22->static_fields->CommandCodeFrameMax <= max_length && max_length >= 1 )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= v18->max_length )
        sub_1BCAA44(Master_object, v15);
      v25 = v18->m_Items[v24];
      if ( !v25 )
        goto LABEL_32;
      v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
      v30 = v31;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v30, 0LL);
      if ( Master_object != nowEquipedUserCommandCodeId )
      {
        v27 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v31.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
        v29 = v31;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
        if ( !v21 )
          goto LABEL_32;
        Master_object = System_Collections_Generic_List_long___Contains(
                          v21,
                          Master_object,
                          (const MethodInfo_358A008 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( ++v23 >= *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL) )
            break;
        }
      }
      if ( max_length == ++v24 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  Il2CppObject **p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v13; // q1
  __int64 v14; // x1
  int64_t v15; // x20
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19A3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    byte_4B19A3E = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = (Il2CppObject **)&this->fields.baseUserServantEntity;
  v10 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0LL;
  v13 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v19 = v20;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v19, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v17);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    p_baseUserServantEntity,
    v15,
    (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return (UserServantEntity_o *)*p_baseUserServantEntity;
}


int32_t __fastcall CommandCardEquipmentControl__GetCommandCodeId(
        CommandCardEquipmentControl_o *this,
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

  if ( (byte_4B19A24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, userCommandCodeId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19A24 = 1;
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


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_4B19A2C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A2C = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  if ( userCommandCodeIds->max_length <= index )
    sub_1BCAA44(this, index);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  }
LABEL_9:
  v10->fields.targetCommandCardData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.targetCommandCardData, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(commandCardInfoObj, method);
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
        sub_1BCAA44(baseSelectInfoObj, v5);
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
    sub_1BCAA3C(baseSelectInfoObj, v5);
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
  __int64 v29; // x1
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  __int64 v32; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B19A20 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A20 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantCommandCodeEntity,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BCA784(p_charaGraph, 0LL, v34, v35, v36, v37, v38, v39);
      return;
    }
LABEL_12:
    sub_1BCAA3C(cardSwitchButton, v27);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetCommandCardData, 0LL, v2, v3, v4, v5, v6, v7);
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
        sub_1BCAA44(lockButton, v9);
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
    sub_1BCAA3C(lockButton, v9);
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
    sub_1BCAA3C(qpInfoObj, method);
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
    sub_1BCAA3C(cardSwitchButton, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_4B19A4C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A4C = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__ModifyCommandCard(
        CommandCardEquipmentControl_o *this,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommandCardEquipmentControl_o *v5; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  CombineCommandCardComponent_o *v7; // x21
  BattleCommandData_o *data; // x23
  BattleCommandData_o *v9; // x22
  const MethodInfo *v10; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x8
  int64_t v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  v5 = this;
  if ( (byte_4B19A23 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_1BCA7E0(&BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex, method);
    byte_4B19A23 = 1;
  }
  commandCardList = v5->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v7 = commandCardList->m_Items[cardIndex];
  if ( !v7
    || (data = v7->fields.data,
        v9 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, *(_QWORD *)&cardIndex, method, v3),
        BattleCommandData___ctor_44073012(v9, data, 0LL),
        (baseUserServantCommandCodeEntity = v5->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&cardIndex);
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
LABEL_12:
    sub_1BCAA44(this, *(_QWORD *)&cardIndex);
  if ( !v9 )
    goto LABEL_11;
  v13 = userCommandCodeIds->m_Items[cardIndex];
  v9->fields.userCommandCodeId = v13;
  v9->fields.commandCodeId = CommandCardEquipmentControl__GetCommandCodeId(this, v13, v10);
  CombineCommandCardComponent__ModifyCommandCard(v7, v9, v13, v14);
  CombineCommandCardComponent__SetLayout(v7, v5->fields.positionOffsetY, v5->fields.scaleOffset, v15);
}


void __fastcall CommandCardEquipmentControl__MoidfyUserSvtCommandCode(
        CommandCardEquipmentControl_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v15; // x22
  __int64 v16; // x20
  __int64 v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UserServantCommandCodeEntity_o *v24; // x1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B19A22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userServantEntity, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19A22 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !userServantEntity )
    goto LABEL_14;
  v15 = Instance;
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  if ( !MasterData_object )
LABEL_14:
    sub_1BCAA3C(Instance, v12);
  if ( UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         v15,
         (int)Instance,
         0LL) )
  {
    v24 = entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v24 = 0LL;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_baseUserServantCommandCodeEntity,
    (int64_t)v24,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19A39 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnClickCommandCode__, method, v2);
    byte_4B19A39 = 1;
  }
  v4 = Method_CommandCardEquipmentControl_OnClickCommandCode__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickCommandCode__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnClickCommandCode__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickEmptyEquip(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19A38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnClickEmptyEquip__, method, v2);
    byte_4B19A38 = 1;
  }
  v4 = Method_CommandCardEquipmentControl_OnClickEmptyEquip__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickEmptyEquip__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickSwitchButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UserServantEntity_o *baseUserServantEntity; // x0
  UISprite_o *executeButtonSprite; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  bool v20; // w1
  UnityEngine_Object_o *targetCommandCardData; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *v24; // x0
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19A4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnClickSwitchButton__, method, v2);
    sub_1BCA7E0(&CommandCardEquipmentControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19A4B = 1;
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v9, v10, v11, v12, v13, v14);
    baseUserServantEntity = (UserServantEntity_o *)CommandCardEquipmentControl_TypeInfo;
    executeButtonSprite = this->fields.executeButtonSprite;
    if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, v8);
    if ( executeButtonSprite )
    {
      UISprite__set_spriteName(
        executeButtonSprite,
        CommandCardEquipmentControl_TypeInfo->static_fields->DEFAULT_EXE_BTN_SPRITE_NAME,
        0LL);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v17);
      CommandCardEquipmentControl__InitDisplayInfo(this, v18);
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
                v20 = 0;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
  {
    baseUserServantEntity = (UserServantEntity_o *)this->fields.targetCommandCardData;
    if ( !baseUserServantEntity )
      goto LABEL_30;
    MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)baseUserServantEntity, 0LL);
    CommandCardEquipmentControl__SetCommandCardDisplay(this, MarkIndex, v23);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
  if ( !baseUserServantEntity
    || (v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v24, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_30:
    sub_1BCAA3C(baseUserServantEntity, v8);
  }
  v20 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v20, 0LL);
  v25 = Method_CommandCardEquipmentControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnClickSwitchButton__);
  v26 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B19A34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__, method, v2);
    byte_4B19A34 = 1;
  }
  v4 = Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  CommandCardEquipmentControl__OpenLockDialog(this, v6);
}


void __fastcall CommandCardEquipmentControl__OnLongPushCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  PartyOrganizationUtility_o *p_baseUserCommandCodeEntity; // x19
  PartyOrganizationUtility_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x20
  Il2CppObject *Entity; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  CommandCardEquipmentControl___c_c *v37; // x8
  UserCommandCodeEntity_o *v38; // x19
  CommonUI_o *v39; // x20
  ServantStatusDialog_EndDelegate_o *_9__105_0; // x21
  Il2CppObject *v41; // x22
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-50h]

  if ( (byte_4B19A3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnLongPushCommandCode__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__, v16, v17);
    sub_1BCA7E0(&CommandCardEquipmentControl___c_TypeInfo, v18, v19);
    byte_4B19A3A = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    p_baseUserCommandCodeEntity = (PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_20;
    byval_arg = klass->_1.byval_arg;
    v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v50.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    v49 = v50;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v49, 0LL);
    if ( !v25 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__long___GetEntity(
               v25,
               (int64_t)Instance,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (PartyOrganizationUtility_c *)Entity;
    sub_1BCA784(p_baseUserCommandCodeEntity, (int64_t)Entity, v27, v28, v29, v30, v31, v32);
    v33 = Method_CommandCardEquipmentControl_OnLongPushCommandCode__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLongPushCommandCode__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    v34 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = CommandCardEquipmentControl___c_TypeInfo;
    v38 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v39 = (CommonUI_o *)Instance;
    if ( !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo, v21);
      v37 = CommandCardEquipmentControl___c_TypeInfo;
    }
    _9__105_0 = v37->static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37, v21);
        v37 = CommandCardEquipmentControl___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v37->static_fields->__9;
      _9__105_0 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v21,
                                                         v35,
                                                         v36);
      ServantStatusDialog_EndDelegate___ctor(
        _9__105_0,
        v41,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__,
        0LL);
      static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = _9__105_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__105_0,
        (int64_t)_9__105_0,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    if ( !v39 )
LABEL_20:
      sub_1BCAA3C(Instance, v21);
    CommonUI__OpenServantStatusDialog_30778960(v39, 0, v38, _9__105_0, 0LL, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnRemoveCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  CommandCardDialog_ClickDelegate_o *v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3

  if ( (byte_4B19A35 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__, v4, v5);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__, v6, v7);
    byte_4B19A35 = 1;
  }
  v8 = Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v15 = (CommandCardDialog_ClickDelegate_o *)sub_1BCAA2C(CommandCardDialog_ClickDelegate_TypeInfo, v12, v13, v14);
  CommandCardDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    v16);
  if ( !commandCardDialog )
    sub_1BCAA3C(v17, v18);
  CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v15, v19);
}


void __fastcall CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19A36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__, method, v2);
    byte_4B19A36 = 1;
  }
  if ( this->fields.nowEquipedUserCommandCodeEntity )
  {
    v4 = Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      sub_1BCAA3C(0LL, v6);
    CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnReplaceReset(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v16; // x2

  if ( (byte_4B19A37 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_OnReplaceReset__, method, v2);
    byte_4B19A37 = 1;
  }
  v4 = Method_CommandCardEquipmentControl_OnReplaceReset__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceReset__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_OnReplaceReset__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity, 0LL, v6, v7, v8, v9, v10, v11);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1BCAA3C(v12, v13);
  CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
    this,
    targetCommandCardData->fields._NowKind_k__BackingField,
    v14);
  CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(
        CommandCardEquipmentControl_o *this,
        System_Collections_Generic_Dictionary_long__long__o *dic,
        bool isCommandCardEmpty,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x29
  __int64 Item; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  System_String_o *v61; // x27
  System_String_o *v62; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v64; // x19
  __int64 v65; // x23
  __int64 v66; // x24
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v68; // q0
  int v69; // w23
  struct UserCommandCodeEntity_o *v70; // x8
  __int128 v71; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  __int64 v73; // x1
  long double v74; // q0
  __int64 v75; // x0
  __int64 v76; // x0
  CommonUI_o *v77; // x21
  System_String_o *v78; // x22
  System_String_o *v79; // x23
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  CommonConfirmDialog_ClickDelegate_o *v83; // x24
  struct UserServantEntity_o *v84; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // x19
  __int64 v86; // x24
  __int64 v87; // x25
  __int64 v88; // x1
  Il2CppObject *v89; // x19
  struct UserServantEntity_o *v90; // x8
  int64_t v91; // x25
  UserServantCollectionEntity_o *v92; // x0
  __int64 v93; // x1
  int32_t maxLimitCount; // w27
  struct UserServantEntity_o *v95; // x8
  ServantLimitMaster_o *v96; // x19
  __int64 v97; // x24
  __int64 v98; // x25
  ServantLimitEntity_o *v99; // x25
  struct UserCommandCodeEntity_o *v100; // x8
  __int128 v101; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v102; // x19
  Il2CppObject *v103; // x26
  __int64 v104; // x1
  Il2CppObject *v105; // x19
  struct UserCommandCodeEntity_o *v106; // x8
  __int128 v107; // q0
  int64_t v108; // x28
  int64_t v109; // x0
  UserServantCollectionEntity_o *v110; // x0
  __int64 v111; // x1
  int32_t v112; // w28
  struct UserCommandCodeEntity_o *v113; // x8
  __int128 v114; // q0
  ServantLimitMaster_o *v115; // x19
  int64_t v116; // x0
  ServantLimitEntity_o *v117; // x0
  __int64 v118; // x1
  ServantLimitEntity_o *v119; // x29
  struct UserServantEntity_o *v120; // x8
  __int64 v121; // x19
  __int64 v122; // x23
  __int64 v123; // x24
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x27
  struct UserCommandCodeEntity_o *v131; // x8
  __int128 v132; // q0
  int64_t v133; // x0
  int32_t v134; // w0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x21
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x21
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x21
  __int64 v156; // x1
  int32_t rarity; // w21
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t v164; // x21
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  int64_t v171; // x21
  System_String_o *v172; // x19
  long double v173; // q0
  __int64 v174; // x8
  __int64 v175; // x0
  CommonUI_o *v176; // x21
  System_String_o *v177; // x22
  System_String_o *v178; // x23
  __int64 v179; // x1
  __int64 v180; // x2
  __int64 v181; // x3
  CommonConfirmDialog_ClickDelegate_o *v182; // x24
  __int64 v183; // x0
  System_String_o *format; // [xsp+48h] [xbp-168h]
  Il2CppObject *v185; // [xsp+50h] [xbp-160h]
  System_String_o *v186; // [xsp+58h] [xbp-158h]
  ServantLimitImageMaster_o *Master_object; // [xsp+60h] [xbp-150h]
  ServantEntity_o *Entity; // [xsp+68h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v189; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v190; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v191; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v192; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v193; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v194; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v195; // [xsp+130h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16

  if ( (byte_4B19A2F & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, dic, isCommandCardEmpty);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&object___TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30);
    sub_1BCA7E0(&Rarity_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v33, v34);
    sub_1BCA7E0(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
      v35,
      v36);
    sub_1BCA7E0(
      &Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
      v37,
      v38);
    sub_1BCA7E0(&CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_3764/*"COMMAND_CODE_REATTACH_TITLE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3762/*"COMMAND_CODE_REATTACH_MSG"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_3763/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v49, v50);
    byte_4B19A2F = 1;
  }
  v51 = sub_1BCAA2C(CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo, dic, isCommandCardEmpty, method);
  CommandCardEquipmentControl___c__DisplayClass92_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass92_0_o *)v51,
    0LL);
  if ( !v51 )
    goto LABEL_104;
  *(_QWORD *)(v51 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 16), (int64_t)this, v54, v55, v56, v57, v58, v59);
  *(_BYTE *)(v51 + 24) = isCommandCardEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"COMMAND_CODE_REATTACH_TITLE"*/, 0LL);
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v64 = v62;
    v66 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v65 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
    *(_QWORD *)&v196.fields.currentCryptoKey = v66;
    *(_QWORD *)&v196.fields.fakeValue = v65;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v196, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_104;
    v68 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v69 = Item;
    *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v195.fields.fakeValue = v68;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
    v194 = v195;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v194, 0LL);
    if ( !dic )
      goto LABEL_104;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_3241014 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v69 )
    {
      v70 = this->fields.baseUserCommandCodeEntity;
      if ( v70 )
      {
        v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v195.fields.fakeValue = v71;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
        v193 = v195;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v193, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0LL);
          v75 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
          if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
            v75 = sub_1C1C6BC(v74);
          v76 = *(_QWORD *)(*(_QWORD *)(v75 + 192) + 16LL);
          if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
            v76 = sub_1C1C6BC(v74);
          v77 = **(CommonUI_o ***)(v76 + 184);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
          v83 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                         CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                         v80,
                                                         v81,
                                                         v82);
          CommonConfirmDialog_ClickDelegate___ctor(
            v83,
            (Il2CppObject *)v51,
            Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v77 )
          {
            CommonUI__OpenConfirmDecideDlg(v77, v61, v64, v78, v79, v83, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0, 0LL);
            return;
          }
        }
      }
LABEL_104:
      sub_1BCAA3C(Item, v53);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v84 = this->fields.baseUserServantEntity;
  if ( !v84 )
    goto LABEL_104;
  v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  v87 = *(_QWORD *)&v84->fields.svtId.fields.currentCryptoKey;
  v86 = *(_QWORD *)&v84->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
  *(_QWORD *)&v197.fields.currentCryptoKey = v87;
  *(_QWORD *)&v197.fields.fakeValue = v86;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v197, 0LL);
  if ( !v85 )
    goto LABEL_104;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                v85,
                                Item,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v89 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v88);
  Item = NetworkManager__get_UserId(0LL);
  v90 = this->fields.baseUserServantEntity;
  if ( !v90 )
    goto LABEL_104;
  v91 = Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v90->fields.svtId, 0LL);
  if ( !v89 )
    goto LABEL_104;
  v92 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v89, v91, Item, 0LL);
  v185 = (Il2CppObject *)v51;
  v186 = v61;
  if ( v92 )
    maxLimitCount = v92->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v93);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v95 = this->fields.baseUserServantEntity;
  if ( !v95 )
    goto LABEL_104;
  v96 = (ServantLimitMaster_o *)Item;
  v97 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
  v98 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
  *(_QWORD *)&v198.fields.currentCryptoKey = v97;
  *(_QWORD *)&v198.fields.fakeValue = v98;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v198, 0LL);
  if ( !v96 )
    goto LABEL_104;
  v99 = ServantLimitMaster__GetEntity(v96, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  v100 = this->fields.baseUserCommandCodeEntity;
  if ( !v100 )
    goto LABEL_104;
  v101 = *(_OWORD *)&v100->fields.id.fields.fakeValue;
  v102 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)&v100->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v195.fields.fakeValue = v101;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
  v192 = v195;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v192, 0LL);
  if ( !dic )
    goto LABEL_104;
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           Item,
           (const MethodInfo_3241014 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v102 )
    goto LABEL_104;
  v103 = DataMasterBase_object__object__int___GetEntity(
           v102,
           Item,
           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v105 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v104);
  Item = NetworkManager__get_UserId(0LL);
  v106 = this->fields.baseUserCommandCodeEntity;
  if ( !v106 )
    goto LABEL_104;
  v107 = *(_OWORD *)&v106->fields.id.fields.fakeValue;
  v108 = Item;
  *(_OWORD *)&v191.fields.currentCryptoKey = *(_OWORD *)&v106->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v191.fields.fakeValue = v107;
  v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v191, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v109,
           (const MethodInfo_3241014 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v105 )
    goto LABEL_104;
  v110 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v105, v108, Item, 0LL);
  if ( v110 )
    v112 = v110->fields.maxLimitCount;
  else
    v112 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v111);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v113 = this->fields.baseUserCommandCodeEntity;
  if ( !v113 )
    goto LABEL_104;
  v114 = *(_OWORD *)&v113->fields.id.fields.fakeValue;
  v115 = (ServantLimitMaster_o *)Item;
  *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)&v113->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v195.fields.fakeValue = v114;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
  v190 = v195;
  v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v190, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v116,
           (const MethodInfo_3241014 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v115 )
    goto LABEL_104;
  v117 = ServantLimitMaster__GetEntity(v115, Item, v112, 0LL);
  if ( v99 )
  {
    if ( Entity )
    {
      if ( v103 )
      {
        v119 = v117;
        if ( v117 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v118);
          format = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"COMMAND_CODE_REATTACH_MSG"*/, 0LL);
          Item = sub_1BCA888(object___TypeInfo, 6LL);
          v120 = this->fields.baseUserServantEntity;
          if ( !v120 )
            goto LABEL_104;
          v121 = Item;
          v122 = *(_QWORD *)&v120->fields.svtId.fields.currentCryptoKey;
          v123 = *(_QWORD *)&v120->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
          *(_QWORD *)&v199.fields.currentCryptoKey = v122;
          *(_QWORD *)&v199.fields.fakeValue = v123;
          Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v199, 0LL);
          if ( !Master_object )
            goto LABEL_104;
          Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                            Master_object,
                            Item,
                            maxLimitCount,
                            0LL);
          if ( !v121 )
            goto LABEL_104;
          v130 = Item;
          if ( !Item || (Item = sub_1BCA91C(Item, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v121 + 24) )
              goto LABEL_105;
            *(_QWORD *)(v121 + 32) = v130;
            sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 32), v130, v124, v125, v126, v127, v128, v129);
            v131 = this->fields.baseUserCommandCodeEntity;
            if ( !v131 )
              goto LABEL_104;
            v132 = *(_OWORD *)&v131->fields.id.fields.fakeValue;
            *(_OWORD *)&v195.fields.currentCryptoKey = *(_OWORD *)&v131->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v195.fields.fakeValue = v132;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
            v189 = v195;
            v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v189, 0LL);
            v134 = System_Collections_Generic_Dictionary_long__long___get_Item(
                     dic,
                     v133,
                     (const MethodInfo_3241014 *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
            Item = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(Master_object, v134, v112, 0LL);
            v141 = Item;
            if ( !Item || (Item = sub_1BCA91C(Item, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v121 + 24) <= 1u )
                goto LABEL_105;
              *(_QWORD *)(v121 + 40) = v141;
              sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 40), v141, v135, v136, v137, v138, v139, v140);
              Item = (__int64)ServantEntity__getClassName(Entity, 0LL);
              v148 = Item;
              if ( !Item || (Item = sub_1BCA91C(Item, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v121 + 24) <= 2u )
                  goto LABEL_105;
                *(_QWORD *)(v121 + 48) = v148;
                sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 48), v148, v142, v143, v144, v145, v146, v147);
                Item = (__int64)ServantEntity__getClassName((ServantEntity_o *)v103, 0LL);
                v155 = Item;
                if ( !Item || (Item = sub_1BCA91C(Item, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v121 + 24) <= 3u )
                    goto LABEL_105;
                  *(_QWORD *)(v121 + 56) = v155;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 56), v155, v149, v150, v151, v152, v153, v154);
                  rarity = v99->fields.rarity;
                  if ( !Rarity_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v156);
                  Item = (__int64)Rarity__getRarityType(rarity, 0LL);
                  v164 = Item;
                  if ( !Item || (Item = sub_1BCA91C(Item, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v121 + 24) <= 4u )
                      goto LABEL_105;
                    *(_QWORD *)(v121 + 64) = v164;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 64), v164, v158, v159, v160, v161, v162, v163);
                    Item = (__int64)Rarity__getRarityType(v119->fields.rarity, 0LL);
                    v171 = Item;
                    if ( !Item || (Item = sub_1BCA91C(Item, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v121 + 24) > 5u )
                      {
                        *(_QWORD *)(v121 + 72) = v171;
                        sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 72), v171, v165, v166, v167, v168, v169, v170);
                        v172 = System_String__Format_62415728(format, (System_Object_array *)v121, 0LL);
                        v174 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
                        if ( (*(_BYTE *)(v174 + 309) & 1) == 0 )
                          v174 = sub_1C1C6BC(v173);
                        v175 = *(_QWORD *)(*(_QWORD *)(v174 + 192) + 16LL);
                        if ( (*(_BYTE *)(v175 + 309) & 1) == 0 )
                          v175 = sub_1C1C6BC(v173);
                        v176 = **(CommonUI_o ***)(v175 + 184);
                        v177 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
                        v178 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
                        v182 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                        v179,
                                                                        v180,
                                                                        v181);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v182,
                          v185,
                          Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                          0LL);
                        if ( !v176 )
                          goto LABEL_104;
                        CommonUI__OpenConfirmDecideDlg(
                          v176,
                          v186,
                          v172,
                          v177,
                          v178,
                          v182,
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
LABEL_105:
                      sub_1BCAA44(Item, v53);
                    }
                  }
                }
              }
            }
          }
          v183 = sub_1BCAA60(Item);
          sub_1BCA908(v183, 0LL);
        }
      }
    }
  }
}


void __fastcall CommandCardEquipmentControl__OpenLockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  void *monitor; // x8
  BattleCommandData_o *v8; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *klass; // x21
  CommandCardDialog_ClickDelegate_o *v11; // x22
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19A31 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardDialog_ClickDelegate_TypeInfo, method, v2);
    this = (CommandCardEquipmentControl_o *)sub_1BCA7E0(
                                              &Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__,
                                              v5,
                                              v6);
    byte_4B19A31 = 1;
  }
  monitor = v4[31].monitor;
  if ( !monitor
    || ((v8 = (BattleCommandData_o *)*((_QWORD *)monitor + 47)) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(v8, 0LL)),
        klass = (CommandCardDialog_o *)v4[24].klass,
        v11 = (CommandCardDialog_ClickDelegate_o *)sub_1BCAA2C(CommandCardDialog_ClickDelegate_TypeInfo, method, v2, v3),
        CommandCardDialog_ClickDelegate___ctor(
          v11,
          v4,
          Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__,
          v12),
        !klass) )
  {
    sub_1BCAA3C(this, method);
  }
  CommandCardDialog__OpenLockEquipSlot(klass, IsEnableCommandCode, v11, v13);
}


void __fastcall CommandCardEquipmentControl__OpenReturnDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommandCardDialog_ClickDelegate_o *v13; // x23
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4B19A32 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__, v4, v5);
    byte_4B19A32 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v13 = (CommandCardDialog_ClickDelegate_o *)sub_1BCAA2C(CommandCardDialog_ClickDelegate_TypeInfo, v10, v11, v12),
        CommandCardDialog_ClickDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__,
          v14),
        !commandCardDialog) )
  {
    sub_1BCAA3C(targetCommandCardData, method);
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v13, v15);
}


void __fastcall CommandCardEquipmentControl__OpenUnlockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleCommandComponent_o *targetCommandCardData; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserServantEntity_o *baseUserServantEntity; // x21
  int32_t MarkIndex; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommandCardDialog_ClickDelegate_o *v13; // x23
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4B19A30 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__, v4, v5);
    byte_4B19A30 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v13 = (CommandCardDialog_ClickDelegate_o *)sub_1BCAA2C(CommandCardDialog_ClickDelegate_TypeInfo, v10, v11, v12),
        CommandCardDialog_ClickDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__,
          v14),
        !commandCardDialog) )
  {
    sub_1BCAA3C(targetCommandCardData, method);
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v13, v15);
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

  if ( (byte_4B19A43 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&targetCardIdx, callback);
    byte_4B19A43 = 1;
  }
  AttachEffectOnCode = CommandCardEquipmentControl__CreateAttachEffectOnCode(this, *(const MethodInfo **)&targetCardIdx);
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_12;
  v10 = AttachEffectOnCode;
  v12 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v17.fields.currentCryptoKey = v12;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
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
    sub_1BCAA3C(AttachEffectOnCode, v8);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *lockEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20
  __int64 v19; // x2
  UnityEngine_Transform_o *v20; // x20

  if ( (byte_4B19A42 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&lockCardIdx,
      callback);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19A42 = 1;
  }
  lockEffect = (Il2CppObject *)this->fields.lockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&lockCardIdx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   lockEffect,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v14 = (UnityEngine_Component_o *)Component_object;
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= lockCardIdx )
    sub_1BCAA44(Component_object, v13);
  v16 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[lockCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v19);
    byte_4B109C6 = 1;
  }
  if ( !v20 )
LABEL_18:
    sub_1BCAA3C(Component_object, v13);
  UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__PlayRemoveEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v37; // x22
  __int64 v38; // x23
  int32_t v39; // w0
  const MethodInfo *v40; // x3
  CommandCodeEffectComponent_o *v41; // x0
  __int64 v42; // x1
  Il2CppObject *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v44; // x22
  UnityEngine_Component_o *v45; // x23
  __int64 v46; // x2
  UnityEngine_Transform_o *v47; // x24
  __int64 v48; // x2
  UnityEngine_Transform_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_o *v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x24
  struct CombineCommandCardComponent_array *commandCardList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4B19A44 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&targetCardIdx, callback);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__, v15, v16);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__, v17, v18);
    sub_1BCA7E0(&CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo, v19, v20);
    byte_4B19A44 = 1;
  }
  v21 = sub_1BCAA2C(
          CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo,
          *(_QWORD *)&targetCardIdx,
          callback,
          method);
  CommandCardEquipmentControl___c__DisplayClass124_0___ctor(
    (CommandCardEquipmentControl___c__DisplayClass124_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_23;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_23;
  v38 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
  *(_QWORD *)&v59.fields.currentCryptoKey = v38;
  *(_QWORD *)&v59.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v59, 0LL);
  v41 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v39, v40);
  commandCodeDetachEffect = (Il2CppObject *)this->fields.commandCodeDetachEffect;
  v44 = v41;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeDetachEffect,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_23;
  v45 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !Component_object )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.detachEffectPos, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v45, 0LL);
  v47 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v46);
    byte_4B109C1 = 1;
  }
  if ( !v47 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(v47, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v45, 0LL);
  v49 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v48);
    byte_4B109C6 = 1;
  }
  if ( !v49 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v50, v51, v52);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v21,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__,
    0LL);
  CommandCodeEffectComponent__SetDetachEffect((CommandCodeEffectComponent_o *)v45, v53, 0LL);
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v21,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__,
    0LL);
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)v45, v57, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_23;
  if ( commandCardList->max_length <= targetCardIdx )
    sub_1BCAA44(Component_object, v23);
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_object
    || (CombineCommandCardComponent__HideCommandCodeSprite((CombineCommandCardComponent_o *)Component_object, v23),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v45, 0LL),
        !v44) )
  {
LABEL_23:
    sub_1BCAA3C(Component_object, v23);
  }
  CommandCodeEffectComponent__PlayAnimation(v44, 0LL);
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

  if ( (byte_4B19A45 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo, *(_QWORD *)&targetCardIdx, callback);
    byte_4B19A45 = 1;
  }
  v7 = sub_1BCAA2C(
         CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo,
         *(_QWORD *)&targetCardIdx,
         callback,
         method);
  CommandCardEquipmentControl__PlayReplaceEffect_d__125___ctor(
    (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4B19A46 & 1) == 0 )
  {
    sub_1BCA7E0(
      &CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo,
      *(_QWORD *)&removeCardIdx,
      *(_QWORD *)&attachCardIdx);
    byte_4B19A46 = 1;
  }
  v9 = sub_1BCAA2C(
         CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo,
         *(_QWORD *)&removeCardIdx,
         *(_QWORD *)&attachCardIdx,
         callback);
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126___ctor(
    (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_1BCAA3C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)callback, v18, v19, v20, v21, v22, v23);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *unlockEffect; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *v14; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v16; // x22
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x22
  __int64 v19; // x2
  UnityEngine_Transform_o *v20; // x22
  struct CombineCommandCardComponent_array *v21; // x8

  if ( (byte_4B19A41 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&unlockCardIdx,
      callback);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19A41 = 1;
  }
  unlockEffect = (Il2CppObject *)this->fields.unlockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&unlockCardIdx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   unlockEffect,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_21;
  v14 = (UnityEngine_Component_o *)Component_object;
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_21;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_22;
  v16 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v16 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18 )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v20 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v19);
    byte_4B109C6 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v21 = this->fields.commandCardList) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(Component_object, v13);
  }
  if ( v21->max_length <= unlockCardIdx )
LABEL_22:
    sub_1BCAA44(Component_object, v13);
  Component_object = (UnityEngine_GameObject_o *)v21->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_21;
  CombineCommandCardComponent__HideUnlockInfo((CombineCommandCardComponent_o *)Component_object, v13);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v14, 0LL);
}


void __fastcall CommandCardEquipmentControl__SetBaseServantCommandCardList(
        CommandCardEquipmentControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_array *assetList; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 transformTotal; // x1
  int64_t messageTxtLabelSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_String_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x2
  __int64 v41; // x3
  struct System_String_array *v42; // x20
  unsigned __int64 v43; // x21
  __int64 v44; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v46; // w22
  __int64 v47; // x23
  __int64 v48; // x24
  __int64 v49; // x1
  int32_t v50; // w23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Action_o *v57; // x21
  __int64 v58; // x1
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B19A26 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_SetCommandCardList__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&string___TypeInfo, v13, v14);
    byte_4B19A26 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, callback);
    AssetManager__releaseAssetStorage_38514680(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v16, v17, v18, v19, v20, v21);
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
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, v25);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.LoadAfterCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.LoadAfterCallback,
      (int64_t)callback,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
    v33 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, transformTotal);
    this->fields.assetList = v33;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    v42 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v43 = 0LL;
      v44 = 32LL;
      while ( 1 )
      {
        messageTxtLabelSprite = (int64_t)this->fields.baseUserServantEntity;
        if ( !messageTxtLabelSprite )
          break;
        messageTxtLabelSprite = UserServantEntity__GetTransformedServantId(
                                  (UserServantEntity_o *)messageTxtLabelSprite,
                                  v43,
                                  0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v46 = messageTxtLabelSprite;
        v48 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v47 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, transformTotal);
        *(_QWORD *)&v60.fields.currentCryptoKey = v48;
        *(_QWORD *)&v60.fields.fakeValue = v47;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v60, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v49);
        messageTxtLabelSprite = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderName(v46, v50, 0LL);
        if ( !v42 )
          break;
        if ( v43 >= v42->max_length )
          sub_1BCAA44(messageTxtLabelSprite, transformTotal);
        *(Il2CppClass **)((char *)&v42->obj.klass + v44) = (Il2CppClass *)messageTxtLabelSprite;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)((char *)v42 + v44),
          messageTxtLabelSprite,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        v42 = this->fields.assetList;
        ++v43;
        v44 += 8LL;
        if ( (__int64)v43 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1BCAA3C(messageTxtLabelSprite, transformTotal);
    }
LABEL_30:
    v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, transformTotal, v40, v41);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v58);
    AssetManager__loadAssetStorage_38512336(v42, v57, 1, 0LL);
  }
  else
  {
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v26);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  __int64 v22; // x23
  __int64 v23; // x24
  ServantLimitImageMaster_o *v24; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v26; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v28; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B19A21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userServantEntity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19A21 = 1;
  }
  this->fields.baseUserServantEntity = userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v16);
  if ( !userServantEntity )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v24 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v37.fields.currentCryptoKey = v23;
  *(_QWORD *)&v37.fields.fakeValue = v22;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
  if ( !v24 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v24,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v28 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               this->fields.charaGraphBase,
                               userServantEntity,
                               v28,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BCAA3C(Instance, v18);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)Instance, userServantEntity, v28, 0LL, 0, 0LL);
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
      sub_1BCA784(
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
          sub_1BCAA44(this, *(_QWORD *)&index);
        v19 = v18->m_Items[index];
        this->fields.targetCommandCardData = v19;
        sub_1BCA784(
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
      sub_1BCAA3C(this, *(_QWORD *)&index);
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
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_41264548(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v4 = this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_38947272((SkillIconComponent_o *)this, idList->m_Items[1], 1, 0LL), !titleList) )
LABEL_9:
    sub_1BCAA3C(this, userCommandCode);
  if ( !titleList->max_length )
LABEL_10:
    sub_1BCAA44(this, userCommandCode);
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillName;
  if ( !this )
    goto LABEL_9;
  UILabel__set_text((UILabel_o *)this, titleList->m_Items[0], 0LL);
  WrapControlText__textBBCodeAdjust(v3->fields.commandCardEquipmentSkillDetail, (System_String_o *)v4, 22, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetCommandCardList(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 baseUserServantEntity; // x0
  int32_t v25; // w20
  __int64 v26; // x1
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *v29; // x22
  Il2CppObject *MasterData_object; // x21
  __int64 v31; // x1
  Il2CppObject *v32; // x24
  struct UserServantEntity_o *v33; // x8
  int64_t v34; // x25
  __int64 v35; // x26
  __int64 v36; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v39; // s1
  float v40; // s0
  int v41; // s2
  __int64 v42; // x11
  float v43; // s0
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v45; // x8
  unsigned __int64 v46; // x29
  __int64 v47; // x28
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  int32_t v50; // w26
  struct CombineCommandCardComponent_array *v51; // x8
  CombineCommandCardComponent_o *v52; // x24
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BattleCommandData_o *v62; // x25
  const MethodInfo *v63; // x6
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  Il2CppObject *v66; // x23
  __int64 v67; // x21
  __int64 v68; // x26
  struct System_Int64_array *v69; // x8
  int64_t v70; // x2
  struct System_Int32_array *commandCardParam; // x8
  int32_t v72; // w3
  const MethodInfo *v73; // x1
  float v74; // s3
  float v75; // s0
  float v76; // s1
  float v77; // s2
  const MethodInfo *v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Action_o *LoadAfterCallback; // x20
  int32_t limitCount; // [xsp+4h] [xbp-7Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_4B19A27 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B19A27 = 1;
  }
  entity = 0LL;
  baseUserServantEntity = (__int64)this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_66;
  baseUserServantEntity = UserServantEntity__GetTransformedServantId(
                            (UserServantEntity_o *)baseUserServantEntity,
                            this->fields.displayTransformIndex,
                            0LL);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_66;
  v25 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v26);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  limitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                 v25,
                 LimitCountByImageLimitCostumeIn,
                 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v29 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
          v25,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseUserServantEntity,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)baseUserServantEntity,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  baseUserServantEntity = NetworkManager__get_UserId(0LL);
  v33 = this->fields.baseUserServantEntity;
  if ( !v33 )
    goto LABEL_66;
  v34 = baseUserServantEntity;
  v36 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v88.fields.currentCryptoKey = v36;
  *(_QWORD *)&v88.fields.fakeValue = v35;
  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v88, 0LL);
  if ( !v32 )
    goto LABEL_66;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)v32,
    &entity,
    v34,
    (int)baseUserServantEntity,
    0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL);
  transformTotal = this->fields.transformTotal;
  v39 = -18.0;
  if ( transformTotal <= 1 )
    v39 = -15.5;
  v40 = transformTotal <= 1 ? -258.0 : -270.0;
  v41 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v39 - 1), 0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v42 = *(_QWORD *)baseUserServantEntity;
  v43 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v43 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v43;
  baseUserServantEntity = (*(__int64 (**)(void))(v42 + 440))();
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_66;
  v45 = *(_QWORD *)&commandCardList->max_length;
  if ( (int)v45 >= 1 )
  {
    if ( v29 )
    {
      v46 = 0LL;
      v47 = (unsigned int)v45;
      while ( 1 )
      {
        klass = v29[9].klass;
        if ( klass )
        {
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)v46 < (int)namespaze_low )
          {
            if ( v46 >= namespaze_low )
              goto LABEL_67;
            v50 = *((_DWORD *)&klass->_1.byval_arg.data + v46);
            if ( (unsigned int)(v50 - 1) <= 2 )
            {
              v51 = this->fields.commandCardList;
              if ( !v51 )
                break;
              if ( v46 >= v51->max_length )
                goto LABEL_67;
              v52 = v51->m_Items[v46];
              baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( !v52 )
                break;
              v52->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v52->fields.target,
                baseUserServantEntity,
                v53,
                v54,
                v55,
                v56,
                v57,
                v58);
              v62 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v59, v60, v61);
              BattleCommandData___ctor_44072696(v62, v50, v25, limitCount, 0, -1, 0LL);
              if ( !v62 )
                break;
              v62->fields.markindex = v46;
              v62->fields.servantCardIdsIndex = v46;
              baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
              if ( baseUserServantCommandCodeEntity )
              {
                userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !userCommandCodeIds )
                  break;
                if ( v46 >= userCommandCodeIds->max_length )
LABEL_67:
                  sub_1BCAA44(baseUserServantEntity, method);
                method = (const MethodInfo *)userCommandCodeIds->m_Items[v46];
                v62->fields.userCommandCodeId = (int64_t)method;
                if ( (__int64)method >= 1 )
                {
                  if ( !MasterData_object )
                    break;
                  v66 = MasterData_object;
                  baseUserServantEntity = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                     (int64_t)method,
                                                     (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                  if ( !baseUserServantEntity )
                    break;
                  v67 = *(_QWORD *)(baseUserServantEntity + 80);
                  v68 = *(_QWORD *)(baseUserServantEntity + 88);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
                  *(_QWORD *)&v89.fields.currentCryptoKey = v67;
                  *(_QWORD *)&v89.fields.fakeValue = v68;
                  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v89, 0LL);
                  v62->fields.commandCodeId = baseUserServantEntity;
                  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
                  MasterData_object = v66;
                  if ( !baseUserServantCommandCodeEntity )
                    break;
                }
                v69 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !v69 )
                  break;
                if ( v46 >= v69->max_length )
                  goto LABEL_67;
                v70 = v69->m_Items[v46];
              }
              else
              {
                v70 = -1LL;
              }
              if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
              {
                if ( v46 >= commandCardParam->max_length )
                  goto LABEL_67;
                v72 = commandCardParam->m_Items[v46 + 1];
              }
              else
              {
                v72 = 0;
              }
              v62->fields.commandCardParam = v72;
              CombineCommandCardComponent__DispCommandCard(v52, v62, v70, v72, 0, 0, v63);
              v74 = 1.0;
              if ( this->fields.displayTransformIndex <= 0 )
                v75 = 1.0;
              else
                v75 = 0.5;
              v76 = v75;
              v77 = v75;
              CombineCommandCardComponent__SetColor(v52, *(UnityEngine_Color_o *)(&v74 - 3), v73);
              CombineCommandCardComponent__SetLayout(v52, this->fields.positionOffsetY, this->fields.scaleOffset, v78);
            }
          }
        }
        if ( v47 == ++v46 )
          goto LABEL_63;
      }
    }
LABEL_66:
    sub_1BCAA3C(baseUserServantEntity, method);
  }
LABEL_63:
  CommandCardEquipmentControl__SetExecuteButtonState(this, method);
  LoadAfterCallback = this->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    this->fields.LoadAfterCallback = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.LoadAfterCallback, 0LL, v79, v80, v81, v82, v83, v84);
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
    sub_1BCAA3C(qpInfoObj, v3);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *targetCommandCardData; // x20
  struct UICommonButton_o *executeButton; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  bool v10; // zf
  struct CombineCommandCardComponent_o *v11; // x8
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x9
  struct BattleCommandData_o *data; // x8
  __int128 v14; // q1
  int64_t userCommandCodeId; // x20
  _BOOL4 v16; // w20
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19A3C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v5);
    byte_4B19A3C = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  if ( ((unsigned __int8)executeButton & 1) != 0 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !v9 )
      goto LABEL_32;
    if ( v9[27].fields.m_CachedPtr == 1 )
    {
      v10 = this->fields.baseUserCommandCodeEntity == 0LL;
      goto LABEL_21;
    }
  }
  else
  {
    v9 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)executeButton & 1) == 0 )
    goto LABEL_20;
  v11 = this->fields.targetCommandCardData;
  if ( !v11 )
    goto LABEL_32;
  if ( v11->fields._NowKind_k__BackingField == 2 )
  {
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
    {
      v16 = 0;
      goto LABEL_24;
    }
    data = v11->fields.data;
    if ( !data )
      goto LABEL_32;
    v14 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    userCommandCodeId = data->fields.userCommandCodeId;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    v18 = v19;
    v10 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v18, 0LL);
  }
  else
  {
LABEL_20:
    v10 = !this->fields.isCanCombine;
  }
LABEL_21:
  v16 = !v10;
LABEL_24:
  executeButton = this->fields.executeButton;
  if ( !executeButton
    || (((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, Il2CppMethodPointer))executeButton->klass->vtable._5_set_isEnabled.method)(
          executeButton,
          v16,
          executeButton->klass->vtable._6_OnInit.methodPtr),
        (executeButton = this->fields.executeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)executeButton, v16, 0LL),
        (executeButton = this->fields.executeButton) == 0LL) )
  {
LABEL_32:
    sub_1BCAA3C(executeButton, v8);
  }
  if ( v16 )
    v17 = 0LL;
  else
    v17 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))executeButton->klass->vtable._14_SetState.method)(
    executeButton,
    v17,
    1LL,
    executeButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CommandCardEquipmentControl__SetHaveQpInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLabel; // x20

  if ( (byte_4B19A3B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19A3B = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 524, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLabel) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
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
    sub_1BCAA3C(removeButton, isEnable);
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
    sub_1BCAA3C(replaceButton, isEnable);
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
    sub_1BCAA3C(overwriteWarningLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overwriteWarningLabel, 0, 0LL);
  CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v4);
  CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v5);
  CommandCardEquipmentControl__SetExecuteButtonState(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetSelectedCommandCodeInfo(
        CommandCardEquipmentControl_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        bool dispEquippedInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  bool v6; // w22
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t commandCardInfoObj; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  int v20; // w26
  struct CombineCommandCardComponent_o *v21; // x8
  struct BattleCommandData_o *v22; // x8
  __int128 v23; // q0
  int64_t userCommandCodeId; // x23
  struct CombineCommandCardComponent_o *v25; // x8
  struct BattleCommandData_o *v26; // x8
  __int128 v27; // q0
  int64_t v28; // x22
  const MethodInfo *v29; // x5
  struct CombineCommandCardComponent_o *v30; // x8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  int max_length; // w9
  int v34; // w27
  il2cpp_array_size_t v35; // w28
  struct System_Int64_array *v36; // x8
  int64_t v37; // x25
  __int64 v38; // x23
  __int64 v39; // x24
  char v40; // w23
  int32_t v41; // w24
  struct UserServantCommandCodeEntity_o *v42; // x8
  __int128 v43; // q0
  const MethodInfo *v44; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v6 = dispEquippedInfo;
  if ( (byte_4B19A2B & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode, dispEquippedInfo);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    byte_4B19A2B = 1;
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
    v20 = 0;
    if ( userCommandCode && (commandCardInfoObj & 1) != 0 )
    {
      v21 = this->fields.targetCommandCardData;
      if ( !v21 )
        goto LABEL_57;
      v22 = v21->fields.data;
      if ( !v22 )
        goto LABEL_57;
      v23 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v22->fields.userCommandCodeId;
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v48.fields.fakeValue = v23;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCode);
      v47 = v48;
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v47, 0LL);
      v20 = userCommandCodeId != commandCardInfoObj;
      if ( v6 )
      {
        v25 = this->fields.targetCommandCardData;
        if ( !v25 )
          goto LABEL_57;
        v26 = v25->fields.data;
        if ( !v26 )
          goto LABEL_57;
        v27 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v28 = v26->fields.userCommandCodeId;
        *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v48.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCode);
        v46 = v48;
        v6 = v28 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v46, 0LL);
      }
      else
      {
        v6 = 0;
      }
    }
  }
  else
  {
    v20 = 0;
  }
  this->fields.baseUserCommandCodeEntity = userCommandCode;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseUserCommandCodeEntity,
    (int64_t)userCommandCode,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v30 = this->fields.targetCommandCardData;
  if ( !v30 )
    goto LABEL_57;
  if ( ((v30->fields._NowKind_k__BackingField == 2) & ~v20) != 0 )
  {
    LODWORD(baseUserServantCommandCodeEntity) = 0;
    v40 = 1;
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
      v34 = max_length - 1;
      if ( max_length >= 1 )
      {
        v35 = 0;
        while ( 1 )
        {
          v36 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
          if ( !v36 )
            goto LABEL_57;
          if ( v35 >= v36->max_length )
            sub_1BCAA44(commandCardInfoObj, userCommandCode);
          v37 = v36->m_Items[v35];
          v39 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v38 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userCommandCode);
          *(_QWORD *)&v49.fields.currentCryptoKey = v39;
          *(_QWORD *)&v49.fields.fakeValue = v38;
          commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v49, 0LL);
          v40 = v37 == (int)commandCardInfoObj;
          LODWORD(baseUserServantCommandCodeEntity) = 1;
          if ( v37 == (int)commandCardInfoObj || v34 == v35 )
            goto LABEL_46;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          ++v35;
          if ( !baseUserServantCommandCodeEntity )
            goto LABEL_57;
        }
      }
      v40 = 0;
      LODWORD(baseUserServantCommandCodeEntity) = 1;
    }
    else
    {
      v40 = 0;
    }
  }
  else
  {
    v40 = 0;
    LODWORD(baseUserServantCommandCodeEntity) = 0;
  }
LABEL_46:
  v41 = equippedSvtId;
  if ( (unsigned int)baseUserServantCommandCodeEntity | v20 )
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
  v42 = this->fields.baseUserServantCommandCodeEntity;
  if ( v42 )
  {
    v43 = *(_OWORD *)&v42->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v42->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v48.fields.fakeValue = v43;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userCommandCode);
    v45 = v48;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL) == equippedSvtId )
      v41 = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_57:
    sub_1BCAA3C(commandCardInfoObj, userCommandCode);
  CombineCommandCardEquipmentComponent__SetIcon(
    (CombineCommandCardEquipmentComponent_o *)commandCardInfoObj,
    userCommandCode,
    v40,
    v6,
    v41,
    v29);
  CommandCardEquipmentControl__SetCommandCardEquipmentSkill(this, userCommandCode, v44);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetStateInfoMsg(
        CommandCardEquipmentControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  UnityEngine_Color_o **executeButtonSprite; // x0
  UIWidget_o *detailLabel; // x20
  System_String_o *v35; // x20
  UISprite_o *messageTxtLabelSprite; // x21
  UILabel_o *baseSelectInfoLabel; // x21
  __int64 *v38; // x8
  UnityEngine_Object_o *targetCommandCardData; // x21
  struct CombineCommandCardComponent_o *v40; // x8
  int32_t NowKind_k__BackingField; // w8
  __int64 v42; // x1
  __int64 *v43; // x8
  struct CombineCommandCardComponent_o *v44; // x8
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int128 v46; // q1
  struct UserCommandCodeEntity_o *v47; // x8
  __int128 v48; // q0
  UnityEngine_Color_o **v49; // x21
  __int64 v50; // x1
  int64_t v51; // x22
  CommandCardEquipmentControl_c *v52; // x8
  struct UISprite_o *v53; // x23
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x8
  System_String_o *REPLACE_EXE_BTN_SPRITE_NAME; // x1
  UISprite_o *v56; // x21
  struct UISprite_o *v57; // x21
  UISprite_o *v58; // x0
  UISprite_o *v59; // x21
  UISprite_o *v60; // x21
  System_String_o *EQUIP_EXE_BTN_SPRITE_NAME; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x20
  __int64 v63; // x1
  UISprite_o *v64; // x21
  UISprite_o *v65; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+40h] [xbp-60h]
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19A3D & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3685/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3682/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3683/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3689/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3687/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3686/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3691/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3688/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B19A3D = 1;
  }
  executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
  detailLabel = (UIWidget_o *)this->fields.detailLabel;
  if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
    executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
  }
  if ( !detailLabel )
    goto LABEL_104;
  UIWidget__set_color(detailLabel, *executeButtonSprite[23], 0LL);
  v35 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( state )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3682/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0LL);
      messageTxtLabelSprite = this->fields.messageTxtLabelSprite;
      v35 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
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
      v38 = &StringLiteral_3683/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
      goto LABEL_49;
    case 1:
      targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
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
      v40 = this->fields.targetCommandCardData;
      if ( !v40 )
        goto LABEL_104;
      NowKind_k__BackingField = v40->fields._NowKind_k__BackingField;
      if ( NowKind_k__BackingField == 2 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3688/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                        0LL);
        v60 = this->fields.messageTxtLabelSprite;
        v35 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
        if ( v60 )
        {
          UISprite__set_spriteName(
            v60,
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        if ( baseUserCommandCodeEntity )
        {
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3687/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0LL);
          goto LABEL_102;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3689/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
                                                        0LL);
        v64 = this->fields.messageTxtLabelSprite;
        v35 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
        if ( v64 )
        {
          UISprite__set_spriteName(
            v64,
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
          v69.fields.r = 1.0;
          v69.fields.g = 1.0;
          v69.fields.b = 1.0;
          v69.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)executeButtonSprite, v69, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
          v43 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
        }
        else if ( this->fields.isShortNeedItem )
        {
          executeButtonSprite = (UnityEngine_Color_o **)this->fields.detailLabel;
          if ( !executeButtonSprite )
            goto LABEL_104;
          v70.fields.r = 1.0;
          v70.fields.g = 1.0;
          v70.fields.b = 1.0;
          v70.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)executeButtonSprite, v70, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
          v43 = &StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
          v43 = &StringLiteral_3691/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v43, 0LL);
        v65 = this->fields.messageTxtLabelSprite;
        v35 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
        if ( v65 )
        {
          UISprite__set_spriteName(
            v65,
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
      v44 = this->fields.targetCommandCardData;
      if ( !v44 )
        goto LABEL_104;
      if ( v44->fields._NowKind_k__BackingField != 2 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3687/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/,
                                                        0LL);
        v57 = this->fields.executeButtonSprite;
        v35 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
        if ( v57 )
        {
          v58 = v57;
          REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
          goto LABEL_62;
        }
LABEL_104:
        sub_1BCAA3C(executeButtonSprite, *(_QWORD *)&state);
      }
      nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
      if ( !nowEquipedUserCommandCodeEntity )
        goto LABEL_104;
      v46 = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v68.fields.fakeValue = v46;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&state);
      v67 = v68;
      executeButtonSprite = (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                                      &v67,
                                                      0LL);
      v47 = this->fields.baseUserCommandCodeEntity;
      if ( !v47 )
        goto LABEL_104;
      v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
      v49 = executeButtonSprite;
      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v66.fields.fakeValue = v48;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v66, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, 0LL);
      v52 = CommandCardEquipmentControl_TypeInfo;
      v53 = this->fields.executeButtonSprite;
      v35 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
        v52 = CommandCardEquipmentControl_TypeInfo;
      }
      static_fields = v52->static_fields;
      if ( v49 == (UnityEngine_Color_o **)v51 )
      {
        if ( !v53 )
          goto LABEL_104;
        REPLACE_EXE_BTN_SPRITE_NAME = static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !v53 )
          goto LABEL_104;
        REPLACE_EXE_BTN_SPRITE_NAME = static_fields->REPLACE_EXE_BTN_SPRITE_NAME;
      }
      v58 = v53;
LABEL_62:
      UISprite__set_spriteName(v58, REPLACE_EXE_BTN_SPRITE_NAME, 0LL);
      executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
      v59 = this->fields.messageTxtLabelSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
      if ( !v59 )
        goto LABEL_104;
      UISprite__set_spriteName(
        v59,
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
      UILabel__set_text((UILabel_o *)executeButtonSprite, v35, 0LL);
      return;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0LL);
      v56 = this->fields.messageTxtLabelSprite;
      v35 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo, *(_QWORD *)&state);
      if ( !v56 )
        goto LABEL_104;
      UISprite__set_spriteName(
        v56,
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
      v38 = &StringLiteral_3686/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
LABEL_49:
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v38, 0LL);
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
        sub_1BCAA44(this, *(_QWORD *)&index);
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  }
}


void __fastcall CommandCardEquipmentControl__SetUnlockItemInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Instance; // x0
  const MethodInfo *v13; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  ServantCommandCodeUnlockMaster_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w21
  UILabel_o *spendQpLabel; // x21
  int64_t v20; // x20
  struct LimitCntUpItemComponent_array *unlockItemInfoList; // x8
  __int64 v22; // x21
  __int64 max_length; // x9
  __int64 v24; // x10
  __int64 v25; // x24
  __int64 v26; // x25
  unsigned __int64 v27; // x22
  __int64 v28; // x26
  __int64 v29; // x27
  __int64 v30; // x28
  bool v31; // w9
  Il2CppClass **v32; // x8
  LimitCntUpItemComponent_o *v33; // x20
  const MethodInfo *v34; // x3
  int32_t spendQpVal; // w8
  int32_t haveQpVal; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19A33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v10, v11);
    byte_4B19A33 = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_39;
  v15 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v37.fields.currentCryptoKey = v17;
  *(_QWORD *)&v37.fields.fakeValue = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_39;
  v18 = Instance;
  Instance = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)this->fields.targetCommandCardData, 0LL);
  if ( !v15 )
    goto LABEL_39;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v15, v18, Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  spendQpLabel = this->fields.spendQpLabel;
  this->fields.spendQpVal = *(_DWORD *)(Instance + 24);
  v20 = Instance;
  Instance = (int64_t)System_Int32__ToString_63206828((int)this + 520, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_39;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_39;
  v22 = *(_QWORD *)(v20 + 40);
  if ( !v22 )
    goto LABEL_39;
  max_length = unlockItemInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v24 = *(_QWORD *)(v22 + 24);
    v25 = *(_QWORD *)(v20 + 32);
    v26 = max_length - 1;
    v27 = 0LL;
    v28 = v22 + 32;
    v29 = (int)v24;
    v30 = v25 + 32;
    v31 = v24 << 32 > 0;
    do
    {
      if ( v27 >= unlockItemInfoList->max_length )
LABEL_38:
        sub_1BCAA44(Instance, v13);
      v32 = &unlockItemInfoList->obj.klass + v27;
      v33 = (LimitCntUpItemComponent_o *)v32[4];
      if ( v31 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v27 >= *(unsigned int *)(v22 + 24) )
          goto LABEL_38;
        if ( !v25 )
          break;
        if ( v27 >= *(unsigned int *)(v25 + 24) )
          goto LABEL_38;
        if ( !v33 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v33,
          Instance,
          *(_DWORD *)(v28 + 4 * v27),
          *(_DWORD *)(v30 + 4 * v27),
          0LL);
        if ( v27 >= *(unsigned int *)(v22 + 24) || v27 >= *(unsigned int *)(v25 + 24) )
          goto LABEL_38;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *(_DWORD *)(v28 + 4 * v27),
          *(_DWORD *)(v30 + 4 * v27),
          v34);
        if ( !v33->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      else
      {
        if ( !v33 )
          break;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)v32[4], 0LL);
      }
      if ( v26 == v27 )
        goto LABEL_32;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v31 = (__int64)++v27 < v29;
    }
    while ( unlockItemInfoList );
LABEL_39:
    sub_1BCAA3C(Instance, v13);
  }
LABEL_32:
  spendQpVal = this->fields.spendQpVal;
  haveQpVal = this->fields.haveQpVal;
  this->fields.isCanCombine = 1;
  this->fields.isShortQp = spendQpVal > haveQpVal;
  if ( spendQpVal > haveQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLabel;
    if ( !Instance )
      goto LABEL_39;
    v38.fields.r = 1.0;
    v38.fields.g = 0.0;
    v38.fields.b = 0.0;
    v38.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v38, 0LL);
    this->fields.isCanCombine = 0;
  }
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v13);
}


void __fastcall CommandCardEquipmentControl__UpdateItemLinkListWindowButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v9; // w0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  bool v13; // w1

  if ( (byte_4B19A4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19A4D = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0LL, 0LL);
  gameObject = 0LL;
  if ( v9 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0
        && this->fields.baseUserServantEntity
        && (Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                    (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___),
            ((unsigned __int8)Instance & 1) != 0) )
      {
        if ( gameObject )
        {
          v13 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive(gameObject, v13, 0LL);
          return;
        }
      }
      else if ( gameObject )
      {
        v13 = 0;
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1BCAA3C(Instance, v10);
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
  CommandCardDialog__Close_45609196(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BCAA3C(commandCardDialog, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl___OpenReturnDialog_b__95_0(
        CommandCardEquipmentControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommandCardDialog_o *commandCardDialog; // x0

  commandCardDialog = this->fields.commandCardDialog;
  if ( !commandCardDialog )
    sub_1BCAA3C(0LL, isDecide);
  CommandCardDialog__Close_45609196(commandCardDialog, 0LL, method);
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
  CommandCardDialog__Close_45609196(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1BCAA3C(commandCardDialog, isDecide);
  }
}


int64_t __fastcall CommandCardEquipmentControl__get_GetSelectedUserCommandCodeId(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4B19A40 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B19A40 = 1;
  }
  baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    return -1LL;
  v5 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetCommandCardData; // x20
  __int64 v5; // x1
  BattleCommandComponent_o *v6; // x0

  if ( (byte_4B19A3F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A3F = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    return -1;
  v6 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  return BattleCommandComponent__getMarkIndex(v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1BCAA3C(0LL, method);
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
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_Object_o *targetCommandCardData; // x21
  __int64 v10; // x1
  BattleCommandComponent_o *v11; // x0
  _BOOL4 v12; // w21
  _QWORD *v13; // x0
  const MethodInfo *v14; // x2

  if ( (byte_4B19A28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardEquipmentControl_touchCommandCard__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19A28 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( this->fields.displayTransformIndex >= 1 )
    {
      v7 = Method_CommandCardEquipmentControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_touchCommandCard__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
LABEL_18:
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
      return;
    }
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    {
      v11 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
      if ( !v11 )
        sub_1BCAA3C(0LL, v10);
      v12 = BattleCommandComponent__getMarkIndex(v11, 0LL) == index;
    }
    else
    {
      v12 = 0;
    }
    v13 = Method_CommandCardEquipmentControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCA7F8(Method_CommandCardEquipmentControl_touchCommandCard__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
    if ( v12 )
      goto LABEL_18;
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    CommandCardEquipmentControl__SetCommandCardDisplay(this, index, v14);
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
  __int64 v2; // x2
  CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t targetCardIdx; // w21
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v20; // x9
  CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *v21; // x20
  Il2CppObject *v22; // x22
  System_Action_o *v23; // x21
  int64_t v24; // x2
  __int64 v25; // x3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *klass; // x0
  UnityEngine_WaitForSeconds_o *v31; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v42; // w21
  __int64 v43; // x22
  __int64 v44; // x23
  int32_t v45; // w0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  UnityEngine_WaitForSeconds_o *v49; // x20
  PartyOrganizationUtility_o *v50; // x19
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  v3 = this;
  if ( (byte_4B19A54 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)sub_1BCA7E0(
                                                                        &UnityEngine_WaitForSeconds_TypeInfo,
                                                                        v8,
                                                                        v9);
    byte_4B19A54 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = v3->fields.callback;
    v3->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( nowEquipedUserCommandCodeEntity )
        {
          targetCardIdx = v3->fields.targetCardIdx;
          v15 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
          v14 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
          *(_QWORD *)&v57.fields.currentCryptoKey = v15;
          *(_QWORD *)&v57.fields.fakeValue = v14;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v57, 0LL);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v16,
                                                                              0LL);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v20 = v3->fields.targetCardIdx;
            if ( (unsigned int)v20 >= commandCardList->max_length )
              sub_1BCAA44(this, method);
            v21 = this;
            v22 = (Il2CppObject *)commandCardList->m_Items[v20];
            v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v17, v18);
            System_Action___ctor(v23, v22, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v21 )
            {
              if ( v23 )
              {
                v21[4].klass = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_c *)v23;
                sub_1BCA784((PartyOrganizationUtility_o *)&v21[4], (int64_t)v23, v24, v25, v26, v27, v28, v29);
              }
              klass = (System_Action_o *)v21[4].klass;
              if ( klass )
                ActionExtensions__Call(klass, 0LL);
              v31 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v24, v25);
              UnityEngine_WaitForSeconds___ctor(v31, 0.3, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v31;
              p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
              sub_1BCA784(p__2__current, (int64_t)v31, v33, v34, v35, v36, v37, v38);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
      }
LABEL_26:
      sub_1BCAA3C(this, method);
    }
    return 0;
  }
  v3->fields.__1__state = -1;
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
  v42 = v3->fields.targetCardIdx;
  v44 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v58.fields.currentCryptoKey = v44;
  *(_QWORD *)&v58.fields.fakeValue = v43;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v42, v45, 0LL);
  v49 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v46, v47, v48);
  UnityEngine_WaitForSeconds___ctor(v49, 3.1, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v49;
  v50 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(v50, (int64_t)v49, v51, v52, v53, v54, v55, v56);
  *(_DWORD *)&v50[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_CommandCardEquipmentControl__PlayReplaceEffect_d__125_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t removeCardIdx; // w21
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v20; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v21; // x21
  Il2CppObject *v22; // x23
  System_Action_o *v23; // x22
  int64_t v24; // x2
  __int64 v25; // x3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *klass; // x0
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v33; // x22
  __int64 v34; // x23
  int32_t v35; // w0
  __int64 v36; // x2
  __int64 v37; // x3
  struct CombineCommandCardComponent_array *v38; // x8
  __int64 v39; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v40; // x20
  Il2CppObject *v41; // x22
  System_Action_o *v42; // x21
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Action_o *v47; // x0
  UnityEngine_WaitForSeconds_o *v48; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  bool result; // w0
  System_Action_o *callback; // x0
  struct UserCommandCodeEntity_o *v58; // x8
  int32_t v59; // w21
  __int64 v60; // x22
  __int64 v61; // x23
  int32_t v62; // w0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  UnityEngine_WaitForSeconds_o *v66; // x20
  PartyOrganizationUtility_o *v67; // x19
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  v3 = this;
  if ( (byte_4B19A55 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineCommandCardComponent_HideCommandCodeSprite__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)sub_1BCA7E0(
                                                                                  &UnityEngine_WaitForSeconds_TypeInfo,
                                                                                  v8,
                                                                                  v9);
    byte_4B19A55 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 2 )
  {
    callback = v3->fields.callback;
    v3->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
        goto LABEL_39;
      removeCardIdx = v3->fields.removeCardIdx;
      v15 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v74.fields.currentCryptoKey = v15;
      *(_QWORD *)&v74.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v74, 0LL);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v16,
                                                                                    0LL);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_39;
      v20 = v3->fields.removeCardIdx;
      if ( (unsigned int)v20 < commandCardList->max_length )
      {
        v21 = this;
        v22 = (Il2CppObject *)commandCardList->m_Items[v20];
        v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v17, v18);
        System_Action___ctor(v23, v22, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v21 )
          goto LABEL_39;
        if ( v23 )
        {
          v21[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v23;
          sub_1BCA784((PartyOrganizationUtility_o *)&v21[4], (int64_t)v23, v24, v25, v26, v27, v28, v29);
        }
        klass = (System_Action_o *)v21[4].klass;
        if ( klass )
          ActionExtensions__Call(klass, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
          goto LABEL_27;
        attachCardIdx = v3->fields.attachCardIdx;
        v34 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v75.fields.currentCryptoKey = v34;
        *(_QWORD *)&v75.fields.fakeValue = v33;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v75, 0LL);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v35,
                                                                                      0LL);
        v38 = _4__this->fields.commandCardList;
        if ( !v38 )
LABEL_39:
          sub_1BCAA3C(this, method);
        v39 = v3->fields.attachCardIdx;
        if ( (unsigned int)v39 < v38->max_length )
        {
          v40 = this;
          v41 = (Il2CppObject *)v38->m_Items[v39];
          v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v36, v37);
          System_Action___ctor(v42, v41, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v40 )
          {
            if ( v42 )
            {
              v40[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v42;
              sub_1BCA784((PartyOrganizationUtility_o *)&v40[4], (int64_t)v42, v24, v25, v43, v44, v45, v46);
            }
            v47 = (System_Action_o *)v40[4].klass;
            if ( v47 )
              ActionExtensions__Call(v47, 0LL);
LABEL_27:
            v48 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v24, v25);
            UnityEngine_WaitForSeconds___ctor(v48, 0.3, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v48;
            p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
            sub_1BCA784(p__2__current, (int64_t)v48, v50, v51, v52, v53, v54, v55);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return result;
          }
          goto LABEL_39;
        }
      }
      sub_1BCAA44(this, method);
    }
    return 0;
  }
  v3->fields.__1__state = -1;
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
  v58 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v58 )
    goto LABEL_39;
  v59 = v3->fields.attachCardIdx;
  v61 = *(_QWORD *)&v58->fields.commandCodeId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v76.fields.currentCryptoKey = v61;
  *(_QWORD *)&v76.fields.fakeValue = v60;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v59, v62, 0LL);
  v66 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v63, v64, v65);
  UnityEngine_WaitForSeconds___ctor(v66, 3.1, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v66;
  v67 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(v67, (int64_t)v66, v68, v69, v70, v71, v72, v73);
  *(_DWORD *)&v67[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19A50 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCardEquipmentControl___c_TypeInfo, v1, v2);
    byte_4B19A50 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CommandCardEquipmentControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CommandCardEquipmentControl___c_TypeInfo->static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CommandCardEquipmentControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B19A51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B19A51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B19A52 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1BCA7E0(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide,
                                                                    method);
    byte_4B19A52 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_9:
      sub_1BCAA3C(this, isDecide);
    }
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( (byte_4B19A53 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1BCA7E0(
                                                                    &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                    isDecide,
                                                                    method);
    byte_4B19A53 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_11:
      sub_1BCAA3C(this, isDecide);
    }
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}