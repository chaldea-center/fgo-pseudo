void __fastcall CommandCardEquipmentControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x0
  int32_t v5; // w1
  struct CommandCardEquipmentControl_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct CommandCardEquipmentControl_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct CommandCardEquipmentControl_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct CommandCardEquipmentControl_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct CommandCardEquipmentControl_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  struct CommandCardEquipmentControl_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  struct CommandCardEquipmentControl_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  struct CommandCardEquipmentControl_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A5E8FE & 1) == 0 )
  {
    sub_1B885B0(&CommandCardEquipmentControl_TypeInfo);
    sub_1B885B0(&StringLiteral_20524/*"img_txt_equipcc_3"*/);
    sub_1B885B0(&StringLiteral_20523/*"img_txt_equipcc_1"*/);
    sub_1B885B0(&StringLiteral_20084/*"icon_arrow_pink"*/);
    sub_1B885B0(&StringLiteral_17603/*"btn_txt_replace"*/);
    sub_1B885B0(&StringLiteral_20597/*"img_txt_unlockcc"*/);
    sub_1B885B0(&StringLiteral_17575/*"btn_txt_equipcc"*/);
    sub_1B885B0(&StringLiteral_20525/*"img_txt_equipcc_4"*/);
    sub_1B885B0(&StringLiteral_17627/*"btn_txt_unlockcc"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E8FE = 1;
  }
  CommandCardEquipmentControl_TypeInfo->static_fields->defaultDetailColor = (struct UnityEngine_Color_o)xmmword_BB5AE0;
  v3 = StringLiteral_20084/*"icon_arrow_pink"*/;
  static_fields = CommandCardEquipmentControl_TypeInfo->static_fields;
  static_fields->DEFAULT_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20084/*"icon_arrow_pink"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->DEFAULT_MESSAGE_SPRITE_NAME, v3, v1, v2);
  v5 = StringLiteral_20597/*"img_txt_unlockcc"*/;
  v6 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v6->UNLOCK_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20597/*"img_txt_unlockcc"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->UNLOCK_MESSAGE_SPRITE_NAME, v5, v7, v8);
  v9 = StringLiteral_20523/*"img_txt_equipcc_1"*/;
  v10 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v10->EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20523/*"img_txt_equipcc_1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->EQUIPED_MESSAGE_SPRITE_NAME, v9, v11, v12);
  v13 = StringLiteral_20524/*"img_txt_equipcc_3"*/;
  v14 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v14->SELECTED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20524/*"img_txt_equipcc_3"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->SELECTED_MESSAGE_SPRITE_NAME, v13, v15, v16);
  v17 = StringLiteral_20525/*"img_txt_equipcc_4"*/;
  v18 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v18->NOT_EQUIPED_MESSAGE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20525/*"img_txt_equipcc_4"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->NOT_EQUIPED_MESSAGE_SPRITE_NAME, v17, v19, v20);
  v21 = (int)StringLiteral_1/*""*/;
  v22 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v22->DEFAULT_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->DEFAULT_EXE_BTN_SPRITE_NAME, v21, v23, v24);
  v25 = StringLiteral_17627/*"btn_txt_unlockcc"*/;
  v26 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v26->UNLOCK_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17627/*"btn_txt_unlockcc"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->UNLOCK_EXE_BTN_SPRITE_NAME, v25, v27, v28);
  v29 = StringLiteral_17575/*"btn_txt_equipcc"*/;
  v30 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v30->EQUIP_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17575/*"btn_txt_equipcc"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->EQUIP_EXE_BTN_SPRITE_NAME, v29, v31, v32);
  v33 = StringLiteral_17603/*"btn_txt_replace"*/;
  v34 = CommandCardEquipmentControl_TypeInfo->static_fields;
  v34->REPLACE_EXE_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17603/*"btn_txt_replace"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->REPLACE_EXE_BTN_SPRITE_NAME, v33, v35, v36);
}


void __fastcall CommandCardEquipmentControl___ctor(CommandCardEquipmentControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E8FD & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5E8FD = 1;
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
  struct UserCommandCodeEntity_o **p_nowEquipedUserCommandCodeEntity; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v10; // x2
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x21
  int64_t v13; // x21
  Il2CppObject *Entity; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct UserCommandCodeEntity_o *v17; // x8
  __int128 v18; // q1
  CommandCardEquipmentControl_o *v19; // x0
  const MethodInfo *v20; // x2
  bool v21; // w0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  UILabel_o *commandCardNotEquippedDetail; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5E8D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3659/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/);
    byte_4A5E8D8 = 1;
  }
  CommandCardEquipmentControl__InitDisplayInfo(this, *(const MethodInfo **)&nowKind);
  p_nowEquipedUserCommandCodeEntity = &this->fields.nowEquipedUserCommandCodeEntity;
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nowEquipedUserCommandCodeEntity, 0, v6, v7);
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
                CommandCardEquipmentControl__SetUnlockItemInfo(this, v24);
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
      CommandCardEquipmentControl__SetRemoveButttonState(this, 0, v25);
      CommandCardEquipmentControl__SetReplaceButtonState(this, 0, v26);
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
    lockButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3659/*"COMBINE_COMMAND_CODE_TOUCH_EMPTY_COMMAND_CODE_MSG"*/, 0LL);
    if ( commandCardNotEquippedDetail )
    {
      UILabel__set_text(commandCardNotEquippedDetail, (System_String_o *)lockButton, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1B8880C(lockButton, v8);
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
  CommandCardEquipmentControl__SetRemoveButttonState(this, 1, v10);
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
    sub_1B88814(lockButton, v8);
  v13 = userCommandCodeIds->m_Items[(int)lockButton];
  lockButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lockButton )
    goto LABEL_46;
  lockButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)lockButton,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !lockButton )
    goto LABEL_46;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)lockButton,
             v13,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  *p_nowEquipedUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.nowEquipedUserCommandCodeEntity,
    (int32_t)Entity,
    v15,
    v16);
  v17 = *p_nowEquipedUserCommandCodeEntity;
  if ( !*p_nowEquipedUserCommandCodeEntity )
    goto LABEL_46;
  v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v18;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v28 = v29;
  v19 = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v28, 0LL);
  v21 = CommandCardEquipmentControl__EnableReplace(v19, (int64_t)v19, v20);
  CommandCardEquipmentControl__SetReplaceButtonState(this, v21, v22);
  CommandCardEquipmentControl__SetSelectedCommandCodeInfo(this, (UserCommandCodeEntity_o *)Entity, 0, -1, v23);
LABEL_45:
  CommandCardEquipmentControl__UpdateItemLinkListWindowButton(this, v8);
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
  if ( (byte_4A5E8DD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
    this = (CommandCardEquipmentControl_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E8DD = 1;
  }
  baseUserCommandCodeEntity = v4->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_8;
  v6 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  this = (CommandCardEquipmentControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v8, 0LL);
  if ( !dic )
LABEL_8:
    sub_1B8880C(this, dic);
  return System_Collections_Generic_Dictionary_long__long___ContainsKey(
           dic,
           (int64_t)this,
           (const MethodInfo_31A94F0 *)Method_System_Collections_Generic_Dictionary_long__long__ContainsKey__);
}


void __fastcall CommandCardEquipmentControl__CheckOpenDialogType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  UserServantCommandCodeMaster_o *Master_object; // x0
  const MethodInfo *v5; // x1
  struct CombineCommandCardComponent_o *v6; // x8
  BattleCommandData_o *data; // x21
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_long__long__o *EquippedCommandCodeDic; // x20
  const MethodInfo *v10; // x3
  CommandCardEquipmentControl_o *v11; // x0
  System_Collections_Generic_Dictionary_long__long__o *v12; // x1
  bool v13; // w2

  if ( (byte_4A5E8DC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8DC = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (UserServantCommandCodeMaster_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
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
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UserServantCommandCodeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
      if ( Master_object )
      {
        EquippedCommandCodeDic = UserServantCommandCodeMaster__GetEquippedCommandCodeDic(Master_object, 0LL);
        if ( data && BattleCommandData__IsEnableCommandCode(data, 0LL) )
        {
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v8) )
          {
            v11 = this;
            v12 = EquippedCommandCodeDic;
            v13 = 0;
LABEL_18:
            CommandCardEquipmentControl__OpenEquippedCommandCodeAttachDialog(v11, v12, v13, v10);
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
          if ( CommandCardEquipmentControl__CheckEquippedCommandCodeAttach(this, EquippedCommandCodeDic, v8) )
          {
            v13 = 1;
            v11 = this;
            v12 = EquippedCommandCodeDic;
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
    sub_1B8880C(Master_object, v5);
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
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-40h]

  if ( (byte_4A5E8D4 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E8D4 = 1;
  }
  if ( !selectBase )
  {
    CommandCardEquipmentControl__InitDispBaseServantInfo(this, (const MethodInfo *)selectBase);
    CommandCardEquipmentControl__InitDisplayInfo(this, v14);
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v15);
    baseSelectInfoObj = this->fields.baseSelectInfoObj;
    if ( baseSelectInfoObj )
    {
      UnityEngine_GameObject__SetActive(baseSelectInfoObj, 1, 0LL);
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v16);
      goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(baseSelectInfoObj, selectBase);
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v18 = v19;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL);
    v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v8;
    if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL) )
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, v12, v13);
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
  CommandCardDialog__Close_44802876(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestRemoveCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1B8880C(commandCardDialog, isDecide);
  }
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCard(
        CommandCardEquipmentControl_o *this,
        int32_t targetCommandCardIdx,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *commandCodeAppearEffect; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4A5E8F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8F7 = 1;
  }
  commandCodeAppearEffect = (Il2CppObject *)this->fields.commandCodeAppearEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeAppearEffect,
                                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v10 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1B88814(Component_object, v9);
  v12 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0LL);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v14 )
LABEL_18:
    sub_1B8880C(Component_object, v9);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v10, commandCodeId, v15);
  return (CommandCodeEffectComponent_o *)v10;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateAttachEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *commandCodeFlashEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x20

  if ( (byte_4A5E8F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8F9 = 1;
  }
  commandCodeFlashEffect = (Il2CppObject *)this->fields.commandCodeFlashEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeFlashEffect,
                                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v6 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v8 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v8 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0LL);
  v9 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0LL);
  v10 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v10 )
LABEL_17:
    sub_1B8880C(Component_object, v5);
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (CommandCodeEffectComponent_o *)v6;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateRemoveEffectOnCard(
        CommandCardEquipmentControl_o *this,
        int32_t targetCommandCardIdx,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *commandCardDetachEffect; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x20
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4A5E8F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8F6 = 1;
  }
  commandCardDetachEffect = (Il2CppObject *)this->fields.commandCardDetachEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCardDetachEffect,
                                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_18;
  v10 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_18;
  if ( commandCardList->max_length <= targetCommandCardIdx )
    sub_1B88814(Component_object, v9);
  v12 = (UnityEngine_Transform_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCommandCardIdx];
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0LL);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v14 )
LABEL_18:
    sub_1B8880C(Component_object, v9);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__SetCommandCodeImg((CommandCodeEffectComponent_o *)v10, commandCodeId, v15);
  return (CommandCodeEffectComponent_o *)v10;
}


CommandCodeEffectComponent_o *__fastcall CommandCardEquipmentControl__CreateReplaceEffectOnCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *commandCodeReplaceEffect; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x19
  UnityEngine_Component_o *commandCardEquipmentIcon; // x8
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x20

  if ( (byte_4A5E8F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8F8 = 1;
  }
  commandCodeReplaceEffect = (Il2CppObject *)this->fields.commandCodeReplaceEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeReplaceEffect,
                                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_17;
  v6 = (UnityEngine_Component_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  commandCardEquipmentIcon = (UnityEngine_Component_o *)this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_17;
  v8 = (UnityEngine_Transform_o *)Component_object;
  Component_object = UnityEngine_Component__get_gameObject(commandCardEquipmentIcon, 0LL);
  if ( !Component_object )
    goto LABEL_17;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  if ( !v8 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0LL);
  v9 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v6, 0LL);
  v10 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v10 )
LABEL_17:
    sub_1B8880C(Component_object, v5);
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (CommandCodeEffectComponent_o *)v6;
}


bool __fastcall CommandCardEquipmentControl__EnableReplace(
        CommandCardEquipmentControl_o *this,
        int64_t nowEquipedUserCommandCodeId,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v5; // x1
  UserCommandCodeEntity_array *List; // x0
  UserCommandCodeEntity_array *v7; // x20
  System_Collections_Generic_List_long__o *EquipedCommandCodeList; // x0
  int max_length; // w23
  System_Collections_Generic_List_long__o *v10; // x21
  BalanceConfig_c *v11; // x8
  int v12; // w24
  il2cpp_array_size_t v13; // w25
  UserCommandCodeEntity_o *v14; // x28
  __int128 v15; // q0
  __int128 v16; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5E8D9 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E8D9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_32;
  List = UserCommandCodeMaster__getList((UserCommandCodeMaster_o *)Master_object, 0LL);
  if ( !List || (v7 = List, !*(_QWORD *)&List->max_length) )
  {
LABEL_29:
    LOBYTE(Master_object) = 1;
    return Master_object;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCommandCodeMaster___);
  if ( !Master_object )
LABEL_32:
    sub_1B8880C(Master_object, v5);
  EquipedCommandCodeList = UserServantCommandCodeMaster__GetEquipedCommandCodeList(
                             (UserServantCommandCodeMaster_o *)Master_object,
                             0LL);
  max_length = v7->max_length;
  v10 = EquipedCommandCodeList;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  Master_object = 1LL;
  if ( v11->static_fields->CommandCodeFrameMax <= max_length && max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v7->max_length )
        sub_1B88814(Master_object, v5);
      v14 = v7->m_Items[v13];
      if ( !v14 )
        goto LABEL_32;
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v20.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v19 = v20;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v19, 0LL);
      if ( Master_object != nowEquipedUserCommandCodeId )
      {
        v16 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
        *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v20.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v18 = v20;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL);
        if ( !v10 )
          goto LABEL_32;
        Master_object = System_Collections_Generic_List_long___Contains(
                          v10,
                          Master_object,
                          (const MethodInfo_34E5BE0 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (int64_t)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Master_object = (int64_t)BalanceConfig_TypeInfo;
          }
          if ( ++v12 >= *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 144LL) )
            break;
        }
      }
      if ( max_length == ++v13 )
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
  struct UserServantEntity_o *v3; // x8
  Il2CppObject **p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5E8ED & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E8ED = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = (Il2CppObject **)&this->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    return 0LL;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v11, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v9);
  DataMasterBase_object__object__long___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    p_baseUserServantEntity,
    v7,
    (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  return (UserServantEntity_o *)*p_baseUserServantEntity;
}


int32_t __fastcall CommandCardEquipmentControl__GetCommandCodeId(
        CommandCardEquipmentControl_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5E8D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E8D3 = 1;
  }
  if ( userCommandCodeId < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     userCommandCodeId,
                     (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  klass = Instance[5].klass;
  monitor = Instance[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = klass;
  *(_QWORD *)&v9.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
}


bool __fastcall CommandCardEquipmentControl__GetExeBtnState(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x19

  if ( (byte_4A5E8DB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8DB = 1;
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
    sub_1B8880C(this, index);
  if ( userCommandCodeIds->max_length <= index )
    sub_1B88814(this, index);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w20
  CommandCardEquipmentControl_o *v6; // x19
  il2cpp_array_size_t v7; // w21
  CombineCommandCardComponent_o *v8; // x8

  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_8;
  max_length = commandCardList->max_length;
  v6 = this;
  if ( max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= commandCardList->max_length )
        sub_1B88814(this, method);
      v8 = commandCardList->m_Items[v7];
      if ( !v8 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)this,
        v8->fields.selectedSprite,
        0,
        v3);
      if ( max_length == ++v7 )
        goto LABEL_9;
      commandCardList = v6->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_8:
    sub_1B8880C(this, method);
  }
LABEL_9:
  v6->fields.targetCommandCardData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.targetCommandCardData, 0, v2, (int32_t)v3);
  this = (CommandCardEquipmentControl_o *)v6->fields.lockButton;
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
    sub_1B8880C(commandCardInfoObj, method);
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
        sub_1B88814(baseSelectInfoObj, v5);
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
    sub_1B8880C(baseSelectInfoObj, v5);
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
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  UnityEngine_GameObject_o *cardSwitchButton; // x0
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5E8CF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8CF = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3);
  this->fields.baseUserServantCommandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantCommandCodeEntity, 0, v5, v6);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v7, v8);
  this->fields.nowEquipedUserCommandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nowEquipedUserCommandCodeEntity, 0, v9, v10);
  cardSwitchButton = this->fields.cardSwitchButton;
  if ( !cardSwitchButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(cardSwitchButton, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph;
    cardSwitchButton = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)cardSwitchButton,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B88554(p_charaGraph, 0, v16, v17);
      return;
    }
LABEL_12:
    sub_1B8880C(cardSwitchButton, v11);
  }
}


void __fastcall CommandCardEquipmentControl__InitDispCommandCardInfo(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  UnityEngine_Component_o *lockButton; // x0
  const MethodInfo *v7; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  int max_length; // w21
  il2cpp_array_size_t v10; // w22
  CombineCommandCardComponent_o *v11; // x20
  const MethodInfo *v12; // x2

  this->fields.targetCommandCardData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetCommandCardData, 0, v2, v3);
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
    v10 = 0;
    do
    {
      if ( v10 >= commandCardList->max_length )
        sub_1B88814(lockButton, v5);
      v11 = commandCardList->m_Items[v10];
      if ( !v11 )
        break;
      CombineCommandCardComponent__SetSpriteActive(
        (CombineCommandCardComponent_o *)lockButton,
        v11->fields.selectedSprite,
        0,
        v7);
      CombineCommandCardComponent__SetCommandCardEnable(v11, 0, v12);
      if ( max_length == ++v10 )
        return;
      commandCardList = this->fields.commandCardList;
    }
    while ( commandCardList );
LABEL_12:
    sub_1B8880C(lockButton, v5);
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
    sub_1B8880C(qpInfoObj, method);
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
    sub_1B8880C(cardSwitchButton, method);
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

  if ( (byte_4A5E8FB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8FB = 1;
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
  if ( (byte_4A5E8D2 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl_o *)sub_1B885B0(&BattleCommandData_TypeInfo);
    byte_4A5E8D2 = 1;
  }
  commandCardList = v4->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_11;
  if ( commandCardList->max_length <= cardIndex )
    goto LABEL_12;
  v6 = commandCardList->m_Items[cardIndex];
  if ( !v6
    || (data = v6->fields.data,
        v8 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_43211088(v8, data, 0LL),
        (baseUserServantCommandCodeEntity = v4->fields.baseUserServantCommandCodeEntity) == 0LL)
    || (userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds) == 0LL )
  {
LABEL_11:
    sub_1B8880C(this, *(_QWORD *)&cardIndex);
  }
  if ( userCommandCodeIds->max_length <= cardIndex )
LABEL_12:
    sub_1B88814(this, *(_QWORD *)&cardIndex);
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
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v8; // x22
  __int64 v9; // x20
  __int64 v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct UserServantCommandCodeEntity_o **p_baseUserServantCommandCodeEntity; // x0
  UserServantCommandCodeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5E8D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E8D1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !userServantEntity )
    goto LABEL_14;
  v8 = Instance;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !MasterData_object )
LABEL_14:
    sub_1B8880C(Instance, v6);
  if ( UserServantCommandCodeMaster__TryGetEntity(
         (UserServantCommandCodeMaster_o *)MasterData_object,
         &entity,
         v8,
         (int)Instance,
         0LL) )
  {
    v13 = (int)entity;
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    this->fields.baseUserServantCommandCodeEntity = entity;
  }
  else
  {
    p_baseUserServantCommandCodeEntity = &this->fields.baseUserServantCommandCodeEntity;
    v13 = 0;
    this->fields.baseUserServantCommandCodeEntity = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_baseUserServantCommandCodeEntity, v13, v11, v12);
}


void __fastcall CommandCardEquipmentControl__OnClickCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A5E8E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnClickCommandCode__);
    byte_4A5E8E8 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickCommandCode__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickCommandCode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnClickCommandCode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, v5);
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

  if ( (byte_4A5E8E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
    byte_4A5E8E7 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnClickEmptyEquip__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickEmptyEquip__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnClickEmptyEquip__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, v5);
  CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnClickSwitchButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  UserServantEntity_o *baseUserServantEntity; // x0
  UISprite_o *executeButtonSprite; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  bool v11; // w1
  UnityEngine_Object_o *targetCommandCardData; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E8FA & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnClickSwitchButton__);
    sub_1B885B0(&CommandCardEquipmentControl_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8FA = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v4, v5);
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
      CommandCardEquipmentControl__InitCommandCodeInfo(this, v8);
      CommandCardEquipmentControl__InitDisplayInfo(this, v9);
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
                v11 = 0;
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
    CommandCardEquipmentControl__SetCommandCardDisplay(this, MarkIndex, v14);
  }
  baseUserServantEntity = (UserServantEntity_o *)this->fields.messageTxtLabelSprite;
  if ( !baseUserServantEntity
    || (v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL),
        (baseUserServantEntity = (UserServantEntity_o *)GameObjectExtensions__GetParent(v15, 0LL)) == 0LL)
    || (baseUserServantEntity = (UserServantEntity_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)baseUserServantEntity,
                                                         0LL)) == 0LL )
  {
LABEL_30:
    sub_1B8880C(baseUserServantEntity, v3);
  }
  v11 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseUserServantEntity, v11, 0LL);
  v16 = Method_CommandCardEquipmentControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnClickSwitchButton__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
}


void __fastcall CommandCardEquipmentControl__OnLockCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5E8E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
    byte_4A5E8E3 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnLockCommandCardEquipment__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  CommandCardEquipmentControl__OpenLockDialog(this, v5);
}


void __fastcall CommandCardEquipmentControl__OnLongPushCommandCode(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_baseUserCommandCodeEntity; // x19
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  CommandCardEquipmentControl___c_c *v14; // x8
  UserCommandCodeEntity_o *v15; // x19
  CommonUI_o *v16; // x20
  ServantStatusDialog_EndDelegate_o *_9__105_0; // x21
  Il2CppObject *v18; // x22
  struct CommandCardEquipmentControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-50h]

  if ( (byte_4A5E8E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__);
    sub_1B885B0(&CommandCardEquipmentControl___c_TypeInfo);
    byte_4A5E8E9 = 1;
  }
  if ( this->fields.baseUserCommandCodeEntity )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    p_baseUserCommandCodeEntity = (ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    klass = p_baseUserCommandCodeEntity->klass;
    if ( !p_baseUserCommandCodeEntity->klass )
      goto LABEL_20;
    byval_arg = klass->_1.byval_arg;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
    *(Il2CppType *)&v23.fields.fakeValue = byval_arg;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v22 = v23;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v22, 0LL);
    if ( !v8 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__long___GetEntity(
               v8,
               (int64_t)Instance,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    p_baseUserCommandCodeEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
    sub_1B88554(p_baseUserCommandCodeEntity, (int32_t)Entity, v10, v11);
    v12 = Method_CommandCardEquipmentControl_OnLongPushCommandCode__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnLongPushCommandCode__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnLongPushCommandCode__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = CommandCardEquipmentControl___c_TypeInfo;
    v15 = (UserCommandCodeEntity_o *)p_baseUserCommandCodeEntity->klass;
    v16 = (CommonUI_o *)Instance;
    if ( !CommandCardEquipmentControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl___c_TypeInfo);
      v14 = CommandCardEquipmentControl___c_TypeInfo;
    }
    _9__105_0 = v14->static_fields->__9__105_0;
    if ( !_9__105_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = CommandCardEquipmentControl___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v14->static_fields->__9;
      _9__105_0 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        _9__105_0,
        v18,
        Method_CommandCardEquipmentControl___c__OnLongPushCommandCode_b__105_0__,
        0LL);
      static_fields = CommandCardEquipmentControl___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = _9__105_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)_9__105_0, v20, v21);
    }
    if ( !v16 )
LABEL_20:
      sub_1B8880C(Instance, v4);
    CommonUI__OpenServantStatusDialog_30506660(v16, 0, v15, _9__105_0, 0LL, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnRemoveCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommandCardDialog_o *commandCardDialog; // x20
  UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x21
  CommandCardDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4A5E8E4 & 1) == 0 )
  {
    sub_1B885B0(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__);
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
    byte_4A5E8E4 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnRemoveCommandCardEquipment__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  commandCardDialog = this->fields.commandCardDialog;
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  v7 = (CommandCardDialog_ClickDelegate_o *)sub_1B887FC(CommandCardDialog_ClickDelegate_TypeInfo);
  CommandCardDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CommandCardEquipmentControl_CloseRemoveCommandCodeDialog__,
    v8);
  if ( !commandCardDialog )
    sub_1B8880C(v9, v10);
  CommandCardDialog__OpenRemoveEquip(commandCardDialog, nowEquipedUserCommandCodeEntity, v7, v11);
}


void __fastcall CommandCardEquipmentControl__OnReplaceCommandCardEquipment(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A5E8E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    byte_4A5E8E5 = 1;
  }
  if ( this->fields.nowEquipedUserCommandCodeEntity )
  {
    v3 = Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnReplaceCommandCardEquipment__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      sub_1B8880C(0LL, v5);
    CombineRootComponent__ShowCommandCodeList(combineRootComponent, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OnReplaceReset(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v11; // x2

  if ( (byte_4A5E8E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_OnReplaceReset__);
    byte_4A5E8E6 = 1;
  }
  v3 = Method_CommandCardEquipmentControl_OnReplaceReset__;
  if ( (*((_BYTE *)Method_CommandCardEquipmentControl_OnReplaceReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_OnReplaceReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  this->fields.baseUserCommandCodeEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, v5, v6);
  targetCommandCardData = this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1B8880C(v7, v8);
  CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
    this,
    targetCommandCardData->fields._NowKind_k__BackingField,
    v9);
  CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v11);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x27
  System_String_o *v13; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  System_String_o *v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  __int128 v19; // q0
  int v20; // w24
  struct UserCommandCodeEntity_o *v21; // x8
  __int128 v22; // q0
  UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x22
  __int64 v24; // x0
  __int64 v25; // x0
  CommonUI_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x24
  CommonConfirmDialog_ClickDelegate_o *v29; // x25
  struct UserServantEntity_o *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x23
  __int64 v32; // x24
  __int64 v33; // x25
  Il2CppObject *Master_object; // x24
  struct UserServantEntity_o *v35; // x8
  int64_t v36; // x25
  UserServantCollectionEntity_o *v37; // x0
  int32_t maxLimitCount; // w25
  struct UserServantEntity_o *v39; // x8
  ServantLimitMaster_o *v40; // x24
  __int64 v41; // x26
  __int64 v42; // x27
  ServantLimitEntity_o *v43; // x23
  struct UserServantEntity_o *v44; // x8
  ServantLimitImageMaster_o *v45; // x26
  int32_t ServantLimitCountSealAfter; // w24
  struct UserCommandCodeEntity_o *v47; // x8
  __int128 v48; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x25
  Il2CppObject *v50; // x25
  Il2CppObject *v51; // x27
  struct UserCommandCodeEntity_o *v52; // x8
  __int128 v53; // q0
  int64_t v54; // x28
  int64_t v55; // x0
  UserServantCollectionEntity_o *v56; // x0
  int32_t v57; // w28
  struct UserCommandCodeEntity_o *v58; // x8
  __int128 v59; // q0
  ServantLimitMaster_o *v60; // x27
  int64_t v61; // x0
  ServantLimitEntity_o *v62; // x29
  ServantLimitEntity_o *v63; // x27
  struct UserCommandCodeEntity_o *v64; // x8
  __int128 v65; // q0
  ServantLimitImageMaster_o *v66; // x21
  int64_t v67; // x0
  int32_t v68; // w0
  int32_t v69; // w28
  System_String_o *v70; // x21
  __int64 v71; // x22
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x26
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x26
  int32_t v78; // w2
  int32_t v79; // w3
  __int64 v80; // x23
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x23
  int32_t rarity; // w23
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x23
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x23
  System_String_o *v91; // x21
  __int64 v92; // x8
  __int64 v93; // x0
  CommonUI_o *v94; // x22
  System_String_o *v95; // x23
  System_String_o *v96; // x24
  CommonConfirmDialog_ClickDelegate_o *v97; // x25
  __int64 v98; // x0
  System_String_o *v99; // [xsp+40h] [xbp-150h]
  Il2CppObject *Entity; // [xsp+48h] [xbp-148h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+110h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_4A5E8DE & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1B885B0(&Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__);
    sub_1B885B0(&Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__);
    sub_1B885B0(&CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3733/*"COMMAND_CODE_REATTACH_TITLE"*/);
    sub_1B885B0(&StringLiteral_3731/*"COMMAND_CODE_REATTACH_MSG"*/);
    sub_1B885B0(&StringLiteral_3732/*"COMMAND_CODE_REATTACH_SELF_MSG"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    byte_4A5E8DE = 1;
  }
  v7 = sub_1B887FC(CommandCardEquipmentControl___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_101;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_BYTE *)(v7 + 24) = isCommandCardEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMAND_CODE_REATTACH_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMMAND_CODE_REATTACH_SELF_MSG"*/, 0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( baseUserServantEntity )
  {
    v15 = v13;
    v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v108.fields.currentCryptoKey = v17;
    *(_QWORD *)&v108.fields.fakeValue = v16;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v108, 0LL);
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
      goto LABEL_101;
    v19 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    v20 = Item;
    *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v107.fields.fakeValue = v19;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v106 = v107;
    Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v106, 0LL);
    if ( !dic )
      goto LABEL_101;
    Item = System_Collections_Generic_Dictionary_long__long___get_Item(
             dic,
             Item,
             (const MethodInfo_31A925C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
    if ( Item == v20 )
    {
      v21 = this->fields.baseUserCommandCodeEntity;
      if ( v21 )
      {
        v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
        baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
        *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v107.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v105 = v107;
        Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v105, 0LL);
        if ( baseUserServantCommandCodeEntity )
        {
          this->fields._selectedSelfAttachCommandCardIdx_k__BackingField = UserServantCommandCodeEntity__GetUserCommandCodeNumber(
                                                                             baseUserServantCommandCodeEntity,
                                                                             Item,
                                                                             0LL);
          v24 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
          if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
            v24 = sub_1BDA48C(v24);
          v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
          if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
            v25 = sub_1BDA48C(v25);
          v26 = **(CommonUI_o ***)(v25 + 184);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
          v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
          v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v29,
            (Il2CppObject *)v7,
            Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__0__,
            0LL);
          if ( v26 )
          {
            CommonUI__OpenConfirmDecideDlg(v26, v12, v15, v27, v28, v29, 26, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
            return;
          }
        }
      }
LABEL_101:
      sub_1B8880C(Item, v9);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v30 = this->fields.baseUserServantEntity;
  if ( !v30 )
    goto LABEL_101;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v33;
  *(_QWORD *)&v109.fields.fakeValue = v32;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v109, 0LL);
  if ( !v31 )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             Item,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Item = NetworkManager__get_UserId(0LL);
  v35 = this->fields.baseUserServantEntity;
  if ( !v35 )
    goto LABEL_101;
  v36 = Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35->fields.svtId, 0LL);
  if ( !Master_object )
    goto LABEL_101;
  v37 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)Master_object, v36, Item, 0LL);
  if ( v37 )
    maxLimitCount = v37->fields.maxLimitCount;
  else
    maxLimitCount = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v99 = v12;
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v39 = this->fields.baseUserServantEntity;
  if ( !v39 )
    goto LABEL_101;
  v40 = (ServantLimitMaster_o *)Item;
  v42 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v110.fields.currentCryptoKey = v42;
  *(_QWORD *)&v110.fields.fakeValue = v41;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v110, 0LL);
  if ( !v40 )
    goto LABEL_101;
  v43 = ServantLimitMaster__GetEntity(v40, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v44 = this->fields.baseUserServantEntity;
  if ( !v44 )
    goto LABEL_101;
  v45 = (ServantLimitImageMaster_o *)Item;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44->fields.svtId, 0LL);
  if ( !v45 )
    goto LABEL_101;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v45, Item, maxLimitCount, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v47 = this->fields.baseUserCommandCodeEntity;
  if ( !v47 )
    goto LABEL_101;
  v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Item;
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v104 = v107;
  Item = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v104, 0LL);
  if ( !dic )
    goto LABEL_101;
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           Item,
           (const MethodInfo_31A925C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v49 )
    goto LABEL_101;
  v50 = DataMasterBase_object__object__int___GetEntity(
          v49,
          Item,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v51 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Item = NetworkManager__get_UserId(0LL);
  v52 = this->fields.baseUserCommandCodeEntity;
  if ( !v52 )
    goto LABEL_101;
  v53 = *(_OWORD *)&v52->fields.id.fields.fakeValue;
  v54 = Item;
  *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&v52->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v103.fields.fakeValue = v53;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v103, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v55,
           (const MethodInfo_31A925C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v51 )
    goto LABEL_101;
  v56 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v51, v54, Item, 0LL);
  if ( v56 )
    v57 = v56->fields.maxLimitCount;
  else
    v57 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v58 = this->fields.baseUserCommandCodeEntity;
  if ( !v58 )
    goto LABEL_101;
  v59 = *(_OWORD *)&v58->fields.id.fields.fakeValue;
  v60 = (ServantLimitMaster_o *)Item;
  *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v58->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v107.fields.fakeValue = v59;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v102 = v107;
  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v102, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v61,
           (const MethodInfo_31A925C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v60 )
    goto LABEL_101;
  v62 = v43;
  v63 = ServantLimitMaster__GetEntity(v60, Item, v57, 0LL);
  Item = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v64 = this->fields.baseUserCommandCodeEntity;
  if ( !v64 )
    goto LABEL_101;
  v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
  v66 = (ServantLimitImageMaster_o *)Item;
  *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v101.fields.fakeValue = v65;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v101, 0LL);
  Item = System_Collections_Generic_Dictionary_long__long___get_Item(
           dic,
           v67,
           (const MethodInfo_31A925C *)Method_System_Collections_Generic_Dictionary_long__long__get_Item__);
  if ( !v66 )
    goto LABEL_101;
  v68 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v66, Item, v57, 0LL);
  if ( v43 && Entity && v50 && v63 )
  {
    v69 = v68;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3731/*"COMMAND_CODE_REATTACH_MSG"*/, 0LL);
    v71 = sub_1B88658(object___TypeInfo, 6LL);
    Item = (__int64)ServantEntity__getName((ServantEntity_o *)Entity, ServantLimitCountSealAfter, -1, 0LL);
    if ( !v71 )
      goto LABEL_101;
    v74 = Item;
    if ( !Item || (Item = sub_1B886EC(Item, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v71 + 24) )
        goto LABEL_102;
      *(_QWORD *)(v71 + 32) = v74;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 32), v74, v72, v73);
      Item = (__int64)ServantEntity__getName((ServantEntity_o *)v50, v69, -1, 0LL);
      v77 = Item;
      if ( !Item || (Item = sub_1B886EC(Item, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v71 + 24) <= 1u )
          goto LABEL_102;
        *(_QWORD *)(v71 + 40) = v77;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 40), v77, v75, v76);
        Item = (__int64)ServantEntity__getClassName((ServantEntity_o *)Entity, 0LL);
        v80 = Item;
        if ( !Item || (Item = sub_1B886EC(Item, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v71 + 24) <= 2u )
            goto LABEL_102;
          *(_QWORD *)(v71 + 48) = v80;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 48), v80, v78, v79);
          Item = (__int64)ServantEntity__getClassName((ServantEntity_o *)v50, 0LL);
          v83 = Item;
          if ( !Item || (Item = sub_1B886EC(Item, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v71 + 24) <= 3u )
              goto LABEL_102;
            *(_QWORD *)(v71 + 56) = v83;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 56), v83, v81, v82);
            rarity = v62->fields.rarity;
            if ( !Rarity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
            Item = (__int64)Rarity__getRarityType(rarity, 0LL);
            v87 = Item;
            if ( !Item || (Item = sub_1B886EC(Item, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v71 + 24) <= 4u )
                goto LABEL_102;
              *(_QWORD *)(v71 + 64) = v87;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 64), v87, v85, v86);
              Item = (__int64)Rarity__getRarityType(v63->fields.rarity, 0LL);
              v90 = Item;
              if ( !Item || (Item = sub_1B886EC(Item, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v71 + 24) > 5u )
                {
                  *(_QWORD *)(v71 + 72) = v90;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 72), v90, v88, v89);
                  v91 = System_String__Format_61721540(v70, (System_Object_array *)v71, 0LL);
                  v92 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
                  if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
                    v92 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4));
                  v93 = *(_QWORD *)(*(_QWORD *)(v92 + 192) + 16LL);
                  if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
                    v93 = sub_1BDA48C(v93);
                  v94 = **(CommonUI_o ***)(v93 + 184);
                  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
                  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
                  v97 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v97,
                    (Il2CppObject *)v7,
                    Method_CommandCardEquipmentControl___c__DisplayClass92_0__OpenEquippedCommandCodeAttachDialog_b__1__,
                    0LL);
                  if ( !v94 )
                    goto LABEL_101;
                  CommonUI__OpenConfirmDecideDlg(
                    v94,
                    v99,
                    v91,
                    v95,
                    v96,
                    v97,
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
                    0LL);
                  return;
                }
LABEL_102:
                sub_1B88814(Item, v9);
              }
            }
          }
        }
      }
    }
    v98 = sub_1B88830(Item);
    sub_1B886D8(v98, 0LL);
  }
}


void __fastcall CommandCardEquipmentControl__OpenLockDialog(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  BattleCommandData_o *v4; // x0
  bool IsEnableCommandCode; // w20
  CommandCardDialog_o *klass; // x21
  CommandCardDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_4A5E8E0 & 1) == 0 )
  {
    sub_1B885B0(&CommandCardDialog_ClickDelegate_TypeInfo);
    this = (CommandCardEquipmentControl_o *)sub_1B885B0(&Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__);
    byte_4A5E8E0 = 1;
  }
  monitor = v2[31].monitor;
  if ( !monitor
    || ((v4 = (BattleCommandData_o *)*((_QWORD *)monitor + 47)) == 0LL
      ? (IsEnableCommandCode = 0)
      : (IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(v4, 0LL)),
        klass = (CommandCardDialog_o *)v2[24].klass,
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_1B887FC(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(v7, v2, Method_CommandCardEquipmentControl__OpenLockDialog_b__94_0__, v8),
        !klass) )
  {
    sub_1B8880C(this, method);
  }
  CommandCardDialog__OpenLockEquipSlot(klass, IsEnableCommandCode, v7, v9);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4A5E8E1 & 1) == 0 )
  {
    sub_1B885B0(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__);
    byte_4A5E8E1 = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_1B887FC(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenReturnDialog_b__95_0__,
          v8),
        !commandCardDialog) )
  {
    sub_1B8880C(targetCommandCardData, method);
  }
  CommandCardDialog__OpenLockCommandCardResult(commandCardDialog, baseUserServantEntity, MarkIndex, v7, v9);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4A5E8DF & 1) == 0 )
  {
    sub_1B885B0(&CommandCardDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__);
    byte_4A5E8DF = 1;
  }
  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData
    || (commandCardDialog = this->fields.commandCardDialog,
        baseUserServantEntity = this->fields.baseUserServantEntity,
        MarkIndex = BattleCommandComponent__getMarkIndex(targetCommandCardData, 0LL),
        v7 = (CommandCardDialog_ClickDelegate_o *)sub_1B887FC(CommandCardDialog_ClickDelegate_TypeInfo),
        CommandCardDialog_ClickDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CommandCardEquipmentControl__OpenUnlockDialog_b__93_0__,
          v8),
        !commandCardDialog) )
  {
    sub_1B8880C(targetCommandCardData, method);
  }
  CommandCardDialog__OpenUnlockCommandCardEquipment(commandCardDialog, baseUserServantEntity, MarkIndex, v7, v9);
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
  int32_t v15; // w2
  int32_t v16; // w3
  CommandCodeEffectComponent_o *v17; // x22
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A5E8F2 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E8F2 = 1;
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
  AttachEffectOnCode = (char *)CommandCardEquipmentControl__CreateAttachEffectOnCard(this, targetCardIdx, v13, v14);
  if ( !AttachEffectOnCode )
    goto LABEL_14;
  v17 = (CommandCodeEffectComponent_o *)AttachEffectOnCode;
  if ( callback )
  {
    *((_QWORD *)AttachEffectOnCode + 27) = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(AttachEffectOnCode + 216), (int32_t)callback, v15, v16);
  }
  AttachEffectOnCode = (char *)this->fields.commandCardEquipmentIcon;
  if ( !AttachEffectOnCode
    || (CombineCommandCardEquipmentComponent__HideStatusInfo(
          (CombineCommandCardEquipmentComponent_o *)AttachEffectOnCode,
          v8),
        (commandCardEquipmentIcon = this->fields.commandCardEquipmentIcon) == 0LL)
    || (AttachEffectOnCode = (char *)commandCardEquipmentIcon->fields.equippedInfo) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AttachEffectOnCode, 0, 0LL), !v10) )
  {
LABEL_14:
    sub_1B8880C(AttachEffectOnCode, v8);
  }
  CommandCodeEffectComponent__PlayAnimation(v10, v8);
  CommandCodeEffectComponent__PlayAnimation(v17, v19);
}


void __fastcall CommandCardEquipmentControl__PlayLockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t lockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *lockEffect; // x19
  CombineCommandCardComponent_o *Component_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Component_o *v12; // x19
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Transform_o *v16; // x20
  const MethodInfo *v17; // x1

  if ( (byte_4A5E8F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8F1 = 1;
  }
  lockEffect = (Il2CppObject *)this->fields.lockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                        lockEffect,
                                                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)Component_object,
                                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_20;
  v12 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    Component_object->fields.effect_addcritical = (struct UnityEngine_GameObject_o *)callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&Component_object->fields.effect_addcritical,
      (int32_t)callback,
      v10,
      v11);
  }
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v12, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_20;
  if ( commandCardList->max_length <= lockCardIdx )
    sub_1B88814(Component_object, v9);
  v14 = (UnityEngine_Transform_o *)Component_object;
  Component_object = commandCardList->m_Items[lockCardIdx];
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Component_object,
                                                        0LL);
  if ( !v14 )
    goto LABEL_20;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v15 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v16 )
LABEL_20:
    sub_1B8880C(Component_object, v9);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v12, v17);
}


void __fastcall CommandCardEquipmentControl__PlayRemoveEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  CommandCodeEffectComponent_o *v19; // x0
  Il2CppObject *commandCodeDetachEffect; // x23
  CommandCodeEffectComponent_o *v21; // x22
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_Transform_o *v23; // x24
  UnityEngine_Transform_o *v24; // x24
  System_Action_o *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4A5E8F3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__);
    sub_1B885B0(&Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__);
    sub_1B885B0(&CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo);
    byte_4A5E8F3 = 1;
  }
  v7 = sub_1B887FC(CommandCardEquipmentControl___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_27;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
  if ( !nowEquipedUserCommandCodeEntity )
    goto LABEL_27;
  v16 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v16;
  *(_QWORD *)&v33.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL);
  v19 = CommandCardEquipmentControl__CreateRemoveEffectOnCard(this, targetCardIdx, v17, v18);
  commandCodeDetachEffect = (Il2CppObject *)this->fields.commandCodeDetachEffect;
  v21 = v19;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   commandCodeDetachEffect,
                                                   (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_27;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_27;
  v22 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)Component_object,
                                                   0LL);
  if ( !Component_object )
    goto LABEL_27;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.detachEffectPos, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v22,
                                                   0LL);
  v23 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v23 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)v22,
                                                   0LL);
  v24 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v24 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__0__,
    0LL);
  if ( v25 )
  {
    v22[9].monitor = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[9].monitor, (int32_t)v25, v26, v27);
  }
  v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_CommandCardEquipmentControl___c__DisplayClass124_0__PlayRemoveEffect_b__1__,
    0LL);
  if ( v28 )
  {
    v22[9].klass = (UnityEngine_GameObject_c *)v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[9], (int32_t)v28, v29, v30);
  }
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_27;
  if ( commandCardList->max_length <= targetCardIdx )
    sub_1B88814(Component_object, v9);
  Component_object = (UnityEngine_GameObject_o *)commandCardList->m_Items[targetCardIdx];
  if ( !Component_object
    || (CombineCommandCardComponent__HideCommandCodeSprite((CombineCommandCardComponent_o *)Component_object, v9),
        CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v22, v32),
        !v21) )
  {
LABEL_27:
    sub_1B8880C(Component_object, v9);
  }
  CommandCodeEffectComponent__PlayAnimation(v21, v9);
}


System_Collections_IEnumerator_o *__fastcall CommandCardEquipmentControl__PlayReplaceEffect(
        CommandCardEquipmentControl_o *this,
        int32_t targetCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5E8F4 & 1) == 0 )
  {
    sub_1B885B0(&CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo);
    byte_4A5E8F4 = 1;
  }
  v7 = sub_1B887FC(CommandCardEquipmentControl__PlayReplaceEffect_d__125_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = targetCardIdx;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)callback, v10, v11);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5E8F5 & 1) == 0 )
  {
    sub_1B885B0(&CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo);
    byte_4A5E8F5 = 1;
  }
  v9 = sub_1B887FC(CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = removeCardIdx;
  *(_DWORD *)(v9 + 44) = attachCardIdx;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall CommandCardEquipmentControl__PlayUnlockEffect(
        CommandCardEquipmentControl_o *this,
        int32_t unlockCardIdx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *unlockEffect; // x21
  CombineCommandCardComponent_o *Component_object; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Component_o *v12; // x21
  struct CombineCommandCardComponent_array *commandCardList; // x8
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x22
  struct CombineCommandCardComponent_array *v17; // x8
  const MethodInfo *v18; // x1

  if ( (byte_4A5E8F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8F0 = 1;
  }
  unlockEffect = (Il2CppObject *)this->fields.unlockEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                        unlockEffect,
                                                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)Component_object,
                                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_23;
  v12 = (UnityEngine_Component_o *)Component_object;
  if ( callback )
  {
    Component_object->fields.effect_addcritical = (struct UnityEngine_GameObject_o *)callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&Component_object->fields.effect_addcritical,
      (int32_t)callback,
      v10,
      v11);
  }
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v12, 0LL);
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_23;
  if ( commandCardList->max_length <= unlockCardIdx )
    goto LABEL_24;
  v14 = (UnityEngine_Transform_o *)Component_object;
  Component_object = commandCardList->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)Component_object,
                                                        0LL);
  if ( !v14 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Component_object, 0LL);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v15 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (CombineCommandCardComponent_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v16 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = (CombineCommandCardComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v17 = this->fields.commandCardList) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(Component_object, v9);
  }
  if ( v17->max_length <= unlockCardIdx )
LABEL_24:
    sub_1B88814(Component_object, v9);
  Component_object = v17->m_Items[unlockCardIdx];
  if ( !Component_object )
    goto LABEL_23;
  CombineCommandCardComponent__HideUnlockInfo(Component_object, v9);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v12, v18);
}


void __fastcall CommandCardEquipmentControl__SetBaseServantCommandCardList(
        CommandCardEquipmentControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *assetList; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 transformTotal; // x1
  UnityEngine_Component_o *messageTxtLabelSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_array *v18; // x20
  unsigned __int64 v19; // x21
  __int64 v20; // x26
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int32_t v22; // w22
  __int64 v23; // x23
  __int64 v24; // x24
  int32_t v25; // w23
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_o *v28; // x21
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4A5E8D5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CommandCardEquipmentControl_SetCommandCardList__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5E8D5 = 1;
  }
  transformInfo = 0LL;
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37799632(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v6, v7);
  }
  CommandCardEquipmentControl__InitTransformInfo(this, (const MethodInfo *)callback);
  messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.messageTxtLabelSprite;
  if ( !messageTxtLabelSprite )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject(messageTxtLabelSprite, 0LL);
  messageTxtLabelSprite = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !messageTxtLabelSprite )
    goto LABEL_35;
  messageTxtLabelSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageTxtLabelSprite, 0LL);
  if ( !messageTxtLabelSprite )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0LL);
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, v11);
  if ( this->fields.baseUserServantEntity )
  {
    this->fields.LoadAfterCallback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.LoadAfterCallback, (int32_t)callback, v13, v14);
    transformTotal = (unsigned int)this->fields.transformTotal;
    if ( (int)transformTotal > 1 )
    {
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.cardSwitchButton;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0LL);
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      messageTxtLabelSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           messageTxtLabelSprite,
                                                           0LL);
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageTxtLabelSprite, 1, 0LL);
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      messageTxtLabelSprite = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                           (UserServantEntity_o *)messageTxtLabelSprite,
                                                           &transformInfo,
                                                           this->fields.displayTransformIndex,
                                                           0LL);
      if ( !transformInfo )
        goto LABEL_35;
      messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.servantName;
      if ( !messageTxtLabelSprite )
        goto LABEL_35;
      UILabel__set_text((UILabel_o *)messageTxtLabelSprite, transformInfo->fields.titleText, 0LL);
      transformTotal = (unsigned int)this->fields.transformTotal;
    }
    v15 = (struct System_String_array *)sub_1B88658(string___TypeInfo, transformTotal);
    this->fields.assetList = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetList, (int32_t)v15, v16, v17);
    v18 = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v19 = 0LL;
      v20 = 32LL;
      while ( 1 )
      {
        messageTxtLabelSprite = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
        if ( !messageTxtLabelSprite )
          break;
        messageTxtLabelSprite = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantId(
                                                             (UserServantEntity_o *)messageTxtLabelSprite,
                                                             v19,
                                                             0LL);
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v22 = (int)messageTxtLabelSprite;
        v24 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.currentCryptoKey;
        v23 = *(_QWORD *)&baseUserServantEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v30.fields.currentCryptoKey = v24;
        *(_QWORD *)&v30.fields.fakeValue = v23;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        messageTxtLabelSprite = (UnityEngine_Component_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                             v22,
                                                             v25,
                                                             0LL);
        if ( !v18 )
          break;
        if ( v19 >= v18->max_length )
          sub_1B88814(messageTxtLabelSprite, transformTotal);
        *(Il2CppClass **)((char *)&v18->obj.klass + v20) = (Il2CppClass *)messageTxtLabelSprite;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v18 + v20), (int32_t)messageTxtLabelSprite, v26, v27);
        v18 = this->fields.assetList;
        ++v19;
        v20 += 8LL;
        if ( (__int64)v19 >= this->fields.transformTotal )
          goto LABEL_30;
      }
LABEL_35:
      sub_1B8880C(messageTxtLabelSprite, transformTotal);
    }
LABEL_30:
    v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_CommandCardEquipmentControl_SetCommandCardList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37797288(v18, v28, 1, 0LL);
  }
  else
  {
    CommandCardEquipmentControl__InitDispCommandCardInfo(this, v12);
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
  const MethodInfo *v6; // x2
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitImageMaster_o *v13; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v16; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5E8D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E8D0 = 1;
  }
  this->fields.baseUserServantEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  CommandCardEquipmentControl__MoidfyUserSvtCommandCode(this, userServantEntity, v6);
  if ( !userServantEntity )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  if ( !v13 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v13,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v16 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                               this->fields.charaGraphBase,
                               userServantEntity,
                               v16,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_37906428;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37906428,
      v19,
      v20);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B8880C(Instance, v8);
  UICharaGraphTexture__SetCharacter_40836020((UICharaGraphTexture_o *)Instance, userServantEntity, v16, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetCommandCardDisplay(
        CommandCardEquipmentControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  int32_t v9; // w3
  struct CombineCommandCardComponent_array *v10; // x8
  struct CombineCommandCardComponent_o *v11; // x1
  const MethodInfo *v12; // x2
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  const MethodInfo *v14; // x2

  if ( (index & 0x80000000) == 0 )
  {
    commandCardList = this->fields.commandCardList;
    if ( !commandCardList )
      goto LABEL_9;
    if ( (signed int)commandCardList->max_length > index )
    {
      this->fields.baseUserCommandCodeEntity = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity, 0, (int32_t)method, v3);
      CommandCardEquipmentControl__SetTargetIndexSelectSprite(this, index, v7);
      v10 = this->fields.commandCardList;
      if ( v10 )
      {
        if ( v10->max_length <= index )
          sub_1B88814(this, *(_QWORD *)&index);
        v11 = v10->m_Items[index];
        this->fields.targetCommandCardData = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetCommandCardData, (int32_t)v11, v8, v9);
        targetCommandCardData = this->fields.targetCommandCardData;
        if ( targetCommandCardData )
        {
          CommandCardEquipmentControl__ChangeCommandCardTypeDispInfo(
            this,
            targetCommandCardData->fields._NowKind_k__BackingField,
            v12);
          CommandCardEquipmentControl__SetStateInfoMsg(this, 1, v14);
          return;
        }
      }
LABEL_9:
      sub_1B8880C(this, *(_QWORD *)&index);
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
  this = (CommandCardEquipmentControl_o *)SkillInfo__GetMargeExplanation_40526144(explanationList, 0LL);
  if ( !idList )
    goto LABEL_9;
  if ( !idList->max_length )
    goto LABEL_10;
  v4 = this;
  this = (CommandCardEquipmentControl_o *)v3->fields.commandCardEquipmentSkillIcon;
  if ( !this || (SkillIconComponent__Set_38235592((SkillIconComponent_o *)this, idList->m_Items[1], 1, 0LL), !titleList) )
LABEL_9:
    sub_1B8880C(this, userCommandCode);
  if ( !titleList->max_length )
LABEL_10:
    sub_1B88814(this, userCommandCode);
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
  __int64 baseUserServantEntity; // x0
  int32_t v4; // w20
  int32_t CommandCardLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  Il2CppObject *v7; // x22
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // x24
  struct UserServantEntity_o *v10; // x8
  int64_t v11; // x25
  __int64 v12; // x26
  __int64 v13; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t transformTotal; // w8
  float v16; // s1
  float v17; // s0
  int v18; // s2
  __int64 v19; // x11
  float v20; // s0
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v22; // x8
  unsigned __int64 v23; // x29
  __int64 v24; // x28
  Il2CppClass *klass; // x8
  unsigned __int64 namespaze_low; // x9
  int32_t v27; // w26
  struct CombineCommandCardComponent_array *v28; // x8
  CombineCommandCardComponent_o *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  BattleCommandData_o *v32; // x25
  const MethodInfo *v33; // x6
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  Il2CppObject *v36; // x23
  __int64 v37; // x21
  __int64 v38; // x26
  struct System_Int64_array *v39; // x8
  int64_t v40; // x2
  struct System_Int32_array *commandCardParam; // x8
  int32_t v42; // w3
  const MethodInfo *v43; // x1
  float v44; // s3
  float v45; // s0
  float v46; // s1
  float v47; // s2
  const MethodInfo *v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Action_o *LoadAfterCallback; // x20
  int32_t limitCount; // [xsp+4h] [xbp-7Ch]
  UserServantCommandCardEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A5E8D6 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E8D6 = 1;
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
  v4 = baseUserServantEntity;
  CommandCardLimitCount = UserServantEntity__getCommandCardLimitCount(this->fields.baseUserServantEntity, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(CommandCardLimitCount, 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  limitCount = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)baseUserServantEntity,
                 v4,
                 LimitCountByImageLimitCostumeIn,
                 0LL);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  baseUserServantEntity = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseUserServantEntity,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v7 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)baseUserServantEntity,
         v4,
         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseUserServantEntity,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  baseUserServantEntity = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)baseUserServantEntity,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCardMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  baseUserServantEntity = NetworkManager__get_UserId(0LL);
  v10 = this->fields.baseUserServantEntity;
  if ( !v10 )
    goto LABEL_66;
  v11 = baseUserServantEntity;
  v13 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v13;
  *(_QWORD *)&v54.fields.fakeValue = v12;
  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v54, 0LL);
  if ( !v9 )
    goto LABEL_66;
  UserServantCommandCardMaster__TryGetEntity(
    (UserServantCommandCardMaster_o *)v9,
    &entity,
    v11,
    (int)baseUserServantEntity,
    0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseUserServantEntity, 0LL);
  transformTotal = this->fields.transformTotal;
  v16 = -18.0;
  if ( transformTotal <= 1 )
    v16 = -15.5;
  v17 = transformTotal <= 1 ? -258.0 : -270.0;
  v18 = 0;
  GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)(&v16 - 1), 0LL);
  baseUserServantEntity = (__int64)this->fields.cardBaseGrid;
  if ( !baseUserServantEntity )
    goto LABEL_66;
  v19 = *(_QWORD *)baseUserServantEntity;
  v20 = 130.0;
  if ( this->fields.transformTotal > 1 )
    v20 = 135.0;
  *(float *)(baseUserServantEntity + 48) = v20;
  baseUserServantEntity = (*(__int64 (**)(void))(v19 + 440))();
  commandCardList = this->fields.commandCardList;
  if ( !commandCardList )
    goto LABEL_66;
  v22 = *(_QWORD *)&commandCardList->max_length;
  if ( (int)v22 >= 1 )
  {
    if ( v7 )
    {
      v23 = 0LL;
      v24 = (unsigned int)v22;
      while ( 1 )
      {
        klass = v7[9].klass;
        if ( klass )
        {
          namespaze_low = LODWORD(klass->_1.namespaze);
          if ( (__int64)v23 < (int)namespaze_low )
          {
            if ( v23 >= namespaze_low )
              goto LABEL_67;
            v27 = *((_DWORD *)&klass->_1.byval_arg.data + v23);
            if ( (unsigned int)(v27 - 1) <= 2 )
            {
              v28 = this->fields.commandCardList;
              if ( !v28 )
                break;
              if ( v23 >= v28->max_length )
                goto LABEL_67;
              v29 = v28->m_Items[v23];
              baseUserServantEntity = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( !v29 )
                break;
              v29->fields.target = (struct UnityEngine_GameObject_o *)baseUserServantEntity;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->fields.target, baseUserServantEntity, v30, v31);
              v32 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_43210772(v32, v27, v4, limitCount, 0, -1, 0LL);
              if ( !v32 )
                break;
              v32->fields.markindex = v23;
              v32->fields.servantCardIdsIndex = v23;
              baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
              if ( baseUserServantCommandCodeEntity )
              {
                userCommandCodeIds = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !userCommandCodeIds )
                  break;
                if ( v23 >= userCommandCodeIds->max_length )
LABEL_67:
                  sub_1B88814(baseUserServantEntity, method);
                method = (const MethodInfo *)userCommandCodeIds->m_Items[v23];
                v32->fields.userCommandCodeId = (int64_t)method;
                if ( (__int64)method >= 1 )
                {
                  if ( !MasterData_object )
                    break;
                  v36 = MasterData_object;
                  baseUserServantEntity = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                     (int64_t)method,
                                                     (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
                  if ( !baseUserServantEntity )
                    break;
                  v37 = *(_QWORD *)(baseUserServantEntity + 80);
                  v38 = *(_QWORD *)(baseUserServantEntity + 88);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v55.fields.currentCryptoKey = v37;
                  *(_QWORD *)&v55.fields.fakeValue = v38;
                  baseUserServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
                  v32->fields.commandCodeId = baseUserServantEntity;
                  baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
                  MasterData_object = v36;
                  if ( !baseUserServantCommandCodeEntity )
                    break;
                }
                v39 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
                if ( !v39 )
                  break;
                if ( v23 >= v39->max_length )
                  goto LABEL_67;
                v40 = v39->m_Items[v23];
              }
              else
              {
                v40 = -1LL;
              }
              if ( entity && (commandCardParam = entity->fields.commandCardParam) != 0LL )
              {
                if ( v23 >= commandCardParam->max_length )
                  goto LABEL_67;
                v42 = commandCardParam->m_Items[v23 + 1];
              }
              else
              {
                v42 = 0;
              }
              v32->fields.commandCardParam = v42;
              CombineCommandCardComponent__DispCommandCard(v29, v32, v40, v42, 0, 0, v33);
              v44 = 1.0;
              if ( this->fields.displayTransformIndex <= 0 )
                v45 = 1.0;
              else
                v45 = 0.5;
              v46 = v45;
              v47 = v45;
              CombineCommandCardComponent__SetColor(v29, *(UnityEngine_Color_o *)(&v44 - 3), v43);
              CombineCommandCardComponent__SetLayout(v29, this->fields.positionOffsetY, this->fields.scaleOffset, v48);
            }
          }
        }
        if ( v24 == ++v23 )
          goto LABEL_63;
      }
    }
LABEL_66:
    sub_1B8880C(baseUserServantEntity, method);
  }
LABEL_63:
  CommandCardEquipmentControl__SetExecuteButtonState(this, method);
  LoadAfterCallback = this->fields.LoadAfterCallback;
  if ( LoadAfterCallback )
  {
    this->fields.LoadAfterCallback = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.LoadAfterCallback, 0, v49, v50);
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
    sub_1B8880C(qpInfoObj, v3);
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

  if ( (byte_4A5E8EB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E8EB = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL);
  if ( ((unsigned __int8)executeButton & 1) != 0 )
  {
    v6 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !v6 )
      goto LABEL_32;
    if ( v6[27].fields.m_CachedPtr == 1 )
    {
      v7 = this->fields.baseUserCommandCodeEntity == 0LL;
      goto LABEL_21;
    }
  }
  else
  {
    v6 = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  executeButton = (struct UICommonButton_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)executeButton & 1) == 0 )
    goto LABEL_20;
  v8 = this->fields.targetCommandCardData;
  if ( !v8 )
    goto LABEL_32;
  if ( v8->fields._NowKind_k__BackingField == 2 )
  {
    baseUserCommandCodeEntity = this->fields.baseUserCommandCodeEntity;
    if ( !baseUserCommandCodeEntity )
    {
      v13 = 0;
      goto LABEL_24;
    }
    data = v8->fields.data;
    if ( !data )
      goto LABEL_32;
    v11 = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.fakeValue;
    userCommandCodeId = data->fields.userCommandCodeId;
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&baseUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    v7 = userCommandCodeId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v15, 0LL);
  }
  else
  {
LABEL_20:
    v7 = !this->fields.isCanCombine;
  }
LABEL_21:
  v13 = !v7;
LABEL_24:
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
LABEL_32:
    sub_1B8880C(executeButton, v5);
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

  if ( (byte_4A5E8EA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E8EA = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLabel = this->fields.haveQpLabel,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 524, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !haveQpLabel) )
  {
    sub_1B8880C(SelfUserGame, v4);
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
    sub_1B8880C(removeButton, isEnable);
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
    sub_1B8880C(replaceButton, isEnable);
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
    sub_1B8880C(overwriteWarningLabel, method);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct CombineCommandCardComponent_o *targetCommandCardData; // x8
  BattleCommandData_o *data; // x0
  int v14; // w26
  struct CombineCommandCardComponent_o *v15; // x8
  struct BattleCommandData_o *v16; // x8
  __int128 v17; // q0
  int64_t userCommandCodeId; // x23
  struct CombineCommandCardComponent_o *v19; // x8
  struct BattleCommandData_o *v20; // x8
  __int128 v21; // q0
  int64_t v22; // x22
  const MethodInfo *v23; // x5
  struct CombineCommandCardComponent_o *v24; // x8
  struct UserServantCommandCodeEntity_o *baseUserServantCommandCodeEntity; // x8
  struct System_Int64_array *userCommandCodeIds; // x9
  int max_length; // w9
  int v28; // w27
  il2cpp_array_size_t v29; // w28
  struct System_Int64_array *v30; // x8
  int64_t v31; // x25
  __int64 v32; // x23
  __int64 v33; // x24
  char v34; // w23
  int32_t v35; // w24
  struct UserServantCommandCodeEntity_o *v36; // x8
  __int128 v37; // q0
  const MethodInfo *v38; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A5E8DA & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E8DA = 1;
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
    v14 = 0;
    if ( userCommandCode && (commandCardInfoObj & 1) != 0 )
    {
      v15 = this->fields.targetCommandCardData;
      if ( !v15 )
        goto LABEL_57;
      v16 = v15->fields.data;
      if ( !v16 )
        goto LABEL_57;
      v17 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
      userCommandCodeId = v16->fields.userCommandCodeId;
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v42.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v41 = v42;
      commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
      v14 = userCommandCodeId != commandCardInfoObj;
      if ( dispEquippedInfo )
      {
        v19 = this->fields.targetCommandCardData;
        if ( !v19 )
          goto LABEL_57;
        v20 = v19->fields.data;
        if ( !v20 )
          goto LABEL_57;
        v21 = *(_OWORD *)&userCommandCode->fields.id.fields.fakeValue;
        v22 = v20->fields.userCommandCodeId;
        *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userCommandCode->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v42.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v40 = v42;
        dispEquippedInfo = v22 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
      }
      else
      {
        dispEquippedInfo = 0;
      }
    }
  }
  else
  {
    v14 = 0;
  }
  this->fields.baseUserCommandCodeEntity = userCommandCode;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserCommandCodeEntity,
    (int32_t)userCommandCode,
    v10,
    v11);
  v24 = this->fields.targetCommandCardData;
  if ( !v24 )
    goto LABEL_57;
  if ( ((v24->fields._NowKind_k__BackingField == 2) & ~v14) != 0 )
  {
    LODWORD(baseUserServantCommandCodeEntity) = 0;
    v34 = 1;
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
      v28 = max_length - 1;
      if ( max_length >= 1 )
      {
        v29 = 0;
        while ( 1 )
        {
          v30 = baseUserServantCommandCodeEntity->fields.userCommandCodeIds;
          if ( !v30 )
            goto LABEL_57;
          if ( v29 >= v30->max_length )
            sub_1B88814(commandCardInfoObj, userCommandCode);
          v31 = v30->m_Items[v29];
          v33 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&userCommandCode->fields.commandCodeId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v43.fields.currentCryptoKey = v33;
          *(_QWORD *)&v43.fields.fakeValue = v32;
          commandCardInfoObj = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
          v34 = v31 == (int)commandCardInfoObj;
          LODWORD(baseUserServantCommandCodeEntity) = 1;
          if ( v31 == (int)commandCardInfoObj || v28 == v29 )
            goto LABEL_46;
          baseUserServantCommandCodeEntity = this->fields.baseUserServantCommandCodeEntity;
          ++v29;
          if ( !baseUserServantCommandCodeEntity )
            goto LABEL_57;
        }
      }
      v34 = 0;
      LODWORD(baseUserServantCommandCodeEntity) = 1;
    }
    else
    {
      v34 = 0;
    }
  }
  else
  {
    v34 = 0;
    LODWORD(baseUserServantCommandCodeEntity) = 0;
  }
LABEL_46:
  v35 = equippedSvtId;
  if ( (unsigned int)baseUserServantCommandCodeEntity | v14 )
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
  v36 = this->fields.baseUserServantCommandCodeEntity;
  if ( v36 )
  {
    v37 = *(_OWORD *)&v36->fields.svtId.fields.fakeValue;
    *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v36->fields.svtId.fields.currentCryptoKey;
    *(_OWORD *)&v42.fields.fakeValue = v37;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v39 = v42;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL) == equippedSvtId )
      v35 = -1;
  }
  commandCardInfoObj = (int64_t)this->fields.commandCardEquipmentIcon;
  if ( !commandCardInfoObj )
LABEL_57:
    sub_1B8880C(commandCardInfoObj, userCommandCode);
  CombineCommandCardEquipmentComponent__SetIcon(
    (CombineCommandCardEquipmentComponent_o *)commandCardInfoObj,
    userCommandCode,
    v34,
    dispEquippedInfo,
    v35,
    v23);
  CommandCardEquipmentControl__SetCommandCardEquipmentSkill(this, userCommandCode, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardEquipmentControl__SetStateInfoMsg(
        CommandCardEquipmentControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Color_o **executeButtonSprite; // x0
  UIWidget_o *detailLabel; // x20
  System_String_o *v7; // x20
  UISprite_o *messageTxtLabelSprite; // x21
  UILabel_o *baseSelectInfoLabel; // x21
  __int64 *v10; // x8
  UnityEngine_Object_o *targetCommandCardData; // x21
  struct CombineCommandCardComponent_o *v12; // x8
  int32_t NowKind_k__BackingField; // w8
  __int64 *v14; // x8
  struct CombineCommandCardComponent_o *v15; // x8
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  __int128 v17; // q1
  struct UserCommandCodeEntity_o *v18; // x8
  __int128 v19; // q0
  UnityEngine_Color_o **v20; // x21
  int64_t v21; // x22
  CommandCardEquipmentControl_c *v22; // x8
  struct UISprite_o *v23; // x23
  struct CommandCardEquipmentControl_StaticFields *static_fields; // x8
  System_String_o *REPLACE_EXE_BTN_SPRITE_NAME; // x1
  UISprite_o *v26; // x21
  struct UISprite_o *v27; // x21
  UISprite_o *v28; // x0
  UISprite_o *v29; // x21
  UISprite_o *v30; // x21
  System_String_o *EQUIP_EXE_BTN_SPRITE_NAME; // x1
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x20
  UISprite_o *v33; // x21
  UISprite_o *v34; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-60h]
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E8EC & 1) == 0 )
  {
    sub_1B885B0(&CommandCardEquipmentControl_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&StringLiteral_3654/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/);
    sub_1B885B0(&StringLiteral_3651/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/);
    sub_1B885B0(&StringLiteral_3652/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/);
    sub_1B885B0(&StringLiteral_3658/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/);
    sub_1B885B0(&StringLiteral_3656/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/);
    sub_1B885B0(&StringLiteral_3655/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/);
    sub_1B885B0(&StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3660/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3657/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E8EC = 1;
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
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  switch ( state )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMBINE_COMMAND_CODE_BASE_SELECT_HEADER_MSG"*/, 0LL);
      messageTxtLabelSprite = this->fields.messageTxtLabelSprite;
      v7 = (System_String_o *)executeButtonSprite;
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
      v10 = &StringLiteral_3652/*"COMBINE_COMMAND_CODE_BASE_SELECT_MSG"*/;
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
      v12 = this->fields.targetCommandCardData;
      if ( !v12 )
        goto LABEL_104;
      NowKind_k__BackingField = v12->fields._NowKind_k__BackingField;
      if ( NowKind_k__BackingField == 2 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3657/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/,
                                                        0LL);
        v30 = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
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
          v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/, 0LL);
          goto LABEL_102;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3658/*"COMBINE_COMMAND_CODE_SELECT_COMMAND_CODE_MSG"*/,
                                                        0LL);
        v33 = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        if ( v33 )
        {
          UISprite__set_spriteName(
            v33,
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
          v38.fields.r = 1.0;
          v38.fields.g = 1.0;
          v38.fields.b = 1.0;
          v38.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)executeButtonSprite, v38, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = &StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/;
        }
        else if ( this->fields.isShortNeedItem )
        {
          executeButtonSprite = (UnityEngine_Color_o **)this->fields.detailLabel;
          if ( !executeButtonSprite )
            goto LABEL_104;
          v39.fields.r = 1.0;
          v39.fields.g = 1.0;
          v39.fields.b = 1.0;
          v39.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)executeButtonSprite, v39, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = &StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = &StringLiteral_3660/*"COMBINE_COMMAND_CODE_UNLOCK_HEADER_MSG"*/;
        }
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v14, 0LL);
        v34 = this->fields.messageTxtLabelSprite;
        v7 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        if ( v34 )
        {
          UISprite__set_spriteName(
            v34,
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
      v15 = this->fields.targetCommandCardData;
      if ( !v15 )
        goto LABEL_104;
      if ( v15->fields._NowKind_k__BackingField != 2 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3656/*"COMBINE_COMMAND_CODE_EQUIP_HEADER_MSG"*/,
                                                        0LL);
        v27 = this->fields.executeButtonSprite;
        v7 = (System_String_o *)executeButtonSprite;
        if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        if ( v27 )
        {
          v28 = v27;
          REPLACE_EXE_BTN_SPRITE_NAME = CommandCardEquipmentControl_TypeInfo->static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
          goto LABEL_62;
        }
LABEL_104:
        sub_1B8880C(executeButtonSprite, *(_QWORD *)&state);
      }
      nowEquipedUserCommandCodeEntity = this->fields.nowEquipedUserCommandCodeEntity;
      if ( !nowEquipedUserCommandCodeEntity )
        goto LABEL_104;
      v17 = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&nowEquipedUserCommandCodeEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v36 = v37;
      executeButtonSprite = (UnityEngine_Color_o **)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                      &v36,
                                                      0LL);
      v18 = this->fields.baseUserCommandCodeEntity;
      if ( !v18 )
        goto LABEL_104;
      v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
      v20 = executeButtonSprite;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v35.fields.fakeValue = v19;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v35, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMBINE_COMMAND_CODE_REPLACE_HEADER_MSG"*/, 0LL);
      v22 = CommandCardEquipmentControl_TypeInfo;
      v23 = this->fields.executeButtonSprite;
      v7 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
        v22 = CommandCardEquipmentControl_TypeInfo;
      }
      static_fields = v22->static_fields;
      if ( v20 == (UnityEngine_Color_o **)v21 )
      {
        if ( !v23 )
          goto LABEL_104;
        REPLACE_EXE_BTN_SPRITE_NAME = static_fields->EQUIP_EXE_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !v23 )
          goto LABEL_104;
        REPLACE_EXE_BTN_SPRITE_NAME = static_fields->REPLACE_EXE_BTN_SPRITE_NAME;
      }
      v28 = v23;
LABEL_62:
      UISprite__set_spriteName(v28, REPLACE_EXE_BTN_SPRITE_NAME, 0LL);
      executeButtonSprite = (UnityEngine_Color_o **)CommandCardEquipmentControl_TypeInfo;
      v29 = this->fields.messageTxtLabelSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      if ( !v29 )
        goto LABEL_104;
      UISprite__set_spriteName(
        v29,
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
      UILabel__set_text((UILabel_o *)executeButtonSprite, v7, 0LL);
      return;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)StringLiteral_3654/*"COMBINE_COMMAND_CODE_CARD_SELECT_HEADER_MSG"*/, 0LL);
      v26 = this->fields.messageTxtLabelSprite;
      v7 = (System_String_o *)executeButtonSprite;
      if ( !CommandCardEquipmentControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommandCardEquipmentControl_TypeInfo);
      if ( !v26 )
        goto LABEL_104;
      UISprite__set_spriteName(
        v26,
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
      v10 = &StringLiteral_3655/*"COMBINE_COMMAND_CODE_CARD_SELECT_MSG"*/;
LABEL_49:
      executeButtonSprite = (UnityEngine_Color_o **)LocalizationManager__Get((System_String_o *)*v10, 0LL);
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
        sub_1B88814(this, *(_QWORD *)&index);
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
    sub_1B8880C(this, *(_QWORD *)&index);
  }
}


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
  __int64 max_length; // x9
  __int64 v15; // x10
  __int64 v16; // x24
  __int64 v17; // x25
  unsigned __int64 v18; // x22
  __int64 v19; // x26
  __int64 v20; // x27
  __int64 v21; // x28
  bool v22; // w9
  Il2CppClass **v23; // x8
  LimitCntUpItemComponent_o *v24; // x20
  const MethodInfo *v25; // x3
  int32_t spendQpVal; // w8
  int32_t haveQpVal; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E8E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E8E2 = 1;
  }
  CommandCardEquipmentControl__SetHaveQpInfo(this, method);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommandCodeUnlockMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_39;
  v6 = (ServantCommandCodeUnlockMaster_o *)Instance;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v8;
  *(_QWORD *)&v28.fields.fakeValue = v7;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
  if ( !this->fields.targetCommandCardData )
    goto LABEL_39;
  v9 = Instance;
  Instance = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)this->fields.targetCommandCardData, 0LL);
  if ( !v6 )
    goto LABEL_39;
  Instance = (int64_t)ServantCommandCodeUnlockMaster__GetEntity(v6, v9, Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  spendQpLabel = this->fields.spendQpLabel;
  this->fields.spendQpVal = *(_DWORD *)(Instance + 24);
  v11 = Instance;
  Instance = (int64_t)System_Int32__ToString_62512312((int)this + 520, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  if ( !spendQpLabel )
    goto LABEL_39;
  UILabel__set_text(spendQpLabel, (System_String_o *)Instance, 0LL);
  unlockItemInfoList = this->fields.unlockItemInfoList;
  if ( !unlockItemInfoList )
    goto LABEL_39;
  v13 = *(_QWORD *)(v11 + 40);
  if ( !v13 )
    goto LABEL_39;
  max_length = unlockItemInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = *(_QWORD *)(v13 + 24);
    v16 = *(_QWORD *)(v11 + 32);
    v17 = max_length - 1;
    v18 = 0LL;
    v19 = v13 + 32;
    v20 = (int)v15;
    v21 = v16 + 32;
    v22 = v15 << 32 > 0;
    do
    {
      if ( v18 >= unlockItemInfoList->max_length )
LABEL_38:
        sub_1B88814(Instance, v4);
      v23 = &unlockItemInfoList->obj.klass + v18;
      v24 = (LimitCntUpItemComponent_o *)v23[4];
      if ( v22 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v18 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_38;
        if ( !v16 )
          break;
        if ( v18 >= *(unsigned int *)(v16 + 24) )
          goto LABEL_38;
        if ( !v24 )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v24,
          Instance,
          *(_DWORD *)(v19 + 4 * v18),
          *(_DWORD *)(v21 + 4 * v18),
          0LL);
        if ( v18 >= *(unsigned int *)(v13 + 24) || v18 >= *(unsigned int *)(v16 + 24) )
          goto LABEL_38;
        CombineMenuControl__AddCombineItemInfo(
          (CombineMenuControl_o *)this,
          *(_DWORD *)(v19 + 4 * v18),
          *(_DWORD *)(v21 + 4 * v18),
          v25);
        if ( !v24->fields.isItemNum )
          this->fields.isShortNeedItem = 1;
      }
      else
      {
        if ( !v24 )
          break;
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)v23[4], 0LL);
      }
      if ( v17 == v18 )
        goto LABEL_32;
      unlockItemInfoList = this->fields.unlockItemInfoList;
      v22 = (__int64)++v18 < v20;
    }
    while ( unlockItemInfoList );
LABEL_39:
    sub_1B8880C(Instance, v4);
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
    v29.fields.r = 1.0;
    v29.fields.g = 0.0;
    v29.fields.b = 0.0;
    v29.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v29, 0LL);
    this->fields.isCanCombine = 0;
  }
  if ( this->fields.isShortNeedItem )
    this->fields.isCanCombine = 0;
  CommandCardEquipmentControl__SetExecuteButtonState(this, v4);
}


void __fastcall CommandCardEquipmentControl__UpdateItemLinkListWindowButton(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v4; // w0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  bool v8; // w1

  if ( (byte_4A5E8FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E8FC = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0LL, 0LL);
  gameObject = 0LL;
  if ( v4 )
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
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0
        && this->fields.baseUserServantEntity
        && (Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                    (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___),
            ((unsigned __int8)Instance & 1) != 0) )
      {
        if ( gameObject )
        {
          v8 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive(gameObject, v8, 0LL);
          return;
        }
      }
      else if ( gameObject )
      {
        v8 = 0;
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1B8880C(Instance, v5);
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
  CommandCardDialog__Close_44802876(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestLockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1B8880C(commandCardDialog, isDecide);
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
    sub_1B8880C(0LL, isDecide);
  CommandCardDialog__Close_44802876(commandCardDialog, 0LL, method);
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
  CommandCardDialog__Close_44802876(commandCardDialog, 0LL, method);
  if ( isDecide )
  {
    commandCardDialog = (CommandCardDialog_o *)this->fields.combineRootComponent;
    if ( commandCardDialog )
    {
      CombineRootComponent__RequestUnlockCommandCode((CombineRootComponent_o *)commandCardDialog, 0LL);
      return;
    }
LABEL_6:
    sub_1B8880C(commandCardDialog, isDecide);
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

  if ( (byte_4A5E8EF & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E8EF = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardIndex(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetCommandCardData; // x20
  __int64 v4; // x1
  BattleCommandComponent_o *v5; // x0

  if ( (byte_4A5E8EE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8EE = 1;
  }
  targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    return -1;
  v5 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !v5 )
    sub_1B8880C(0LL, v4);
  return BattleCommandComponent__getMarkIndex(v5, 0LL);
}


int32_t __fastcall CommandCardEquipmentControl__get_GetTargetCardType(
        CommandCardEquipmentControl_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent_o *targetCommandCardData; // x0

  targetCommandCardData = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
  if ( !targetCommandCardData )
    sub_1B8880C(0LL, method);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_Object_o *targetCommandCardData; // x21
  __int64 v8; // x1
  BattleCommandComponent_o *v9; // x0
  _BOOL4 v10; // w21
  _QWORD *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4A5E8D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_CommandCardEquipmentControl_touchCommandCard__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E8D7 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( this->fields.displayTransformIndex >= 1 )
    {
      v5 = Method_CommandCardEquipmentControl_touchCommandCard__;
      if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_touchCommandCard__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
LABEL_18:
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
      return;
    }
    targetCommandCardData = (UnityEngine_Object_o *)this->fields.targetCommandCardData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetCommandCardData, 0LL, 0LL) )
    {
      v9 = (BattleCommandComponent_o *)this->fields.targetCommandCardData;
      if ( !v9 )
        sub_1B8880C(0LL, v8);
      v10 = BattleCommandComponent__getMarkIndex(v9, 0LL) == index;
    }
    else
    {
      v10 = 0;
    }
    v11 = Method_CommandCardEquipmentControl_touchCommandCard__;
    if ( (*((_BYTE *)Method_CommandCardEquipmentControl_touchCommandCard__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B885C8(Method_CommandCardEquipmentControl_touchCommandCard__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
    if ( v10 )
      goto LABEL_18;
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    CommandCardEquipmentControl__SetCommandCardDisplay(this, index, v12);
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
  int32_t _1__state; // w8
  CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t targetCardIdx; // w21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  const MethodInfo *v10; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v12; // x9
  CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *v13; // x20
  Il2CppObject *v14; // x22
  System_Action_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_Action_o *klass; // x0
  UnityEngine_WaitForSeconds_o *v19; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  bool result; // w0
  System_Action_o *callback; // x0
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t v27; // w21
  __int64 v28; // x22
  __int64 v29; // x23
  int32_t v30; // w0
  const MethodInfo *v31; // x3
  UnityEngine_WaitForSeconds_o *v32; // x20
  ServantStatusBattleListViewItem_o *v33; // x19
  int32_t v34; // w2
  int32_t v35; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v2 = this;
  if ( (byte_4A5E903 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineCommandCardComponent_HideCommandCodeSprite__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5E903 = 1;
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
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v36.fields.currentCryptoKey = v8;
          *(_QWORD *)&v36.fields.fakeValue = v7;
          v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
          this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                              _4__this,
                                                                              targetCardIdx,
                                                                              v9,
                                                                              v10);
          commandCardList = _4__this->fields.commandCardList;
          if ( commandCardList )
          {
            v12 = v2->fields.targetCardIdx;
            if ( (unsigned int)v12 >= commandCardList->max_length )
              sub_1B88814(this, method);
            v13 = this;
            v14 = (Il2CppObject *)commandCardList->m_Items[v12];
            v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v15, v14, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
            if ( v13 )
            {
              if ( v15 )
              {
                v13[4].klass = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_c *)v15;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v13[4], (int32_t)v15, v16, v17);
              }
              klass = (System_Action_o *)v13[4].klass;
              if ( klass )
                ActionExtensions__Call(klass, 0LL);
              v19 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
              UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v19;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B88554(p__2__current, (int32_t)v19, v21, v22);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
      }
LABEL_27:
      sub_1B8880C(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_27;
  this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)CommandCardEquipmentControl__CreateReplaceEffectOnCode(
                                                                      _4__this,
                                                                      method);
  commandCardEquipmentIcon = _4__this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_27;
  this = (CommandCardEquipmentControl__PlayReplaceEffect_d__125_o *)commandCardEquipmentIcon->fields.equippedInfo;
  if ( !this )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
  if ( !baseUserCommandCodeEntity )
    goto LABEL_27;
  v27 = v2->fields.targetCardIdx;
  v29 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v29;
  *(_QWORD *)&v37.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v27, v30, v31);
  v32 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v32, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v32;
  v33 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(v33, (int32_t)v32, v34, v35);
  *(_DWORD *)&v33[-1].fields.isMine = 2;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_CommandCardEquipmentControl__PlayReplaceEffect_d__125_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  CommandCardEquipmentControl_o *_4__this; // x20
  struct UserCommandCodeEntity_o *baseUserCommandCodeEntity; // x8
  int32_t removeCardIdx; // w21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  const MethodInfo *v10; // x3
  struct CombineCommandCardComponent_array *commandCardList; // x8
  __int64 v12; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v13; // x21
  Il2CppObject *v14; // x23
  System_Action_o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_Action_o *klass; // x0
  struct UserCommandCodeEntity_o *nowEquipedUserCommandCodeEntity; // x8
  int32_t attachCardIdx; // w21
  __int64 v21; // x22
  __int64 v22; // x23
  int32_t v23; // w0
  const MethodInfo *v24; // x3
  struct CombineCommandCardComponent_array *v25; // x8
  __int64 v26; // x9
  CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *v27; // x20
  Il2CppObject *v28; // x22
  System_Action_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_Action_o *v32; // x0
  UnityEngine_WaitForSeconds_o *v33; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  bool result; // w0
  System_Action_o *callback; // x0
  struct CombineCommandCardEquipmentComponent_o *commandCardEquipmentIcon; // x8
  struct UserCommandCodeEntity_o *v40; // x8
  int32_t v41; // w21
  __int64 v42; // x22
  __int64 v43; // x23
  int32_t v44; // w0
  const MethodInfo *v45; // x3
  UnityEngine_WaitForSeconds_o *v46; // x20
  ServantStatusBattleListViewItem_o *v47; // x19
  int32_t v48; // w2
  int32_t v49; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v2 = this;
  if ( (byte_4A5E904 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CombineCommandCardComponent_HideCommandCodeSprite__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5E904 = 1;
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
        goto LABEL_40;
      baseUserCommandCodeEntity = _4__this->fields.baseUserCommandCodeEntity;
      if ( !baseUserCommandCodeEntity )
        goto LABEL_40;
      removeCardIdx = v2->fields.removeCardIdx;
      v8 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
      v7 = *(_QWORD *)&baseUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v8;
      *(_QWORD *)&v50.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50, 0LL);
      this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                    _4__this,
                                                                                    removeCardIdx,
                                                                                    v9,
                                                                                    v10);
      commandCardList = _4__this->fields.commandCardList;
      if ( !commandCardList )
        goto LABEL_40;
      v12 = v2->fields.removeCardIdx;
      if ( (unsigned int)v12 < commandCardList->max_length )
      {
        v13 = this;
        v14 = (Il2CppObject *)commandCardList->m_Items[v12];
        v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v15, v14, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
        if ( !v13 )
          goto LABEL_40;
        if ( v15 )
        {
          v13[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v13[4], (int32_t)v15, v16, v17);
        }
        klass = (System_Action_o *)v13[4].klass;
        if ( klass )
          ActionExtensions__Call(klass, 0LL);
        nowEquipedUserCommandCodeEntity = _4__this->fields.nowEquipedUserCommandCodeEntity;
        if ( !nowEquipedUserCommandCodeEntity )
          goto LABEL_27;
        attachCardIdx = v2->fields.attachCardIdx;
        v22 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&nowEquipedUserCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v22;
        *(_QWORD *)&v51.fields.fakeValue = v21;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
        this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)CommandCardEquipmentControl__CreateRemoveEffectOnCard(
                                                                                      _4__this,
                                                                                      attachCardIdx,
                                                                                      v23,
                                                                                      v24);
        v25 = _4__this->fields.commandCardList;
        if ( !v25 )
LABEL_40:
          sub_1B8880C(this, method);
        v26 = v2->fields.attachCardIdx;
        if ( (unsigned int)v26 < v25->max_length )
        {
          v27 = this;
          v28 = (Il2CppObject *)v25->m_Items[v26];
          v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v29, v28, Method_CombineCommandCardComponent_HideCommandCodeSprite__, 0LL);
          if ( v27 )
          {
            if ( v29 )
            {
              v27[4].klass = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_c *)v29;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v27[4], (int32_t)v29, v30, v31);
            }
            v32 = (System_Action_o *)v27[4].klass;
            if ( v32 )
              ActionExtensions__Call(v32, 0LL);
LABEL_27:
            v33 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v33, 0.3, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v33;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)v33, v35, v36);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return result;
          }
          goto LABEL_40;
        }
      }
      sub_1B88814(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)(_4__this->fields.nowEquipedUserCommandCodeEntity
                                                                             ? CommandCardEquipmentControl__CreateReplaceEffectOnCode(
                                                                                 _4__this,
                                                                                 method)
                                                                             : CommandCardEquipmentControl__CreateAttachEffectOnCode(
                                                                                 _4__this,
                                                                                 method));
  commandCardEquipmentIcon = _4__this->fields.commandCardEquipmentIcon;
  if ( !commandCardEquipmentIcon )
    goto LABEL_40;
  this = (CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_o *)commandCardEquipmentIcon->fields.equippedInfo;
  if ( !this )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v40 = _4__this->fields.baseUserCommandCodeEntity;
  if ( !v40 )
    goto LABEL_40;
  v41 = v2->fields.attachCardIdx;
  v43 = *(_QWORD *)&v40->fields.commandCodeId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&v40->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v43;
  *(_QWORD *)&v52.fields.fakeValue = v42;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL);
  CommandCardEquipmentControl__CreateAttachEffectOnCard(_4__this, v41, v44, v45);
  v46 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v46, 3.1, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v46;
  v47 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(v47, (int32_t)v46, v48, v49);
  *(_DWORD *)&v47[-1].fields.isMine = 2;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_CommandCardEquipmentControl__PlaySelfAttachReplaceEffect_d__126_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E8FF & 1) == 0 )
  {
    sub_1B885B0(&CommandCardEquipmentControl___c_TypeInfo);
    byte_4A5E8FF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CommandCardEquipmentControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CommandCardEquipmentControl___c_TypeInfo->static_fields->__9 = (struct CommandCardEquipmentControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CommandCardEquipmentControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall CommandCardEquipmentControl___c___ctor(
        CommandCardEquipmentControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CommandCardEquipmentControl___c___OnLongPushCommandCode_b__105_0(
        CommandCardEquipmentControl___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E900 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E900 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(this, method);
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
  if ( (byte_4A5E901 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E901 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_9:
      sub_1B8880C(this, isDecide);
    }
    CombineRootComponent__RequestSelfAttachReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( (byte_4A5E902 & 1) == 0 )
  {
    this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E902 = 1;
  }
  if ( isDecide )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this
      || (this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
LABEL_11:
      sub_1B8880C(this, isDecide);
    }
    if ( v4->fields.isCommandCardEmpty )
      CombineRootComponent__RequestEquipCommandCode((CombineRootComponent_o *)this, 0LL);
    else
      CombineRootComponent__RequestReplaceCommandCode((CombineRootComponent_o *)this, 0LL);
  }
  this = (CommandCardEquipmentControl___c__DisplayClass92_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}